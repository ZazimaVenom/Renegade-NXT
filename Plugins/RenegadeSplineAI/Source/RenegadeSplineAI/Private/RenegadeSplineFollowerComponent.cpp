#include "RenegadeSplineFollowerComponent.h"

#include "AIController.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/Pawn.h"
#include "Net/UnrealNetwork.h"
#include "RenegadeCharacterVehicleComponent.h"
#include "RenegadeSplinePath.h"
#include "TimerManager.h"

const FName URenegadeSplineFollowerComponent::CombatMovementClaimName(TEXT("Combat"));
const FName URenegadeSplineFollowerComponent::DefaultExternalMovementClaimName(TEXT("ExternalAI"));

URenegadeSplineFollowerComponent::URenegadeSplineFollowerComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
    SetIsReplicatedByDefault(true);
    ActiveMoveRequestId = FAIRequestID::InvalidRequest;
}

void URenegadeSplineFollowerComponent::BeginPlay()
{
    Super::BeginPlay();

    ResolveOwnerAndController();
    GetCharacterVehicleComponent();

    if (GetOwner() && GetOwner()->HasAuthority() && bAutoStart && IsValid(AssignedPath))
    {
        TryAutoStart();
    }
}

void URenegadeSplineFollowerComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    ClearRuntimeTimers();
    UnbindCombatTarget();
    ClearVehicleSteeringTarget();
    UnbindMoveFinishedDelegate();
    ExternalMovementClaims.Reset();
    ExternalMovementClaimCount = 0;
    Super::EndPlay(EndPlayReason);
}

void URenegadeSplineFollowerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(URenegadeSplineFollowerComponent, AssignedPath);
    DOREPLIFETIME(URenegadeSplineFollowerComponent, FollowState);
    DOREPLIFETIME(URenegadeSplineFollowerComponent, CurrentDistanceAlongSpline);
    DOREPLIFETIME(URenegadeSplineFollowerComponent, ExternalMovementClaimCount);
}

bool URenegadeSplineFollowerComponent::ResolveOwnerAndController()
{
    APawn* Pawn = Cast<APawn>(GetOwner());
    if (!IsValid(Pawn))
    {
        OwnerPawn.Reset();
        CachedAIController.Reset();
        return false;
    }

    OwnerPawn = Pawn;
    AAIController* AIController = Cast<AAIController>(Pawn->GetController());

    if (CachedAIController.Get() != AIController)
    {
        UnbindMoveFinishedDelegate();
        CachedAIController = AIController;
        BindMoveFinishedDelegate();
    }

    return IsValid(AIController);
}

void URenegadeSplineFollowerComponent::BindMoveFinishedDelegate()
{
    AAIController* AIController = CachedAIController.Get();
    if (!IsValid(AIController) || MoveFinishedDelegateHandle.IsValid())
    {
        return;
    }

    if (UPathFollowingComponent* PathFollowing = AIController->GetPathFollowingComponent())
    {
        MoveFinishedDelegateHandle = PathFollowing->OnRequestFinished.AddUObject(
            this,
            &URenegadeSplineFollowerComponent::HandleMoveFinished);
    }
}

void URenegadeSplineFollowerComponent::UnbindMoveFinishedDelegate()
{
    AAIController* AIController = CachedAIController.Get();
    if (IsValid(AIController) && MoveFinishedDelegateHandle.IsValid())
    {
        if (UPathFollowingComponent* PathFollowing = AIController->GetPathFollowingComponent())
        {
            PathFollowing->OnRequestFinished.Remove(MoveFinishedDelegateHandle);
        }
    }

    MoveFinishedDelegateHandle.Reset();
}

