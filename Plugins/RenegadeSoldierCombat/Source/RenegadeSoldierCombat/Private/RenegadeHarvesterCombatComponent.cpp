#include "RenegadeHarvesterCombatComponent.h"

#include "RenegadeBuildingCombatComponent.h"
#include "RenegadeCombatRegistrySubsystem.h"
#include "RenegadeHarvesterWreck.h"
#include "RenegadeHarvestPoint.h"
#include "RenegadeRefineryDockPoint.h"
#include "RenegadeSoldierCombatComponent.h"
#include "RenegadeTeamCreditsManager.h"
#include "RenegadeSoldierCombatModule.h"

#include "CollisionQueryParams.h"
#include "Components/SceneComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Engine/SkeletalMesh.h"
#include "Engine/SkeletalMeshSocket.h"
#include "Components/StaticMeshComponent.h"
#include "DrawDebugHelpers.h"
#include "Engine/World.h"
#include "EngineUtils.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Character.h"
#include "AIController.h"
#include "Navigation/PathFollowingComponent.h"
#include "GameFramework/DamageType.h"
#include "GameFramework/Pawn.h"
#include "Kismet/GameplayStatics.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraSystem.h"
#include "Net/UnrealNetwork.h"
#include "Particles/ParticleSystem.h"
#include "Sound/SoundBase.h"
#include "UObject/StructOnScope.h"
#include "UObject/UnrealType.h"

namespace RenegadeHarvesterPrivate
{
    bool IsNeutralTeamName(const FName TeamId)
    {
        return TeamId.IsNone()
            || TeamId.IsEqual(FName(TEXT("Neutral")), ENameCase::IgnoreCase)
            || TeamId.IsEqual(FName(TEXT("None")), ENameCase::IgnoreCase);
    }

    bool IsActorInAttachmentHierarchy(const AActor* Candidate, const AActor* Desired)
    {
        if (!IsValid(Candidate) || !IsValid(Desired))
        {
            return false;
        }
        if (Candidate == Desired)
        {
            return true;
        }

        const AActor* Cursor = Candidate;
        for (int32 Depth = 0; Depth < 8 && IsValid(Cursor); ++Depth)
        {
            Cursor = Cursor->GetAttachParentActor();
            if (Cursor == Desired)
            {
                return true;
            }
        }
        return false;
    }

    void AddOwnerHierarchyToTraceIgnore(const AActor* RootActor, FCollisionQueryParams& Params)
    {
        if (!IsValid(RootActor))
        {
            return;
        }
        Params.AddIgnoredActor(RootActor);
        TArray<AActor*> AttachedActors;
        RootActor->GetAttachedActors(AttachedActors, true, true);
        for (AActor* Actor : AttachedActors)
        {
            if (IsValid(Actor))
            {
                Params.AddIgnoredActor(Actor);
            }
        }
        TArray<AActor*> ChildActors;
        RootActor->GetAllChildActors(ChildActors, true);
        for (AActor* Actor : ChildActors)
        {
            if (IsValid(Actor))
            {
                Params.AddIgnoredActor(Actor);
            }
        }
    }
}

URenegadeHarvesterCombatComponent::URenegadeHarvesterCombatComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
    PrimaryComponentTick.bStartWithTickEnabled = true;
    SetIsReplicatedByDefault(true);
    WreckActorClass = ARenegadeHarvesterWreck::StaticClass();
}

void URenegadeHarvesterCombatComponent::BeginPlay()
{
    Super::BeginPlay();
    EnsureOwnerNetworking();
    ResolveGroundAlignmentVisualComponent();
    CacheGroundAlignmentBaseRotation();
    ResolveOrCreateTurretComponents();
    RegisterWithCombatWorld();
    BeginPlayWorldTime = GetWorld() ? GetWorld()->GetTimeSeconds() : 0.0f;

    if (AActor* Owner = GetOwner())
    {
        Owner->SetCanBeDamaged(HealthSettings.bCanBeDamaged);
        Owner->OnTakeAnyDamage.AddDynamic(this, &URenegadeHarvesterCombatComponent::HandleOwnerAnyDamage);
    }

    if (HasAuthority())
    {
        CurrentHealth = FMath::Max(1.0f, HealthSettings.MaximumHealth);
        bIsDestroyed = false;
        bIsCriticalHealth = false;
        CurrentCargo = FMath::Clamp(CurrentCargo, 0.0f, FMath::Max(1.0f, EconomySettings.CargoCapacity));
        if (!IsValid(AssignedHarvestPoint) && bAutoFindNearestHarvestPoint)
        {
            FindNearestCompatibleHarvestPoint();
        }
        if (!IsValid(AssignedRefineryDockPoint) && bAutoFindNearestRefineryDockPoint)
        {
            FindNearestCompatibleRefineryDockPoint();
        }

        if (UWorld* World = GetWorld())
        {
            if (URenegadeCombatRegistrySubsystem* Registry = World->GetSubsystem<URenegadeCombatRegistrySubsystem>())
            {
                Registry->GetTeamCreditsManager(true);
            }
        }
        ForceTurretTargetRefresh();
    }
}

void URenegadeHarvesterCombatComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    if (AActor* Owner = GetOwner())
    {
        Owner->OnTakeAnyDamage.RemoveDynamic(this, &URenegadeHarvesterCombatComponent::HandleOwnerAnyDamage);
    }
    if (UWorld* World = GetWorld())
    {
        World->GetTimerManager().ClearTimer(DestroyOwnerTimer);
    }
    for (UStaticMeshComponent* Component : BulletVisualComponents)
    {
        if (IsValid(Component))
        {
            Component->DestroyComponent();
        }
    }
    BulletVisualComponents.Reset();
    BulletVisualStates.Reset();
    if (IsValid(RuntimeGroundAlignmentVisualComponent) && bGroundAlignmentBaseRotationCached)
    {
        RuntimeGroundAlignmentVisualComponent->SetRelativeRotation(GroundAlignmentBaseRelativeRotation);
    }
    if (IsValid(GeneratedTurretComponent))
    {
        GeneratedTurretComponent->DestroyComponent();
        GeneratedTurretComponent = nullptr;
    }
    if (HasAuthority())
    {
        ReleaseHarvestPointReservation();
        ReleaseRefineryDockReservation();
        SetSplineExternalMovementClaim(false);
    }
    UnregisterFromCombatWorld();
    Super::EndPlay(EndPlayReason);
}

void URenegadeHarvesterCombatComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    if (bIsDestroyed)
    {
        UpdateBulletVisuals(DeltaTime);
        return;
    }

    UpdateGroundAlignment(DeltaTime);
    UpdateTurretRotation(DeltaTime);
    UpdateBulletVisuals(DeltaTime);

    if (HasAuthority())
    {
        EconomyUpdateAccumulator += FMath::Max(0.0f, DeltaTime);
        const float EconomyInterval = FMath::Clamp(EconomySettings.EconomyUpdateIntervalSeconds, 0.02f, 1.0f);
        if (EconomyUpdateAccumulator >= EconomyInterval)
        {
            const float SimulatedSeconds = EconomyUpdateAccumulator;
            EconomyUpdateAccumulator = 0.0f;
            UpdateEconomy(SimulatedSeconds);
        }

        UpdateAutomaticCycle(DeltaTime);

        TargetRefreshAccumulator += DeltaTime;
        if (TargetRefreshAccumulator >= FMath::Max(0.05f, TurretSettings.TargetRefreshSeconds))
        {
            TargetRefreshAccumulator = 0.0f;
            RefreshTurretTargeting();
        }
        TryFireTurret();
    }
}

void URenegadeHarvesterCombatComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    DOREPLIFETIME(URenegadeHarvesterCombatComponent, TeamId);
    DOREPLIFETIME(URenegadeHarvesterCombatComponent, CurrentHealth);
    DOREPLIFETIME(URenegadeHarvesterCombatComponent, bIsDestroyed);
    DOREPLIFETIME(URenegadeHarvesterCombatComponent, bIsCriticalHealth);
    DOREPLIFETIME(URenegadeHarvesterCombatComponent, CurrentTurretTarget);
    DOREPLIFETIME(URenegadeHarvesterCombatComponent, LifecycleState);
    DOREPLIFETIME(URenegadeHarvesterCombatComponent, CurrentCargo);
    DOREPLIFETIME(URenegadeHarvesterCombatComponent, OwningRefineryActor);
    DOREPLIFETIME(URenegadeHarvesterCombatComponent, AssignedHarvestPoint);
    DOREPLIFETIME(URenegadeHarvesterCombatComponent, AssignedRefineryDockPoint);
}

bool URenegadeHarvesterCombatComponent::HasAuthority() const
{
    return IsValid(GetOwner()) && GetOwner()->HasAuthority();
}

void URenegadeHarvesterCombatComponent::EnsureOwnerNetworking()
{
    if (!HasAuthority() || !bEnsureOwnerReplicates)
    {
        return;
    }
    if (AActor* Owner = GetOwner())
    {
        Owner->SetReplicates(true);
        if (bEnsureOwnerReplicateMovement)
        {
            Owner->SetReplicateMovement(true);
        }
    }
}

void URenegadeHarvesterCombatComponent::RegisterWithCombatWorld()
{
    if (UWorld* World = GetWorld())
    {
        if (URenegadeCombatRegistrySubsystem* Registry = World->GetSubsystem<URenegadeCombatRegistrySubsystem>())
        {
            Registry->RegisterHarvester(this);
        }
    }
}

void URenegadeHarvesterCombatComponent::UnregisterFromCombatWorld()
{
    if (UWorld* World = GetWorld())
    {
        if (URenegadeCombatRegistrySubsystem* Registry = World->GetSubsystem<URenegadeCombatRegistrySubsystem>())
        {
            Registry->UnregisterHarvester(this);
        }
    }
}

USceneComponent* URenegadeHarvesterCombatComponent::ResolveSceneComponent(
    const FComponentReference& Reference,
    const FName ComponentTag,
    USceneComponent* RuntimeOverride) const
{
    AActor* Owner = GetOwner();
    if (!IsValid(Owner))
    {
        return nullptr;
    }
    USceneComponent* Root = Owner->GetRootComponent();
    if (IsValid(RuntimeOverride) && RuntimeOverride->GetOwner() == Owner && RuntimeOverride != Root)
    {
        return RuntimeOverride;
    }
    if (UActorComponent* Component = Reference.GetComponent(Owner))
    {
        if (USceneComponent* Scene = Cast<USceneComponent>(Component))
        {
            // An empty FComponentReference can resolve to the Actor root. Never let an implicit root
            // become a turret/target control component; continue to the tag fallback instead.
            if (Scene != Root)
            {
                return Scene;
            }
        }
    }
    if (!ComponentTag.IsNone())
    {
        const TArray<UActorComponent*> Tagged = Owner->GetComponentsByTag(USceneComponent::StaticClass(), ComponentTag);
        for (UActorComponent* Component : Tagged)
        {
            if (USceneComponent* Scene = Cast<USceneComponent>(Component))
            {
                if (Scene != Root)
                {
                    return Scene;
                }
            }
        }
    }
    return nullptr;
}

void URenegadeHarvesterCombatComponent::ResolveOrCreateTurretComponents()
{
    RuntimeTurretYawComponent = ResolveSceneComponent(TurretYawComponent, TurretYawComponentTag, RuntimeTurretYawComponent);
    RuntimeTurretPitchComponent = ResolveSceneComponent(TurretPitchComponent, TurretPitchComponentTag, RuntimeTurretPitchComponent);
    RuntimeTurretMuzzleComponent = ResolveSceneComponent(TurretMuzzleComponent, TurretMuzzleComponentTag, RuntimeTurretMuzzleComponent);
    RuntimeTargetPointComponent = ResolveSceneComponent(TargetPointComponent, TargetPointComponentTag, RuntimeTargetPointComponent);

    AActor* Owner = GetOwner();
    if (!IsValid(Owner))
    {
        return;
    }

    const bool bHasTurretAsset = IsValid(TurretSkeletalMesh) || IsValid(TurretStaticMesh);
    if (!bHasTurretAsset)
    {
        return;
    }

    // A selected turret asset is a presentation mesh even when explicit yaw/pitch pivots exist.
    // v1.7.7 only created the asset when yaw was missing, which made a fully functional pivot-based
    // turret invisible. Prefer the pitch pivot so the generated visual inherits both yaw and pitch.
    USceneComponent* AttachParent = nullptr;
    if (bAttachGeneratedTurretVisualToPitch && IsValid(RuntimeTurretPitchComponent) && RuntimeTurretPitchComponent != GeneratedTurretComponent)
    {
        AttachParent = RuntimeTurretPitchComponent;
    }
    else if (IsValid(RuntimeTurretYawComponent) && RuntimeTurretYawComponent != GeneratedTurretComponent)
    {
        AttachParent = RuntimeTurretYawComponent;
    }
    else
    {
        AttachParent = ResolveGroundAlignmentVisualComponent();
        if (!IsValid(AttachParent))
        {
            AttachParent = Owner->GetRootComponent();
        }
    }

    if (!IsValid(GeneratedTurretComponent))
    {
        if (IsValid(TurretSkeletalMesh))
        {
            USkeletalMeshComponent* NewMesh = NewObject<USkeletalMeshComponent>(Owner, TEXT("GeneratedHarvesterTurretSkeletal"), RF_Transient);
            Owner->AddInstanceComponent(NewMesh);
            NewMesh->SetMobility(EComponentMobility::Movable);
            NewMesh->SetSkeletalMeshAsset(TurretSkeletalMesh);
            NewMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
            NewMesh->SetupAttachment(AttachParent, TurretAttachSocket);
            NewMesh->SetRelativeLocation(TurretRelativeLocation);
            NewMesh->SetRelativeRotation(TurretRelativeRotation);
            NewMesh->SetRelativeScale3D(TurretRelativeScale);
            NewMesh->SetHiddenInGame(false);
            NewMesh->SetVisibility(true, true);
            NewMesh->SetCastShadow(true);
            NewMesh->RegisterComponent();
            NewMesh->Activate(true);
            GeneratedTurretComponent = NewMesh;
        }
        else
        {
            UStaticMeshComponent* NewMesh = NewObject<UStaticMeshComponent>(Owner, TEXT("GeneratedHarvesterTurretStatic"), RF_Transient);
            Owner->AddInstanceComponent(NewMesh);
            NewMesh->SetMobility(EComponentMobility::Movable);
            NewMesh->SetStaticMesh(TurretStaticMesh);
            NewMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
            NewMesh->SetupAttachment(AttachParent, TurretAttachSocket);
            NewMesh->SetRelativeLocation(TurretRelativeLocation);
            NewMesh->SetRelativeRotation(TurretRelativeRotation);
            NewMesh->SetRelativeScale3D(TurretRelativeScale);
            NewMesh->SetHiddenInGame(false);
            NewMesh->SetVisibility(true, true);
            NewMesh->SetCastShadow(true);
            NewMesh->RegisterComponent();
            NewMesh->Activate(true);
            GeneratedTurretComponent = NewMesh;
        }
    }
    else if (IsValid(AttachParent) && GeneratedTurretComponent != AttachParent && GeneratedTurretComponent->GetAttachParent() != AttachParent)
    {
        GeneratedTurretComponent->AttachToComponent(AttachParent, FAttachmentTransformRules::KeepRelativeTransform, TurretAttachSocket);
    }

    // If no authored yaw pivot exists, the generated visual itself remains the controllable yaw/pitch component.
    if (!IsValid(RuntimeTurretYawComponent))
    {
        RuntimeTurretYawComponent = GeneratedTurretComponent;
    }

    CacheTurretBaseRotations();
}

