#include "RenegadeCharacterVehicleComponent.h"

#include "AIController.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Navigation/PathFollowingComponent.h"
#include "Net/UnrealNetwork.h"

URenegadeCharacterVehicleComponent::URenegadeCharacterVehicleComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
    PrimaryComponentTick.TickGroup = TG_PrePhysics;
    SetIsReplicatedByDefault(true);
}

void URenegadeCharacterVehicleComponent::BeginPlay()
{
    Super::BeginPlay();

    if (!ResolveCharacterAndMovement())
    {
        SetComponentTickEnabled(false);
        return;
    }

    CaptureOriginalSettings();

    if (bAutoApplyPreset && VehiclePreset != ERenegadeCharacterVehiclePreset::Custom)
    {
        ApplyVehiclePreset();
    }
    else
    {
        ApplyMovementConfiguration();
    }

    // Configure handling before CharacterMovement consumes the path-following request this frame.
    CharacterMovement->AddTickPrerequisiteComponent(this);
}

void URenegadeCharacterVehicleComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    if (CharacterMovement.IsValid())
    {
        CharacterMovement->RemoveTickPrerequisiteComponent(this);
    }

    if (bRestoreOriginalSettingsOnEndPlay)
    {
        RestoreOriginalSettings();
    }

    Super::EndPlay(EndPlayReason);
}

void URenegadeCharacterVehicleComponent::TickComponent(
    const float DeltaTime,
    const ELevelTick TickType,
    FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    if (!OwnerCharacter.IsValid() || !CharacterMovement.IsValid())
    {
        if (!ResolveCharacterAndMovement())
        {
            return;
        }
    }

    // Clients consume replicated telemetry for animation/audio but do not author movement.
    if (!GetOwner() || !GetOwner()->HasAuthority())
    {
        OnVehicleDriveUpdated.Broadcast(CurrentThrottle, CurrentSteering, CurrentSpeedKPH, bIsPivotTurning);
        return;
    }

    UCharacterMovementComponent* Movement = CharacterMovement.Get();
    ACharacter* Character = OwnerCharacter.Get();
    if (!Movement || !Character)
    {
        return;
    }

    if (!bDriveEnabled)
    {
        Movement->MaxWalkSpeed = 0.0f;
        UpdateDriveTelemetry(0.0f, 0.0f, false);
        return;
    }

    const FVector DesiredDirection = ResolveDesiredDriveDirection();
    const bool bHasDesiredDirection = !DesiredDirection.IsNearlyZero();

    FVector Forward = Character->GetActorForwardVector().GetSafeNormal2D();
    if (Forward.IsNearlyZero())
    {
        Forward = FVector::ForwardVector;
    }

    float SignedHeadingError = 0.0f;
    if (bHasDesiredDirection)
    {
        const float Dot = FMath::Clamp(FVector::DotProduct(Forward, DesiredDirection), -1.0f, 1.0f);
        const float CrossZ = FVector::CrossProduct(Forward, DesiredDirection).Z;
        SignedHeadingError = FMath::RadiansToDegrees(FMath::Atan2(CrossZ, Dot));
    }

    const float AbsoluteHeadingError = FMath::Abs(SignedHeadingError);
    const bool bPivoting = bHasDesiredDirection && bAllowPivotTurn && AbsoluteHeadingError >= PivotTurnStartAngle;
    const float SteeringValue = bHasDesiredDirection
        ? FMath::Clamp(SignedHeadingError / 90.0f, -1.0f, 1.0f)
        : 0.0f;

    float DesiredMaximumSpeed = bHasDesiredDirection
        ? ComputeCornerLimitedSpeed(AbsoluteHeadingError)
        : 0.0f;

    const bool bReverseHeadingBlocked =
        bHasDesiredDirection && !bAllowReverseMotion && AbsoluteHeadingError >= 90.0f;

    if (bPivoting)
    {
        DesiredMaximumSpeed = FMath::Min(DesiredMaximumSpeed, PivotMaximumSpeed);
    }
    else if (bReverseHeadingBlocked)
    {
        // CharacterMovement has no vehicle forward gear concept. Suppress translation while the
        // hull turns through a rearward path direction so the unit cannot "drive" backwards.
        DesiredMaximumSpeed = 0.0f;
    }

    Movement->MaxWalkSpeed = FMath::Max(0.0f, DesiredMaximumSpeed);
    Movement->MaxAcceleration = (bPivoting || bReverseHeadingBlocked) ? 0.0f : Acceleration;

    if (bHasDesiredDirection && DeltaTime > UE_KINDA_SMALL_NUMBER)
    {
        const float YawRate = bPivoting ? PivotYawRate : MaximumYawRate;
        const float AppliedYawDelta = FMath::Clamp(
            SignedHeadingError,
            -YawRate * DeltaTime,
            YawRate * DeltaTime);

        FRotator NewRotation = Character->GetActorRotation();
        NewRotation.Yaw = FRotator::NormalizeAxis(NewRotation.Yaw + AppliedYawDelta);
        Character->SetActorRotation(NewRotation, ETeleportType::None);
    }

    // Remove most sideways velocity so NavMesh path following produces an arc instead of strafing.
    Forward = Character->GetActorForwardVector().GetSafeNormal2D();
    const FVector Right = Character->GetActorRightVector().GetSafeNormal2D();
    const FVector ExistingVelocity = Movement->Velocity;
    float ForwardSpeed = FVector::DotProduct(ExistingVelocity, Forward);
    float SidewaysSpeed = FVector::DotProduct(ExistingVelocity, Right);

    if (!bAllowReverseMotion && ForwardSpeed < 0.0f)
    {
        ForwardSpeed = FMath::FInterpTo(ForwardSpeed, 0.0f, DeltaTime, FMath::Max(1.0f, LateralGrip));
    }

    const float SidewaysRetention = LateralGrip > 0.0f
        ? FMath::Exp(-LateralGrip * DeltaTime)
        : 1.0f;
    SidewaysSpeed *= SidewaysRetention;

    Movement->Velocity = (Forward * ForwardSpeed) + (Right * SidewaysSpeed) + FVector(0.0f, 0.0f, ExistingVelocity.Z);

    UpdateDriveTelemetry(ForwardSpeed, SteeringValue, bPivoting);
}

void URenegadeCharacterVehicleComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(URenegadeCharacterVehicleComponent, bDriveEnabled);
    DOREPLIFETIME(URenegadeCharacterVehicleComponent, CurrentThrottle);
    DOREPLIFETIME(URenegadeCharacterVehicleComponent, CurrentSteering);
    DOREPLIFETIME(URenegadeCharacterVehicleComponent, CurrentSpeedKPH);
    DOREPLIFETIME(URenegadeCharacterVehicleComponent, bIsPivotTurning);
}

void URenegadeCharacterVehicleComponent::ApplyVehiclePreset()
{
    switch (VehiclePreset)
    {
        case ERenegadeCharacterVehiclePreset::LightTracked:
            CruiseSpeed = 800.0f;
            Acceleration = 650.0f;
            BrakingDeceleration = 900.0f;
            GroundFriction = 2.8f;
            MaximumYawRate = 72.0f;
            TurnSlowdownStartAngle = 28.0f;
            MinimumCornerSpeed = 180.0f;
            bAllowPivotTurn = true;
            PivotTurnStartAngle = 72.0f;
            PivotYawRate = 88.0f;
            PivotMaximumSpeed = 65.0f;
            LateralGrip = 8.5f;
            RecommendedSplineLookAheadDistance = 900.0f;
            RecommendedAcceptanceRadius = 150.0f;
            RecommendedRouteEndTolerance = 220.0f;
            break;

        case ERenegadeCharacterVehiclePreset::HeavyTracked:
            CruiseSpeed = 550.0f;
            Acceleration = 360.0f;
            BrakingDeceleration = 650.0f;
            GroundFriction = 2.2f;
            MaximumYawRate = 48.0f;
            TurnSlowdownStartAngle = 22.0f;
            MinimumCornerSpeed = 120.0f;
            bAllowPivotTurn = true;
            PivotTurnStartAngle = 68.0f;
            PivotYawRate = 62.0f;
            PivotMaximumSpeed = 45.0f;
            LateralGrip = 7.0f;
            RecommendedSplineLookAheadDistance = 1100.0f;
            RecommendedAcceptanceRadius = 190.0f;
            RecommendedRouteEndTolerance = 280.0f;
            break;

        case ERenegadeCharacterVehiclePreset::Harvester:
            CruiseSpeed = 420.0f;
            Acceleration = 220.0f;
            BrakingDeceleration = 460.0f;
            GroundFriction = 2.0f;
            MaximumYawRate = 30.0f;
            TurnSlowdownStartAngle = 16.0f;
            MinimumCornerSpeed = 105.0f;
            bAllowPivotTurn = false;
            PivotTurnStartAngle = 85.0f;
            PivotYawRate = 36.0f;
            PivotMaximumSpeed = 35.0f;
            LateralGrip = 6.0f;
            RecommendedSplineLookAheadDistance = 1350.0f;
            RecommendedAcceptanceRadius = 240.0f;
            RecommendedRouteEndTolerance = 340.0f;
            break;

        case ERenegadeCharacterVehiclePreset::Custom:
        default:
            break;
    }

    ApplyMovementConfiguration();
}