bool URenegadeSplineFollowerComponent::StartFollowing(
    ARenegadeSplinePath* NewPath,
    const bool bReacquireFromCurrentLocation)
{
    if (!GetOwner() || !GetOwner()->HasAuthority() || !IsValid(NewPath))
    {
        return false;
    }

    if (!NewPath->IsTeamAllowed(TeamId) || !ResolveOwnerAndController())
    {
        return false;
    }

    ClearRuntimeTimers();
    bRouteFollowingRequested = true;

    // Never abort a movement request currently owned by combat or another plugin.
    if (!HasExternalMovementClaims())
    {
        ActiveMoveRequestId = FAIRequestID::InvalidRequest;
        CachedAIController->StopMovement();
    }

    AssignedPath = NewPath;
    ConsecutiveMoveFailures = 0;
    bHasCommittedProgress = false;

    if (bReacquireFromCurrentLocation)
    {
        SetFollowState(ERenegadeSplineFollowState::Reacquiring);
        if (!ReacquireRouteFromCurrentLocation())
        {
            bRouteFollowingRequested = false;
            SetFollowState(ERenegadeSplineFollowState::Blocked);
            return false;
        }
    }
    else
    {
        const float Length = AssignedPath->GetRouteLength();
        if (Length <= UE_KINDA_SMALL_NUMBER)
        {
            bRouteFollowingRequested = false;
            SetFollowState(ERenegadeSplineFollowState::Blocked);
            return false;
        }

        CurrentDistanceAlongSpline =
            TravelDirection == ERenegadeSplineTravelDirection::Forward ? 0.0f : Length;
        LastCommittedDistance = CurrentDistanceAlongSpline;
        bHasCommittedProgress = true;
    }

    BroadcastProgress();

    if (HasExternalMovementClaims())
    {
        UpdatePausedStateFromClaims();
        return true;
    }

    SetFollowState(ERenegadeSplineFollowState::Following);
    ScheduleNextMove(0.0f);
    return true;
}

void URenegadeSplineFollowerComponent::StopFollowing(const bool bClearAssignedPath)
{
    if (!GetOwner() || !GetOwner()->HasAuthority())
    {
        return;
    }

    bRouteFollowingRequested = false;
    ClearRuntimeTimers();
    ClearVehicleSteeringTarget();

    ActiveMoveRequestId = FAIRequestID::InvalidRequest;
    SetFollowState(ERenegadeSplineFollowState::Idle);

    // Do not stop a controller request owned by an active combat/external claim.
    if (!HasExternalMovementClaims() && ResolveOwnerAndController())
    {
        CachedAIController->StopMovement();
    }

    if (bClearAssignedPath)
    {
        AssignedPath = nullptr;
        bHasCommittedProgress = false;
        CurrentDistanceAlongSpline = 0.0f;
        LastCommittedDistance = 0.0f;
    }
}

void URenegadeSplineFollowerComponent::PauseForCombat(AActor* CombatTarget)
{
    SetCombatActive(true, CombatTarget, -1.0f);
}

bool URenegadeSplineFollowerComponent::ResumeFollowing(const bool bReacquireFromCurrentLocation)
{
    if (!GetOwner() || !GetOwner()->HasAuthority() || !IsValid(AssignedPath))
    {
        return false;
    }

    bRouteFollowingRequested = true;
    ClearRuntimeTimers();

    if (HasExternalMovementClaims())
    {
        UpdatePausedStateFromClaims();
        return false;
    }

    if (!AssignedPath->IsTeamAllowed(TeamId) || !ResolveOwnerAndController())
    {
        SetFollowState(ERenegadeSplineFollowState::Blocked);
        return false;
    }

    ConsecutiveMoveFailures = 0;
    ActiveMoveRequestId = FAIRequestID::InvalidRequest;

    if (bReacquireFromCurrentLocation)
    {
        SetFollowState(ERenegadeSplineFollowState::Reacquiring);
        if (!ReacquireRouteFromCurrentLocation())
        {
            SetFollowState(ERenegadeSplineFollowState::Blocked);
            return false;
        }
    }

    SetFollowState(ERenegadeSplineFollowState::Following);
    BroadcastProgress();
    ScheduleNextMove(0.0f);
    return true;
}