USceneComponent* URenegadeHarvesterCombatComponent::ResolveGroundAlignmentVisualComponent()
{
    AActor* Owner = GetOwner();
    if (!IsValid(Owner))
    {
        RuntimeGroundAlignmentVisualComponent = nullptr;
        bGroundAlignmentBaseRotationCached = false;
        return nullptr;
    }

    USceneComponent* Root = Owner->GetRootComponent();
    if (IsValid(RuntimeGroundAlignmentVisualComponent)
        && RuntimeGroundAlignmentVisualComponent->GetOwner() == Owner
        && RuntimeGroundAlignmentVisualComponent != Root)
    {
        return RuntimeGroundAlignmentVisualComponent;
    }

    RuntimeGroundAlignmentVisualComponent = nullptr;
    if (UActorComponent* Component = GroundAlignmentVisualComponent.GetComponent(Owner))
    {
        if (USceneComponent* Scene = Cast<USceneComponent>(Component))
        {
            if (Scene != Root)
            {
                RuntimeGroundAlignmentVisualComponent = Scene;
            }
        }
    }

    if (!IsValid(RuntimeGroundAlignmentVisualComponent) && !GroundAlignmentVisualComponentTag.IsNone())
    {
        const TArray<UActorComponent*> Tagged = Owner->GetComponentsByTag(USceneComponent::StaticClass(), GroundAlignmentVisualComponentTag);
        for (UActorComponent* Component : Tagged)
        {
            if (USceneComponent* Scene = Cast<USceneComponent>(Component))
            {
                if (Scene != Root)
                {
                    RuntimeGroundAlignmentVisualComponent = Scene;
                    break;
                }
            }
        }
    }

    if (!IsValid(RuntimeGroundAlignmentVisualComponent))
    {
        if (ACharacter* CharacterOwner = Cast<ACharacter>(Owner))
        {
            if (USkeletalMeshComponent* CharacterMesh = CharacterOwner->GetMesh())
            {
                RuntimeGroundAlignmentVisualComponent = CharacterMesh;
            }
        }
    }

    return RuntimeGroundAlignmentVisualComponent;
}

void URenegadeHarvesterCombatComponent::CacheGroundAlignmentBaseRotation()
{
    if (USceneComponent* Visual = ResolveGroundAlignmentVisualComponent())
    {
        GroundAlignmentBaseRelativeRotation = Visual->GetRelativeRotation();
        CurrentGroundAlignmentPitch = 0.0f;
        CurrentGroundAlignmentRoll = 0.0f;
        bGroundAlignmentBaseRotationCached = true;
    }
}

bool URenegadeHarvesterCombatComponent::TraceGroundProbe(const FVector& ProbeOffset, FVector& OutHitLocation) const
{
    AActor* Owner = GetOwner();
    UWorld* World = GetWorld();
    if (!IsValid(Owner) || !IsValid(World))
    {
        return false;
    }

    const FVector Start = Owner->GetActorLocation() + ProbeOffset + FVector::UpVector * FMath::Max(0.0f, GroundAlignmentSettings.TraceStartHeight);
    const FVector End = Owner->GetActorLocation() + ProbeOffset - FVector::UpVector * FMath::Max(10.0f, GroundAlignmentSettings.TraceDownDistance);
    FCollisionQueryParams Params(SCENE_QUERY_STAT(RenegadeHarvesterGroundProbe), false, Owner);
    RenegadeHarvesterPrivate::AddOwnerHierarchyToTraceIgnore(Owner, Params);

    FHitResult Hit;
    const bool bHit = World->LineTraceSingleByChannel(Hit, Start, End, GroundAlignmentSettings.TraceChannel, Params);
    if (bHit)
    {
        OutHitLocation = Hit.ImpactPoint;
    }

    if (GroundAlignmentSettings.bDrawDebugGroundProbes)
    {
        DrawDebugLine(World, Start, bHit ? Hit.ImpactPoint : End, bHit ? FColor::Green : FColor::Red, false, 0.0f, 0, 1.5f);
        if (bHit)
        {
            DrawDebugPoint(World, Hit.ImpactPoint, 8.0f, FColor::Cyan, false, 0.0f);
        }
    }
    return bHit;
}

void URenegadeHarvesterCombatComponent::UpdateGroundAlignment(const float DeltaTime)
{
    USceneComponent* Visual = ResolveGroundAlignmentVisualComponent();
    if (!IsValid(Visual))
    {
        return;
    }
    if (!bGroundAlignmentBaseRotationCached)
    {
        CacheGroundAlignmentBaseRotation();
    }

    float TargetPitch = 0.0f;
    float TargetRoll = 0.0f;

    if (GroundAlignmentSettings.bEnableGroundAlignment && GetOwner())
    {
        FVector Forward = GetOwner()->GetActorForwardVector();
        Forward.Z = 0.0f;
        Forward = Forward.GetSafeNormal();
        FVector Right = GetOwner()->GetActorRightVector();
        Right.Z = 0.0f;
        Right = Right.GetSafeNormal();

        if (!Forward.IsNearlyZero() && !Right.IsNearlyZero())
        {
            const float Front = FMath::Max(10.0f, GroundAlignmentSettings.FrontProbeDistance);
            const float Rear = FMath::Max(10.0f, GroundAlignmentSettings.RearProbeDistance);
            const float HalfWidth = FMath::Max(10.0f, GroundAlignmentSettings.HalfTrackWidth);

            FVector FL, FR, RL, RR;
            const bool bFL = TraceGroundProbe(Forward * Front - Right * HalfWidth, FL);
            const bool bFR = TraceGroundProbe(Forward * Front + Right * HalfWidth, FR);
            const bool bRL = TraceGroundProbe(-Forward * Rear - Right * HalfWidth, RL);
            const bool bRR = TraceGroundProbe(-Forward * Rear + Right * HalfWidth, RR);

            float FrontZ = 0.0f, RearZ = 0.0f, LeftZ = 0.0f, RightZ = 0.0f;
            int32 FrontCount = 0, RearCount = 0, LeftCount = 0, RightCount = 0;
            if (bFL) { FrontZ += FL.Z; ++FrontCount; LeftZ += FL.Z; ++LeftCount; }
            if (bFR) { FrontZ += FR.Z; ++FrontCount; RightZ += FR.Z; ++RightCount; }
            if (bRL) { RearZ += RL.Z; ++RearCount; LeftZ += RL.Z; ++LeftCount; }
            if (bRR) { RearZ += RR.Z; ++RearCount; RightZ += RR.Z; ++RightCount; }

            if (FrontCount > 0 && RearCount > 0)
            {
                FrontZ /= static_cast<float>(FrontCount);
                RearZ /= static_cast<float>(RearCount);
                TargetPitch = FMath::RadiansToDegrees(FMath::Atan2(FrontZ - RearZ, Front + Rear));
            }
            if (LeftCount > 0 && RightCount > 0)
            {
                LeftZ /= static_cast<float>(LeftCount);
                RightZ /= static_cast<float>(RightCount);
                // UE FRotator positive Roll is clockwise about +X, so a higher right-side
                // ground contact requires negative roll to lift the visual chassis on that side.
                TargetRoll = FMath::RadiansToDegrees(FMath::Atan2(LeftZ - RightZ, HalfWidth * 2.0f));
            }
        }
    }

    TargetPitch = FMath::Clamp(TargetPitch, -FMath::Abs(GroundAlignmentSettings.MaximumPitchDegrees), FMath::Abs(GroundAlignmentSettings.MaximumPitchDegrees));
    TargetRoll = FMath::Clamp(TargetRoll, -FMath::Abs(GroundAlignmentSettings.MaximumRollDegrees), FMath::Abs(GroundAlignmentSettings.MaximumRollDegrees));

    const float InterpSpeed = FMath::Max(0.0f, GroundAlignmentSettings.RotationInterpSpeed);
    if (InterpSpeed <= KINDA_SMALL_NUMBER)
    {
        CurrentGroundAlignmentPitch = TargetPitch;
        CurrentGroundAlignmentRoll = TargetRoll;
    }
    else
    {
        CurrentGroundAlignmentPitch = FMath::FInterpTo(CurrentGroundAlignmentPitch, TargetPitch, DeltaTime, InterpSpeed);
        CurrentGroundAlignmentRoll = FMath::FInterpTo(CurrentGroundAlignmentRoll, TargetRoll, DeltaTime, InterpSpeed);
    }

    FRotator DesiredRelative = GroundAlignmentBaseRelativeRotation;
    DesiredRelative.Pitch += CurrentGroundAlignmentPitch;
    DesiredRelative.Roll += CurrentGroundAlignmentRoll;
    Visual->SetRelativeRotation(DesiredRelative);
}

void URenegadeHarvesterCombatComponent::SetRuntimeTurretComponents(USceneComponent* YawComponent, USceneComponent* PitchComponent, USceneComponent* MuzzleComponent)
{
    AActor* Owner = GetOwner();
    USceneComponent* Root = IsValid(Owner) ? Owner->GetRootComponent() : nullptr;
    RuntimeTurretYawComponent = IsValid(YawComponent) && YawComponent->GetOwner() == Owner && YawComponent != Root ? YawComponent : nullptr;
    RuntimeTurretPitchComponent = IsValid(PitchComponent) && PitchComponent->GetOwner() == Owner && PitchComponent != Root ? PitchComponent : nullptr;
    RuntimeTurretMuzzleComponent = IsValid(MuzzleComponent) && MuzzleComponent->GetOwner() == Owner && MuzzleComponent != Root ? MuzzleComponent : nullptr;
    bTurretBaseRotationsCached = false;
    CachedTurretYawBaseComponent = nullptr;
    CachedTurretPitchBaseComponent = nullptr;
    ResolveOrCreateTurretComponents();
}

void URenegadeHarvesterCombatComponent::RefreshHarvesterPresentation()
{
    if (IsValid(GeneratedTurretComponent))
    {
        if (RuntimeTurretYawComponent == GeneratedTurretComponent)
        {
            RuntimeTurretYawComponent = nullptr;
        }
        if (RuntimeTurretPitchComponent == GeneratedTurretComponent)
        {
            RuntimeTurretPitchComponent = nullptr;
        }
        GeneratedTurretComponent->DestroyComponent();
        GeneratedTurretComponent = nullptr;
    }

    RuntimeGroundAlignmentVisualComponent = nullptr;
    bGroundAlignmentBaseRotationCached = false;
    bTurretBaseRotationsCached = false;
    CachedTurretYawBaseComponent = nullptr;
    CachedTurretPitchBaseComponent = nullptr;
    ResolveGroundAlignmentVisualComponent();
    CacheGroundAlignmentBaseRotation();
    ResolveOrCreateTurretComponents();
}

void URenegadeHarvesterCombatComponent::SetRuntimeGroundAlignmentVisualComponent(USceneComponent* VisualComponent)
{
    AActor* Owner = GetOwner();
    USceneComponent* Root = IsValid(Owner) ? Owner->GetRootComponent() : nullptr;
    RuntimeGroundAlignmentVisualComponent = IsValid(VisualComponent) && VisualComponent->GetOwner() == Owner && VisualComponent != Root
        ? VisualComponent
        : nullptr;
    bGroundAlignmentBaseRotationCached = false;
    CacheGroundAlignmentBaseRotation();
    ResolveOrCreateTurretComponents();
}

void URenegadeHarvesterCombatComponent::SetTeamId(const FName NewTeamId)
{
    if (!HasAuthority())
    {
        return;
    }
    TeamId = NewTeamId;
    SetTurretTargetInternal(nullptr);
    if (AActor* Owner = GetOwner())
    {
        Owner->ForceNetUpdate();
    }
}

bool URenegadeHarvesterCombatComponent::IsHostileToActor(const AActor* OtherActor) const
{
    if (!IsValid(OtherActor) || OtherActor == GetOwner())
    {
        return false;
    }

    FName OtherTeam = NAME_None;
    if (const URenegadeSoldierCombatComponent* Soldier = OtherActor->FindComponentByClass<URenegadeSoldierCombatComponent>())
    {
        OtherTeam = Soldier->TeamId;
    }
    else if (const URenegadeHarvesterCombatComponent* Harvester = OtherActor->FindComponentByClass<URenegadeHarvesterCombatComponent>())
    {
        OtherTeam = Harvester->TeamId;
    }
    else if (const URenegadeBuildingCombatComponent* Building = OtherActor->FindComponentByClass<URenegadeBuildingCombatComponent>())
    {
        OtherTeam = Building->TeamId;
    }
    else
    {
        return false;
    }

    if (RenegadeHarvesterPrivate::IsNeutralTeamName(TeamId) || RenegadeHarvesterPrivate::IsNeutralTeamName(OtherTeam))
    {
        return false;
    }
    if (TeamId.IsEqual(OtherTeam, ENameCase::IgnoreCase))
    {
        return false;
    }
    return bDifferentNonNeutralTeamsAreEnemies;
}

float URenegadeHarvesterCombatComponent::GetHealthPercent() const
{
    return CurrentHealth / FMath::Max(1.0f, HealthSettings.MaximumHealth);
}

void URenegadeHarvesterCombatComponent::RepairHarvester(const float Amount)
{
    if (HasAuthority() && !bIsDestroyed && Amount > 0.0f)
    {
        ApplyHealthDelta(Amount, nullptr, nullptr);
    }
}

void URenegadeHarvesterCombatComponent::ForceDestroyHarvester(AActor* Destroyer)
{
    if (!HasAuthority() || bIsDestroyed)
    {
        return;
    }
    const float Previous = CurrentHealth;
    CurrentHealth = 0.0f;
    OnHarvesterHealthChanged.Broadcast(Previous, CurrentHealth, Destroyer, Destroyer ? Destroyer->GetInstigatorController() : nullptr);
    BeginHarvesterDestroyed(Destroyer ? Destroyer->GetInstigatorController() : nullptr, Destroyer);
}