void URenegadeCharacterVehicleComponent::SetDriveEnabled(const bool bEnabled, const bool bStopImmediately)
{
    if (GetOwner() && !GetOwner()->HasAuthority())
    {
        return;
    }

    bDriveEnabled = bEnabled;

    if (!bEnabled && CharacterMovement.IsValid())
    {
        CharacterMovement->MaxWalkSpeed = 0.0f;
        if (bStopImmediately)
        {
            CharacterMovement->StopMovementImmediately();
        }
    }
    else if (bEnabled)
    {
        ApplyMovementConfiguration();
    }
}

void URenegadeCharacterVehicleComponent::SetSteeringTarget(const FVector WorldTarget)
{
    SteeringTarget = WorldTarget;
    bHasSteeringTarget = true;
}

void URenegadeCharacterVehicleComponent::ClearSteeringTarget()
{
    SteeringTarget = FVector::ZeroVector;
    bHasSteeringTarget = false;
}

bool URenegadeCharacterVehicleComponent::IsCharacterVehicleReady() const
{
    return bDriveEnabled && OwnerCharacter.IsValid() && CharacterMovement.IsValid();
}

bool URenegadeCharacterVehicleComponent::ResolveCharacterAndMovement()
{
    ACharacter* Character = Cast<ACharacter>(GetOwner());
    if (!IsValid(Character))
    {
        OwnerCharacter.Reset();
        CharacterMovement.Reset();
        return false;
    }

    UCharacterMovementComponent* Movement = Character->GetCharacterMovement();
    if (!IsValid(Movement))
    {
        OwnerCharacter = Character;
        CharacterMovement.Reset();
        return false;
    }

    OwnerCharacter = Character;
    CharacterMovement = Movement;
    return true;
}

void URenegadeCharacterVehicleComponent::CaptureOriginalSettings()
{
    if (bOriginalSettingsCaptured || !OwnerCharacter.IsValid() || !CharacterMovement.IsValid())
    {
        return;
    }

    const UCharacterMovementComponent* Movement = CharacterMovement.Get();
    OriginalMaxWalkSpeed = Movement->MaxWalkSpeed;
    OriginalMaxAcceleration = Movement->MaxAcceleration;
    OriginalBrakingDeceleration = Movement->BrakingDecelerationWalking;
    OriginalGroundFriction = Movement->GroundFriction;
    OriginalBrakingFriction = Movement->BrakingFriction;
    OriginalBrakingFrictionFactor = Movement->BrakingFrictionFactor;
    bOriginalUseSeparateBrakingFriction = Movement->bUseSeparateBrakingFriction;
    bOriginalRequestedMoveUseAcceleration = Movement->bRequestedMoveUseAcceleration;
    bOriginalOrientRotationToMovement = Movement->bOrientRotationToMovement;
    bOriginalUseControllerDesiredRotation = Movement->bUseControllerDesiredRotation;
    bOriginalUseRVOAvoidance = Movement->bUseRVOAvoidance;
    bOriginalUseControllerRotationYaw = OwnerCharacter->bUseControllerRotationYaw;
    bOriginalSettingsCaptured = true;
}

void URenegadeCharacterVehicleComponent::ApplyMovementConfiguration()
{
    if (!ResolveCharacterAndMovement())
    {
        return;
    }

    CaptureOriginalSettings();

    UCharacterMovementComponent* Movement = CharacterMovement.Get();
    Movement->MaxWalkSpeed = bDriveEnabled ? CruiseSpeed : 0.0f;
    Movement->MaxAcceleration = Acceleration;
    Movement->BrakingDecelerationWalking = BrakingDeceleration;
    Movement->GroundFriction = GroundFriction;
    Movement->bUseSeparateBrakingFriction = true;
    Movement->BrakingFriction = FMath::Max(0.0f, GroundFriction * 0.5f);
    Movement->BrakingFrictionFactor = 1.0f;
    Movement->bRequestedMoveUseAcceleration = true;
    Movement->bOrientRotationToMovement = false;
    Movement->bUseControllerDesiredRotation = false;
    Movement->bUseRVOAvoidance = bUseRVOAvoidance;

    OwnerCharacter->bUseControllerRotationYaw = false;
}