void URenegadeSplineFollowerComponent::SetCombatActive(
    const bool bCombatActive,
    AActor* CombatTarget,
    const float ResumeDelayOverride)
{
    if (!GetOwner() || !GetOwner()->HasAuthority())
    {
        return;
    }

    if (bCombatActive)
    {
        UnbindCombatTarget();
        ActiveCombatTarget = CombatTarget;

        if (IsValid(CombatTarget) && bResumeWhenCombatTargetDestroyed)
        {
            CombatTarget->OnDestroyed.AddDynamic(
                this,
                &URenegadeSplineFollowerComponent::HandleCombatTargetDestroyed);
        }

        AcquireExternalMovementClaim(CombatMovementClaimName, true);
        return;
    }

    UnbindCombatTarget();
    ActiveCombatTarget.Reset();

    const float Delay =
        ResumeDelayOverride < 0.0f ? DefaultCombatResumeDelay : ResumeDelayOverride;
    ReleaseExternalMovementClaim(CombatMovementClaimName, true, Delay);
}

bool URenegadeSplineFollowerComponent::AcquireExternalMovementClaim(
    FName SourceName,
    const bool bStopCurrentMovement)
{
    if (!GetOwner() || !GetOwner()->HasAuthority())
    {
        return false;
    }

    SourceName = NormalizeExternalSourceName(SourceName);
    if (ExternalMovementClaims.Contains(SourceName))
    {
        UpdatePausedStateFromClaims();
        return false;
    }

    if (UWorld* World = GetWorld())
    {
        World->GetTimerManager().ClearTimer(NextMoveTimerHandle);
        World->GetTimerManager().ClearTimer(ResumeTimerHandle);
    }

    ExternalMovementClaims.Add(SourceName);
    ExternalMovementClaimCount = ExternalMovementClaims.Num();

    // Invalidate first so our own StopMovement abort cannot be mistaken for an outside interruption.
    ActiveMoveRequestId = FAIRequestID::InvalidRequest;
    ClearVehicleSteeringTarget();

    if (bStopCurrentMovement && ResolveOwnerAndController())
    {
        CachedAIController->StopMovement();
    }

    UpdatePausedStateFromClaims();
    OnExternalMovementControlChanged.Broadcast(SourceName, true, ExternalMovementClaimCount);
    return true;
}

bool URenegadeSplineFollowerComponent::ReleaseExternalMovementClaim(
    FName SourceName,
    const bool bResumeWhenAllClaimsReleased,
    const float ResumeDelayOverride)
{
    if (!GetOwner() || !GetOwner()->HasAuthority())
    {
        return false;
    }

    SourceName = NormalizeExternalSourceName(SourceName);
    if (ExternalMovementClaims.Remove(SourceName) == 0)
    {
        return false;
    }

    ExternalMovementClaimCount = ExternalMovementClaims.Num();
    OnExternalMovementControlChanged.Broadcast(SourceName, false, ExternalMovementClaimCount);

    if (HasExternalMovementClaims())
    {
        UpdatePausedStateFromClaims();
        return true;
    }

    if (!bResumeWhenAllClaimsReleased || !bRouteFollowingRequested || !IsValid(AssignedPath))
    {
        SetFollowState(ERenegadeSplineFollowState::Idle);
        return true;
    }

    const float Delay =
        ResumeDelayOverride < 0.0f ? DefaultExternalResumeDelay : ResumeDelayOverride;
    ScheduleResume(Delay);
    return true;
}

void URenegadeSplineFollowerComponent::SetExternalMovementActive(
    const bool bExternalActive,
    FName SourceName,
    const bool bStopCurrentMovement,
    const float ResumeDelayOverride)
{
    if (bExternalActive)
    {
        AcquireExternalMovementClaim(SourceName, bStopCurrentMovement);
    }
    else
    {
        ReleaseExternalMovementClaim(SourceName, true, ResumeDelayOverride);
    }
}

TArray<FName> URenegadeSplineFollowerComponent::GetExternalMovementClaims() const
{
    TArray<FName> Claims;
    Claims.Reserve(ExternalMovementClaims.Num());
    for (const FName& Claim : ExternalMovementClaims)
    {
        Claims.Add(Claim);
    }

    Claims.Sort([](const FName& Left, const FName& Right)
    {
        return Left.ToString() < Right.ToString();
    });
    return Claims;
}