FVector URenegadeHarvesterCombatComponent::GetTargetAimLocation() const
{
    AActor* Owner = GetOwner();
    if (!IsValid(Owner))
    {
        return FVector::ZeroVector;
    }

    if (USceneComponent* TargetPoint = ResolveSceneComponent(TargetPointComponent, TargetPointComponentTag, RuntimeTargetPointComponent))
    {
        return TargetPoint->GetComponentTransform().TransformPosition(TargetPointRelativeOffset);
    }

    FVector Origin = Owner->GetActorLocation();
    FVector Extent = FVector::ZeroVector;
    Owner->GetActorBounds(true, Origin, Extent);
    return Origin + TargetSettings.FallbackAimOffset + TargetPointRelativeOffset;
}

FVector URenegadeHarvesterCombatComponent::GetTurretMuzzleLocation() const
{
    // A selected socket on the generated skeletal turret is the most precise muzzle source.
    // This lets the generated visual own the actual barrel endpoint without requiring a separate
    // Blueprint Scene Component to be authored on the Harvester actor.
    if (!TurretMuzzleSocketName.IsNone())
    {
        if (const USkeletalMeshComponent* GeneratedSkeletalTurret = Cast<USkeletalMeshComponent>(GeneratedTurretComponent.Get()))
        {
            if (GeneratedSkeletalTurret->DoesSocketExist(TurretMuzzleSocketName))
            {
                const FTransform SocketWorld = GeneratedSkeletalTurret->GetSocketTransform(TurretMuzzleSocketName, RTS_World);
                return SocketWorld.TransformPosition(TurretMuzzleRelativeOffset);
            }
        }

        // Also support an authored skeletal yaw/pitch component when no generated skeletal visual is used.
        const USkeletalMeshComponent* AuthoredSkeletalTurret = Cast<USkeletalMeshComponent>(RuntimeTurretPitchComponent.Get());
        if (!IsValid(AuthoredSkeletalTurret))
        {
            AuthoredSkeletalTurret = Cast<USkeletalMeshComponent>(RuntimeTurretYawComponent.Get());
        }
        if (IsValid(AuthoredSkeletalTurret) && AuthoredSkeletalTurret->DoesSocketExist(TurretMuzzleSocketName))
        {
            const FTransform SocketWorld = AuthoredSkeletalTurret->GetSocketTransform(TurretMuzzleSocketName, RTS_World);
            return SocketWorld.TransformPosition(TurretMuzzleRelativeOffset);
        }
    }

    if (USceneComponent* Muzzle = ResolveSceneComponent(TurretMuzzleComponent, TurretMuzzleComponentTag, RuntimeTurretMuzzleComponent))
    {
        return Muzzle->GetComponentTransform().TransformPosition(TurretMuzzleRelativeOffset);
    }
    const FVector FallbackBarrelOffset = FVector(80.0f, 0.0f, 0.0f) + TurretMuzzleRelativeOffset;
    if (IsValid(RuntimeTurretPitchComponent))
    {
        return RuntimeTurretPitchComponent->GetComponentTransform().TransformPosition(FallbackBarrelOffset);
    }
    if (IsValid(RuntimeTurretYawComponent))
    {
        return RuntimeTurretYawComponent->GetComponentTransform().TransformPosition(FallbackBarrelOffset);
    }
    return GetOwner() ? GetOwner()->GetActorLocation() + FVector(0.0f, 0.0f, 150.0f) : FVector::ZeroVector;
}

TArray<FString> URenegadeHarvesterCombatComponent::GetGeneratedTurretSocketNames() const
{
    TArray<FString> SocketNames;
    SocketNames.Add(TEXT("None"));

    if (!IsValid(TurretSkeletalMesh))
    {
        return SocketNames;
    }

    const TArray<USkeletalMeshSocket*> ActiveSockets = TurretSkeletalMesh->GetActiveSocketList();
    SocketNames.Reserve(ActiveSockets.Num() + 1);
    for (const USkeletalMeshSocket* Socket : ActiveSockets)
    {
        if (IsValid(Socket) && !Socket->SocketName.IsNone())
        {
            SocketNames.AddUnique(Socket->SocketName.ToString());
        }
    }
    SocketNames.Sort();
    return SocketNames;
}

FVector URenegadeHarvesterCombatComponent::GetCombatAimLocation(const AActor* Target) const
{
    if (!IsValid(Target))
    {
        return FVector::ZeroVector;
    }
    if (const URenegadeHarvesterCombatComponent* Harvester = Target->FindComponentByClass<URenegadeHarvesterCombatComponent>())
    {
        return Harvester->GetTargetAimLocation();
    }
    if (const URenegadeBuildingCombatComponent* Building = Target->FindComponentByClass<URenegadeBuildingCombatComponent>())
    {
        return Building->GetTargetAimLocation();
    }
    FVector Origin = Target->GetActorLocation();
    FVector Extent = FVector::ZeroVector;
    Target->GetActorBounds(true, Origin, Extent);
    return Origin + FVector(0.0f, 0.0f, FMath::Clamp(Extent.Z * 0.35f, 45.0f, 100.0f));
}

bool URenegadeHarvesterCombatComponent::HasLineOfSightToTarget(const AActor* Candidate, FVector* OutAimLocation) const
{
    if (!IsValid(Candidate) || !GetWorld() || !GetOwner())
    {
        return false;
    }
    const FVector Start = GetTurretMuzzleLocation();
    const FVector Aim = GetCombatAimLocation(Candidate);
    if (OutAimLocation)
    {
        *OutAimLocation = Aim;
    }

    FCollisionQueryParams Params(SCENE_QUERY_STAT(RenegadeHarvesterLOS), false, GetOwner());
    RenegadeHarvesterPrivate::AddOwnerHierarchyToTraceIgnore(GetOwner(), Params);
    FHitResult Hit;
    if (!GetWorld()->LineTraceSingleByChannel(Hit, Start, Aim, TurretSettings.TraceChannel, Params))
    {
        return true;
    }
    AActor* HitActor = ResolveDamageActorFromHierarchy(Hit.GetActor());
    return HitActor == Candidate || RenegadeHarvesterPrivate::IsActorInAttachmentHierarchy(Hit.GetActor(), Candidate);
}

bool URenegadeHarvesterCombatComponent::IsValidTurretTarget(const AActor* Candidate) const
{
    if (!TurretSettings.bEnableDefensiveTurret || bIsDestroyed || !IsValid(Candidate) || !GetOwner() || !IsHostileToActor(Candidate))
    {
        return false;
    }

    bool bOperational = false;
    if (const URenegadeSoldierCombatComponent* Soldier = Candidate->FindComponentByClass<URenegadeSoldierCombatComponent>())
    {
        bOperational = Soldier->bRegisterAsCombatTarget && !Soldier->bIsDead;
    }
    else if (TurretSettings.bAllowTargetEnemyHarvesters)
    {
        if (const URenegadeHarvesterCombatComponent* Harvester = Candidate->FindComponentByClass<URenegadeHarvesterCombatComponent>())
        {
            bOperational = Harvester->TargetSettings.bRegisterAsCombatTarget && Harvester->IsOperational();
        }
    }
    if (!bOperational)
    {
        return false;
    }

    const float Range = FMath::Min(FMath::Max(100.0f, TurretSettings.SearchRadius), FMath::Max(100.0f, TurretSettings.MaximumRange));
    return FVector::DistSquared(GetTurretMuzzleLocation(), GetCombatAimLocation(Candidate)) <= FMath::Square(Range);
}

AActor* URenegadeHarvesterCombatComponent::FindBestTurretTarget() const
{
    if (!GetWorld())
    {
        return nullptr;
    }
    URenegadeCombatRegistrySubsystem* Registry = GetWorld()->GetSubsystem<URenegadeCombatRegistrySubsystem>();
    if (!Registry)
    {
        return nullptr;
    }

    const FVector Origin = GetTurretMuzzleLocation();
    float BestScore = TNumericLimits<float>::Max();
    AActor* Best = nullptr;

    TArray<URenegadeSoldierCombatComponent*> Combatants;
    Registry->GetCombatants(Combatants);
    for (URenegadeSoldierCombatComponent* Combatant : Combatants)
    {
        if (!IsValid(Combatant) || !IsValid(Combatant->GetOwner()) || !IsValidTurretTarget(Combatant->GetOwner()))
        {
            continue;
        }
        if (TurretSettings.bRequireLineOfSight && !HasLineOfSightToTarget(Combatant->GetOwner()))
        {
            continue;
        }
        const float DistSq = FVector::DistSquared(Origin, GetCombatAimLocation(Combatant->GetOwner()));
        const float HealthBias = FMath::Clamp(Combatant->GetHealthPercent(), 0.0f, 1.0f) * 12000.0f;
        const float Score = DistSq + HealthBias;
        if (Score < BestScore)
        {
            BestScore = Score;
            Best = Combatant->GetOwner();
        }
    }

    if (TurretSettings.bAllowTargetEnemyHarvesters && (!TurretSettings.bPrioritizeInfantry || !IsValid(Best)))
    {
        TArray<URenegadeHarvesterCombatComponent*> Harvesters;
        Registry->GetHarvesters(Harvesters);
        for (URenegadeHarvesterCombatComponent* Harvester : Harvesters)
        {
            if (!IsValid(Harvester) || Harvester == this || !IsValid(Harvester->GetOwner()) || !IsValidTurretTarget(Harvester->GetOwner()))
            {
                continue;
            }
            if (TurretSettings.bRequireLineOfSight && !HasLineOfSightToTarget(Harvester->GetOwner()))
            {
                continue;
            }
            const float Score = FVector::DistSquared(Origin, Harvester->GetTargetAimLocation())
                + (TurretSettings.bPrioritizeInfantry ? 500000.0f : 0.0f);
            if (Score < BestScore)
            {
                BestScore = Score;
                Best = Harvester->GetOwner();
            }
        }
    }
    return Best;
}

void URenegadeHarvesterCombatComponent::ForceTurretTargetRefresh()
{
    if (HasAuthority())
    {
        RefreshTurretTargeting();
    }
}

void URenegadeHarvesterCombatComponent::RefreshTurretTargeting()
{
    if (!HasAuthority() || bIsDestroyed || !TurretSettings.bEnableDefensiveTurret)
    {
        SetTurretTargetInternal(nullptr);
        return;
    }

    const float Now = GetWorld() ? GetWorld()->GetTimeSeconds() : 0.0f;
    bool bKeep = IsValidTurretTarget(CurrentTurretTarget);
    if (bKeep && TurretSettings.bRequireLineOfSight)
    {
        if (HasLineOfSightToTarget(CurrentTurretTarget))
        {
            LastTargetSeenTime = Now;
        }
        else if ((Now - LastTargetSeenTime) > FMath::Max(0.0f, TurretSettings.LostSightGraceSeconds))
        {
            bKeep = false;
        }
    }
    if (!bKeep)
    {
        SetTurretTargetInternal(FindBestTurretTarget());
    }
}

void URenegadeHarvesterCombatComponent::SetTurretTargetInternal(AActor* NewTarget)
{
    if (!HasAuthority())
    {
        return;
    }
    if (NewTarget && !IsValidTurretTarget(NewTarget))
    {
        NewTarget = nullptr;
    }
    AActor* Previous = CurrentTurretTarget;
    if (Previous == NewTarget)
    {
        return;
    }
    CurrentTurretTarget = NewTarget;
    LastTargetSeenTime = GetWorld() ? GetWorld()->GetTimeSeconds() : 0.0f;
    OnTurretTargetChanged.Broadcast(Previous, CurrentTurretTarget);
    if (AActor* Owner = GetOwner())
    {
        Owner->ForceNetUpdate();
    }
}

void URenegadeHarvesterCombatComponent::CacheTurretBaseRotations()
{
    const bool bYawChanged = CachedTurretYawBaseComponent.Get() != RuntimeTurretYawComponent.Get();
    const bool bPitchChanged = CachedTurretPitchBaseComponent.Get() != RuntimeTurretPitchComponent.Get();
    if (bTurretBaseRotationsCached && !bYawChanged && !bPitchChanged)
    {
        return;
    }

    if (!IsValid(RuntimeTurretYawComponent))
    {
        bTurretBaseRotationsCached = false;
        CachedTurretYawBaseComponent = nullptr;
        CachedTurretPitchBaseComponent = nullptr;
        TurretYawBaseRelativeRotation = FRotator::ZeroRotator;
        TurretPitchBaseRelativeRotation = FRotator::ZeroRotator;
        return;
    }

    TurretYawBaseRelativeRotation = RuntimeTurretYawComponent->GetRelativeRotation().GetNormalized();
    CachedTurretYawBaseComponent = RuntimeTurretYawComponent;

    if (IsValid(RuntimeTurretPitchComponent) && RuntimeTurretPitchComponent != RuntimeTurretYawComponent)
    {
        TurretPitchBaseRelativeRotation = RuntimeTurretPitchComponent->GetRelativeRotation().GetNormalized();
        CachedTurretPitchBaseComponent = RuntimeTurretPitchComponent;
    }
    else
    {
        TurretPitchBaseRelativeRotation = FRotator::ZeroRotator;
        CachedTurretPitchBaseComponent = nullptr;
    }

    bTurretBaseRotationsCached = true;
}