void URenegadeCharacterVehicleComponent::RestoreOriginalSettings()
{
    if (!bOriginalSettingsCaptured || !OwnerCharacter.IsValid() || !CharacterMovement.IsValid())
    {
        return;
    }

    UCharacterMovementComponent* Movement = CharacterMovement.Get();
    Movement->MaxWalkSpeed = OriginalMaxWalkSpeed;
    Movement->MaxAcceleration = OriginalMaxAcceleration;
    Movement->BrakingDecelerationWalking = OriginalBrakingDeceleration;
    Movement->GroundFriction = OriginalGroundFriction;
    Movement->BrakingFriction = OriginalBrakingFriction;
    Movement->BrakingFrictionFactor = OriginalBrakingFrictionFactor;
    Movement->bUseSeparateBrakingFriction = bOriginalUseSeparateBrakingFriction;
    Movement->bRequestedMoveUseAcceleration = bOriginalRequestedMoveUseAcceleration;
    Movement->bOrientRotationToMovement = bOriginalOrientRotationToMovement;
    Movement->bUseControllerDesiredRotation = bOriginalUseControllerDesiredRotation;
    Movement->bUseRVOAvoidance = bOriginalUseRVOAvoidance;
    OwnerCharacter->bUseControllerRotationYaw = bOriginalUseControllerRotationYaw;
}

FVector URenegadeCharacterVehicleComponent::ResolveDesiredDriveDirection() const
{
    const ACharacter* Character = OwnerCharacter.Get();
    const UCharacterMovementComponent* Movement = CharacterMovement.Get();
    if (!Character || !Movement)
    {
        return FVector::ZeroVector;
    }

    if (const AAIController* AIController = Cast<AAIController>(Character->GetController()))
    {
        if (const UPathFollowingComponent* PathFollowing = AIController->GetPathFollowingComponent())
        {
            if (PathFollowing->GetStatus() == EPathFollowingStatus::Moving)
            {
                const FVector PathDirection = PathFollowing->GetCurrentDirection().GetSafeNormal2D();
                if (!PathDirection.IsNearlyZero())
                {
                    return PathDirection;
                }
            }
        }
    }

    const FVector AccelerationDirection = Movement->GetCurrentAcceleration().GetSafeNormal2D();
    if (!AccelerationDirection.IsNearlyZero())
    {
        return AccelerationDirection;
    }

    if (bHasSteeringTarget)
    {
        const FVector TargetDirection = (SteeringTarget - Character->GetActorLocation()).GetSafeNormal2D();
        if (!TargetDirection.IsNearlyZero())
        {
            return TargetDirection;
        }
    }

    return Movement->Velocity.GetSafeNormal2D();
}

float URenegadeCharacterVehicleComponent::ComputeCornerLimitedSpeed(const float AbsoluteHeadingError) const
{
    if (AbsoluteHeadingError <= TurnSlowdownStartAngle)
    {
        return CruiseSpeed;
    }

    const float Denominator = FMath::Max(1.0f, 180.0f - TurnSlowdownStartAngle);
    const float Alpha = FMath::Clamp(
        (AbsoluteHeadingError - TurnSlowdownStartAngle) / Denominator,
        0.0f,
        1.0f);

    return FMath::Lerp(CruiseSpeed, MinimumCornerSpeed, Alpha);
}

void URenegadeCharacterVehicleComponent::UpdateDriveTelemetry(
    const float ForwardSpeed,
    const float SteeringValue,
    const bool bPivoting)
{
    const float SafeCruiseSpeed = FMath::Max(1.0f, CruiseSpeed);
    CurrentThrottle = FMath::Clamp(ForwardSpeed / SafeCruiseSpeed, -1.0f, 1.0f);
    CurrentSteering = FMath::Clamp(SteeringValue, -1.0f, 1.0f);
    CurrentSpeedKPH = CharacterMovement.IsValid()
        ? CharacterMovement->Velocity.Size2D() * 0.036f
        : 0.0f;
    bIsPivotTurning = bPivoting;

    OnVehicleDriveUpdated.Broadcast(CurrentThrottle, CurrentSteering, CurrentSpeedKPH, bIsPivotTurning);
}