bool URenegadeSplineFollowerComponent::ReacquireRouteFromCurrentLocation()
{
    if (!IsValid(AssignedPath))
    {
        return false;
    }

    if (!OwnerPawn.IsValid() && !ResolveOwnerAndController())
    {
        return false;
    }

    const float Length = AssignedPath->GetRouteLength();
    if (Length <= UE_KINDA_SMALL_NUMBER)
    {
        return false;
    }

    float ProjectedDistance =
        AssignedPath->GetClosestDistanceAlongRoute(OwnerPawn->GetActorLocation());

    if (bHasCommittedProgress &&
        !AssignedPath->IsClosedLoop() &&
        ResumePolicy == ERenegadeSplineResumePolicy::PreserveProgress)
    {
        if (TravelDirection == ERenegadeSplineTravelDirection::Forward)
        {
            ProjectedDistance =
                FMath::Max(ProjectedDistance, LastCommittedDistance - MaximumResumeBacktrack);
        }
        else
        {
            ProjectedDistance =
                FMath::Min(ProjectedDistance, LastCommittedDistance + MaximumResumeBacktrack);
        }
    }

    CurrentDistanceAlongSpline = FMath::Clamp(ProjectedDistance, 0.0f, Length);
    LastCommittedDistance = CurrentDistanceAlongSpline;
    bHasCommittedProgress = true;
    BroadcastProgress();
    return true;
}

bool URenegadeSplineFollowerComponent::SetRouteDistance(
    const float NewDistanceAlongSpline,
    const bool bImmediatelyMove)
{
    if (!GetOwner() || !GetOwner()->HasAuthority() || !IsValid(AssignedPath))
    {
        return false;
    }

    const float Length = AssignedPath->GetRouteLength();
    if (Length <= UE_KINDA_SMALL_NUMBER)
    {
        return false;
    }

    if (AssignedPath->IsClosedLoop())
    {
        CurrentDistanceAlongSpline = FMath::Fmod(NewDistanceAlongSpline, Length);
        if (CurrentDistanceAlongSpline < 0.0f)
        {
            CurrentDistanceAlongSpline += Length;
        }
    }
    else
    {
        CurrentDistanceAlongSpline = FMath::Clamp(NewDistanceAlongSpline, 0.0f, Length);
    }

    LastCommittedDistance = CurrentDistanceAlongSpline;
    bHasCommittedProgress = true;
    BroadcastProgress();

    if (bImmediatelyMove && IsActivelyFollowing() && !HasExternalMovementClaims())
    {
        ActiveMoveRequestId = FAIRequestID::InvalidRequest;
        if (ResolveOwnerAndController())
        {
            CachedAIController->StopMovement();
        }
        ScheduleNextMove(0.0f);
    }

    return true;
}

bool URenegadeSplineFollowerComponent::IsActivelyFollowing() const
{
    return FollowState == ERenegadeSplineFollowState::Following ||
           FollowState == ERenegadeSplineFollowState::Reacquiring;
}

float URenegadeSplineFollowerComponent::GetNormalizedRouteProgress() const
{
    if (!IsValid(AssignedPath))
    {
        return 0.0f;
    }

    const float Length = AssignedPath->GetRouteLength();
    if (Length <= UE_KINDA_SMALL_NUMBER)
    {
        return 0.0f;
    }

    const float RawProgress =
        FMath::Clamp(CurrentDistanceAlongSpline / Length, 0.0f, 1.0f);
    return TravelDirection == ERenegadeSplineTravelDirection::Forward
        ? RawProgress
        : 1.0f - RawProgress;
}

URenegadeCharacterVehicleComponent*
URenegadeSplineFollowerComponent::GetCharacterVehicleComponent() const
{
    if (!CachedCharacterVehicle.IsValid())
    {
        if (AActor* OwnerActor = GetOwner())
        {
            CachedCharacterVehicle =
                OwnerActor->FindComponentByClass<URenegadeCharacterVehicleComponent>();
        }
    }

    return CachedCharacterVehicle.Get();
}