void URenegadeHarvesterCombatComponent::UpdateTurretRotation(const float DeltaTime)
{
    if (!TurretSettings.bEnableDefensiveTurret || !IsValid(CurrentTurretTarget) || !GetOwner())
    {
        return;
    }
    if (!IsValid(RuntimeTurretYawComponent))
    {
        ResolveOrCreateTurretComponents();
    }
    if (!IsValid(RuntimeTurretYawComponent))
    {
        return;
    }

    // Keep the authored mount rotation cached only for roll stabilization. Target tracking itself uses
    // the proven world-space solver from v1.7.10, which works with arbitrary authored pivot rotations
    // and both nested and independently-authored yaw/pitch component layouts.
    CacheTurretBaseRotations();

    const FVector Pivot = RuntimeTurretYawComponent->GetComponentLocation();
    const FVector ToTarget = GetCombatAimLocation(CurrentTurretTarget) - Pivot;
    if (ToTarget.IsNearlyZero())
    {
        return;
    }

    FRotator DesiredWorld = ToTarget.Rotation();
    if (TurretSettings.bLimitYawRelativeToHarvester)
    {
        const float OwnerYaw = GetOwner()->GetActorRotation().Yaw;
        const float DeltaYaw = FMath::FindDeltaAngleDegrees(OwnerYaw, DesiredWorld.Yaw);
        DesiredWorld.Yaw = OwnerYaw + FMath::Clamp(
            DeltaYaw,
            -FMath::Abs(TurretSettings.MaximumYawOffsetDegrees),
            FMath::Abs(TurretSettings.MaximumYawOffsetDegrees));
    }
    DesiredWorld.Pitch = FMath::ClampAngle(
        DesiredWorld.Pitch,
        TurretSettings.MinimumPitchDegrees,
        TurretSettings.MaximumPitchDegrees);

    const float YawStep = FMath::Max(1.0f, TurretSettings.YawRotationSpeedDegreesPerSecond) * DeltaTime;
    const float PitchStep = FMath::Max(1.0f, TurretSettings.PitchRotationSpeedDegreesPerSecond) * DeltaTime;

    FRotator CurrentYawWorld = RuntimeTurretYawComponent->GetComponentRotation();
    CurrentYawWorld.Yaw = FMath::FixedTurn(CurrentYawWorld.Yaw, DesiredWorld.Yaw, YawStep);

    if (IsValid(RuntimeTurretPitchComponent) && RuntimeTurretPitchComponent != RuntimeTurretYawComponent)
    {
        // Preserve the targeting behavior that was confirmed working through v1.7.10: yaw is solved
        // in world space so authored pivot orientation and terrain-aligned parents cannot invalidate it.
        RuntimeTurretYawComponent->SetWorldRotation(CurrentYawWorld);

        // World-space yaw can cause a terrain-aligned parent to be compensated as relative roll.
        // Correct ONLY that roll back to the authored mount value. Roll does not determine the
        // component forward direction, so this removes long-term sideways drift without breaking aim.
        if (bTurretBaseRotationsCached)
        {
            FRotator StableYawRelative = RuntimeTurretYawComponent->GetRelativeRotation();
            StableYawRelative.Roll = TurretYawBaseRelativeRotation.Roll;
            RuntimeTurretYawComponent->SetRelativeRotation(StableYawRelative.GetNormalized());
        }

        FRotator PitchRelative = RuntimeTurretPitchComponent->GetRelativeRotation();
        PitchRelative.Pitch = FMath::FixedTurn(PitchRelative.Pitch, DesiredWorld.Pitch, PitchStep);
        if (bTurretBaseRotationsCached && CachedTurretPitchBaseComponent.Get() == RuntimeTurretPitchComponent.Get())
        {
            PitchRelative.Roll = TurretPitchBaseRelativeRotation.Roll;
        }
        RuntimeTurretPitchComponent->SetRelativeRotation(PitchRelative.GetNormalized());
    }
    else
    {
        CurrentYawWorld.Pitch = FMath::FixedTurn(CurrentYawWorld.Pitch, DesiredWorld.Pitch, PitchStep);
        RuntimeTurretYawComponent->SetWorldRotation(CurrentYawWorld);

        if (bTurretBaseRotationsCached)
        {
            FRotator StableRelative = RuntimeTurretYawComponent->GetRelativeRotation();
            StableRelative.Roll = TurretYawBaseRelativeRotation.Roll;
            RuntimeTurretYawComponent->SetRelativeRotation(StableRelative.GetNormalized());
        }
    }
}

void URenegadeHarvesterCombatComponent::TryFireTurret()
{
    if (!HasAuthority() || bIsDestroyed || !TurretSettings.bEnableDefensiveTurret || !IsValidTurretTarget(CurrentTurretTarget) || !GetWorld())
    {
        return;
    }
    const float Now = GetWorld()->GetTimeSeconds();
    if (Now < NextTurretFireTime)
    {
        return;
    }
    if (TurretSettings.bRequireLineOfSight && !HasLineOfSightToTarget(CurrentTurretTarget))
    {
        return;
    }

    const FVector DesiredDirection = (GetCombatAimLocation(CurrentTurretTarget) - GetTurretMuzzleLocation()).GetSafeNormal();
    const USceneComponent* AimComponent = IsValid(RuntimeTurretPitchComponent) ? RuntimeTurretPitchComponent.Get() : RuntimeTurretYawComponent.Get();
    if (IsValid(AimComponent) && !DesiredDirection.IsNearlyZero())
    {
        const float Dot = FMath::Clamp(FVector::DotProduct(AimComponent->GetForwardVector().GetSafeNormal(), DesiredDirection), -1.0f, 1.0f);
        const float AlignmentDegrees = FMath::RadiansToDegrees(FMath::Acos(Dot));
        if (AlignmentDegrees > FMath::Clamp(TurretSettings.FireAlignmentToleranceDegrees, 0.1f, 45.0f))
        {
            return;
        }
    }

    FireTurretShot();
    const float RPM = FMath::Max(1.0f, TurretSettings.RoundsPerMinute);
    NextTurretFireTime = Now + (60.0f / RPM);
}

AActor* URenegadeHarvesterCombatComponent::ResolveDamageActorFromHierarchy(AActor* HitActor) const
{
    if (!IsValid(HitActor))
    {
        return nullptr;
    }

    TArray<AActor*> PendingActors;
    TSet<AActor*> VisitedActors;
    PendingActors.Add(HitActor);
    constexpr int32 MaximumActorsToInspect = 24;
    int32 InspectedActors = 0;

    while (PendingActors.Num() > 0 && InspectedActors < MaximumActorsToInspect)
    {
        AActor* Candidate = PendingActors.Pop(EAllowShrinking::No);
        if (!IsValid(Candidate) || VisitedActors.Contains(Candidate))
        {
            continue;
        }
        VisitedActors.Add(Candidate);
        ++InspectedActors;

        if (Candidate->FindComponentByClass<URenegadeSoldierCombatComponent>()
            || Candidate->FindComponentByClass<URenegadeHarvesterCombatComponent>()
            || Candidate->FindComponentByClass<URenegadeBuildingCombatComponent>())
        {
            return Candidate;
        }
        if (AActor* ParentActor = Candidate->GetAttachParentActor())
        {
            PendingActors.Add(ParentActor);
        }
        if (AActor* OwnerActor = Candidate->GetOwner())
        {
            PendingActors.Add(OwnerActor);
        }
        if (APawn* InstigatorPawn = Candidate->GetInstigator())
        {
            PendingActors.Add(InstigatorPawn);
        }
    }
    return HitActor;
}

void URenegadeHarvesterCombatComponent::FireTurretShot()
{
    if (!GetWorld() || !GetOwner() || !IsValid(CurrentTurretTarget))
    {
        return;
    }

    const FVector Start = GetTurretMuzzleLocation();
    FVector Direction = (GetCombatAimLocation(CurrentTurretTarget) - Start).GetSafeNormal();
    if (TurretSettings.SpreadDegrees > KINDA_SMALL_NUMBER)
    {
        Direction = FMath::VRandCone(Direction, FMath::DegreesToRadians(TurretSettings.SpreadDegrees));
    }
    const FVector DesiredEnd = Start + Direction * FMath::Max(100.0f, TurretSettings.MaximumRange);

    FCollisionQueryParams Params(SCENE_QUERY_STAT(RenegadeHarvesterTurretShot), true, GetOwner());
    RenegadeHarvesterPrivate::AddOwnerHierarchyToTraceIgnore(GetOwner(), Params);
    FHitResult Hit;
    const bool bHit = GetWorld()->LineTraceSingleByChannel(Hit, Start, DesiredEnd, TurretSettings.TraceChannel, Params);
    const FVector End = bHit ? Hit.ImpactPoint : DesiredEnd;

    if (bHit && IsValid(Hit.GetActor()))
    {
        AActor* DamageActor = ResolveDamageActorFromHierarchy(Hit.GetActor());
        if (IsValid(DamageActor) && (TurretSettings.bAllowFriendlyFire || IsHostileToActor(DamageActor)))
        {
            TSubclassOf<UDamageType> DamageType = TurretSettings.DamageTypeClass;
            if (!DamageType)
            {
                DamageType = UDamageType::StaticClass();
            }

            URenegadeSoldierCombatComponent* HitSoldier = DamageActor->FindComponentByClass<URenegadeSoldierCombatComponent>();
            if (IsValid(HitSoldier))
            {
                HitSoldier->PrepareIncomingCombatHit(Hit, Direction);
            }

            UGameplayStatics::ApplyPointDamage(
                DamageActor,
                FMath::Max(0.0f, TurretSettings.DamagePerShot),
                Direction,
                Hit,
                GetOwner()->GetInstigatorController(),
                GetOwner(),
                DamageType);

            if (IsValid(HitSoldier))
            {
                HitSoldier->ClearIncomingCombatHit();
            }
        }
    }

    MulticastTurretFired(CurrentTurretTarget, Start, End, bHit);
    if (TurretSettings.bDrawDebug)
    {
        DrawDebugLine(GetWorld(), Start, End, bHit ? FColor::Green : FColor::Red, false, 0.75f, 0, 1.5f);
    }
}

UStaticMeshComponent* URenegadeHarvesterCombatComponent::AcquireBulletVisualComponent(int32& OutIndex)
{
    OutIndex = INDEX_NONE;
    if (!GetOwner() || !TurretSettings.bUseBulletMesh || !IsValid(TurretSettings.BulletMesh))
    {
        return nullptr;
    }

    for (int32 Index = 0; Index < BulletVisualStates.Num(); ++Index)
    {
        if (!BulletVisualStates[Index].bActive && IsValid(BulletVisualComponents[Index]))
        {
            OutIndex = Index;
            return BulletVisualComponents[Index];
        }
    }

    if (BulletVisualComponents.Num() >= FMath::Clamp(TurretSettings.BulletVisualPoolSize, 1, 128))
    {
        return nullptr;
    }

    UStaticMeshComponent* NewComponent = NewObject<UStaticMeshComponent>(GetOwner(), NAME_None, RF_Transient);
    if (!IsValid(NewComponent))
    {
        return nullptr;
    }
    GetOwner()->AddInstanceComponent(NewComponent);
    NewComponent->SetMobility(EComponentMobility::Movable);
    NewComponent->SetStaticMesh(TurretSettings.BulletMesh);
    NewComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    NewComponent->SetGenerateOverlapEvents(false);
    NewComponent->SetCanEverAffectNavigation(false);
    NewComponent->SetCastShadow(false);
    NewComponent->SetRelativeScale3D(TurretSettings.BulletMeshScale);
    if (IsValid(TurretSettings.BulletMaterialOverride))
    {
        NewComponent->SetMaterial(0, TurretSettings.BulletMaterialOverride);
    }
    NewComponent->RegisterComponent();
    NewComponent->SetVisibility(false, true);

    OutIndex = BulletVisualComponents.Add(NewComponent);
    BulletVisualStates.AddDefaulted();
    return NewComponent;
}

void URenegadeHarvesterCombatComponent::SpawnBulletVisual(const FVector& Start, const FVector& End, const bool bSpawnImpactEffect)
{
    if (!GetWorld() || GetWorld()->GetNetMode() == NM_DedicatedServer)
    {
        return;
    }

    int32 Index = INDEX_NONE;
    UStaticMeshComponent* MeshComponent = AcquireBulletVisualComponent(Index);
    if (!IsValid(MeshComponent) || Index == INDEX_NONE)
    {
        if (bSpawnImpactEffect)
        {
            SpawnImpactEffects(End, (End - Start).Rotation());
        }
        return;
    }

    FRenegadeHarvesterBulletVisualState& State = BulletVisualStates[Index];
    State.StartLocation = Start;
    State.EndLocation = End;
    State.TravelRotation = (End - Start).Rotation() + TurretSettings.BulletMeshRotationOffset;
    State.ElapsedSeconds = 0.0f;
    State.DurationSeconds = FVector::Distance(Start, End) / FMath::Max(1.0f, TurretSettings.BulletVisualSpeed);
    State.bActive = true;
    State.bSpawnImpactOnArrival = bSpawnImpactEffect;

    MeshComponent->SetStaticMesh(TurretSettings.BulletMesh);
    MeshComponent->SetWorldLocationAndRotation(Start, State.TravelRotation);
    MeshComponent->SetWorldScale3D(TurretSettings.BulletMeshScale);
    MeshComponent->SetVisibility(true, true);
}

void URenegadeHarvesterCombatComponent::UpdateBulletVisuals(const float DeltaTime)
{
    for (int32 Index = 0; Index < BulletVisualStates.Num(); ++Index)
    {
        FRenegadeHarvesterBulletVisualState& State = BulletVisualStates[Index];
        UStaticMeshComponent* Mesh = BulletVisualComponents.IsValidIndex(Index) ? BulletVisualComponents[Index].Get() : nullptr;
        if (!State.bActive || !IsValid(Mesh))
        {
            continue;
        }
        State.ElapsedSeconds += DeltaTime;
        const float Alpha = State.DurationSeconds <= KINDA_SMALL_NUMBER ? 1.0f : FMath::Clamp(State.ElapsedSeconds / State.DurationSeconds, 0.0f, 1.0f);
        Mesh->SetWorldLocation(FMath::Lerp(State.StartLocation, State.EndLocation, Alpha));
        Mesh->SetWorldRotation(State.TravelRotation);
        if (Alpha >= 1.0f)
        {
            DeactivateBulletVisual(Index, State.bSpawnImpactOnArrival);
        }
    }
}

void URenegadeHarvesterCombatComponent::DeactivateBulletVisual(const int32 Index, const bool bSpawnImpactEffect)
{
    if (!BulletVisualStates.IsValidIndex(Index))
    {
        return;
    }
    const FVector End = BulletVisualStates[Index].EndLocation;
    const FRotator Rotation = BulletVisualStates[Index].TravelRotation;
    BulletVisualStates[Index].bActive = false;
    if (BulletVisualComponents.IsValidIndex(Index) && IsValid(BulletVisualComponents[Index]))
    {
        BulletVisualComponents[Index]->SetVisibility(false, true);
    }
    if (bSpawnImpactEffect)
    {
        SpawnImpactEffects(End, Rotation);
    }
}

void URenegadeHarvesterCombatComponent::SpawnMuzzleEffects(const FVector& Location, const FRotator& Rotation) const
{
    if (!GetWorld() || GetWorld()->GetNetMode() == NM_DedicatedServer)
    {
        return;
    }
    if (IsValid(TurretSettings.MuzzleCascade))
    {
        UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), TurretSettings.MuzzleCascade, FTransform(Rotation, Location));
    }
    if (IsValid(TurretSettings.MuzzleNiagara))
    {
        UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, TurretSettings.MuzzleNiagara, Location, Rotation);
    }
    if (IsValid(TurretSettings.FireSound))
    {
        UGameplayStatics::PlaySoundAtLocation(this, TurretSettings.FireSound, Location, FMath::Max(0.0f, TurretSettings.FireSoundVolumeMultiplier));
    }
}

void URenegadeHarvesterCombatComponent::SpawnImpactEffects(const FVector& Location, const FRotator& Rotation) const
{
    if (!GetWorld() || GetWorld()->GetNetMode() == NM_DedicatedServer)
    {
        return;
    }
    if (IsValid(TurretSettings.ImpactCascade))
    {
        UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), TurretSettings.ImpactCascade, FTransform(Rotation, Location));
    }
    if (IsValid(TurretSettings.ImpactNiagara))
    {
        UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, TurretSettings.ImpactNiagara, Location, Rotation);
    }
}

void URenegadeHarvesterCombatComponent::MulticastTurretFired_Implementation(AActor* Target, const FVector_NetQuantize TraceStart, const FVector_NetQuantize TraceEnd, const bool bSpawnImpactEffect)
{
    const FRotator Rotation = (FVector(TraceEnd) - FVector(TraceStart)).Rotation();
    SpawnMuzzleEffects(TraceStart, Rotation);
    SpawnBulletVisual(TraceStart, TraceEnd, bSpawnImpactEffect);
    OnTurretFired.Broadcast(Target, TraceStart, TraceEnd);
}

void URenegadeHarvesterCombatComponent::HandleOwnerAnyDamage(
    AActor* DamagedActor,
    const float Damage,
    const UDamageType* DamageType,
    AController* InstigatedBy,
    AActor* DamageCauser)
{
    (void)DamagedActor;
    (void)DamageType;
    if (!HasAuthority() || bIsDestroyed || !HealthSettings.bCanBeDamaged || Damage <= 0.0f)
    {
        return;
    }
    ApplyHealthDelta(-Damage * FMath::Max(0.0f, HealthSettings.IncomingDamageMultiplier), InstigatedBy, DamageCauser);
}

void URenegadeHarvesterCombatComponent::ApplyHealthDelta(const float Delta, AController* InstigatedBy, AActor* DamageCauser)
{
    if (!HasAuthority() || bIsDestroyed || FMath::IsNearlyZero(Delta))
    {
        return;
    }
    const float Previous = CurrentHealth;
    CurrentHealth = FMath::Clamp(CurrentHealth + Delta, 0.0f, FMath::Max(1.0f, HealthSettings.MaximumHealth));
    if (FMath::IsNearlyEqual(Previous, CurrentHealth))
    {
        return;
    }

    OnHarvesterHealthChanged.Broadcast(Previous, CurrentHealth, DamageCauser, InstigatedBy);
    if (Delta < 0.0f)
    {
        RequestUnderAttackAnnouncement(DamageCauser, -Delta);
    }
    RefreshCriticalHealthState(DamageCauser);

    if (CurrentHealth <= 0.0f)
    {
        BeginHarvesterDestroyed(InstigatedBy, DamageCauser);
        return;
    }
    if (AActor* Owner = GetOwner())
    {
        Owner->ForceNetUpdate();
    }
}

void URenegadeHarvesterCombatComponent::RefreshCriticalHealthState(AActor* DamageCauser)
{
    (void)DamageCauser;
    if (!HasAuthority() || bIsDestroyed)
    {
        return;
    }
    const bool bNewCritical = GetHealthPercent() <= FMath::Clamp(HealthSettings.CriticalHealthPercent, 0.01f, 0.99f);
    if (bNewCritical == bIsCriticalHealth)
    {
        return;
    }
    bIsCriticalHealth = bNewCritical;
    if (bIsCriticalHealth)
    {
        MulticastHarvesterCritical(GetTargetAimLocation());
    }
}

void URenegadeHarvesterCombatComponent::RequestUnderAttackAnnouncement(AActor* Attacker, const float Damage)
{
    if (!GetWorld())
    {
        return;
    }
    const float Now = GetWorld()->GetTimeSeconds();
    if ((Now - LastUnderAttackRequestTime) < FMath::Max(0.0f, AudioSettings.UnderAttackCooldownSeconds))
    {
        OnHarvesterUnderAttack.Broadcast(Attacker, Damage);
        return;
    }
    LastUnderAttackRequestTime = Now;
    MulticastHarvesterUnderAttack(Attacker, Damage, GetTargetAimLocation());
}

FName URenegadeHarvesterCombatComponent::ResolveLocalEvaListenerTeam() const
{
    if (!GetWorld() || GetWorld()->GetNetMode() == NM_DedicatedServer)
    {
        return NAME_None;
    }
    if (APawn* LocalPawn = UGameplayStatics::GetPlayerPawn(this, 0))
    {
        if (const URenegadeSoldierCombatComponent* Combat = LocalPawn->FindComponentByClass<URenegadeSoldierCombatComponent>())
        {
            return Combat->TeamId;
        }
    }
    return NAME_None;
}

USoundBase* URenegadeHarvesterCombatComponent::ResolveEvaSoundForLocalListener(
    const FRenegadeHarvesterEvaSoundSet& TeamSounds,
    USoundBase* FallbackSound) const
{
    if (!AudioSettings.bUseTeamAwareEvaSounds)
    {
        return FallbackSound;
    }
    const FName ListenerTeam = ResolveLocalEvaListenerTeam();
    if (RenegadeHarvesterPrivate::IsNeutralTeamName(ListenerTeam) || RenegadeHarvesterPrivate::IsNeutralTeamName(TeamId))
    {
        return FallbackSound;
    }
    const bool bFriendly = ListenerTeam.IsEqual(TeamId, ENameCase::IgnoreCase);
    USoundBase* Selected = nullptr;
    if (ListenerTeam.IsEqual(FName(TEXT("GDI")), ENameCase::IgnoreCase))
    {
        Selected = bFriendly ? TeamSounds.GDIFriendlyHarvesterSound.Get() : TeamSounds.GDIEnemyHarvesterSound.Get();
    }
    else if (ListenerTeam.IsEqual(FName(TEXT("Nod")), ENameCase::IgnoreCase))
    {
        Selected = bFriendly ? TeamSounds.NodFriendlyHarvesterSound.Get() : TeamSounds.NodEnemyHarvesterSound.Get();
    }
    return IsValid(Selected) ? Selected : FallbackSound;
}

void URenegadeHarvesterCombatComponent::TryPlayEvaAnnouncement(USoundBase* Sound, const FVector& Location, const float Volume, const int32 Priority) const
{
    if (!IsValid(Sound) || !GetWorld())
    {
        return;
    }
    if (URenegadeCombatRegistrySubsystem* Registry = GetWorld()->GetSubsystem<URenegadeCombatRegistrySubsystem>())
    {
        Registry->TryPlayGlobalBuildingEvaSound(
            Sound,
            Location,
            FMath::Max(0.0f, Volume),
            1.0f,
            Priority == 0 ? 0.20f : 0.35f,
            AudioSettings.Attenuation,
            AudioSettings.Concurrency,
            GetOwner(),
            Priority,
            true);
    }
}

void URenegadeHarvesterCombatComponent::MulticastHarvesterUnderAttack_Implementation(AActor* Attacker, const float Damage, const FVector_NetQuantize SoundLocation)
{
    OnHarvesterUnderAttack.Broadcast(Attacker, Damage);
    TryPlayEvaAnnouncement(
        ResolveEvaSoundForLocalListener(AudioSettings.UnderAttackEvaSounds, AudioSettings.UnderAttackSound),
        SoundLocation,
        AudioSettings.UnderAttackVolumeMultiplier,
        0);
}

void URenegadeHarvesterCombatComponent::MulticastHarvesterCritical_Implementation(const FVector_NetQuantize SoundLocation)
{
    TryPlayEvaAnnouncement(
        ResolveEvaSoundForLocalListener(AudioSettings.CriticalEvaSounds, AudioSettings.CriticalHealthSound),
        SoundLocation,
        1.0f,
        1);
}

void URenegadeHarvesterCombatComponent::MulticastHarvesterDestroyed_Implementation(AActor* Destroyer, const FVector_NetQuantize EffectLocation)
{
    if (GetWorld() && GetWorld()->GetNetMode() != NM_DedicatedServer)
    {
        if (IsValid(DestructionSettings.ExplosionCascade))
        {
            UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), DestructionSettings.ExplosionCascade, FTransform(FRotator::ZeroRotator, EffectLocation));
        }
        if (IsValid(DestructionSettings.ExplosionNiagara))
        {
            UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, DestructionSettings.ExplosionNiagara, EffectLocation);
        }
        if (IsValid(DestructionSettings.ExplosionSound))
        {
            UGameplayStatics::PlaySoundAtLocation(this, DestructionSettings.ExplosionSound, EffectLocation);
        }
    }
    TryPlayEvaAnnouncement(
        ResolveEvaSoundForLocalListener(AudioSettings.DestroyedEvaSounds, AudioSettings.DestroyedSound),
        EffectLocation,
        AudioSettings.DestroyedSoundVolumeMultiplier,
        2);
    OnHarvesterDestroyed.Broadcast(Destroyer);
}

void URenegadeHarvesterCombatComponent::SpawnReplicatedWreck(const FTransform& DeathTransform)
{
    if (!HasAuthority() || !GetWorld() || (!IsValid(DestructionSettings.DestroyedWreckStaticMesh) && !IsValid(DestructionSettings.DestroyedWreckSkeletalMesh)))
    {
        return;
    }
    TSubclassOf<ARenegadeHarvesterWreck> ClassToSpawn = WreckActorClass;
    if (!ClassToSpawn)
    {
        ClassToSpawn = ARenegadeHarvesterWreck::StaticClass();
    }
    ARenegadeHarvesterWreck* Wreck = GetWorld()->SpawnActorDeferred<ARenegadeHarvesterWreck>(ClassToSpawn, DeathTransform, GetOwner(), nullptr, ESpawnActorCollisionHandlingMethod::AlwaysSpawn);
    if (!Wreck)
    {
        return;
    }
    Wreck->WreckStaticMesh = DestructionSettings.DestroyedWreckStaticMesh;
    Wreck->WreckSkeletalMesh = DestructionSettings.DestroyedWreckSkeletalMesh;
    Wreck->WreckRelativeLocation = DestructionSettings.WreckRelativeLocation;
    Wreck->WreckRelativeRotation = DestructionSettings.WreckRelativeRotation;
    Wreck->WreckScale = DestructionSettings.WreckScale;
    Wreck->CleanupSeconds = DestructionSettings.WreckCleanupSeconds;
    Wreck->bEnableWreckCollision = DestructionSettings.bEnableWreckCollision;
    Wreck->WreckCollisionProfileName = DestructionSettings.WreckCollisionProfileName;
    Wreck->SmokeCascade = DestructionSettings.WreckSmokeCascade;
    Wreck->SmokeNiagara = DestructionSettings.WreckSmokeNiagara;
    Wreck->SmokeRelativeLocation = DestructionSettings.WreckSmokeRelativeLocation;
    UGameplayStatics::FinishSpawningActor(Wreck, DeathTransform);
}

void URenegadeHarvesterCombatComponent::BeginHarvesterDestroyed(AController* InstigatedBy, AActor* Destroyer)
{
    (void)InstigatedBy;
    if (!HasAuthority() || bIsDestroyed || !GetOwner())
    {
        return;
    }
    bIsDestroyed = true;
    bIsCriticalHealth = false;
    CurrentHealth = 0.0f;
    ReleaseHarvestPointReservation();
    ReleaseRefineryDockReservation();
    SetSplineExternalMovementClaim(false);
    SetLifecycleStateInternal(ERenegadeHarvesterLifecycleState::Destroyed);
    SetTurretTargetInternal(nullptr);

    const FTransform DeathTransform = GetOwner()->GetActorTransform();
    SpawnReplicatedWreck(DeathTransform);
    MulticastHarvesterDestroyed(Destroyer, GetTargetAimLocation());

    if (URenegadeBuildingCombatComponent* Refinery = GetOwningRefinery())
    {
        Refinery->NotifyHarvesterDestroyed(GetOwner());
    }

    GetOwner()->SetActorEnableCollision(false);
    GetOwner()->SetActorHiddenInGame(true);
    GetOwner()->ForceNetUpdate();

    if (UWorld* World = GetWorld())
    {
        World->GetTimerManager().SetTimer(DestroyOwnerTimer, this, &URenegadeHarvesterCombatComponent::DestroyOwnerAfterDeath, 0.25f, false);
    }
}

void URenegadeHarvesterCombatComponent::DestroyOwnerAfterDeath()
{
    if (HasAuthority() && IsValid(GetOwner()))
    {
        GetOwner()->Destroy();
    }
}

void URenegadeHarvesterCombatComponent::SetOwningRefinery(URenegadeBuildingCombatComponent* RefineryComponent)
{
    if (!HasAuthority())
    {
        return;
    }
    OwningRefineryActor = IsValid(RefineryComponent) ? RefineryComponent->GetOwner() : nullptr;
    if (AActor* Owner = GetOwner())
    {
        Owner->ForceNetUpdate();
    }
}

URenegadeBuildingCombatComponent* URenegadeHarvesterCombatComponent::GetOwningRefinery() const
{
    return IsValid(OwningRefineryActor) ? OwningRefineryActor->FindComponentByClass<URenegadeBuildingCombatComponent>() : nullptr;
}

void URenegadeHarvesterCombatComponent::SetAssignedHarvestPoint(ARenegadeHarvestPoint* NewHarvestPoint)
{
    if (!HasAuthority())
    {
        return;
    }

    if (AssignedHarvestPoint == NewHarvestPoint)
    {
        return;
    }

    ReleaseHarvestPointReservation();
    AssignedHarvestPoint = NewHarvestPoint;
    if (AActor* Owner = GetOwner())
    {
        Owner->ForceNetUpdate();
    }
}

ARenegadeHarvestPoint* URenegadeHarvesterCombatComponent::FindNearestCompatibleHarvestPoint()
{
    if (!HasAuthority() || !GetWorld() || !IsValid(GetOwner()))
    {
        return AssignedHarvestPoint;
    }

    ARenegadeHarvestPoint* BestPoint = nullptr;
    const FVector Origin = GetOwner()->GetActorLocation();
    const float MaxDistanceSq = FMath::Square(FMath::Max(100.0f, HarvestPointSearchRadius));
    float BestDistanceSq = MaxDistanceSq;

    for (TActorIterator<ARenegadeHarvestPoint> It(GetWorld()); It; ++It)
    {
        ARenegadeHarvestPoint* Candidate = *It;
        if (!IsValid(Candidate)
            || !Candidate->IsCompatibleWithTeam(TeamId)
            || !Candidate->CanBeUsedByHarvester(GetOwner()))
        {
            continue;
        }
        if (!RequiredHarvestPointGroup.IsNone() && Candidate->HarvestPointGroup != RequiredHarvestPointGroup)
        {
            continue;
        }

        const float DistanceSq = FVector::DistSquared2D(Origin, Candidate->GetHarvestLocation());
        if (DistanceSq <= BestDistanceSq)
        {
            BestDistanceSq = DistanceSq;
            BestPoint = Candidate;
        }
    }

    SetAssignedHarvestPoint(BestPoint);
    LastHarvestPointSearchWorldTime = GetWorld()->GetTimeSeconds();
    return AssignedHarvestPoint;
}