void URenegadeSplineFollowerComponent::ClearRuntimeTimers()
{
    if (UWorld* World = GetWorld())
    {
        World->GetTimerManager().ClearTimer(NextMoveTimerHandle);
        World->GetTimerManager().ClearTimer(ResumeTimerHandle);
        World->GetTimerManager().ClearTimer(AutoStartTimerHandle);
    }
}

void URenegadeSplineFollowerComponent::ScheduleNextMove(const float DelaySeconds)
{
    if (!GetWorld() ||
        FollowState != ERenegadeSplineFollowState::Following ||
        HasExternalMovementClaims() ||
        !bRouteFollowingRequested)
    {
        return;
    }

    GetWorld()->GetTimerManager().ClearTimer(NextMoveTimerHandle);

    if (DelaySeconds <= 0.0f)
    {
        NextMoveTimerHandle = GetWorld()->GetTimerManager().SetTimerForNextTick(
            this,
            &URenegadeSplineFollowerComponent::IssueNextMove);
    }
    else
    {
        GetWorld()->GetTimerManager().SetTimer(
            NextMoveTimerHandle,
            this,
            &URenegadeSplineFollowerComponent::IssueNextMove,
            DelaySeconds,
            false);
    }
}

void URenegadeSplineFollowerComponent::ScheduleResume(const float DelaySeconds)
{
    if (!GetWorld() || HasExternalMovementClaims() || !bRouteFollowingRequested)
    {
        return;
    }

    GetWorld()->GetTimerManager().ClearTimer(ResumeTimerHandle);

    if (DelaySeconds <= 0.0f)
    {
        ResumeTimerHandle = GetWorld()->GetTimerManager().SetTimerForNextTick(
            this,
            &URenegadeSplineFollowerComponent::ResumeAfterPauseDelay);
    }
    else
    {
        GetWorld()->GetTimerManager().SetTimer(
            ResumeTimerHandle,
            this,
            &URenegadeSplineFollowerComponent::ResumeAfterPauseDelay,
            DelaySeconds,
            false);
    }
}

void URenegadeSplineFollowerComponent::TryAutoStart()
{
    if (!GetOwner() || !GetOwner()->HasAuthority() || !bAutoStart || !IsValid(AssignedPath))
    {
        return;
    }

    if (StartFollowing(AssignedPath, true))
    {
        AutoStartElapsed = 0.0f;
        return;
    }

    // AI possession can occur shortly after BeginPlay for dynamically spawned pawns.
    constexpr float RetryInterval = 0.2f;
    constexpr float MaximumWait = 5.0f;
    AutoStartElapsed += RetryInterval;

    if (AutoStartElapsed < MaximumWait && GetWorld())
    {
        GetWorld()->GetTimerManager().SetTimer(
            AutoStartTimerHandle,
            this,
            &URenegadeSplineFollowerComponent::TryAutoStart,
            RetryInterval,
            false);
    }
}