void URenegadeHarvesterCombatComponent::SetAssignedRefineryDockPoint(ARenegadeRefineryDockPoint* NewDockPoint)
{
    if (!HasAuthority())
    {
        return;
    }
    if (AssignedRefineryDockPoint == NewDockPoint)
    {
        return;
    }
    ReleaseRefineryDockReservation();
    AssignedRefineryDockPoint = NewDockPoint;
    if (!IsValid(OwningRefineryActor) && IsValid(NewDockPoint) && IsValid(NewDockPoint->OwningRefineryActor))
    {
        OwningRefineryActor = NewDockPoint->OwningRefineryActor;
    }
    if (AActor* Owner = GetOwner())
    {
        Owner->ForceNetUpdate();
    }
}

ARenegadeRefineryDockPoint* URenegadeHarvesterCombatComponent::FindNearestCompatibleRefineryDockPoint()
{
    if (!HasAuthority() || !GetWorld() || !IsValid(GetOwner()))
    {
        return AssignedRefineryDockPoint;
    }

    if (URenegadeBuildingCombatComponent* Refinery = GetOwningRefinery())
    {
        if (ARenegadeRefineryDockPoint* RefineryPoint = Refinery->ResolveHarvesterRefineryDockPoint())
        {
            SetAssignedRefineryDockPoint(RefineryPoint);
            LastRefineryDockPointSearchWorldTime = GetWorld()->GetTimeSeconds();
            return AssignedRefineryDockPoint;
        }
    }

    ARenegadeRefineryDockPoint* BestPoint = nullptr;
    const FVector Origin = GetOwner()->GetActorLocation();
    const float MaxDistanceSq = FMath::Square(FMath::Max(100.0f, RefineryDockPointSearchRadius));
    float BestDistanceSq = MaxDistanceSq;
    for (TActorIterator<ARenegadeRefineryDockPoint> It(GetWorld()); It; ++It)
    {
        ARenegadeRefineryDockPoint* Candidate = *It;
        if (!IsValid(Candidate)
            || !Candidate->IsCompatibleWithTeam(TeamId)
            || !Candidate->CanBeUsedByHarvester(GetOwner()))
        {
            continue;
        }
        if (!RequiredRefineryDockPointGroup.IsNone() && Candidate->DockPointGroup != RequiredRefineryDockPointGroup)
        {
            continue;
        }
        if (IsValid(OwningRefineryActor) && IsValid(Candidate->OwningRefineryActor) && Candidate->OwningRefineryActor != OwningRefineryActor)
        {
            continue;
        }
        const float DistanceSq = FVector::DistSquared2D(Origin, Candidate->GetDockTransform().GetLocation());
        if (DistanceSq <= BestDistanceSq)
        {
            BestDistanceSq = DistanceSq;
            BestPoint = Candidate;
        }
    }

    SetAssignedRefineryDockPoint(BestPoint);
    LastRefineryDockPointSearchWorldTime = GetWorld()->GetTimeSeconds();
    return AssignedRefineryDockPoint;
}

bool URenegadeHarvesterCombatComponent::HasUsableSplineRoute() const
{
    if (!IsValid(GetOwner()))
    {
        return false;
    }

    TArray<UActorComponent*> Components;
    GetOwner()->GetComponents(Components);
    static const FName CandidatePathProperties[] =
    {
        TEXT("AssignedPath"),
        TEXT("CurrentPath"),
        TEXT("ActivePath")
    };
    static const FName CandidateStateProperties[] =
    {
        TEXT("FollowState"),
        TEXT("CurrentFollowState"),
        TEXT("State")
    };

    for (UActorComponent* Component : Components)
    {
        if (!IsValid(Component) || Component == this)
        {
            continue;
        }
        const FString ClassName = Component->GetClass()->GetName();
        if (!ClassName.Contains(TEXT("RenegadeSplineFollower"), ESearchCase::IgnoreCase))
        {
            continue;
        }

        bool bHasAssignedPath = false;
        for (const FName PropertyName : CandidatePathProperties)
        {
            if (FObjectProperty* PathProperty = FindFProperty<FObjectProperty>(Component->GetClass(), PropertyName))
            {
                if (IsValid(PathProperty->GetObjectPropertyValue_InContainer(Component)))
                {
                    bHasAssignedPath = true;
                    break;
                }
            }
        }
        if (!bHasAssignedPath)
        {
            continue;
        }

        // An assigned spline object by itself is not enough: open routes keep AssignedPath after completion.
        // Only treat states that can still own/resume long-distance movement as a usable route.
        for (const FName StatePropertyName : CandidateStateProperties)
        {
            FProperty* StateProperty = FindFProperty<FProperty>(Component->GetClass(), StatePropertyName);
            if (!StateProperty)
            {
                continue;
            }

            FString StateName;
            if (FEnumProperty* EnumProperty = CastField<FEnumProperty>(StateProperty))
            {
                const int64 Value = EnumProperty->GetUnderlyingProperty()->GetSignedIntPropertyValue(EnumProperty->ContainerPtrToValuePtr<void>(Component));
                if (UEnum* Enum = EnumProperty->GetEnum())
                {
                    StateName = Enum->GetNameStringByValue(Value);
                }
            }
            else if (FByteProperty* ByteProperty = CastField<FByteProperty>(StateProperty))
            {
                const uint8 Value = ByteProperty->GetPropertyValue_InContainer(Component);
                if (UEnum* Enum = ByteProperty->Enum)
                {
                    StateName = Enum->GetNameStringByValue(Value);
                }
            }

            if (!StateName.IsEmpty())
            {
                const bool bInactive = StateName.Contains(TEXT("Completed"), ESearchCase::IgnoreCase)
                    || StateName.Contains(TEXT("Idle"), ESearchCase::IgnoreCase)
                    || StateName.Contains(TEXT("Stopped"), ESearchCase::IgnoreCase)
                    || StateName.Contains(TEXT("Suspended"), ESearchCase::IgnoreCase)
                    || StateName.Contains(TEXT("Failed"), ESearchCase::IgnoreCase);
                if (bInactive)
                {
                    return false;
                }

                const bool bActiveOrResumable = StateName.Contains(TEXT("Following"), ESearchCase::IgnoreCase)
                    || StateName.Contains(TEXT("Reacquiring"), ESearchCase::IgnoreCase)
                    || StateName.Contains(TEXT("Paused"), ESearchCase::IgnoreCase)
                    || StateName.Contains(TEXT("External"), ESearchCase::IgnoreCase)
                    || StateName.Contains(TEXT("Combat"), ESearchCase::IgnoreCase);
                return bActiveOrResumable;
            }
        }

        // RenegadeSplineAI 1.1 exposes FollowState. If an older compatible follower does not,
        // preserve backward compatibility by treating an assigned path as usable.
        return true;
    }
    return false;
}

bool URenegadeHarvesterCombatComponent::CanUseDirectNavigationFallback() const
{
    if (!CycleSettings.bEnableDirectNavigationFallback || HasUsableSplineRoute())
    {
        return false;
    }
    if (!GetWorld())
    {
        return true;
    }
    return (GetWorld()->GetTimeSeconds() - BeginPlayWorldTime) >= FMath::Max(0.0f, CycleSettings.DirectNavigationFallbackDelaySeconds);
}

float URenegadeHarvesterCombatComponent::GetEffectiveDockApproachDistance() const
{
    if (IsValid(AssignedRefineryDockPoint))
    {
        return FMath::Max(100.0f, AssignedRefineryDockPoint->ApproachRadius);
    }
    return FMath::Max(100.0f, CycleSettings.RefineryDockApproachDistance);
}

float URenegadeHarvesterCombatComponent::GetEffectiveDockAcceptanceDistance() const
{
    if (IsValid(AssignedRefineryDockPoint))
    {
        return FMath::Max(25.0f, AssignedRefineryDockPoint->InteractionRadius);
    }
    return FMath::Max(25.0f, CycleSettings.RefineryDockAcceptanceDistance);
}

FTransform URenegadeHarvesterCombatComponent::GetEffectiveRefineryDockTransform() const
{
    if (IsValid(AssignedRefineryDockPoint))
    {
        return AssignedRefineryDockPoint->GetDockTransform();
    }
    if (URenegadeBuildingCombatComponent* Refinery = GetOwningRefinery())
    {
        return Refinery->GetHarvesterDockTransform();
    }
    return FTransform::Identity;
}

float URenegadeHarvesterCombatComponent::GetEffectiveHarvestApproachDistance() const
{
    if (CycleSettings.bUseHarvestPointDefinedDistances && IsValid(AssignedHarvestPoint))
    {
        return FMath::Max(100.0f, AssignedHarvestPoint->ApproachRadius);
    }
    return FMath::Max(100.0f, CycleSettings.HarvestPointApproachDistance);
}

float URenegadeHarvesterCombatComponent::GetEffectiveHarvestAcceptanceDistance() const
{
    if (CycleSettings.bUseHarvestPointDefinedDistances && IsValid(AssignedHarvestPoint))
    {
        return FMath::Max(25.0f, AssignedHarvestPoint->InteractionRadius);
    }
    return FMath::Max(25.0f, CycleSettings.HarvestPointAcceptanceDistance);
}

bool URenegadeHarvesterCombatComponent::SetSplineExternalMovementClaim(const bool bActive)
{
    if (!CycleSettings.bUseSplineExternalMovementClaim || !IsValid(GetOwner()))
    {
        bHasSplineMovementClaim = false;
        return false;
    }

    if (bActive == bHasSplineMovementClaim)
    {
        return true;
    }

    const FName FunctionName = bActive ? FName(TEXT("AcquireExternalMovementClaim")) : FName(TEXT("ReleaseExternalMovementClaim"));
    TArray<UActorComponent*> Components;
    GetOwner()->GetComponents(Components);

    for (UActorComponent* Component : Components)
    {
        if (!IsValid(Component) || Component == this)
        {
            continue;
        }

        UFunction* Function = Component->FindFunction(FunctionName);
        if (!Function)
        {
            continue;
        }

        FStructOnScope Parameters(Function);
        uint8* ParameterMemory = Parameters.GetStructMemory();
        for (TFieldIterator<FProperty> It(Function); It; ++It)
        {
            FProperty* Property = *It;
            if (!Property->HasAnyPropertyFlags(CPF_Parm) || Property->HasAnyPropertyFlags(CPF_ReturnParm))
            {
                continue;
            }

            if (FNameProperty* NameProperty = CastField<FNameProperty>(Property))
            {
                NameProperty->SetPropertyValue_InContainer(ParameterMemory, CycleSettings.SplineMovementClaimName);
            }
            else if (FBoolProperty* BoolProperty = CastField<FBoolProperty>(Property))
            {
                BoolProperty->SetPropertyValue_InContainer(ParameterMemory, true);
            }
            else if (FFloatProperty* FloatProperty = CastField<FFloatProperty>(Property))
            {
                FloatProperty->SetPropertyValue_InContainer(ParameterMemory, FMath::Max(0.0f, CycleSettings.SplineResumeDelaySeconds));
            }
            else if (FDoubleProperty* DoubleProperty = CastField<FDoubleProperty>(Property))
            {
                DoubleProperty->SetPropertyValue_InContainer(ParameterMemory, static_cast<double>(FMath::Max(0.0f, CycleSettings.SplineResumeDelaySeconds)));
            }
        }

        Component->ProcessEvent(Function, ParameterMemory);
        bHasSplineMovementClaim = bActive;
        return true;
    }

    bHasSplineMovementClaim = false;
    return false;
}

AAIController* URenegadeHarvesterCombatComponent::EnsureCycleAIController()
{
    APawn* Pawn = Cast<APawn>(GetOwner());
    if (!IsValid(Pawn))
    {
        return nullptr;
    }

    if (AAIController* ExistingController = Cast<AAIController>(Pawn->GetController()))
    {
        return ExistingController;
    }

    if (HasAuthority())
    {
        Pawn->SpawnDefaultController();
    }
    return Cast<AAIController>(Pawn->GetController());
}

float URenegadeHarvesterCombatComponent::GetPlanarDistanceToDestination(const FVector& Destination) const
{
    if (!IsValid(GetOwner()))
    {
        return BIG_NUMBER;
    }

    float Distance = FVector::Dist2D(GetOwner()->GetActorLocation(), Destination);
    if (const ACharacter* Character = Cast<ACharacter>(GetOwner()))
    {
        if (const UCapsuleComponent* Capsule = Character->GetCapsuleComponent())
        {
            Distance = FMath::Max(0.0f, Distance - Capsule->GetScaledCapsuleRadius());
        }
    }
    return Distance;
}

float URenegadeHarvesterCombatComponent::GetNavigationAcceptanceRadius(const float DesiredInteractionRadius) const
{
    float Radius = FMath::Max(25.0f, DesiredInteractionRadius);
    if (const ACharacter* Character = Cast<ACharacter>(GetOwner()))
    {
        if (const UCapsuleComponent* Capsule = Character->GetCapsuleComponent())
        {
            Radius += Capsule->GetScaledCapsuleRadius();
        }
    }
    return Radius;
}

bool URenegadeHarvesterCombatComponent::RequestCycleMoveTo(const FVector& Destination, const float AcceptanceRadius)
{
    AAIController* AIController = EnsureCycleAIController();
    if (!IsValid(AIController))
    {
        return false;
    }

    // We already expand the desired interaction radius by the Character capsule radius in
    // GetNavigationAcceptanceRadius(). Do NOT also ask PathFollowing to include the agent radius
    // through bStopOnOverlap, or large Harvesters can stop a full extra capsule radius away and
    // never satisfy GetPlanarDistanceToDestination()'s arrival test.
    const EPathFollowingRequestResult::Type Result = AIController->MoveToLocation(
        Destination,
        GetNavigationAcceptanceRadius(AcceptanceRadius),
        false,
        true,
        true,
        false,
        nullptr,
        true);

    if (GetWorld())
    {
        LastCycleMoveRequestWorldTime = GetWorld()->GetTimeSeconds();
    }
    return Result != EPathFollowingRequestResult::Failed;
}

void URenegadeHarvesterCombatComponent::StopCycleMovement()
{
    APawn* Pawn = Cast<APawn>(GetOwner());
    if (AAIController* AIController = IsValid(Pawn) ? Cast<AAIController>(Pawn->GetController()) : nullptr)
    {
        AIController->StopMovement();
    }
}

void URenegadeHarvesterCombatComponent::ReleaseHarvestPointReservation()
{
    if (HasAuthority() && IsValid(AssignedHarvestPoint))
    {
        AssignedHarvestPoint->ReleaseReservation(GetOwner());
    }
}

void URenegadeHarvesterCombatComponent::ReleaseRefineryDockReservation()
{
    if (HasAuthority() && IsValid(AssignedRefineryDockPoint))
    {
        AssignedRefineryDockPoint->ReleaseReservation(GetOwner());
    }
}

bool URenegadeHarvesterCombatComponent::BeginHarvestPointApproach()
{
    if (!CycleSettings.bEnableAutomaticHarvestPointApproach)
    {
        return false;
    }
    return GoToHarvestPoint();
}

bool URenegadeHarvesterCombatComponent::GoToHarvestPoint()
{
    if (!HasAuthority() || bIsDestroyed || !IsValid(GetOwner()))
    {
        return false;
    }

    if (!IsValid(AssignedHarvestPoint) && bAutoFindNearestHarvestPoint)
    {
        FindNearestCompatibleHarvestPoint();
    }
    if (!IsValid(AssignedHarvestPoint)
        || !AssignedHarvestPoint->IsCompatibleWithTeam(TeamId)
        || !AssignedHarvestPoint->TryReserve(GetOwner()))
    {
        return false;
    }

    SetSplineExternalMovementClaim(true);
    SetLifecycleStateInternal(ERenegadeHarvesterLifecycleState::ApproachingHarvestPoint);
    CyclePhaseReadyWorldTime = -1.0f;
    CyclePhaseEndWorldTime = -1.0f;
    OnHarvestPointApproachStarted.Broadcast(AssignedHarvestPoint);

    const FVector HarvestLocation = AssignedHarvestPoint->GetHarvestLocation();
    const float AcceptanceDistance = GetEffectiveHarvestAcceptanceDistance();
    if (GetPlanarDistanceToDestination(HarvestLocation) <= AcceptanceDistance)
    {
        ArrivedAtHarvestPoint();
        return true;
    }

    return RequestCycleMoveTo(HarvestLocation, AcceptanceDistance);
}

void URenegadeHarvesterCombatComponent::ArrivedAtHarvestPoint()
{
    if (!HasAuthority() || bIsDestroyed || !IsValid(GetOwner()))
    {
        return;
    }

    if (!IsValid(AssignedHarvestPoint) && bAutoFindNearestHarvestPoint)
    {
        FindNearestCompatibleHarvestPoint();
    }

    // This is an explicit lifecycle command. A reservation is coordination, not permission to ignore
    // an authoritative Blueprint arrival call. Automatic Go-To still requires a successful reservation.
    if (IsValid(AssignedHarvestPoint))
    {
        if (!AssignedHarvestPoint->IsCompatibleWithTeam(TeamId))
        {
            UE_LOG(LogRenegadeSoldierCombat, Warning, TEXT("Harvester %s was explicitly marked arrived at incompatible Harvest Point %s; honoring the explicit lifecycle call."), *GetNameSafe(GetOwner()), *GetNameSafe(AssignedHarvestPoint));
        }
        else if (!AssignedHarvestPoint->TryReserve(GetOwner()))
        {
            UE_LOG(LogRenegadeSoldierCombat, Warning, TEXT("Harvester %s arrived at Harvest Point %s while it was reserved by %s; honoring the explicit lifecycle call instead of silently doing nothing."), *GetNameSafe(GetOwner()), *GetNameSafe(AssignedHarvestPoint), *GetNameSafe(AssignedHarvestPoint->ReservedHarvester));
        }
    }
    else
    {
        UE_LOG(LogRenegadeSoldierCombat, Warning, TEXT("Harvester %s received Arrived At Harvest Point with no assigned Harvest Point; starting the harvest lifecycle anyway."), *GetNameSafe(GetOwner()));
    }

    if (LifecycleState == ERenegadeHarvesterLifecycleState::WaitingToHarvest
        || LifecycleState == ERenegadeHarvesterLifecycleState::Harvesting)
    {
        return;
    }

    SetSplineExternalMovementClaim(true);
    HandleReachedHarvestPoint();
}

void URenegadeHarvesterCombatComponent::HandleReachedHarvestPoint()
{
    if (!HasAuthority() || bIsDestroyed)
    {
        return;
    }

    StopCycleMovement();
    SetLifecycleStateInternal(ERenegadeHarvesterLifecycleState::WaitingToHarvest);
    const float ArrivalDelay = FMath::Max(0.0f, CycleSettings.HarvestArrivalDelaySeconds);
    CyclePhaseReadyWorldTime = GetWorld() ? GetWorld()->GetTimeSeconds() + ArrivalDelay : -1.0f;

    // Broadcast directly here. ARenegadeHarvestPoint::NotifyHarvesterArrived forwards into this lifecycle function,
    // so calling it from here would recurse.
    if (IsValid(AssignedHarvestPoint))
    {
        AssignedHarvestPoint->OnHarvesterArrived.Broadcast(GetOwner());
        OnHarvestPointArrived.Broadcast(AssignedHarvestPoint);
    }

    if (ArrivalDelay <= KINDA_SMALL_NUMBER)
    {
        StartHarvesting();
    }
}

void URenegadeHarvesterCombatComponent::ArrivedAtRefineryDockPoint()
{
    if (!HasAuthority() || bIsDestroyed || !IsValid(GetOwner()))
    {
        return;
    }

    if (!IsValid(AssignedRefineryDockPoint) && bAutoFindNearestRefineryDockPoint)
    {
        FindNearestCompatibleRefineryDockPoint();
    }

    URenegadeBuildingCombatComponent* Refinery = GetOwningRefinery();
    if (!IsValid(Refinery) || !Refinery->IsBuildingOperational())
    {
        return;
    }

    if (IsValid(AssignedRefineryDockPoint))
    {
        if (!AssignedRefineryDockPoint->IsCompatibleWithTeam(TeamId))
        {
            UE_LOG(LogRenegadeSoldierCombat, Warning, TEXT("Harvester %s was explicitly marked arrived at incompatible Refinery Dock Point %s; honoring the explicit lifecycle call."), *GetNameSafe(GetOwner()), *GetNameSafe(AssignedRefineryDockPoint));
        }
        else if (!AssignedRefineryDockPoint->TryReserve(GetOwner()))
        {
            UE_LOG(LogRenegadeSoldierCombat, Warning, TEXT("Harvester %s arrived at Refinery Dock Point %s while it was reserved by %s; honoring the explicit lifecycle call instead of silently doing nothing."), *GetNameSafe(GetOwner()), *GetNameSafe(AssignedRefineryDockPoint), *GetNameSafe(AssignedRefineryDockPoint->ReservedHarvester));
        }
    }

    if (LifecycleState == ERenegadeHarvesterLifecycleState::RefineryDocked
        || LifecycleState == ERenegadeHarvesterLifecycleState::RefineryUnloading)
    {
        return;
    }

    SetSplineExternalMovementClaim(true);
    HandleReachedRefineryDock();
}

void URenegadeHarvesterCombatComponent::HandleReachedRefineryDock()
{
    if (!HasAuthority() || bIsDestroyed)
    {
        return;
    }

    StopCycleMovement();
    if (IsValid(AssignedRefineryDockPoint))
    {
        // Broadcast directly here. Dock Point NotifyHarvesterDocked forwards into the Harvester lifecycle.
        AssignedRefineryDockPoint->OnHarvesterDocked.Broadcast(GetOwner());
        OnRefineryDockPointArrived.Broadcast(AssignedRefineryDockPoint);
    }
    HarvesterDockedAtRefinery();
}

void URenegadeHarvesterCombatComponent::UpdateAutomaticCycle(const float DeltaTime)
{
    (void)DeltaTime;
    if (!HasAuthority() || bIsDestroyed || !GetWorld() || !IsValid(GetOwner()))
    {
        return;
    }

    const float Now = GetWorld()->GetTimeSeconds();
    const float CargoCapacity = FMath::Max(1.0f, EconomySettings.CargoCapacity);

    if (!IsValid(AssignedHarvestPoint) && bAutoFindNearestHarvestPoint && (Now - LastHarvestPointSearchWorldTime) >= 2.0f)
    {
        FindNearestCompatibleHarvestPoint();
    }
    if (!IsValid(AssignedRefineryDockPoint) && bAutoFindNearestRefineryDockPoint && (Now - LastRefineryDockPointSearchWorldTime) >= 2.0f)
    {
        FindNearestCompatibleRefineryDockPoint();
    }

    switch (LifecycleState)
    {
    case ERenegadeHarvesterLifecycleState::Idle:
        if (CycleSettings.bEnableAutomaticHarvestPointApproach
            && IsValid(AssignedHarvestPoint)
            && CurrentCargo < CargoCapacity - KINDA_SMALL_NUMBER)
        {
            const float Distance = FVector::Dist2D(GetOwner()->GetActorLocation(), AssignedHarvestPoint->GetHarvestLocation());
            if (Distance <= GetEffectiveHarvestApproachDistance() || CanUseDirectNavigationFallback())
            {
                BeginHarvestPointApproach();
            }
        }
        break;

    case ERenegadeHarvesterLifecycleState::ApproachingHarvestPoint:
        if (!IsValid(AssignedHarvestPoint))
        {
            SetSplineExternalMovementClaim(false);
            SetLifecycleStateInternal(ERenegadeHarvesterLifecycleState::Idle);
            break;
        }
        if (GetPlanarDistanceToDestination(AssignedHarvestPoint->GetHarvestLocation()) <= GetEffectiveHarvestAcceptanceDistance())
        {
            ArrivedAtHarvestPoint();
        }
        else if ((Now - LastCycleMoveRequestWorldTime) >= FMath::Max(0.10f, CycleSettings.MovementRetrySeconds))
        {
            RequestCycleMoveTo(AssignedHarvestPoint->GetHarvestLocation(), GetEffectiveHarvestAcceptanceDistance());
        }
        break;

    case ERenegadeHarvesterLifecycleState::WaitingToHarvest:
        if (CyclePhaseReadyWorldTime < 0.0f || Now >= CyclePhaseReadyWorldTime)
        {
            StartHarvesting();
        }
        break;

    case ERenegadeHarvesterLifecycleState::Harvesting:
        if ((CycleSettings.bFinishHarvestWhenCargoFull && CurrentCargo >= CargoCapacity - KINDA_SMALL_NUMBER)
            || (CyclePhaseEndWorldTime >= 0.0f && Now >= CyclePhaseEndWorldTime))
        {
            EndHarvesting();
        }
        break;

    case ERenegadeHarvesterLifecycleState::ReturningToRefinery:
    {
        if (bPendingSplineReleaseAfterHarvest && (CyclePhaseReadyWorldTime < 0.0f || Now >= CyclePhaseReadyWorldTime))
        {
            bPendingSplineReleaseAfterHarvest = false;
            CyclePhaseReadyWorldTime = -1.0f;
            SetSplineExternalMovementClaim(false);
        }

        if (!CycleSettings.bEnableAutomaticRefineryDocking || bPendingSplineReleaseAfterHarvest)
        {
            break;
        }

        URenegadeBuildingCombatComponent* Refinery = GetOwningRefinery();
        if (!IsValid(Refinery) || !Refinery->IsBuildingOperational())
        {
            break;
        }

        if (!IsValid(AssignedRefineryDockPoint) && bAutoFindNearestRefineryDockPoint)
        {
            FindNearestCompatibleRefineryDockPoint();
        }

        const FVector DockLocation = GetEffectiveRefineryDockTransform().GetLocation();
        const float Distance = FVector::Dist2D(GetOwner()->GetActorLocation(), DockLocation);
        if (Distance <= GetEffectiveDockApproachDistance() || CanUseDirectNavigationFallback())
        {
            StartRefineryDocking();
        }
        break;
    }

    case ERenegadeHarvesterLifecycleState::RefineryDocking:
    {
        URenegadeBuildingCombatComponent* Refinery = GetOwningRefinery();
        if (IsValid(Refinery) && Refinery->IsBuildingOperational())
        {
            const FVector DockLocation = GetEffectiveRefineryDockTransform().GetLocation();
            const float AcceptanceDistance = GetEffectiveDockAcceptanceDistance();
            if (GetPlanarDistanceToDestination(DockLocation) <= AcceptanceDistance)
            {
                ArrivedAtRefineryDockPoint();
            }
            else if ((Now - LastCycleMoveRequestWorldTime) >= FMath::Max(0.10f, CycleSettings.MovementRetrySeconds))
            {
                RequestCycleMoveTo(DockLocation, AcceptanceDistance);
            }
        }
        else
        {
            StopCycleMovement();
            ReleaseRefineryDockReservation();
            SetSplineExternalMovementClaim(false);
            SetLifecycleStateInternal(ERenegadeHarvesterLifecycleState::ReturningToRefinery);
        }
        break;
    }

    case ERenegadeHarvesterLifecycleState::RefineryDocked:
        if (CyclePhaseReadyWorldTime < 0.0f || Now >= CyclePhaseReadyWorldTime)
        {
            StartRefineryUnloading();
        }
        break;

    case ERenegadeHarvesterLifecycleState::RefineryUnloading:
        if (URenegadeBuildingCombatComponent* Refinery = GetOwningRefinery(); !IsValid(Refinery) || !Refinery->IsBuildingOperational())
        {
            StopCycleMovement();
            CyclePhaseEndWorldTime = -1.0f;
            ReleaseRefineryDockReservation();
            SetSplineExternalMovementClaim(false);
            SetLifecycleStateInternal(ERenegadeHarvesterLifecycleState::ReturningToRefinery);
        }
        else if ((CycleSettings.bFinishUnloadWhenCargoEmpty && CurrentCargo <= KINDA_SMALL_NUMBER)
            || (CyclePhaseEndWorldTime >= 0.0f && Now >= CyclePhaseEndWorldTime))
        {
            EndRefineryUnloading();
        }
        break;

    case ERenegadeHarvesterLifecycleState::LeavingRefinery:
        if (CyclePhaseReadyWorldTime < 0.0f || Now >= CyclePhaseReadyWorldTime)
        {
            HarvesterUndockedFromRefinery();
        }
        break;

    default:
        break;
    }
}