void URenegadeSplineFollowerComponent::IssueNextMove()
{
    if (!GetOwner() ||
        !GetOwner()->HasAuthority() ||
        FollowState != ERenegadeSplineFollowState::Following ||
        HasExternalMovementClaims() ||
        !bRouteFollowingRequested)
    {
        return;
    }

    if (!IsValid(AssignedPath) ||
        !AssignedPath->IsTeamAllowed(TeamId) ||
        !ResolveOwnerAndController())
    {
        SetFollowState(ERenegadeSplineFollowState::Blocked);
        ClearVehicleSteeringTarget();
        return;
    }

    if (IsAtEndOfOpenRoute(CurrentDistanceAlongSpline))
    {
        CompleteRoute();
        return;
    }

    PendingTargetDistance =
        AdvanceDistance(CurrentDistanceAlongSpline, GetEffectiveLookAheadDistance());
    CurrentMoveGoal =
        AssignedPath->GetRouteLocationAtDistance(PendingTargetDistance, LaneOffset);
    UpdateVehicleSteeringTarget();

    if (bDrawDebug && GetWorld() && OwnerPawn.IsValid())
    {
        DrawDebugSphere(
            GetWorld(), CurrentMoveGoal, 28.0f, 12, FColor::Cyan, false, 2.0f, 0, 2.0f);
        DrawDebugLine(
            GetWorld(), OwnerPawn->GetActorLocation(), CurrentMoveGoal,
            FColor::Cyan, false, 2.0f, 0, 1.5f);
    }

    const URenegadeCharacterVehicleComponent* CharacterVehicle =
        bAutoDetectCharacterVehicle ? GetCharacterVehicleComponent() : nullptr;
    const bool bCharacterVehicleReady =
        IsValid(CharacterVehicle) && CharacterVehicle->IsCharacterVehicleReady();

    FAIMoveRequest MoveRequest;
    MoveRequest.SetGoalLocation(CurrentMoveGoal);
    MoveRequest.SetAcceptanceRadius(GetEffectiveAcceptanceRadius());
    MoveRequest.SetUsePathfinding(bUsePathfinding);
    MoveRequest.SetProjectGoalLocation(bProjectGoalsToNavigation);
    MoveRequest.SetAllowPartialPath(bAllowPartialPaths);
    MoveRequest.SetCanStrafe(
        bCharacterVehicleReady && bForceNoStrafeForCharacterVehicles ? false : bCanStrafe);
    MoveRequest.SetReachTestIncludesAgentRadius(bStopOnOverlap);

    const FPathFollowingRequestResult RequestResult = CachedAIController->MoveTo(MoveRequest);
    ActiveMoveRequestId = RequestResult.MoveId;

    switch (RequestResult.Code)
    {
        case EPathFollowingRequestResult::RequestSuccessful:
            break;

        case EPathFollowingRequestResult::AlreadyAtGoal:
            ActiveMoveRequestId = FAIRequestID::InvalidRequest;
            CurrentDistanceAlongSpline = PendingTargetDistance;
            LastCommittedDistance = CurrentDistanceAlongSpline;
            bHasCommittedProgress = true;
            ConsecutiveMoveFailures = 0;
            BroadcastProgress();

            if (IsAtEndOfOpenRoute(CurrentDistanceAlongSpline))
            {
                CompleteRoute();
            }
            else
            {
                ScheduleNextMove(SegmentDelay);
            }
            break;

        case EPathFollowingRequestResult::Failed:
        default:
            ActiveMoveRequestId = FAIRequestID::InvalidRequest;
            HandleMoveRequestFailure();
            break;
    }
}

void URenegadeSplineFollowerComponent::HandleMoveFinished(
    const FAIRequestID RequestId,
    const FPathFollowingResult& Result)
{
    // This can be the end of an outside MoveTo that interrupted us. The fallback is deliberately
    // opt-in; explicit movement claims remain the preferred integration contract.
    if (RequestId != ActiveMoveRequestId)
    {
        if (FollowState == ERenegadeSplineFollowState::Suspended &&
            bAutoResumeAfterUnexpectedExternalMove &&
            !HasExternalMovementClaims() &&
            bRouteFollowingRequested &&
            IsControllerMovementIdle())
        {
            ScheduleResume(UnexpectedExternalMoveResumeDelay);
        }
        return;
    }

    ActiveMoveRequestId = FAIRequestID::InvalidRequest;

    if (HasExternalMovementClaims() ||
        FollowState == ERenegadeSplineFollowState::CombatPaused ||
        FollowState == ERenegadeSplineFollowState::ExternalPaused ||
        FollowState == ERenegadeSplineFollowState::Idle ||
        FollowState == ERenegadeSplineFollowState::Completed ||
        FollowState == ERenegadeSplineFollowState::Disabled)
    {
        return;
    }

    if (Result.IsSuccess())
    {
        CurrentDistanceAlongSpline = PendingTargetDistance;
        LastCommittedDistance = CurrentDistanceAlongSpline;
        bHasCommittedProgress = true;
        ConsecutiveMoveFailures = 0;
        BroadcastProgress();

        if (IsAtEndOfOpenRoute(CurrentDistanceAlongSpline))
        {
            CompleteRoute();
        }
        else
        {
            ScheduleNextMove(SegmentDelay);
        }
        return;
    }

    if (Result.IsInterrupted())
    {
        ClearVehicleSteeringTarget();
        SetFollowState(ERenegadeSplineFollowState::Suspended);
        return;
    }

    HandleMoveRequestFailure();
}