void URenegadeHarvesterCombatComponent::BroadcastLifecycleEvents(const ERenegadeHarvesterLifecycleState PreviousState, const ERenegadeHarvesterLifecycleState NewState)
{
    OnLifecycleStateChanged.Broadcast(PreviousState, NewState);
    if (NewState == ERenegadeHarvesterLifecycleState::Harvesting)
    {
        OnHarvestingStarted.Broadcast();
    }
    if (PreviousState == ERenegadeHarvesterLifecycleState::Harvesting && NewState != ERenegadeHarvesterLifecycleState::Harvesting)
    {
        OnHarvestingEnded.Broadcast();
    }
    if (NewState == ERenegadeHarvesterLifecycleState::RefineryDocking)
    {
        OnRefineryDockingStarted.Broadcast();
    }
    if (NewState == ERenegadeHarvesterLifecycleState::RefineryDocked)
    {
        OnRefineryDocked.Broadcast();
    }
    if (NewState == ERenegadeHarvesterLifecycleState::RefineryUnloading)
    {
        OnRefineryUnloadingStarted.Broadcast();
    }
    if (PreviousState == ERenegadeHarvesterLifecycleState::RefineryUnloading && NewState != ERenegadeHarvesterLifecycleState::RefineryUnloading)
    {
        OnRefineryUnloadingEnded.Broadcast();
    }
}

void URenegadeHarvesterCombatComponent::SetLifecycleStateInternal(const ERenegadeHarvesterLifecycleState NewState)
{
    if (!HasAuthority() || LifecycleState == NewState)
    {
        return;
    }
    const ERenegadeHarvesterLifecycleState Previous = LifecycleState;
    LifecycleState = NewState;
    BroadcastLifecycleEvents(Previous, NewState);
    if (AActor* Owner = GetOwner())
    {
        Owner->ForceNetUpdate();
    }
}

void URenegadeHarvesterCombatComponent::StartHarvesting()
{
    if (!HasAuthority() || bIsDestroyed)
    {
        return;
    }

    StopCycleMovement();
    SetLifecycleStateInternal(ERenegadeHarvesterLifecycleState::Harvesting);
    CyclePhaseReadyWorldTime = -1.0f;
    CyclePhaseEndWorldTime = (GetWorld() && CycleSettings.HarvestDurationSeconds > KINDA_SMALL_NUMBER)
        ? GetWorld()->GetTimeSeconds() + CycleSettings.HarvestDurationSeconds
        : -1.0f;
    if (IsValid(AssignedHarvestPoint))
    {
        AssignedHarvestPoint->NotifyHarvestingStarted(GetOwner());
    }
}

void URenegadeHarvesterCombatComponent::EndHarvesting()
{
    if (!HasAuthority() || bIsDestroyed)
    {
        return;
    }

    if (IsValid(AssignedHarvestPoint))
    {
        AssignedHarvestPoint->NotifyHarvestingEnded(GetOwner());
    }
    ReleaseHarvestPointReservation();
    SetLifecycleStateInternal(ERenegadeHarvesterLifecycleState::ReturningToRefinery);
    CyclePhaseEndWorldTime = -1.0f;
    OnReturnToRefineryRouteRequested.Broadcast();

    const float Delay = FMath::Max(0.0f, CycleSettings.PostHarvestDepartureDelaySeconds);
    if (Delay <= KINDA_SMALL_NUMBER)
    {
        bPendingSplineReleaseAfterHarvest = false;
        CyclePhaseReadyWorldTime = -1.0f;
        SetSplineExternalMovementClaim(false);
    }
    else
    {
        bPendingSplineReleaseAfterHarvest = true;
        CyclePhaseReadyWorldTime = GetWorld() ? GetWorld()->GetTimeSeconds() + Delay : -1.0f;
    }
}

void URenegadeHarvesterCombatComponent::MarkReturningToRefinery()
{
    EndHarvesting();
}

void URenegadeHarvesterCombatComponent::StartRefineryDocking()
{
    GoToRefineryDockPoint();
}

bool URenegadeHarvesterCombatComponent::GoToRefineryDockPoint()
{
    if (!HasAuthority() || bIsDestroyed || !IsValid(GetOwner()))
    {
        return false;
    }

    URenegadeBuildingCombatComponent* Refinery = GetOwningRefinery();
    if (IsValid(Refinery) && !Refinery->IsBuildingOperational())
    {
        return false;
    }

    if (!IsValid(AssignedRefineryDockPoint) && bAutoFindNearestRefineryDockPoint)
    {
        FindNearestCompatibleRefineryDockPoint();
    }
    if (IsValid(AssignedRefineryDockPoint))
    {
        if (!AssignedRefineryDockPoint->IsCompatibleWithTeam(TeamId)
            || !AssignedRefineryDockPoint->TryReserve(GetOwner()))
        {
            return false;
        }
        AssignedRefineryDockPoint->NotifyHarvesterApproachStarted(GetOwner());
        OnRefineryDockPointApproachStarted.Broadcast(AssignedRefineryDockPoint);
    }
    else if (!IsValid(Refinery))
    {
        return false;
    }

    SetSplineExternalMovementClaim(true);
    bPendingSplineReleaseAfterHarvest = false;
    SetLifecycleStateInternal(ERenegadeHarvesterLifecycleState::RefineryDocking);
    const FVector DockLocation = GetEffectiveRefineryDockTransform().GetLocation();
    const float AcceptanceDistance = GetEffectiveDockAcceptanceDistance();
    if (GetPlanarDistanceToDestination(DockLocation) <= AcceptanceDistance)
    {
        ArrivedAtRefineryDockPoint();
        return true;
    }

    return RequestCycleMoveTo(DockLocation, AcceptanceDistance);
}

void URenegadeHarvesterCombatComponent::HarvesterDockedAtRefinery()
{
    if (!HasAuthority() || bIsDestroyed)
    {
        return;
    }

    URenegadeBuildingCombatComponent* Refinery = GetOwningRefinery();
    if (!IsValid(Refinery) || !Refinery->IsBuildingOperational())
    {
        ReleaseRefineryDockReservation();
        SetSplineExternalMovementClaim(false);
        SetLifecycleStateInternal(ERenegadeHarvesterLifecycleState::ReturningToRefinery);
        return;
    }

    StopCycleMovement();
    SetLifecycleStateInternal(ERenegadeHarvesterLifecycleState::RefineryDocked);
    const float UnloadDelay = FMath::Max(0.0f, CycleSettings.UnloadStartDelaySeconds);
    CyclePhaseReadyWorldTime = GetWorld()
        ? GetWorld()->GetTimeSeconds() + UnloadDelay
        : -1.0f;
    CyclePhaseEndWorldTime = -1.0f;

    if (UnloadDelay <= KINDA_SMALL_NUMBER)
    {
        StartRefineryUnloading();
    }
}

void URenegadeHarvesterCombatComponent::StartRefineryUnloading()
{
    if (!HasAuthority() || bIsDestroyed)
    {
        return;
    }

    URenegadeBuildingCombatComponent* Refinery = GetOwningRefinery();
    if (!IsValid(Refinery) || !Refinery->IsBuildingOperational())
    {
        ReleaseRefineryDockReservation();
        SetLifecycleStateInternal(ERenegadeHarvesterLifecycleState::ReturningToRefinery);
        SetSplineExternalMovementClaim(false);
        return;
    }

    StopCycleMovement();
    SetLifecycleStateInternal(ERenegadeHarvesterLifecycleState::RefineryUnloading);
    CyclePhaseReadyWorldTime = -1.0f;
    CyclePhaseEndWorldTime = (GetWorld() && CycleSettings.UnloadDurationSeconds > KINDA_SMALL_NUMBER)
        ? GetWorld()->GetTimeSeconds() + CycleSettings.UnloadDurationSeconds
        : -1.0f;
}

void URenegadeHarvesterCombatComponent::EndRefineryUnloading()
{
    if (!HasAuthority() || bIsDestroyed)
    {
        return;
    }
    URenegadeBuildingCombatComponent* Refinery = GetOwningRefinery();
    if (!IsValid(Refinery) || !Refinery->IsBuildingOperational())
    {
        ReleaseRefineryDockReservation();
        SetLifecycleStateInternal(ERenegadeHarvesterLifecycleState::ReturningToRefinery);
        SetSplineExternalMovementClaim(false);
        CyclePhaseEndWorldTime = -1.0f;
        return;
    }

    if (CurrentCargo > KINDA_SMALL_NUMBER)
    {
        DepositCargoToTeamCredits(-1.0f);
    }

    SetLifecycleStateInternal(ERenegadeHarvesterLifecycleState::LeavingRefinery);
    CyclePhaseEndWorldTime = -1.0f;
    CyclePhaseReadyWorldTime = GetWorld()
        ? GetWorld()->GetTimeSeconds() + FMath::Max(0.0f, CycleSettings.PostUnloadDepartureDelaySeconds)
        : -1.0f;
}

void URenegadeHarvesterCombatComponent::HarvesterUndockedFromRefinery()
{
    if (!HasAuthority() || bIsDestroyed)
    {
        return;
    }

    SetLifecycleStateInternal(ERenegadeHarvesterLifecycleState::Idle);
    CyclePhaseReadyWorldTime = -1.0f;
    if (IsValid(AssignedRefineryDockPoint))
    {
        AssignedRefineryDockPoint->NotifyHarvesterUndocked(GetOwner());
    }
    ReleaseRefineryDockReservation();
    OnRefineryUndocked.Broadcast();
    OnOutboundHarvestRouteRequested.Broadcast();
    SetSplineExternalMovementClaim(false);
}

float URenegadeHarvesterCombatComponent::AddHarvestedCargo(const float Amount)
{
    if (!HasAuthority() || bIsDestroyed || Amount <= 0.0f)
    {
        return CurrentCargo;
    }
    SetCurrentCargo(CurrentCargo + Amount);
    return CurrentCargo;
}

void URenegadeHarvesterCombatComponent::SetCurrentCargo(const float NewCargo)
{
    if (!HasAuthority())
    {
        return;
    }
    const float Previous = CurrentCargo;
    CurrentCargo = FMath::Clamp(NewCargo, 0.0f, FMath::Max(1.0f, EconomySettings.CargoCapacity));
    if (!FMath::IsNearlyEqual(Previous, CurrentCargo))
    {
        OnCargoChanged.Broadcast(Previous, CurrentCargo);
        if (AActor* Owner = GetOwner())
        {
            Owner->ForceNetUpdate();
        }
    }
}

ARenegadeTeamCreditsManager* URenegadeHarvesterCombatComponent::GetTeamCreditsManager() const
{
    if (!GetWorld())
    {
        return nullptr;
    }
    if (URenegadeCombatRegistrySubsystem* Registry = GetWorld()->GetSubsystem<URenegadeCombatRegistrySubsystem>())
    {
        return Registry->GetTeamCreditsManager(HasAuthority());
    }
    return nullptr;
}

int32 URenegadeHarvesterCombatComponent::ConvertAndDepositCargo(const float CargoUnits)
{
    if (!HasAuthority() || CargoUnits <= 0.0f || TeamId.IsNone())
    {
        return 0;
    }
    ARenegadeTeamCreditsManager* Manager = GetTeamCreditsManager();
    if (!IsValid(Manager))
    {
        return 0;
    }

    const float RawCredits = CargoUnits * FMath::Max(0.0f, EconomySettings.CreditsPerCargoUnit) + FractionalCreditRemainder;
    const int32 WholeCredits = FMath::FloorToInt(RawCredits + KINDA_SMALL_NUMBER);
    FractionalCreditRemainder = FMath::Max(0.0f, RawCredits - static_cast<float>(WholeCredits));
    if (WholeCredits <= 0)
    {
        return 0;
    }

    const int32 NewTotal = Manager->AddTeamCredits(TeamId, WholeCredits);
    OnCreditsDelivered.Broadcast(WholeCredits, NewTotal);
    return WholeCredits;
}

int32 URenegadeHarvesterCombatComponent::DepositCargoToTeamCredits(float CargoUnits)
{
    if (!HasAuthority() || bIsDestroyed || CurrentCargo <= KINDA_SMALL_NUMBER || TeamId.IsNone() || !IsValid(GetTeamCreditsManager()))
    {
        return 0;
    }
    if (CargoUnits < 0.0f)
    {
        CargoUnits = CurrentCargo;
    }
    const float DepositUnits = FMath::Clamp(CargoUnits, 0.0f, CurrentCargo);
    const int32 Added = ConvertAndDepositCargo(DepositUnits);
    SetCurrentCargo(CurrentCargo - DepositUnits);
    return Added;
}

void URenegadeHarvesterCombatComponent::UpdateEconomy(const float DeltaTime)
{
    if (LifecycleState == ERenegadeHarvesterLifecycleState::Harvesting && EconomySettings.bAutomaticallyGatherCargoWhileHarvesting)
    {
        AddHarvestedCargo(FMath::Max(0.0f, EconomySettings.HarvestRateUnitsPerSecond) * DeltaTime);
    }
    else if (LifecycleState == ERenegadeHarvesterLifecycleState::RefineryUnloading
        && EconomySettings.bAutomaticallyUnloadWhileDocked
        && CurrentCargo > KINDA_SMALL_NUMBER
        && !TeamId.IsNone()
        && IsValid(GetOwningRefinery())
        && GetOwningRefinery()->IsBuildingOperational()
        && IsValid(GetTeamCreditsManager()))
    {
        const float Units = FMath::Min(CurrentCargo, FMath::Max(0.0f, EconomySettings.UnloadRateUnitsPerSecond) * DeltaTime);
        if (Units > 0.0f)
        {
            ConvertAndDepositCargo(Units);
            SetCurrentCargo(CurrentCargo - Units);
        }
    }
}

void URenegadeHarvesterCombatComponent::OnRep_TeamId()
{
}

void URenegadeHarvesterCombatComponent::OnRep_CurrentHealth(const float PreviousHealth)
{
    OnHarvesterHealthChanged.Broadcast(PreviousHealth, CurrentHealth, nullptr, nullptr);
}

void URenegadeHarvesterCombatComponent::OnRep_Destroyed()
{
}

void URenegadeHarvesterCombatComponent::OnRep_CriticalHealth()
{
}

void URenegadeHarvesterCombatComponent::OnRep_TurretTarget(AActor* PreviousTarget)
{
    OnTurretTargetChanged.Broadcast(PreviousTarget, CurrentTurretTarget);
}

void URenegadeHarvesterCombatComponent::OnRep_LifecycleState(const ERenegadeHarvesterLifecycleState PreviousState)
{
    BroadcastLifecycleEvents(PreviousState, LifecycleState);
}

void URenegadeHarvesterCombatComponent::OnRep_CurrentCargo(const float PreviousCargo)
{
    OnCargoChanged.Broadcast(PreviousCargo, CurrentCargo);
}

void URenegadeHarvesterCombatComponent::OnRep_AssignedHarvestPoint()
{
}

void URenegadeHarvesterCombatComponent::OnRep_AssignedRefineryDockPoint()
{
}