void URenegadeSplineFollowerComponent::HandleMoveRequestFailure()
{
    if (HasExternalMovementClaims() || !bRouteFollowingRequested)
    {
        UpdatePausedStateFromClaims();
        return;
    }

    ++ConsecutiveMoveFailures;
    OnMoveFailure.Broadcast(ConsecutiveMoveFailures, CurrentMoveGoal);

    if (ConsecutiveMoveFailures > MaximumConsecutiveMoveFailures)
    {
        ClearVehicleSteeringTarget();
        SetFollowState(ERenegadeSplineFollowState::Blocked);
        return;
    }

    // Reproject after failures in case avoidance, combat, or physics displaced the pawn.
    if (!ReacquireRouteFromCurrentLocation())
    {
        ClearVehicleSteeringTarget();
        SetFollowState(ERenegadeSplineFollowState::Blocked);
        return;
    }

    ScheduleNextMove(FailedMoveRetryDelay);
}

void URenegadeSplineFollowerComponent::CompleteRoute()
{
    ClearRuntimeTimers();
    ClearVehicleSteeringTarget();
    ActiveMoveRequestId = FAIRequestID::InvalidRequest;
    bRouteFollowingRequested = false;
    SetFollowState(ERenegadeSplineFollowState::Completed);
    BroadcastProgress();
    OnRouteCompleted.Broadcast(AssignedPath);
}

void URenegadeSplineFollowerComponent::SetFollowState(
    const ERenegadeSplineFollowState NewState)
{
    if (FollowState == NewState)
    {
        return;
    }

    const ERenegadeSplineFollowState PreviousState = FollowState;
    FollowState = NewState;
    OnFollowStateChanged.Broadcast(PreviousState, FollowState);
}

void URenegadeSplineFollowerComponent::BroadcastProgress()
{
    OnRouteProgress.Broadcast(CurrentDistanceAlongSpline, GetNormalizedRouteProgress());
}

void URenegadeSplineFollowerComponent::UnbindCombatTarget()
{
    if (AActor* CombatTarget = ActiveCombatTarget.Get())
    {
        CombatTarget->OnDestroyed.RemoveDynamic(
            this,
            &URenegadeSplineFollowerComponent::HandleCombatTargetDestroyed);
    }
}

void URenegadeSplineFollowerComponent::UpdatePausedStateFromClaims()
{
    if (!HasExternalMovementClaims())
    {
        return;
    }

    SetFollowState(
        HasCombatMovementClaim()
            ? ERenegadeSplineFollowState::CombatPaused
            : ERenegadeSplineFollowState::ExternalPaused);
}

FName URenegadeSplineFollowerComponent::NormalizeExternalSourceName(FName SourceName) const
{
    return SourceName.IsNone() ? DefaultExternalMovementClaimName : SourceName;
}

bool URenegadeSplineFollowerComponent::HasCombatMovementClaim() const
{
    return ExternalMovementClaims.Contains(CombatMovementClaimName);
}

void URenegadeSplineFollowerComponent::ClearVehicleSteeringTarget()
{
    if (URenegadeCharacterVehicleComponent* Vehicle = GetCharacterVehicleComponent())
    {
        Vehicle->ClearSteeringTarget();
    }
}

void URenegadeSplineFollowerComponent::UpdateVehicleSteeringTarget()
{
    if (!bAutoDetectCharacterVehicle)
    {
        return;
    }

    if (URenegadeCharacterVehicleComponent* Vehicle = GetCharacterVehicleComponent())
    {
        Vehicle->SetSteeringTarget(CurrentMoveGoal);
    }
}

float URenegadeSplineFollowerComponent::GetEffectiveLookAheadDistance() const
{
    float BaseLookAhead = LookAheadDistance;

    if (bAutoDetectCharacterVehicle)
    {
        const URenegadeCharacterVehicleComponent* Vehicle = GetCharacterVehicleComponent();
        if (IsValid(Vehicle) &&
            Vehicle->IsCharacterVehicleReady() &&
            Vehicle->bOverrideSplineFollowerDistances)
        {
            BaseLookAhead = Vehicle->RecommendedSplineLookAheadDistance;
        }
    }

    const float FailureScale = FMath::Pow(0.65f, static_cast<float>(ConsecutiveMoveFailures));
    return FMath::Max(MinimumLookAheadDistance, BaseLookAhead * FailureScale);
}

float URenegadeSplineFollowerComponent::GetEffectiveAcceptanceRadius() const
{
    if (bAutoDetectCharacterVehicle)
    {
        const URenegadeCharacterVehicleComponent* Vehicle = GetCharacterVehicleComponent();
        if (IsValid(Vehicle) &&
            Vehicle->IsCharacterVehicleReady() &&
            Vehicle->bOverrideSplineFollowerDistances)
        {
            return Vehicle->RecommendedAcceptanceRadius;
        }
    }

    return AcceptanceRadius;
}

float URenegadeSplineFollowerComponent::GetEffectiveRouteEndTolerance() const
{
    if (bAutoDetectCharacterVehicle)
    {
        const URenegadeCharacterVehicleComponent* Vehicle = GetCharacterVehicleComponent();
        if (IsValid(Vehicle) &&
            Vehicle->IsCharacterVehicleReady() &&
            Vehicle->bOverrideSplineFollowerDistances)
        {
            return Vehicle->RecommendedRouteEndTolerance;
        }
    }

    return RouteEndTolerance;
}

float URenegadeSplineFollowerComponent::AdvanceDistance(
    const float FromDistance,
    const float DeltaDistance) const
{
    if (!IsValid(AssignedPath))
    {
        return FromDistance;
    }

    const float Length = AssignedPath->GetRouteLength();
    const float SignedDelta =
        TravelDirection == ERenegadeSplineTravelDirection::Forward
            ? DeltaDistance
            : -DeltaDistance;

    float NewDistance = FromDistance + SignedDelta;

    if (AssignedPath->IsClosedLoop() && Length > UE_KINDA_SMALL_NUMBER)
    {
        NewDistance = FMath::Fmod(NewDistance, Length);
        if (NewDistance < 0.0f)
        {
            NewDistance += Length;
        }
        return NewDistance;
    }

    return FMath::Clamp(NewDistance, 0.0f, Length);
}

bool URenegadeSplineFollowerComponent::IsAtEndOfOpenRoute(
    const float DistanceAlongSpline) const
{
    if (!IsValid(AssignedPath) || AssignedPath->IsClosedLoop())
    {
        return false;
    }

    const float Length = AssignedPath->GetRouteLength();
    const float EndTolerance = GetEffectiveRouteEndTolerance();
    return TravelDirection == ERenegadeSplineTravelDirection::Forward
        ? DistanceAlongSpline >= Length - EndTolerance
        : DistanceAlongSpline <= EndTolerance;
}

bool URenegadeSplineFollowerComponent::IsControllerMovementIdle() const
{
    const AAIController* AIController = CachedAIController.Get();
    if (!IsValid(AIController))
    {
        return true;
    }

    const UPathFollowingComponent* PathFollowing = AIController->GetPathFollowingComponent();
    return !IsValid(PathFollowing) || PathFollowing->GetStatus() == EPathFollowingStatus::Idle;
}

void URenegadeSplineFollowerComponent::HandleCombatTargetDestroyed(AActor* DestroyedActor)
{
    if (DestroyedActor == ActiveCombatTarget.Get() && HasCombatMovementClaim())
    {
        SetCombatActive(false, nullptr, -1.0f);
    }
}

void URenegadeSplineFollowerComponent::ResumeAfterPauseDelay()
{
    if (HasExternalMovementClaims())
    {
        UpdatePausedStateFromClaims();
        return;
    }

    if (bRouteFollowingRequested && IsValid(AssignedPath))
    {
        ResumeFollowing(true);
    }
}

void URenegadeSplineFollowerComponent::OnRep_FollowState(
    const ERenegadeSplineFollowState PreviousState)
{
    OnFollowStateChanged.Broadcast(PreviousState, FollowState);
}
