#include "RenegadeSoldierCombatComponent.h"

#include "RenegadeSoldierCombatModule.h"

#include "AIController.h"
#include "Camera/CameraComponent.h"
#include "Camera/PlayerCameraManager.h"
#include "CollisionQueryParams.h"
#include "CollisionShape.h"
#include "EngineUtils.h"
#include "Engine/World.h"
#include "Engine/Texture2D.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/DamageType.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerController.h"
#include "InputCoreTypes.h"
#include "Components/WidgetComponent.h"
#include "Widgets/Images/SImage.h"
#include "Styling/SlateColor.h"
#include "Components/CapsuleComponent.h"
#include "Components/DecalComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SkinnedMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Materials/MaterialInterface.h"
#include "NavigationSystem.h"
#include "Net/UnrealNetwork.h"
#include "PhysicsEngine/PhysicsAsset.h"
#include "PhysicsEngine/SkeletalBodySetup.h"
#include "RenegadeBuildingCombatComponent.h"
#include "RenegadeCombatMovementBridge.h"
#include "RenegadeCombatRegistrySubsystem.h"
#include "RenegadeHarvesterCombatComponent.h"
#include "RenegadeSoldierSpawnPoint.h"
#include "RenegadeWeaponProfile.h"
#include "Sound/SoundBase.h"

namespace RenegadeCombatPrivate
{
    static bool IsNeutralTeamName(const FName TeamName)
    {
        return TeamName.IsNone() || TeamName.IsEqual(FName(TEXT("Neutral")), ENameCase::IgnoreCase);
    }

    static bool IsValidPlayerWeaponSlot(const ERenegadePlayerWeaponSlot WeaponSlot)
    {
        return WeaponSlot == ERenegadePlayerWeaponSlot::AutomaticRifle
            || WeaponSlot == ERenegadePlayerWeaponSlot::Pistol
            || WeaponSlot == ERenegadePlayerWeaponSlot::RocketLauncher;
    }

    /** Ignore the owning pawn and every actor attached to it so weapon/armour child actors cannot block the muzzle trace. */
    static void AddOwnerHierarchyToTraceIgnore(const AActor* RootActor, FCollisionQueryParams& QueryParams)
    {
        if (!IsValid(RootActor))
        {
            return;
        }

        QueryParams.AddIgnoredActor(RootActor);

        TArray<AActor*> AttachedActors;
        RootActor->GetAttachedActors(AttachedActors, true, true);
        for (AActor* AttachedActor : AttachedActors)
        {
            if (IsValid(AttachedActor))
            {
                QueryParams.AddIgnoredActor(AttachedActor);
            }
        }

        TArray<AActor*> ChildActors;
        RootActor->GetAllChildActors(ChildActors, true);
        for (AActor* ChildActor : ChildActors)
        {
            if (IsValid(ChildActor))
            {
                QueryParams.AddIgnoredActor(ChildActor);
            }
        }
    }

    /** Run the authored channel trace and an optional combat-object trace, keeping the closest blocking result. */
    static bool PerformWeaponTrace(
        UWorld* World,
        FHitResult& OutHit,
        const FVector& Start,
        const FVector& End,
        const FRenegadeWeaponSettings& Weapon,
        const FCollisionQueryParams& QueryParams)
    {
        if (!IsValid(World))
        {
            OutHit = FHitResult();
            return false;
        }

        FHitResult ChannelHit;
        const bool bChannelHit = World->LineTraceSingleByChannel(
            ChannelHit,
            Start,
            End,
            Weapon.TraceChannel,
            QueryParams);

        bool bObjectHit = false;
        FHitResult ObjectHit;
        if (Weapon.bUseCombatTargetObjectTraceFallback)
        {
            const FCollisionObjectQueryParams ObjectQueryParams(Weapon.CombatTargetObjectType);
            bObjectHit = World->LineTraceSingleByObjectType(
                ObjectHit,
                Start,
                End,
                ObjectQueryParams,
                QueryParams);
        }

        if (bChannelHit && bObjectHit)
        {
            OutHit = ObjectHit.Distance < ChannelHit.Distance ? ObjectHit : ChannelHit;
            return true;
        }

        if (bObjectHit)
        {
            OutHit = ObjectHit;
            return true;
        }

        if (bChannelHit)
        {
            OutHit = ChannelHit;
            return true;
        }

        OutHit = FHitResult();
        return false;
    }

    /** Resolve a combat component through child-actor, attachment, owner, or instigator chains. */
    static URenegadeSoldierCombatComponent* ResolveCombatComponentFromActorHierarchy(AActor* StartActor)
    {
        if (!IsValid(StartActor))
        {
            return nullptr;
        }

        TArray<AActor*> PendingActors;
        TSet<AActor*> VisitedActors;
        PendingActors.Add(StartActor);

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

            if (URenegadeSoldierCombatComponent* CombatComponent = Candidate->FindComponentByClass<URenegadeSoldierCombatComponent>())
            {
                return CombatComponent;
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

        return nullptr;
    }

    /** Resolve a building component through child-actor, attachment, owner, or instigator chains. */
    static URenegadeBuildingCombatComponent* ResolveBuildingComponentFromActorHierarchy(AActor* StartActor)
    {
        if (!IsValid(StartActor))
        {
            return nullptr;
        }

        TArray<AActor*> PendingActors;
        TSet<AActor*> VisitedActors;
        PendingActors.Add(StartActor);

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

            if (URenegadeBuildingCombatComponent* BuildingComponent = Candidate->FindComponentByClass<URenegadeBuildingCombatComponent>())
            {
                return BuildingComponent;
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

        return nullptr;
    }

    /** Resolve a Harvester component through child-actor, attachment, owner, or instigator chains. */
    static URenegadeHarvesterCombatComponent* ResolveHarvesterComponentFromActorHierarchy(AActor* StartActor)
    {
        if (!IsValid(StartActor))
        {
            return nullptr;
        }

        TArray<AActor*> PendingActors;
        TSet<AActor*> VisitedActors;
        PendingActors.Add(StartActor);
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

            if (URenegadeHarvesterCombatComponent* HarvesterComponent = Candidate->FindComponentByClass<URenegadeHarvesterCombatComponent>())
            {
                return HarvesterComponent;
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
        return nullptr;
    }

    /** Build an AABB for a building owner plus attached/child actors so large multipart structures use their physical footprint for explosions. */
    static bool GetActorHierarchyBounds(const AActor* RootActor, FVector& OutBoundsMin, FVector& OutBoundsMax)
    {
        if (!IsValid(RootActor))
        {
            return false;
        }

        bool bHasBounds = false;
        auto AccumulateActorBounds = [&OutBoundsMin, &OutBoundsMax, &bHasBounds](const AActor* Actor)
        {
            if (!IsValid(Actor))
            {
                return;
            }

            FVector BoundsOrigin = Actor->GetActorLocation();
            FVector BoundsExtent = FVector::ZeroVector;
            Actor->GetActorBounds(true, BoundsOrigin, BoundsExtent);
            const FVector ActorMin = BoundsOrigin - BoundsExtent;
            const FVector ActorMax = BoundsOrigin + BoundsExtent;

            if (!bHasBounds)
            {
                OutBoundsMin = ActorMin;
                OutBoundsMax = ActorMax;
                bHasBounds = true;
                return;
            }

            OutBoundsMin.X = FMath::Min(OutBoundsMin.X, ActorMin.X);
            OutBoundsMin.Y = FMath::Min(OutBoundsMin.Y, ActorMin.Y);
            OutBoundsMin.Z = FMath::Min(OutBoundsMin.Z, ActorMin.Z);
            OutBoundsMax.X = FMath::Max(OutBoundsMax.X, ActorMax.X);
            OutBoundsMax.Y = FMath::Max(OutBoundsMax.Y, ActorMax.Y);
            OutBoundsMax.Z = FMath::Max(OutBoundsMax.Z, ActorMax.Z);
        };

        AccumulateActorBounds(RootActor);

        TArray<AActor*> AttachedActors;
        RootActor->GetAttachedActors(AttachedActors, true, true);
        for (AActor* AttachedActor : AttachedActors)
        {
            AccumulateActorBounds(AttachedActor);
        }

        TArray<AActor*> ChildActors;
        RootActor->GetAllChildActors(ChildActors, true);
        for (AActor* ChildActor : ChildActors)
        {
            AccumulateActorBounds(ChildActor);
        }

        return bHasBounds;
    }

    /** Return the closest physical building-bounds point to an explosion instead of relying on the single AI target point. */
    static FVector GetClosestPointOnBuildingBounds(const URenegadeBuildingCombatComponent* Building, const FVector& QueryLocation)
    {
        if (!IsValid(Building) || !IsValid(Building->GetOwner()))
        {
            return QueryLocation;
        }

        FVector BoundsMin = FVector::ZeroVector;
        FVector BoundsMax = FVector::ZeroVector;
        if (!GetActorHierarchyBounds(Building->GetOwner(), BoundsMin, BoundsMax))
        {
            return Building->GetTargetAimLocation();
        }

        return FVector(
            FMath::Clamp(QueryLocation.X, BoundsMin.X, BoundsMax.X),
            FMath::Clamp(QueryLocation.Y, BoundsMin.Y, BoundsMax.Y),
            FMath::Clamp(QueryLocation.Z, BoundsMin.Z, BoundsMax.Z));
    }

    /** Recover direct building hits when the trace struck multipart/child geometry that is not directly owned by the building Actor. */
    static URenegadeBuildingCombatComponent* ResolveRegisteredBuildingAtImpactLocation(
        UWorld* World,
        const FVector& ImpactLocation,
        const float ImpactTolerance)
    {
        if (!IsValid(World))
        {
            return nullptr;
        }

        URenegadeCombatRegistrySubsystem* Registry = World->GetSubsystem<URenegadeCombatRegistrySubsystem>();
        if (!IsValid(Registry))
        {
            return nullptr;
        }

        TArray<URenegadeBuildingCombatComponent*> Buildings;
        Registry->GetBuildings(Buildings);

        URenegadeBuildingCombatComponent* BestBuilding = nullptr;
        float BestDistanceSquared = TNumericLimits<float>::Max();
        const float ToleranceSquared = FMath::Square(FMath::Max(0.0f, ImpactTolerance));

        for (URenegadeBuildingCombatComponent* Building : Buildings)
        {
            if (!IsValid(Building) || Building->bIsDestroyed || Building->CurrentHealth <= 0.0f || !IsValid(Building->GetOwner()))
            {
                continue;
            }

            const FVector ClosestPoint = GetClosestPointOnBuildingBounds(Building, ImpactLocation);
            const float DistanceSquared = FVector::DistSquared(ImpactLocation, ClosestPoint);
            if (DistanceSquared <= ToleranceSquared && DistanceSquared < BestDistanceSquared)
            {
                BestDistanceSquared = DistanceSquared;
                BestBuilding = Building;
            }
        }

        return BestBuilding;
    }
}

URenegadeSoldierCombatComponent::URenegadeSoldierCombatComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
    PrimaryComponentTick.bStartWithTickEnabled = false;
    SetIsReplicatedByDefault(true);

    InlinePlayerAutomaticRifleSettings.WeaponClass = ERenegadeWeaponClass::AutomaticRifle;
    InlinePlayerAutomaticRifleSettings.DamagePerShot = 11.0f;
    InlinePlayerAutomaticRifleSettings.RoundsPerMinute = 600.0f;
    InlinePlayerAutomaticRifleSettings.MagazineSize = 30;
    InlinePlayerAutomaticRifleSettings.MinimumBurstShots = 1;
    InlinePlayerAutomaticRifleSettings.MaximumBurstShots = 1;
    InlinePlayerAutomaticRifleSettings.MinimumBurstPause = 0.0f;
    InlinePlayerAutomaticRifleSettings.MaximumBurstPause = 0.0f;

    InlinePlayerPistolSettings.WeaponClass = ERenegadeWeaponClass::Pistol;
    InlinePlayerPistolSettings.DamagePerShot = 24.0f;
    InlinePlayerPistolSettings.MaximumRange = 3500.0f;
    InlinePlayerPistolSettings.RoundsPerMinute = 360.0f;
    InlinePlayerPistolSettings.MinimumBurstShots = 1;
    InlinePlayerPistolSettings.MaximumBurstShots = 1;
    InlinePlayerPistolSettings.MinimumBurstPause = 0.0f;
    InlinePlayerPistolSettings.MaximumBurstPause = 0.0f;
    InlinePlayerPistolSettings.HipFireSpreadDegrees = 1.35f;
    InlinePlayerPistolSettings.MovingSpreadPenaltyDegrees = 0.8f;
    InlinePlayerPistolSettings.MagazineSize = 12;
    InlinePlayerPistolSettings.ReloadSeconds = 1.55f;

    InlinePlayerRocketLauncherSettings.WeaponClass = ERenegadeWeaponClass::RocketLauncher;
    InlinePlayerRocketLauncherSettings.DamagePerShot = 125.0f;
    InlinePlayerRocketLauncherSettings.MaximumRange = 6000.0f;
    InlinePlayerRocketLauncherSettings.RoundsPerMinute = 38.0f;
    InlinePlayerRocketLauncherSettings.MinimumBurstShots = 1;
    InlinePlayerRocketLauncherSettings.MaximumBurstShots = 1;
    InlinePlayerRocketLauncherSettings.MinimumBurstPause = 0.0f;
    InlinePlayerRocketLauncherSettings.MaximumBurstPause = 0.0f;
    InlinePlayerRocketLauncherSettings.HipFireSpreadDegrees = 0.65f;
    InlinePlayerRocketLauncherSettings.MovingSpreadPenaltyDegrees = 0.65f;
    InlinePlayerRocketLauncherSettings.CriticalHitMultiplier = 1.0f;
    InlinePlayerRocketLauncherSettings.CriticalBones.Reset();
    InlinePlayerRocketLauncherSettings.MinimumLongRangeDamageMultiplier = 1.0f;
    InlinePlayerRocketLauncherSettings.DamageFalloffStartFraction = 1.0f;
    InlinePlayerRocketLauncherSettings.bUseMagazine = true;
    InlinePlayerRocketLauncherSettings.MagazineSize = 1;
    InlinePlayerRocketLauncherSettings.ReloadSeconds = 2.75f;
    InlinePlayerRocketLauncherSettings.RocketLauncher = FRenegadeRocketLauncherSettings();
}

void URenegadeSoldierCombatComponent::PostLoad()
{
    Super::PostLoad();

    // v1.5.0 used normal Aim as lock-on and stored empty dedicated keys in existing Blueprint templates.
    // v1.5.1 permanently separates the controls and upgrades those older serialized defaults safely.
    PlayerLockOn.bUseAimInputAsLockOn = false;
    if (!PlayerLockOn.KeyboardMouseLockOnKey.IsValid())
    {
        PlayerLockOn.KeyboardMouseLockOnKey = EKeys::LeftAlt;
    }
    if (!PlayerLockOn.GamepadLockOnKey.IsValid())
    {
        PlayerLockOn.GamepadLockOnKey = EKeys::Gamepad_LeftShoulder;
    }

    // v1.5.2 exposes the visual directly inside the main Targeting section. Preserve old Blueprint assignments.
    if (!IsValid(Targeting.PlayerLockOnIndicatorTexture) && IsValid(PlayerLockOn.LockOnIndicatorTexture))
    {
        Targeting.PlayerLockOnIndicatorTexture = PlayerLockOn.LockOnIndicatorTexture;
    }
}

void URenegadeSoldierCombatComponent::BeginPlay()
{
    Super::BeginPlay();

    ResolveOwnerComponents();
    OriginalActorTransform = GetOwner() ? GetOwner()->GetActorTransform() : FTransform::Identity;

    CaptureOriginalMeshStateIfNeeded();

    if (OwnerCapsule)
    {
        OriginalCapsuleCollisionEnabled = OwnerCapsule->GetCollisionEnabled();
    }

    if (OwnerMovement)
    {
        OriginalMaxWalkSpeed = OwnerMovement->MaxWalkSpeed;
        bOriginalOrientRotationToMovement = OwnerMovement->bOrientRotationToMovement;
        bOriginalUseControllerDesiredRotation = OwnerMovement->bUseControllerDesiredRotation;
    }

    if (OwnerCharacter)
    {
        bOriginalUseControllerRotationYaw = OwnerCharacter->bUseControllerRotationYaw;
    }

    if (HasAuthority())
    {
        CurrentHealth = FMath::Max(1.0f, HealthAndRespawn.MaximumHealth);

        if (bPlayerControlledCombat)
        {
            bAutoCombatEnabled = false;
            InitializePlayerWeaponAmmo(true);
            SyncCurrentMagazineFromPlayerWeapon();
        }
        else
        {
            const FRenegadeWeaponSettings Weapon = GetActiveWeaponSettings();
            CurrentMagazineAmmo = WeaponUsesMagazine(Weapon) ? GetEffectiveMagazineSize(Weapon) : 0;
        }

        if (AActor* Owner = GetOwner())
        {
            Owner->OnTakeAnyDamage.AddDynamic(this, &URenegadeSoldierCombatComponent::HandleOwnerAnyDamage);
        }
    }

    RegisterWithCombatWorld();

    if (HasAuthority() && !bPlayerControlledCombat && bAutoStartOnBeginPlay && bAutoCombatEnabled)
    {
        StartAutoCombat();
    }

    PlayerAimAlpha = bIsPlayerAiming ? 1.0f : 0.0f;
    ResetPlayerAimCameraCapture();
    if (bPlayerControlledCombat && bIsPlayerAiming)
    {
        HandlePlayerAimStateChanged(false);
    }

    UpdateComponentTickState();
}

void URenegadeSoldierCombatComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    RestoreCombatFacingMode(true);
    RestorePlayerAimRotationMode();
    RestorePlayerAimCameraZoom(true);
    PlayerAimAlpha = 0.0f;
    ResetBuiltInPlayerInputState(false);
    ClearPlayerLockOnTargetInternal(false);
    DestroyLockOnIndicator();
    StopLocalPlayerFireTimer();
    StopAllBulletMeshVisuals();
    StopAllRocketLauncherVisuals();
    StopAllGrenadeLauncherVisuals();
    PendingRocketImpacts.Reset();
    ActiveGrenadeProjectiles.Reset();

    for (UStaticMeshComponent* BulletComponent : BulletVisualComponents)
    {
        if (IsValid(BulletComponent))
        {
            BulletComponent->DestroyComponent();
        }
    }
    BulletVisualComponents.Reset();
    BulletVisualStates.Reset();

    for (UStaticMeshComponent* RocketComponent : RocketVisualComponents)
    {
        if (IsValid(RocketComponent))
        {
            RocketComponent->DestroyComponent();
        }
    }
    RocketVisualComponents.Reset();
    RocketVisualStates.Reset();

    for (UStaticMeshComponent* GrenadeComponent : GrenadeVisualComponents)
    {
        if (IsValid(GrenadeComponent))
        {
            GrenadeComponent->DestroyComponent();
        }
    }
    GrenadeVisualComponents.Reset();
    GrenadeVisualStates.Reset();
    SetComponentTickEnabled(false);

    if (AActor* Owner = GetOwner())
    {
        Owner->OnTakeAnyDamage.RemoveDynamic(this, &URenegadeSoldierCombatComponent::HandleOwnerAnyDamage);
    }

    UnregisterFromCombatWorld();

    if (UWorld* World = GetWorld())
    {
        World->GetTimerManager().ClearAllTimersForObject(this);
    }

    Super::EndPlay(EndPlayReason);
}

void URenegadeSoldierCombatComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    // Optional self-contained input runs only for the owning local player.
    UpdateBuiltInPlayerInput(DeltaTime);

    // Local TPS lock-on steers controller aim before Character-facing and camera zoom presentation run.
    UpdatePlayerLockOn(DeltaTime);

    // Player aim presentation owns camera zoom and camera-facing Character yaw while aiming.
    UpdatePlayerAimPresentation(DeltaTime);

    // Cosmetic bullet, rocket and Grenadier projectile components run on clients and on the listen-server view.
    UpdateBulletMeshVisuals(DeltaTime);
    UpdateRocketLauncherVisuals(DeltaTime);
    UpdateGrenadeLauncherVisuals(DeltaTime);

    if (HasAuthority())
    {
        // Rocket damage uses delayed endpoint arrival; grenades run live gravity/collision simulation.
        UpdatePendingRocketImpacts(DeltaTime);
        UpdateActiveGrenadeProjectiles(DeltaTime);
    }

    if (HasAuthority())
    {
        if (!bIsDead && bLockCombatRotationToCurrentTarget && IsValid(CurrentTarget))
        {
            UpdateCombatFacing(DeltaTime);
        }
        else
        {
            RestoreCombatFacingMode(true);
        }
    }

    UpdateComponentTickState();
}

void URenegadeSoldierCombatComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(URenegadeSoldierCombatComponent, TeamId);
    DOREPLIFETIME(URenegadeSoldierCombatComponent, CurrentHealth);
    DOREPLIFETIME(URenegadeSoldierCombatComponent, bIsDead);
    DOREPLIFETIME(URenegadeSoldierCombatComponent, CurrentTarget);
    DOREPLIFETIME(URenegadeSoldierCombatComponent, CurrentMagazineAmmo);
    DOREPLIFETIME(URenegadeSoldierCombatComponent, bLockCombatRotationToCurrentTarget);
    DOREPLIFETIME(URenegadeSoldierCombatComponent, bPlayerControlledCombat);
    DOREPLIFETIME(URenegadeSoldierCombatComponent, ActivePlayerWeapon);
    DOREPLIFETIME(URenegadeSoldierCombatComponent, CurrentAutomaticRifleAmmo);
    DOREPLIFETIME(URenegadeSoldierCombatComponent, CurrentPistolAmmo);
    DOREPLIFETIME(URenegadeSoldierCombatComponent, CurrentRocketLauncherAmmo);
    DOREPLIFETIME(URenegadeSoldierCombatComponent, bIsPlayerAiming);
}

void URenegadeSoldierCombatComponent::RegisterWithCombatWorld()
{
    if (!bRegisterAsCombatTarget)
    {
        return;
    }

    if (UWorld* World = GetWorld())
    {
        if (URenegadeCombatRegistrySubsystem* Registry = World->GetSubsystem<URenegadeCombatRegistrySubsystem>())
        {
            Registry->RegisterCombatant(this);
        }
    }
}

void URenegadeSoldierCombatComponent::UnregisterFromCombatWorld()
{
    if (UWorld* World = GetWorld())
    {
        if (URenegadeCombatRegistrySubsystem* Registry = World->GetSubsystem<URenegadeCombatRegistrySubsystem>())
        {
            Registry->UnregisterCombatant(this);
        }
    }
}

void URenegadeSoldierCombatComponent::ResolveOwnerComponents()
{
    AActor* Owner = GetOwner();
    OwnerCharacter = Cast<ACharacter>(Owner);
    OwnerCapsule = OwnerCharacter ? OwnerCharacter->GetCapsuleComponent() : (Owner ? Owner->FindComponentByClass<UCapsuleComponent>() : nullptr);
    OwnerMovement = OwnerCharacter ? OwnerCharacter->GetCharacterMovement() : nullptr;

    USkeletalMeshComponent* DefaultMesh = OwnerCharacter ? OwnerCharacter->GetMesh() : (Owner ? Owner->FindComponentByClass<USkeletalMeshComponent>() : nullptr);
    OwnerMesh = ResolveLeaderPoseRagdollMesh(DefaultMesh);

    if (!Owner)
    {
        return;
    }

    TArray<USkeletalMeshComponent*> SkeletalMeshes;
    Owner->GetComponents<USkeletalMeshComponent>(SkeletalMeshes);

    if (!HealthAndRespawn.RagdollMeshComponentTag.IsNone())
    {
        for (USkeletalMeshComponent* Candidate : SkeletalMeshes)
        {
            if (IsValid(Candidate) && Candidate->ComponentHasTag(HealthAndRespawn.RagdollMeshComponentTag))
            {
                OwnerMesh = ResolveLeaderPoseRagdollMesh(Candidate);
                return;
            }
        }
    }

    if (HealthAndRespawn.bAutoFindRagdollMeshWithPhysicsAsset && !HasUsableRagdollPhysics(OwnerMesh))
    {
        // First prefer a real pose leader/standalone component. Simulating a Leader Pose follower
        // independently is unsupported and commonly stretches modular meshes back toward the origin.
        for (USkeletalMeshComponent* Candidate : SkeletalMeshes)
        {
            if (IsValid(Candidate) && !Candidate->LeaderPoseComponent.IsValid() && HasUsableRagdollPhysics(Candidate))
            {
                OwnerMesh = Candidate;
                return;
            }
        }

        // Last fallback: resolve any follower to its leader before testing physics.
        for (USkeletalMeshComponent* Candidate : SkeletalMeshes)
        {
            USkeletalMeshComponent* ResolvedCandidate = ResolveLeaderPoseRagdollMesh(Candidate);
            if (HasUsableRagdollPhysics(ResolvedCandidate))
            {
                OwnerMesh = ResolvedCandidate;
                return;
            }
        }
    }
}

bool URenegadeSoldierCombatComponent::HasUsableRagdollPhysics(const USkeletalMeshComponent* Mesh) const
{
    if (!IsValid(Mesh) || !Mesh->GetSkeletalMeshAsset())
    {
        return false;
    }

    const UPhysicsAsset* PhysicsAsset = Mesh->GetPhysicsAsset();
    return IsValid(PhysicsAsset) && PhysicsAsset->SkeletalBodySetups.Num() > 0;
}

USkeletalMeshComponent* URenegadeSoldierCombatComponent::ResolveLeaderPoseRagdollMesh(USkeletalMeshComponent* Mesh) const
{
    if (!IsValid(Mesh) || !HealthAndRespawn.bResolveLeaderPoseMeshForRagdoll)
    {
        return Mesh;
    }

    USkinnedMeshComponent* Leader = Mesh->LeaderPoseComponent.Get();
    if (!IsValid(Leader))
    {
        return Mesh;
    }

    if (USkeletalMeshComponent* SkeletalLeader = Cast<USkeletalMeshComponent>(Leader))
    {
        return SkeletalLeader;
    }

    return Mesh;
}

FName URenegadeSoldierCombatComponent::ResolveRagdollRootBone() const
{
    if (!IsValid(OwnerMesh) || !HealthAndRespawn.bUseRagdollRootBone)
    {
        return NAME_None;
    }

    if (!HealthAndRespawn.RagdollRootBone.IsNone() && OwnerMesh->GetBoneIndex(HealthAndRespawn.RagdollRootBone) != INDEX_NONE)
    {
        return HealthAndRespawn.RagdollRootBone;
    }

    // Skeletons do not all call the hip body "pelvis". Falling back to the first Physics Asset body
    // keeps the stable "bodies below" path useful for custom Renegade soldier skeletons.
    if (const UPhysicsAsset* PhysicsAsset = OwnerMesh->GetPhysicsAsset())
    {
        for (const USkeletalBodySetup* BodySetup : PhysicsAsset->SkeletalBodySetups)
        {
            if (IsValid(BodySetup) && OwnerMesh->GetBoneIndex(BodySetup->BoneName) != INDEX_NONE)
            {
                return BodySetup->BoneName;
            }
        }
    }

    return NAME_None;
}

void URenegadeSoldierCombatComponent::CaptureOriginalMeshStateIfNeeded()
{
    if (!IsValid(OwnerMesh) || OriginalStateMesh.Get() == OwnerMesh)
    {
        return;
    }

    OriginalStateMesh = OwnerMesh;
    OriginalMeshParent = OwnerMesh->GetAttachParent();
    OriginalMeshRelativeTransform = OwnerMesh->GetRelativeTransform();
    OriginalMeshCollisionProfile = OwnerMesh->GetCollisionProfileName();
    OriginalMeshCollisionEnabled = OwnerMesh->GetCollisionEnabled();
    bOriginalDisableClothSimulation = OwnerMesh->bDisableClothSimulation;
    bOriginalDisablePostProcessBlueprint = OwnerMesh->GetDisablePostProcessBlueprint();
    bOriginalDisableAnimDynamicsAnimNode = !OwnerMesh->GetAllowAnimDynamicsAnimNode();
    bOriginalDisableRigidBodyAnimNode = !OwnerMesh->GetAllowRigidBodyAnimNode();
}

bool URenegadeSoldierCombatComponent::HasAuthority() const
{
    return GetOwner() && GetOwner()->HasAuthority();
}

void URenegadeSoldierCombatComponent::StartAutoCombat()
{
    if (!HasAuthority() || bIsDead || bPlayerControlledCombat)
    {
        return;
    }

    bAutoCombatEnabled = true;
    bLocalAutoCombatStarted = true;

    UWorld* World = GetWorld();
    if (!World)
    {
        return;
    }

    const float RefreshRate = FMath::Max(0.05f, Targeting.TargetRefreshSeconds);
    World->GetTimerManager().SetTimer(TargetRefreshTimer, this, &URenegadeSoldierCombatComponent::RefreshTargeting, RefreshRate, true, FMath::FRandRange(0.01f, RefreshRate));

    const float MovementRate = FMath::Max(0.10f, CombatMovement.MovementUpdateSeconds);
    World->GetTimerManager().SetTimer(CombatMovementTimer, this, &URenegadeSoldierCombatComponent::PerformCombatMovement, MovementRate, true, FMath::FRandRange(0.05f, MovementRate));

    RefreshTargeting();
}

void URenegadeSoldierCombatComponent::StopAutoCombat(bool bResumeSplineMovement)
{
    if (!HasAuthority())
    {
        return;
    }

    bAutoCombatEnabled = false;
    bLocalAutoCombatStarted = false;

    if (UWorld* World = GetWorld())
    {
        World->GetTimerManager().ClearTimer(TargetRefreshTimer);
        World->GetTimerManager().ClearTimer(CombatMovementTimer);
        World->GetTimerManager().ClearTimer(FireTimer);
        World->GetTimerManager().ClearTimer(ReloadTimer);
    }

    bReloading = false;
    SetTargetInternal(nullptr, bResumeSplineMovement);
}

void URenegadeSoldierCombatComponent::SetCombatTarget(AActor* NewTarget)
{
    if (!HasAuthority() || bIsDead)
    {
        return;
    }

    SetTargetInternal(IsValidCombatTarget(NewTarget) ? NewTarget : nullptr, true);
}

void URenegadeSoldierCombatComponent::ClearCombatTarget(bool bResumeSplineMovement)
{
    if (HasAuthority())
    {
        SetTargetInternal(nullptr, bResumeSplineMovement);
    }
}

void URenegadeSoldierCombatComponent::ForceTargetRefresh()
{
    if (HasAuthority())
    {
        RefreshTargeting();
    }
}

void URenegadeSoldierCombatComponent::SetCombatRotationLockEnabled(bool bEnabled)
{
    if (!HasAuthority())
    {
        return;
    }

    bLockCombatRotationToCurrentTarget = bEnabled;

    if (bEnabled && !bIsDead && IsValid(CurrentTarget))
    {
        ApplyCombatFacingMode();
        UpdateCombatFacing(0.0f);
    }
    else
    {
        RestoreCombatFacingMode(true);
    }

    UpdateComponentTickState();

    if (AActor* Owner = GetOwner())
    {
        Owner->ForceNetUpdate();
    }
}

void URenegadeSoldierCombatComponent::SetTeamId(FName NewTeamId)
{
    if (HasAuthority())
    {
        TeamId = NewTeamId;
        if (AActor* Owner = GetOwner())
        {
            Owner->ForceNetUpdate();
        }
        RefreshTargeting();
    }
}

bool URenegadeSoldierCombatComponent::IsHostileToActor(const AActor* OtherActor) const
{
    if (!IsValid(OtherActor) || OtherActor == GetOwner())
    {
        return false;
    }

    FName OtherTeam = NAME_None;
    if (const URenegadeSoldierCombatComponent* OtherCombat = OtherActor->FindComponentByClass<URenegadeSoldierCombatComponent>())
    {
        OtherTeam = OtherCombat->TeamId;
    }
    else if (const URenegadeHarvesterCombatComponent* OtherHarvester = OtherActor->FindComponentByClass<URenegadeHarvesterCombatComponent>())
    {
        OtherTeam = OtherHarvester->TeamId;
    }
    else if (const URenegadeBuildingCombatComponent* OtherBuilding = OtherActor->FindComponentByClass<URenegadeBuildingCombatComponent>())
    {
        OtherTeam = OtherBuilding->TeamId;
    }
    else
    {
        return false;
    }

    if (RenegadeCombatPrivate::IsNeutralTeamName(TeamId) || RenegadeCombatPrivate::IsNeutralTeamName(OtherTeam))
    {
        return false;
    }

    if (TeamId.IsEqual(OtherTeam, ENameCase::IgnoreCase))
    {
        return false;
    }

    return bDifferentNonNeutralTeamsAreEnemies;
}

bool URenegadeSoldierCombatComponent::IsValidCombatTarget(const AActor* PossibleTarget) const
{
    if (!IsValid(PossibleTarget) || PossibleTarget == GetOwner() || bIsDead)
    {
        return false;
    }

    bool bTargetOperational = false;
    if (const URenegadeSoldierCombatComponent* TargetCombat = PossibleTarget->FindComponentByClass<URenegadeSoldierCombatComponent>())
    {
        bTargetOperational = TargetCombat->bRegisterAsCombatTarget && !TargetCombat->bIsDead;
    }
    else if (const URenegadeHarvesterCombatComponent* TargetHarvester = PossibleTarget->FindComponentByClass<URenegadeHarvesterCombatComponent>())
    {
        bTargetOperational = Targeting.bTargetHostileHarvesters
            && TargetHarvester->TargetSettings.bRegisterAsCombatTarget
            && TargetHarvester->IsOperational();
    }
    else if (const URenegadeBuildingCombatComponent* TargetBuilding = PossibleTarget->FindComponentByClass<URenegadeBuildingCombatComponent>())
    {
        bTargetOperational = Targeting.BuildingTargetPolicy != ERenegadeBuildingTargetPolicy::Never
            && TargetBuilding->TargetSettings.bRegisterAsCombatTarget
            && !TargetBuilding->bIsDestroyed
            && TargetBuilding->CurrentHealth > 0.0f;
    }

    if (!bTargetOperational || !IsHostileToActor(PossibleTarget))
    {
        return false;
    }

    const float LoseRadius = FMath::Max(100.0f, Targeting.SearchRadius * FMath::Max(1.0f, Targeting.LoseTargetRadiusMultiplier));
    return FVector::DistSquared(GetOwner()->GetActorLocation(), GetAimLocation(PossibleTarget)) <= FMath::Square(LoseRadius);
}

float URenegadeSoldierCombatComponent::GetHealthPercent() const
{
    return CurrentHealth / FMath::Max(1.0f, HealthAndRespawn.MaximumHealth);
}

void URenegadeSoldierCombatComponent::Heal(float Amount)
{
    if (HasAuthority() && !bIsDead && Amount > 0.0f)
    {
        ApplyHealthDelta(Amount, nullptr, nullptr);
    }
}

void URenegadeSoldierCombatComponent::ForceKill(AActor* Killer)
{
    if (!HasAuthority() || bIsDead)
    {
        return;
    }

    const float PreviousHealth = CurrentHealth;
    CurrentHealth = 0.0f;
    OnHealthChanged.Broadcast(PreviousHealth, CurrentHealth, Killer, Killer ? Killer->GetInstigatorController() : nullptr);
    BeginDeath(Killer ? Killer->GetInstigatorController() : nullptr, Killer);
}

void URenegadeSoldierCombatComponent::RespawnNow()
{
    if (!HasAuthority() || !bIsDead)
    {
        return;
    }

    if (UWorld* World = GetWorld())
    {
        World->GetTimerManager().ClearTimer(RespawnTimer);
    }

    const FTransform RespawnTransform = ResolveRespawnTransform();
    bIsDead = false;
    CurrentHealth = FMath::Max(1.0f, HealthAndRespawn.MaximumHealth);
    bReloading = false;
    bInvulnerable = HealthAndRespawn.RespawnInvulnerabilitySeconds > 0.0f;

    if (bPlayerControlledCombat)
    {
        if (PlayerCombat.bRefillAllWeaponsOnRespawn)
        {
            InitializePlayerWeaponAmmo(true);
        }
        SyncCurrentMagazineFromPlayerWeapon();
        NextAllowedPlayerShotServerTime = -BIG_NUMBER;
    }
    else
    {
        const FRenegadeWeaponSettings Weapon = GetActiveWeaponSettings();
        CurrentMagazineAmmo = WeaponUsesMagazine(Weapon) ? GetEffectiveMagazineSize(Weapon) : 0;
    }

    MulticastFinishRespawn(RespawnTransform);

    if (UWorld* World = GetWorld())
    {
        World->GetTimerManager().ClearTimer(InvulnerabilityTimer);
        if (bInvulnerable)
        {
            World->GetTimerManager().SetTimer(InvulnerabilityTimer, this, &URenegadeSoldierCombatComponent::EndRespawnInvulnerability, HealthAndRespawn.RespawnInvulnerabilitySeconds, false);
        }
    }

    if (bLocalAutoCombatStarted)
    {
        StartAutoCombat();
    }

    if (AActor* Owner = GetOwner())
    {
        Owner->ForceNetUpdate();
    }
}

void URenegadeSoldierCombatComponent::SetRuntimeRespawnTransform(FTransform NewRespawnTransform)
{
    if (!HasAuthority())
    {
        return;
    }

    RuntimeRespawnTransform = NewRespawnTransform;
    bHasRuntimeRespawnTransform = true;
}

void URenegadeSoldierCombatComponent::ClearRuntimeRespawnTransform()
{
    if (!HasAuthority())
    {
        return;
    }

    RuntimeRespawnTransform = FTransform::Identity;
    bHasRuntimeRespawnTransform = false;
}

void URenegadeSoldierCombatComponent::SetCustomRespawnTransforms(const TArray<FTransform>& NewRespawnTransforms)
{
    if (!HasAuthority())
    {
        return;
    }

    HealthAndRespawn.CustomRespawnTransforms = NewRespawnTransforms;
    CustomRespawnSequentialIndex = 0;
}

void URenegadeSoldierCombatComponent::AddCustomRespawnTransform(FTransform NewRespawnTransform)
{
    if (!HasAuthority())
    {
        return;
    }

    HealthAndRespawn.CustomRespawnTransforms.Add(NewRespawnTransform);
}

void URenegadeSoldierCombatComponent::ClearCustomRespawnTransforms()
{
    if (!HasAuthority())
    {
        return;
    }

    HealthAndRespawn.CustomRespawnTransforms.Reset();
    CustomRespawnSequentialIndex = 0;
}

void URenegadeSoldierCombatComponent::SetInvulnerable(bool bNewInvulnerable)
{
    if (HasAuthority())
    {
        bInvulnerable = bNewInvulnerable;
        if (!bInvulnerable && GetWorld())
        {
            GetWorld()->GetTimerManager().ClearTimer(InvulnerabilityTimer);
        }
    }
}

bool URenegadeSoldierCombatComponent::ValidateRagdollSetup(FString& FailureReason)
{
    ResolveOwnerComponents();
    FailureReason.Reset();

    if (!HealthAndRespawn.bEnableAutomaticRagdoll)
    {
        FailureReason = TEXT("Automatic ragdoll is disabled in Health and Respawn settings.");
        return false;
    }

    if (!IsValid(OwnerMesh))
    {
        FailureReason = TEXT("No Skeletal Mesh Component was found for ragdoll. Add a skeletal mesh or assign Ragdoll Mesh Component Tag.");
        return false;
    }

    if (!OwnerMesh->GetSkeletalMeshAsset())
    {
        FailureReason = FString::Printf(TEXT("Ragdoll mesh '%s' has no Skeletal Mesh asset assigned."), *OwnerMesh->GetName());
        return false;
    }

    const UPhysicsAsset* PhysicsAsset = OwnerMesh->GetPhysicsAsset();
    if (!IsValid(PhysicsAsset))
    {
        FailureReason = FString::Printf(TEXT("Ragdoll mesh '%s' has no Physics Asset. Assign one in the Skeletal Mesh editor."), *OwnerMesh->GetName());
        return false;
    }

    if (PhysicsAsset->SkeletalBodySetups.Num() == 0)
    {
        FailureReason = FString::Printf(TEXT("Physics Asset '%s' contains no physics bodies. Generate bodies and constraints in the Physics Asset Editor."), *PhysicsAsset->GetName());
        return false;
    }

    if (OwnerMesh->LeaderPoseComponent.IsValid())
    {
        FailureReason = FString::Printf(TEXT("Ragdoll mesh '%s' is still a Leader Pose follower. Tag or select the leader/body mesh, or enable Resolve Leader Pose Mesh For Ragdoll."), *OwnerMesh->GetName());
        return false;
    }

    const FVector MeshScale = OwnerMesh->GetComponentScale();
    const float MinimumAbsoluteScale = FMath::Min3(FMath::Abs(MeshScale.X), FMath::Abs(MeshScale.Y), FMath::Abs(MeshScale.Z));
    if (MinimumAbsoluteScale <= KINDA_SMALL_NUMBER)
    {
        FailureReason = FString::Printf(TEXT("Ragdoll mesh '%s' has a zero or near-zero component scale, which causes invalid physics transforms."), *OwnerMesh->GetName());
        return false;
    }

    return true;
}

FRenegadeWeaponSettings URenegadeSoldierCombatComponent::GetActiveWeaponSettings() const
{
    if (bPlayerControlledCombat)
    {
        return GetPlayerWeaponSettings(ActivePlayerWeapon);
    }

    if (bUseWeaponProfile && IsValid(WeaponProfile))
    {
        return WeaponProfile->Settings;
    }
    return InlineWeaponSettings;
}

bool URenegadeSoldierCombatComponent::IsRocketLauncherWeapon(const FRenegadeWeaponSettings& Weapon) const
{
    return Weapon.WeaponClass == ERenegadeWeaponClass::RocketLauncher;
}

bool URenegadeSoldierCombatComponent::IsGrenadeLauncherWeapon(const FRenegadeWeaponSettings& Weapon) const
{
    return Weapon.WeaponClass == ERenegadeWeaponClass::GrenadeLauncher;
}

bool URenegadeSoldierCombatComponent::IsExplosiveProjectileWeapon(const FRenegadeWeaponSettings& Weapon) const
{
    return IsRocketLauncherWeapon(Weapon) || IsGrenadeLauncherWeapon(Weapon);
}

bool URenegadeSoldierCombatComponent::WeaponUsesMagazine(const FRenegadeWeaponSettings& Weapon) const
{
    if (IsRocketLauncherWeapon(Weapon) && Weapon.RocketLauncher.bOverrideStandardMagazineAndCadence)
    {
        return true;
    }
    if (IsGrenadeLauncherWeapon(Weapon) && Weapon.GrenadeLauncher.bOverrideStandardMagazineAndCadence)
    {
        return true;
    }
    return Weapon.bUseMagazine;
}

int32 URenegadeSoldierCombatComponent::GetEffectiveMagazineSize(const FRenegadeWeaponSettings& Weapon) const
{
    if (IsRocketLauncherWeapon(Weapon) && Weapon.RocketLauncher.bOverrideStandardMagazineAndCadence)
    {
        return FMath::Max(1, Weapon.RocketLauncher.MagazineSize);
    }
    if (IsGrenadeLauncherWeapon(Weapon) && Weapon.GrenadeLauncher.bOverrideStandardMagazineAndCadence)
    {
        return FMath::Max(1, Weapon.GrenadeLauncher.MagazineSize);
    }
    return FMath::Max(1, Weapon.MagazineSize);
}

float URenegadeSoldierCombatComponent::GetEffectiveReloadSeconds(const FRenegadeWeaponSettings& Weapon) const
{
    if (IsRocketLauncherWeapon(Weapon) && Weapon.RocketLauncher.bOverrideStandardMagazineAndCadence)
    {
        return FMath::Max(0.01f, Weapon.RocketLauncher.ReloadSeconds);
    }
    if (IsGrenadeLauncherWeapon(Weapon) && Weapon.GrenadeLauncher.bOverrideStandardMagazineAndCadence)
    {
        return FMath::Max(0.01f, Weapon.GrenadeLauncher.ReloadSeconds);
    }
    return FMath::Max(0.01f, Weapon.ReloadSeconds);
}

float URenegadeSoldierCombatComponent::GetEffectiveRoundsPerMinute(const FRenegadeWeaponSettings& Weapon) const
{
    if (IsRocketLauncherWeapon(Weapon) && Weapon.RocketLauncher.bOverrideStandardMagazineAndCadence)
    {
        return FMath::Max(1.0f, Weapon.RocketLauncher.RoundsPerMinute);
    }
    if (IsGrenadeLauncherWeapon(Weapon) && Weapon.GrenadeLauncher.bOverrideStandardMagazineAndCadence)
    {
        return FMath::Max(1.0f, Weapon.GrenadeLauncher.RoundsPerMinute);
    }
    return FMath::Max(1.0f, Weapon.RoundsPerMinute);
}

FRenegadeWeaponSettings URenegadeSoldierCombatComponent::GetPlayerWeaponSettings(ERenegadePlayerWeaponSlot WeaponSlot) const
{
    if (bUsePlayerWeaponProfiles)
    {
        switch (WeaponSlot)
        {
        case ERenegadePlayerWeaponSlot::AutomaticRifle:
            if (IsValid(PlayerAutomaticRifleProfile))
            {
                return PlayerAutomaticRifleProfile->Settings;
            }
            break;
        case ERenegadePlayerWeaponSlot::Pistol:
            if (IsValid(PlayerPistolProfile))
            {
                return PlayerPistolProfile->Settings;
            }
            break;
        case ERenegadePlayerWeaponSlot::RocketLauncher:
            if (IsValid(PlayerRocketLauncherProfile))
            {
                return PlayerRocketLauncherProfile->Settings;
            }
            break;
        default:
            break;
        }
    }

    switch (WeaponSlot)
    {
    case ERenegadePlayerWeaponSlot::Pistol:
        return InlinePlayerPistolSettings;
    case ERenegadePlayerWeaponSlot::RocketLauncher:
        return InlinePlayerRocketLauncherSettings;
    case ERenegadePlayerWeaponSlot::AutomaticRifle:
    default:
        return InlinePlayerAutomaticRifleSettings;
    }
}

int32 URenegadeSoldierCombatComponent::GetPlayerWeaponAmmo(ERenegadePlayerWeaponSlot WeaponSlot) const
{
    switch (WeaponSlot)
    {
    case ERenegadePlayerWeaponSlot::Pistol:
        return CurrentPistolAmmo;
    case ERenegadePlayerWeaponSlot::RocketLauncher:
        return CurrentRocketLauncherAmmo;
    case ERenegadePlayerWeaponSlot::AutomaticRifle:
    default:
        return CurrentAutomaticRifleAmmo;
    }
}

int32& URenegadeSoldierCombatComponent::GetMutablePlayerAmmo(ERenegadePlayerWeaponSlot WeaponSlot)
{
    switch (WeaponSlot)
    {
    case ERenegadePlayerWeaponSlot::Pistol:
        return CurrentPistolAmmo;
    case ERenegadePlayerWeaponSlot::RocketLauncher:
        return CurrentRocketLauncherAmmo;
    case ERenegadePlayerWeaponSlot::AutomaticRifle:
    default:
        return CurrentAutomaticRifleAmmo;
    }
}

void URenegadeSoldierCombatComponent::SetPlayerAmmo(ERenegadePlayerWeaponSlot WeaponSlot, int32 NewAmmo)
{
    int32& Ammo = GetMutablePlayerAmmo(WeaponSlot);
    const int32 PreviousAmmo = Ammo;
    Ammo = FMath::Max(0, NewAmmo);

    if (ActivePlayerWeapon == WeaponSlot)
    {
        CurrentMagazineAmmo = Ammo;
    }

    if (PreviousAmmo != Ammo)
    {
        OnPlayerAmmoChanged.Broadcast(WeaponSlot, PreviousAmmo, Ammo);
    }
}

void URenegadeSoldierCombatComponent::InitializePlayerWeaponAmmo(bool bForceRefill)
{
    const FRenegadeWeaponSettings Rifle = GetPlayerWeaponSettings(ERenegadePlayerWeaponSlot::AutomaticRifle);
    const FRenegadeWeaponSettings Pistol = GetPlayerWeaponSettings(ERenegadePlayerWeaponSlot::Pistol);
    const FRenegadeWeaponSettings RocketLauncher = GetPlayerWeaponSettings(ERenegadePlayerWeaponSlot::RocketLauncher);

    if (bForceRefill || CurrentAutomaticRifleAmmo < 0)
    {
        SetPlayerAmmo(ERenegadePlayerWeaponSlot::AutomaticRifle, WeaponUsesMagazine(Rifle) ? GetEffectiveMagazineSize(Rifle) : 0);
    }

    if (bForceRefill || CurrentPistolAmmo < 0)
    {
        SetPlayerAmmo(ERenegadePlayerWeaponSlot::Pistol, WeaponUsesMagazine(Pistol) ? GetEffectiveMagazineSize(Pistol) : 0);
    }

    if (bForceRefill || CurrentRocketLauncherAmmo < 0)
    {
        SetPlayerAmmo(ERenegadePlayerWeaponSlot::RocketLauncher, WeaponUsesMagazine(RocketLauncher) ? GetEffectiveMagazineSize(RocketLauncher) : 0);
    }
}

void URenegadeSoldierCombatComponent::SyncCurrentMagazineFromPlayerWeapon()
{
    CurrentMagazineAmmo = GetPlayerWeaponAmmo(ActivePlayerWeapon);
}

bool URenegadeSoldierCombatComponent::IsLocallyControlledPlayer() const
{
    return bPlayerControlledCombat
        && IsValid(OwnerCharacter)
        && OwnerCharacter->IsLocallyControlled()
        && IsValid(Cast<APlayerController>(OwnerCharacter->GetController()));
}

bool URenegadeSoldierCombatComponent::ResolveLocalPlayerView(FVector& OutViewLocation, FVector& OutViewDirection) const
{
    OutViewLocation = FVector::ZeroVector;
    OutViewDirection = FVector::ForwardVector;

    if (!IsValid(OwnerCharacter))
    {
        return false;
    }

    bool bResolvedView = false;
    if (PlayerCombat.bUseControllerViewForAim)
    {
        if (AController* Controller = GetOwningController())
        {
            FRotator ViewRotation;
            Controller->GetPlayerViewPoint(OutViewLocation, ViewRotation);
            OutViewDirection = ViewRotation.Vector().GetSafeNormal();
            bResolvedView = !OutViewDirection.IsNearlyZero();
        }
    }

    if (!bResolvedView)
    {
        FRotator EyeRotation;
        OwnerCharacter->GetActorEyesViewPoint(OutViewLocation, EyeRotation);
        OutViewDirection = EyeRotation.Vector().GetSafeNormal();
        bResolvedView = !OutViewDirection.IsNearlyZero();
    }

    if (bResolvedView
        && PlayerLockOn.bEnableLockOn
        && PlayerLockOn.bAimPlayerShotsAtLockedTarget
        && IsValid(PlayerLockOnTarget)
        && IsPlayerLockOnCandidateValid(PlayerLockOnTarget, false))
    {
        const FVector AssistedDirection = (GetPlayerLockOnAimLocation() - OutViewLocation).GetSafeNormal();
        if (!AssistedDirection.IsNearlyZero())
        {
            const float Dot = FMath::Clamp(FVector::DotProduct(OutViewDirection, AssistedDirection), -1.0f, 1.0f);
            const float AssistAngle = FMath::RadiansToDegrees(FMath::Acos(Dot));
            if (AssistAngle <= FMath::Max(0.0f, PlayerLockOn.MaximumShotAssistAngleDegrees))
            {
                OutViewDirection = AssistedDirection;
            }
        }
    }

    return bResolvedView;
}

void URenegadeSoldierCombatComponent::PlayerStartFire()
{
    if (!bPlayerControlledCombat || bIsDead || !IsLocallyControlledPlayer())
    {
        return;
    }

    StopLocalPlayerFireTimer();

    const FRenegadeWeaponSettings Weapon = GetPlayerWeaponSettings(ActivePlayerWeapon);
    const bool bRepeat = ActivePlayerWeapon == ERenegadePlayerWeaponSlot::AutomaticRifle
        && PlayerCombat.bAutomaticRifleFiresWhileHeld
        && !IsRocketLauncherWeapon(Weapon);

    // Preserve a held automatic-rifle request through a reload so firing can resume when the magazine is ready.
    bLocalPlayerFireHeld = bRepeat;

    if (bReloading || (PlayerInput.bRequireAimToFire && !bIsPlayerAiming))
    {
        return;
    }

    SubmitLocalPlayerShot();

    if (bRepeat && GetWorld())
    {
        const float SecondsPerShot = 60.0f / GetEffectiveRoundsPerMinute(Weapon);
        GetWorld()->GetTimerManager().SetTimer(
            LocalPlayerFireTimer,
            this,
            &URenegadeSoldierCombatComponent::SubmitLocalPlayerShot,
            FMath::Max(0.01f, SecondsPerShot),
            true,
            FMath::Max(0.01f, SecondsPerShot));
    }
}

void URenegadeSoldierCombatComponent::PlayerStopFire()
{
    StopLocalPlayerFireTimer();
}

void URenegadeSoldierCombatComponent::PauseLocalPlayerFireTimer()
{
    if (UWorld* World = GetWorld())
    {
        World->GetTimerManager().ClearTimer(LocalPlayerFireTimer);
    }
}

void URenegadeSoldierCombatComponent::StopLocalPlayerFireTimer()
{
    bLocalPlayerFireHeld = false;
    PauseLocalPlayerFireTimer();
}

void URenegadeSoldierCombatComponent::PlayerFireOnce()
{
    if (!bPlayerControlledCombat || bIsDead || bReloading || !IsLocallyControlledPlayer()
        || (PlayerInput.bRequireAimToFire && !bIsPlayerAiming))
    {
        return;
    }

    SubmitLocalPlayerShot();
}

void URenegadeSoldierCombatComponent::SubmitLocalPlayerShot()
{
    if (!bPlayerControlledCombat || bIsDead || bReloading)
    {
        return;
    }

    FVector ViewLocation;
    FVector ViewDirection;
    if (!ResolveLocalPlayerView(ViewLocation, ViewDirection))
    {
        return;
    }

    if (HasAuthority())
    {
        PerformPlayerShotServer(ViewLocation, ViewDirection, ActivePlayerWeapon, bIsPlayerAiming);
    }
    else if (ActivePlayerWeapon == ERenegadePlayerWeaponSlot::RocketLauncher)
    {
        ServerRequestPlayerRocketShot(ViewLocation, ViewDirection, bIsPlayerAiming);
    }
    else
    {
        ServerRequestPlayerShot(ViewLocation, ViewDirection, ActivePlayerWeapon, bIsPlayerAiming);
    }
}

void URenegadeSoldierCombatComponent::SetPlayerAimingInternal(bool bNewAiming)
{
    if (!bPlayerControlledCombat)
    {
        bNewAiming = false;
    }

    bNewAiming = bNewAiming && !bIsDead;
    if (bIsPlayerAiming == bNewAiming)
    {
        // Settings may have changed while the state stayed the same. Keep presentation synchronised.
        if (bIsPlayerAiming)
        {
            ApplyPlayerAimRotationMode();
            UpdateComponentTickState();
        }
        return;
    }

    const bool bPreviousAiming = bIsPlayerAiming;
    bIsPlayerAiming = bNewAiming;
    HandlePlayerAimStateChanged(bPreviousAiming);
    OnPlayerAimChanged.Broadcast(bIsPlayerAiming);

    if (!bIsPlayerAiming && PlayerInput.bRequireAimToFire)
    {
        StopLocalPlayerFireTimer();
        bBuiltInFireCommandActive = false;
    }

    if (HasAuthority())
    {
        if (AActor* Owner = GetOwner())
        {
            Owner->ForceNetUpdate();
        }
    }
}

void URenegadeSoldierCombatComponent::HandlePlayerAimStateChanged(bool bPreviousAiming)
{
    if (!bPlayerControlledCombat || bIsDead || !PlayerAimPresentation.bEnableAimPresentation)
    {
        RestorePlayerAimRotationMode();
        UpdateComponentTickState();
        return;
    }

    if (bIsPlayerAiming)
    {
        ApplyPlayerAimRotationMode();
        if (!bPreviousAiming && PlayerAimPresentation.bSnapCharacterToCameraYawOnAimStart)
        {
            RotatePlayerCharacterToAimForward(0.0f, true);
        }

        // Capture and apply an initial camera step immediately so aim never appears unresponsive.
        UpdatePlayerAimCameraZoom(0.0f, PlayerAimPresentation.ZoomInInterpSpeed <= KINDA_SMALL_NUMBER);
    }
    else
    {
        RestorePlayerAimRotationMode();
        if (PlayerAimPresentation.ZoomOutInterpSpeed <= KINDA_SMALL_NUMBER)
        {
            RestorePlayerAimCameraZoom(true);
        }
    }

    UpdateComponentTickState();
}

void URenegadeSoldierCombatComponent::ApplyPlayerAimRotationMode()
{
    if (bPlayerAimRotationModeApplied || !bPlayerControlledCombat || bIsDead
        || !PlayerAimPresentation.bEnableAimPresentation
        || !PlayerAimPresentation.bRotateCharacterToCameraForward
        || (!HasAuthority() && !IsLocallyControlledPlayer()))
    {
        return;
    }

    ResolveOwnerComponents();
    if (!IsValid(OwnerCharacter))
    {
        return;
    }

    if (IsValid(OwnerMovement))
    {
        if (PlayerAimPresentation.bDisableOrientRotationToMovementWhileAiming)
        {
            OwnerMovement->bOrientRotationToMovement = false;
        }
        OwnerMovement->bUseControllerDesiredRotation = PlayerAimPresentation.bUseControllerDesiredRotationWhileAiming;
    }

    OwnerCharacter->bUseControllerRotationYaw = PlayerAimPresentation.bUseControllerRotationYawWhileAiming;
    bPlayerAimRotationModeApplied = true;
}

void URenegadeSoldierCombatComponent::RestorePlayerAimRotationMode()
{
    if (!bPlayerAimRotationModeApplied)
    {
        return;
    }

    ResolveOwnerComponents();
    if (IsValid(OwnerMovement))
    {
        OwnerMovement->bOrientRotationToMovement = bOriginalOrientRotationToMovement;
        OwnerMovement->bUseControllerDesiredRotation = bOriginalUseControllerDesiredRotation;
    }

    if (IsValid(OwnerCharacter))
    {
        OwnerCharacter->bUseControllerRotationYaw = bOriginalUseControllerRotationYaw;
    }

    bPlayerAimRotationModeApplied = false;
}

void URenegadeSoldierCombatComponent::RotatePlayerCharacterToAimForward(float DeltaTime, bool bInstant)
{
    if ((!bIsPlayerAiming && !bInstant) || bIsDead || !bPlayerControlledCombat
        || !PlayerAimPresentation.bEnableAimPresentation
        || !PlayerAimPresentation.bRotateCharacterToCameraForward
        || (!HasAuthority() && !IsLocallyControlledPlayer())
        || !IsValid(GetOwner()))
    {
        return;
    }

    AController* Controller = GetOwningController();
    if (!IsValid(Controller))
    {
        return;
    }

    FRotator ViewRotation = Controller->GetControlRotation();
    if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
    {
        FVector ViewLocation;
        PlayerController->GetPlayerViewPoint(ViewLocation, ViewRotation);
    }

    FRotator CurrentRotation = GetOwner()->GetActorRotation();
    const FRotator DesiredRotation(0.0f, ViewRotation.Yaw, 0.0f);
    const float RotationSpeed = FMath::Max(0.0f, PlayerAimPresentation.CharacterRotationSpeedDegreesPerSecond);
    const FRotator NewRotation = bInstant || RotationSpeed <= KINDA_SMALL_NUMBER || DeltaTime <= 0.0f
        ? DesiredRotation
        : FMath::RInterpConstantTo(CurrentRotation, DesiredRotation, DeltaTime, RotationSpeed);

    GetOwner()->SetActorRotation(NewRotation, ETeleportType::None);
}

UCameraComponent* URenegadeSoldierCombatComponent::ResolvePlayerAimCameraComponent() const
{
    AActor* Owner = GetOwner();
    if (!IsValid(Owner))
    {
        return nullptr;
    }

    if (IsValid(RuntimePlayerAimCameraComponent) && RuntimePlayerAimCameraComponent->GetOwner() == Owner)
    {
        return RuntimePlayerAimCameraComponent;
    }

    if (UActorComponent* SelectedComponent = PlayerAimCameraComponent.GetComponent(Owner))
    {
        if (UCameraComponent* SelectedCamera = Cast<UCameraComponent>(SelectedComponent))
        {
            return SelectedCamera;
        }
    }

    TArray<UCameraComponent*> Cameras;
    Owner->GetComponents<UCameraComponent>(Cameras);

    if (!PlayerAimCameraComponentTag.IsNone())
    {
        for (UCameraComponent* Camera : Cameras)
        {
            if (IsValid(Camera) && Camera->ComponentHasTag(PlayerAimCameraComponentTag))
            {
                return Camera;
            }
        }
    }

    if (PlayerAimPresentation.bAutoFindActiveCameraComponent)
    {
        for (UCameraComponent* Camera : Cameras)
        {
            if (IsValid(Camera) && Camera->IsActive())
            {
                return Camera;
            }
        }
    }

    for (UCameraComponent* Camera : Cameras)
    {
        if (IsValid(Camera))
        {
            return Camera;
        }
    }

    return nullptr;
}

APlayerCameraManager* URenegadeSoldierCombatComponent::ResolveLocalPlayerCameraManager() const
{
    APlayerController* PlayerController = Cast<APlayerController>(GetOwningController());
    return IsValid(PlayerController) && PlayerController->IsLocalController()
        ? PlayerController->PlayerCameraManager
        : nullptr;
}

void URenegadeSoldierCombatComponent::ResetPlayerAimCameraCapture()
{
    CapturedPlayerAimCameraComponent.Reset();
    CapturedPlayerAimCameraManager.Reset();
    bOriginalPlayerAimCameraFOVCaptured = false;
    bOriginalPlayerCameraManagerFOVCaptured = false;
    bPlayerCameraManagerFOVLockedByPlugin = false;
}

void URenegadeSoldierCombatComponent::UpdatePlayerAimCameraZoom(float DeltaTime, bool bInstant)
{
    if (!IsLocallyControlledPlayer())
    {
        return;
    }

    const bool bCanZoom = bPlayerControlledCombat
        && PlayerAimPresentation.bEnableAimPresentation
        && PlayerAimPresentation.bZoomCameraWhileAiming;
    const bool bTargetAiming = bCanZoom && bIsPlayerAiming && !bIsDead;
    const bool bHasPendingCameraRestore = bOriginalPlayerAimCameraFOVCaptured
        || bOriginalPlayerCameraManagerFOVCaptured
        || bPlayerCameraManagerFOVLockedByPlugin;
    if (!bTargetAiming && !bHasPendingCameraRestore)
    {
        return;
    }

    if (UCameraComponent* Camera = ResolvePlayerAimCameraComponent())
    {
        // A Camera Component now owns the zoom; release any previous PlayerCameraManager fallback lock.
        if (bOriginalPlayerCameraManagerFOVCaptured || bPlayerCameraManagerFOVLockedByPlugin)
        {
            APlayerCameraManager* CameraManager = CapturedPlayerAimCameraManager.IsValid()
                ? CapturedPlayerAimCameraManager.Get()
                : ResolveLocalPlayerCameraManager();
            if (IsValid(CameraManager))
            {
                CameraManager->SetFOV(OriginalPlayerCameraManagerFOV);
                CameraManager->UnlockFOV();
            }
            CapturedPlayerAimCameraManager.Reset();
            bOriginalPlayerCameraManagerFOVCaptured = false;
            bPlayerCameraManagerFOVLockedByPlugin = false;
        }

        if (CapturedPlayerAimCameraComponent.Get() != Camera)
        {
            if (CapturedPlayerAimCameraComponent.IsValid() && bOriginalPlayerAimCameraFOVCaptured)
            {
                CapturedPlayerAimCameraComponent->SetFieldOfView(OriginalPlayerAimCameraFOV);
            }

            CapturedPlayerAimCameraComponent = Camera;
            OriginalPlayerAimCameraFOV = Camera->FieldOfView;
            bOriginalPlayerAimCameraFOVCaptured = true;
        }

        const float TargetFOV = bTargetAiming
            ? FMath::Clamp(PlayerAimPresentation.AimedFieldOfView, 5.0f, 170.0f)
            : OriginalPlayerAimCameraFOV;
        const float InterpSpeed = bTargetAiming
            ? FMath::Max(0.0f, PlayerAimPresentation.ZoomInInterpSpeed)
            : FMath::Max(0.0f, PlayerAimPresentation.ZoomOutInterpSpeed);
        const float NewFOV = bInstant || InterpSpeed <= KINDA_SMALL_NUMBER
            ? TargetFOV
            : FMath::FInterpTo(Camera->FieldOfView, TargetFOV, FMath::Max(0.0f, DeltaTime), InterpSpeed);
        Camera->SetFieldOfView(NewFOV);

        if (!bTargetAiming && FMath::IsNearlyEqual(NewFOV, TargetFOV, 0.05f))
        {
            Camera->SetFieldOfView(TargetFOV);
            CapturedPlayerAimCameraComponent.Reset();
            bOriginalPlayerAimCameraFOVCaptured = false;
        }
        return;
    }

    if (!CapturedPlayerAimCameraComponent.IsValid())
    {
        bOriginalPlayerAimCameraFOVCaptured = false;
    }

    if (!PlayerAimPresentation.bUsePlayerCameraManagerFallback)
    {
        APlayerCameraManager* CameraManager = CapturedPlayerAimCameraManager.IsValid()
            ? CapturedPlayerAimCameraManager.Get()
            : ResolveLocalPlayerCameraManager();
        if (IsValid(CameraManager) && (bOriginalPlayerCameraManagerFOVCaptured || bPlayerCameraManagerFOVLockedByPlugin))
        {
            CameraManager->SetFOV(OriginalPlayerCameraManagerFOV);
            CameraManager->UnlockFOV();
        }
        CapturedPlayerAimCameraManager.Reset();
        bOriginalPlayerCameraManagerFOVCaptured = false;
        bPlayerCameraManagerFOVLockedByPlugin = false;
        return;
    }

    APlayerCameraManager* CameraManager = ResolveLocalPlayerCameraManager();
    if (!IsValid(CameraManager))
    {
        return;
    }

    if (!bOriginalPlayerCameraManagerFOVCaptured || CapturedPlayerAimCameraManager.Get() != CameraManager)
    {
        OriginalPlayerCameraManagerFOV = CameraManager->GetFOVAngle();
        CapturedPlayerAimCameraManager = CameraManager;
        bOriginalPlayerCameraManagerFOVCaptured = true;
    }

    const float CurrentFOV = CameraManager->GetFOVAngle();
    const float TargetFOV = bTargetAiming
        ? FMath::Clamp(PlayerAimPresentation.AimedFieldOfView, 5.0f, 170.0f)
        : OriginalPlayerCameraManagerFOV;
    const float InterpSpeed = bTargetAiming
        ? FMath::Max(0.0f, PlayerAimPresentation.ZoomInInterpSpeed)
        : FMath::Max(0.0f, PlayerAimPresentation.ZoomOutInterpSpeed);
    const float NewFOV = bInstant || InterpSpeed <= KINDA_SMALL_NUMBER
        ? TargetFOV
        : FMath::FInterpTo(CurrentFOV, TargetFOV, FMath::Max(0.0f, DeltaTime), InterpSpeed);

    CameraManager->SetFOV(NewFOV);
    bPlayerCameraManagerFOVLockedByPlugin = true;

    if (!bTargetAiming && FMath::IsNearlyEqual(NewFOV, TargetFOV, 0.05f))
    {
        CameraManager->SetFOV(TargetFOV);
        CameraManager->UnlockFOV();
        CapturedPlayerAimCameraManager.Reset();
        bOriginalPlayerCameraManagerFOVCaptured = false;
        bPlayerCameraManagerFOVLockedByPlugin = false;
    }
}

void URenegadeSoldierCombatComponent::RestorePlayerAimCameraZoom(bool bInstant)
{
    if (CapturedPlayerAimCameraComponent.IsValid() && bOriginalPlayerAimCameraFOVCaptured)
    {
        UCameraComponent* Camera = CapturedPlayerAimCameraComponent.Get();
        if (bInstant || PlayerAimPresentation.ZoomOutInterpSpeed <= KINDA_SMALL_NUMBER || !IsLocallyControlledPlayer())
        {
            Camera->SetFieldOfView(OriginalPlayerAimCameraFOV);
            CapturedPlayerAimCameraComponent.Reset();
            bOriginalPlayerAimCameraFOVCaptured = false;
        }
        else
        {
            UpdatePlayerAimCameraZoom(0.0f, false);
        }
    }
    else if (!CapturedPlayerAimCameraComponent.IsValid())
    {
        bOriginalPlayerAimCameraFOVCaptured = false;
    }

    APlayerCameraManager* CameraManager = CapturedPlayerAimCameraManager.IsValid()
        ? CapturedPlayerAimCameraManager.Get()
        : ResolveLocalPlayerCameraManager();
    if (IsValid(CameraManager) && (bOriginalPlayerCameraManagerFOVCaptured || bPlayerCameraManagerFOVLockedByPlugin))
    {
        CameraManager->SetFOV(OriginalPlayerCameraManagerFOV);
        CameraManager->UnlockFOV();
    }

    CapturedPlayerAimCameraManager.Reset();
    bOriginalPlayerCameraManagerFOVCaptured = false;
    bPlayerCameraManagerFOVLockedByPlugin = false;
}

void URenegadeSoldierCombatComponent::UpdatePlayerAimPresentation(float DeltaTime)
{
    // Simulated proxies receive the server-authoritative Character rotation and do not need local aim ticking.
    if (!HasAuthority() && !IsLocallyControlledPlayer())
    {
        return;
    }

    if (!bPlayerControlledCombat || !PlayerAimPresentation.bEnableAimPresentation || bIsDead)
    {
        RestorePlayerAimRotationMode();
        UpdatePlayerAimCameraZoom(DeltaTime, false);
        const float RestoreSpeed = FMath::Max(0.0f, PlayerAimPresentation.ZoomOutInterpSpeed);
        PlayerAimAlpha = RestoreSpeed <= KINDA_SMALL_NUMBER
            ? 0.0f
            : FMath::FInterpTo(PlayerAimAlpha, 0.0f, FMath::Max(0.0f, DeltaTime), RestoreSpeed);
        if (FMath::IsNearlyZero(PlayerAimAlpha, 0.001f))
        {
            PlayerAimAlpha = 0.0f;
        }
        return;
    }

    if (bIsPlayerAiming)
    {
        ApplyPlayerAimRotationMode();
        RotatePlayerCharacterToAimForward(DeltaTime, false);
    }
    else
    {
        RestorePlayerAimRotationMode();
    }

    UpdatePlayerAimCameraZoom(DeltaTime, false);

    const float TargetAlpha = bIsPlayerAiming ? 1.0f : 0.0f;
    const float InterpSpeed = bIsPlayerAiming
        ? FMath::Max(0.0f, PlayerAimPresentation.ZoomInInterpSpeed)
        : FMath::Max(0.0f, PlayerAimPresentation.ZoomOutInterpSpeed);
    PlayerAimAlpha = InterpSpeed <= KINDA_SMALL_NUMBER
        ? TargetAlpha
        : FMath::FInterpTo(PlayerAimAlpha, TargetAlpha, FMath::Max(0.0f, DeltaTime), InterpSpeed);

    if (FMath::IsNearlyEqual(PlayerAimAlpha, TargetAlpha, 0.001f))
    {
        PlayerAimAlpha = TargetAlpha;
    }
}

bool URenegadeSoldierCombatComponent::HasPlayerAimPresentationWork() const
{
    if (!HasAuthority() && !IsLocallyControlledPlayer())
    {
        return false;
    }

    const bool bNeedsRestoration = bPlayerAimRotationModeApplied
        || PlayerAimAlpha > KINDA_SMALL_NUMBER
        || bOriginalPlayerAimCameraFOVCaptured
        || bOriginalPlayerCameraManagerFOVCaptured
        || bPlayerCameraManagerFOVLockedByPlugin;

    return bNeedsRestoration || (bPlayerControlledCombat && bIsPlayerAiming);
}

void URenegadeSoldierCombatComponent::SetPlayerAimCameraComponent(UCameraComponent* NewCameraComponent)
{
    if (IsValid(NewCameraComponent) && NewCameraComponent->GetOwner() != GetOwner())
    {
        UE_LOG(LogRenegadeSoldierCombat, Warning,
            TEXT("%s rejected Player Aim Camera Component '%s' because it belongs to a different actor."),
            *GetNameSafe(GetOwner()), *GetNameSafe(NewCameraComponent));
        return;
    }

    RestorePlayerAimCameraZoom(true);
    RuntimePlayerAimCameraComponent = NewCameraComponent;
    ResetPlayerAimCameraCapture();

    if (bIsPlayerAiming)
    {
        UpdatePlayerAimCameraZoom(0.0f, PlayerAimPresentation.ZoomInInterpSpeed <= KINDA_SMALL_NUMBER);
    }
    UpdateComponentTickState();
}

void URenegadeSoldierCombatComponent::ClearPlayerAimCameraComponent()
{
    SetPlayerAimCameraComponent(nullptr);
}

UCameraComponent* URenegadeSoldierCombatComponent::GetPlayerAimCameraComponent() const
{
    return ResolvePlayerAimCameraComponent();
}

void URenegadeSoldierCombatComponent::SnapPlayerCharacterToAimForward()
{
    if (!bPlayerControlledCombat || bIsDead)
    {
        return;
    }

    ApplyPlayerAimRotationMode();
    RotatePlayerCharacterToAimForward(0.0f, true);
}

void URenegadeSoldierCombatComponent::RestorePlayerAimPresentation()
{
    const bool bWasAiming = bIsPlayerAiming;
    bPlayerAimInputRequested = false;
    bPlayerLockOnAimRequested = false;
    bBuiltInToggleAimLatched = false;
    bIsPlayerAiming = false;
    RestorePlayerAimRotationMode();
    RestorePlayerAimCameraZoom(true);
    PlayerAimAlpha = 0.0f;

    if (bWasAiming)
    {
        OnPlayerAimChanged.Broadcast(false);
        if (!HasAuthority() && IsLocallyControlledPlayer())
        {
            ServerSetPlayerAiming(false);
        }
        else if (HasAuthority() && IsValid(GetOwner()))
        {
            GetOwner()->ForceNetUpdate();
        }
    }

    UpdateComponentTickState();
}

void URenegadeSoldierCombatComponent::PlayerSetAiming(bool bNewAiming)
{
    if (!bPlayerControlledCombat || (!IsLocallyControlledPlayer() && !HasAuthority()))
    {
        return;
    }

    bPlayerAimInputRequested = bNewAiming && !bIsDead;
    RefreshPlayerAimingFromInputSources();
}

void URenegadeSoldierCombatComponent::PlayerStartAiming()
{
    PlayerSetAiming(true);
}

void URenegadeSoldierCombatComponent::PlayerStopAiming()
{
    PlayerSetAiming(false);
}

void URenegadeSoldierCombatComponent::RefreshPlayerAimingFromInputSources()
{
    if (!bPlayerControlledCombat || (!IsLocallyControlledPlayer() && !HasAuthority()))
    {
        return;
    }

    const bool bDesiredAiming = !bIsDead && (bPlayerAimInputRequested || bPlayerLockOnAimRequested);
    if (bIsPlayerAiming == bDesiredAiming)
    {
        return;
    }

    SetPlayerAimingInternal(bDesiredAiming);
    if (!HasAuthority() && IsLocallyControlledPlayer())
    {
        ServerSetPlayerAiming(bDesiredAiming);
    }
}

void URenegadeSoldierCombatComponent::SetBuiltInPlayerInputEnabled(bool bEnabled)
{
    PlayerInput.bEnableBuiltInInput = bEnabled;
    if (!bEnabled)
    {
        ResetBuiltInPlayerInputState(true);
    }
    UpdateComponentTickState();
}

bool URenegadeSoldierCombatComponent::IsBuiltInInputKeyDown(APlayerController* PlayerController, const FKey& Key) const
{
    if (!IsValid(PlayerController) || !Key.IsValid())
    {
        return false;
    }

    return PlayerController->IsInputKeyDown(Key)
        || FMath::Abs(PlayerController->GetInputAnalogKeyState(Key)) >= FMath::Clamp(PlayerInput.GamepadButtonThreshold, 0.01f, 1.0f);
}

float URenegadeSoldierCombatComponent::GetBuiltInInputAxis(APlayerController* PlayerController, const FKey& Key) const
{
    return IsValid(PlayerController) && Key.IsValid()
        ? PlayerController->GetInputAnalogKeyState(Key)
        : 0.0f;
}

float URenegadeSoldierCombatComponent::ApplyGamepadDeadZone(float Value) const
{
    const float DeadZone = FMath::Clamp(PlayerInput.GamepadLookDeadZone, 0.0f, 0.95f);
    const float Magnitude = FMath::Abs(Value);
    if (Magnitude <= DeadZone)
    {
        return 0.0f;
    }

    return FMath::Sign(Value) * FMath::Clamp((Magnitude - DeadZone) / FMath::Max(KINDA_SMALL_NUMBER, 1.0f - DeadZone), 0.0f, 1.0f);
}

void URenegadeSoldierCombatComponent::ResetBuiltInPlayerInputState(bool bClearAimState)
{
    if (bBuiltInFireCommandActive || bLocalPlayerFireHeld)
    {
        PlayerStopFire();
    }

    bBuiltInFireCommandActive = false;
    bPlayerAimInputRequested = false;
    bPlayerLockOnAimRequested = false;
    bBuiltInToggleAimLatched = false;
    bPreviousBuiltInAimDown = false;
    bPreviousBuiltInReloadDown = false;
    bPreviousBuiltInSelectRifleDown = false;
    bPreviousBuiltInSelectPistolDown = false;
    bPreviousBuiltInSelectRocketLauncherDown = false;
    bPreviousBuiltInLockOnDown = false;
    bPreviousBuiltInSwitchLeftDown = false;
    bPreviousBuiltInSwitchRightDown = false;
    bRightStickSwitchLatched = false;

    if (bPlayerLockOnInputHeld || IsValid(PlayerLockOnTarget))
    {
        bPlayerLockOnInputHeld = false;
        ClearPlayerLockOnTargetInternal(bClearAimState);
    }

    if (bClearAimState && bIsPlayerAiming)
    {
        if (IsLocallyControlledPlayer())
        {
            RefreshPlayerAimingFromInputSources();
        }
        else
        {
            SetPlayerAimingInternal(false);
        }
    }
}

void URenegadeSoldierCombatComponent::UpdateBuiltInPlayerInput(float DeltaTime)
{
    if (!PlayerInput.bEnableBuiltInInput || !bPlayerControlledCombat || !IsLocallyControlledPlayer())
    {
        return;
    }

    APlayerController* PlayerController = Cast<APlayerController>(GetOwningController());
    const bool bBlockedByPause = UGameplayStatics::IsGamePaused(this) && !PlayerInput.bAllowInputWhenPaused;
    const bool bBlockedByCursor = IsValid(PlayerController)
        && PlayerInput.bIgnoreInputWhileMouseCursorVisible
        && PlayerController->bShowMouseCursor;

    if (!IsValid(PlayerController) || !PlayerController->InputEnabled() || bIsDead || bBlockedByPause || bBlockedByCursor)
    {
        ResetBuiltInPlayerInputState(true);
        return;
    }

    const bool bSelectRifleDown = IsBuiltInInputKeyDown(PlayerController, PlayerInput.KeyboardMouseSelectRifleKey)
        || IsBuiltInInputKeyDown(PlayerController, PlayerInput.GamepadSelectRifleKey);
    const bool bSelectPistolDown = IsBuiltInInputKeyDown(PlayerController, PlayerInput.KeyboardMouseSelectPistolKey)
        || IsBuiltInInputKeyDown(PlayerController, PlayerInput.GamepadSelectPistolKey);
    const bool bSelectRocketLauncherDown = IsBuiltInInputKeyDown(PlayerController, PlayerInput.KeyboardMouseSelectRocketLauncherKey)
        || IsBuiltInInputKeyDown(PlayerController, PlayerInput.GamepadSelectRocketLauncherKey);

    if (bSelectRifleDown && !bPreviousBuiltInSelectRifleDown)
    {
        bBuiltInFireCommandActive = false;
        SelectPlayerAutomaticRifle();
    }
    if (bSelectPistolDown && !bPreviousBuiltInSelectPistolDown)
    {
        bBuiltInFireCommandActive = false;
        SelectPlayerPistol();
    }
    if (bSelectRocketLauncherDown && !bPreviousBuiltInSelectRocketLauncherDown)
    {
        bBuiltInFireCommandActive = false;
        SelectPlayerRocketLauncher();
    }

    const bool bReloadDown = IsBuiltInInputKeyDown(PlayerController, PlayerInput.KeyboardMouseReloadKey)
        || IsBuiltInInputKeyDown(PlayerController, PlayerInput.GamepadReloadKey);
    const bool bReloadPressedThisFrame = bReloadDown && !bPreviousBuiltInReloadDown;
    if (bReloadPressedThisFrame)
    {
        bBuiltInFireCommandActive = false;
        PlayerReload();
    }

    const bool bAimDown = IsBuiltInInputKeyDown(PlayerController, PlayerInput.KeyboardMouseAimKey)
        || IsBuiltInInputKeyDown(PlayerController, PlayerInput.GamepadAimKey);

    if (PlayerInput.bToggleAim)
    {
        if (bAimDown && !bPreviousBuiltInAimDown)
        {
            bBuiltInToggleAimLatched = !bBuiltInToggleAimLatched;
        }
        bPlayerAimInputRequested = bBuiltInToggleAimLatched;
    }
    else
    {
        bBuiltInToggleAimLatched = false;
        bPlayerAimInputRequested = bAimDown;
    }

    const FKey KeyboardLockOnKey = PlayerLockOn.KeyboardMouseLockOnKey.IsValid()
        ? PlayerLockOn.KeyboardMouseLockOnKey
        : EKeys::LeftAlt;
    const FKey GamepadLockOnKey = PlayerLockOn.GamepadLockOnKey.IsValid()
        ? PlayerLockOn.GamepadLockOnKey
        : EKeys::Gamepad_LeftShoulder;
    const bool bDedicatedLockOnDown = IsBuiltInInputKeyDown(PlayerController, KeyboardLockOnKey)
        || IsBuiltInInputKeyDown(PlayerController, GamepadLockOnKey);
    const bool bLockOnDown = PlayerLockOn.bEnableLockOn && bDedicatedLockOnDown;
    if (bLockOnDown != bPreviousBuiltInLockOnDown)
    {
        PlayerSetLockOnHeld(bLockOnDown);
    }

    // Normal aim and lock-on aim are independent sources. Either one keeps the full aim presentation active.
    RefreshPlayerAimingFromInputSources();

    const bool bSwitchLeftDown = PlayerLockOn.bEnableTargetSwitching
        && (IsBuiltInInputKeyDown(PlayerController, PlayerLockOn.KeyboardMouseSwitchLeftKey)
            || IsBuiltInInputKeyDown(PlayerController, PlayerLockOn.GamepadSwitchLeftKey));
    const bool bSwitchRightDown = PlayerLockOn.bEnableTargetSwitching
        && (IsBuiltInInputKeyDown(PlayerController, PlayerLockOn.KeyboardMouseSwitchRightKey)
            || IsBuiltInInputKeyDown(PlayerController, PlayerLockOn.GamepadSwitchRightKey));

    if (bPlayerLockOnInputHeld && bSwitchLeftDown && !bPreviousBuiltInSwitchLeftDown)
    {
        PlayerSwitchLockOnTarget(false);
    }
    if (bPlayerLockOnInputHeld && bSwitchRightDown && !bPreviousBuiltInSwitchRightDown)
    {
        PlayerSwitchLockOnTarget(true);
    }

    bool bRightStickSwitchInputConsumed = false;
    if (bPlayerLockOnInputHeld && PlayerLockOn.bEnableTargetSwitching && PlayerLockOn.bEnableRightStickFlickSwitching)
    {
        const float SwitchAxis = GetBuiltInInputAxis(PlayerController, PlayerInput.GamepadLookXAxis);
        const float SwitchThreshold = FMath::Clamp(PlayerLockOn.RightStickSwitchThreshold, 0.1f, 1.0f);
        if (FMath::Abs(SwitchAxis) <= SwitchThreshold * 0.45f)
        {
            bRightStickSwitchLatched = false;
        }
        else if (!bRightStickSwitchLatched && FMath::Abs(SwitchAxis) >= SwitchThreshold)
        {
            bRightStickSwitchLatched = true;
            bRightStickSwitchInputConsumed = PlayerSwitchLockOnTarget(SwitchAxis > 0.0f);
        }
        else if (bRightStickSwitchLatched && FMath::Abs(SwitchAxis) >= SwitchThreshold)
        {
            bRightStickSwitchInputConsumed = true;
        }
    }
    else
    {
        bRightStickSwitchLatched = false;
    }

    if (PlayerInput.bEnableBuiltInLookInput && (!PlayerInput.bOnlyLookWhileAiming || bIsPlayerAiming))
    {
        // MouseX/MouseY are per-frame deltas. GetInputAnalogKeyState can remain zero when
        // Enhanced Input owns the camera axes, so read the controller's raw mouse delta directly.
        float RawMouseDeltaX = 0.0f;
        float RawMouseDeltaY = 0.0f;
        PlayerController->GetInputMouseDelta(RawMouseDeltaX, RawMouseDeltaY);

        const float RawMouseYaw = PlayerInput.MouseLookXAxis == EKeys::MouseX
            ? RawMouseDeltaX
            : GetBuiltInInputAxis(PlayerController, PlayerInput.MouseLookXAxis);
        const float RawMousePitch = PlayerInput.MouseLookYAxis == EKeys::MouseY
            ? RawMouseDeltaY
            : GetBuiltInInputAxis(PlayerController, PlayerInput.MouseLookYAxis);

        const float MouseYaw = RawMouseYaw * FMath::Max(0.0f, PlayerInput.MouseYawSensitivity);
        float MousePitch = RawMousePitch * FMath::Max(0.0f, PlayerInput.MousePitchSensitivity);
        if (PlayerInput.bInvertMouseY)
        {
            MousePitch *= -1.0f;
        }

        const float GamepadYaw = ApplyGamepadDeadZone(GetBuiltInInputAxis(PlayerController, PlayerInput.GamepadLookXAxis))
            * FMath::Max(0.0f, PlayerInput.GamepadYawSpeedDegreesPerSecond)
            * FMath::Max(0.0f, DeltaTime);
        float GamepadPitch = ApplyGamepadDeadZone(GetBuiltInInputAxis(PlayerController, PlayerInput.GamepadLookYAxis))
            * FMath::Max(0.0f, PlayerInput.GamepadPitchSpeedDegreesPerSecond)
            * FMath::Max(0.0f, DeltaTime);
        if (PlayerInput.bInvertGamepadY)
        {
            GamepadPitch *= -1.0f;
        }

        const float AimLookMultiplier = bIsPlayerAiming
            ? FMath::Clamp(PlayerInput.AimingLookSensitivityMultiplier, 0.0f, 2.0f)
            : 1.0f;
        const float EffectiveGamepadYaw = bRightStickSwitchInputConsumed ? 0.0f : GamepadYaw;
        const float FinalYawInput = (MouseYaw + EffectiveGamepadYaw) * AimLookMultiplier;
        const float FinalPitchInput = (MousePitch + GamepadPitch) * AimLookMultiplier;

        const bool bRouteLookToLockPoint = PlayerLockOn.bEnableAimOffsetControl
            && bPlayerLockOnInputHeld
            && IsValid(PlayerLockOnTarget);
        if (bRouteLookToLockPoint)
        {
            ApplyPlayerLockOnAimInputInternal(FVector2D(FinalYawInput, FinalPitchInput));
        }

        if (!bRouteLookToLockPoint || !PlayerLockOn.bConsumeLookInputWhileLocked)
        {
            if (!FMath::IsNearlyZero(FinalYawInput))
            {
                PlayerController->AddYawInput(FinalYawInput);
            }
            if (!FMath::IsNearlyZero(FinalPitchInput))
            {
                PlayerController->AddPitchInput(FinalPitchInput);
            }
        }
    }

    const bool bFireDown = IsBuiltInInputKeyDown(PlayerController, PlayerInput.KeyboardMouseFireKey)
        || IsBuiltInInputKeyDown(PlayerController, PlayerInput.GamepadFireKey);
    const bool bShouldIssueFire = bFireDown && (!PlayerInput.bRequireAimToFire || bIsPlayerAiming) && !bReloadPressedThisFrame;

    if (bShouldIssueFire && !bBuiltInFireCommandActive)
    {
        bBuiltInFireCommandActive = true;
        PlayerStartFire();
    }
    else if (!bShouldIssueFire && bBuiltInFireCommandActive)
    {
        bBuiltInFireCommandActive = false;
        PlayerStopFire();
    }

    bPreviousBuiltInAimDown = bAimDown;
    bPreviousBuiltInReloadDown = bReloadDown;
    bPreviousBuiltInSelectRifleDown = bSelectRifleDown;
    bPreviousBuiltInSelectPistolDown = bSelectPistolDown;
    bPreviousBuiltInSelectRocketLauncherDown = bSelectRocketLauncherDown;
    bPreviousBuiltInLockOnDown = bLockOnDown;
    bPreviousBuiltInSwitchLeftDown = bSwitchLeftDown;
    bPreviousBuiltInSwitchRightDown = bSwitchRightDown;
}

FVector URenegadeSoldierCombatComponent::GetPlayerLockOnAimLocation() const
{
    if (!IsValid(PlayerLockOnTarget))
    {
        return FVector::ZeroVector;
    }

    // GetAimLocation already applies Targeting.AimHeightOffset to the configured target aim bone.
    // The movable input offset is screen-relative: horizontal follows camera right and vertical follows world up.
    const FVector BaseAimLocation = GetAimLocation(PlayerLockOnTarget);
    const FVector LeadOffset = PlayerLockOnTarget->GetVelocity() * FMath::Max(0.0f, PlayerLockOn.TargetLeadSeconds);
    return BaseAimLocation + PlayerLockOn.TargetAimOffset + GetPlayerLockOnManualWorldOffset() + LeadOffset;
}

void URenegadeSoldierCombatComponent::PlayerAddLockOnAimInput(const FVector2D LookInput, const bool bGamepadInput)
{
    if (!PlayerLockOn.bEnableAimOffsetControl || !bPlayerLockOnInputHeld || !IsValid(PlayerLockOnTarget)
        || !IsLocallyControlledPlayer())
    {
        return;
    }

    const float AimLookMultiplier = bIsPlayerAiming
        ? FMath::Clamp(PlayerInput.AimingLookSensitivityMultiplier, 0.0f, 2.0f)
        : 1.0f;

    FVector2D ScaledInput = LookInput;
    if (bGamepadInput)
    {
        const float DeltaSeconds = GetWorld() ? FMath::Max(0.0f, GetWorld()->GetDeltaSeconds()) : 0.0f;
        ScaledInput.X = ApplyGamepadDeadZone(ScaledInput.X)
            * FMath::Max(0.0f, PlayerInput.GamepadYawSpeedDegreesPerSecond) * DeltaSeconds;
        ScaledInput.Y = ApplyGamepadDeadZone(ScaledInput.Y)
            * FMath::Max(0.0f, PlayerInput.GamepadPitchSpeedDegreesPerSecond) * DeltaSeconds;
        if (PlayerInput.bInvertGamepadY)
        {
            ScaledInput.Y *= -1.0f;
        }
    }
    else
    {
        ScaledInput.X *= FMath::Max(0.0f, PlayerInput.MouseYawSensitivity);
        ScaledInput.Y *= FMath::Max(0.0f, PlayerInput.MousePitchSensitivity);
        if (PlayerInput.bInvertMouseY)
        {
            ScaledInput.Y *= -1.0f;
        }
    }

    ApplyPlayerLockOnAimInputInternal(ScaledInput * AimLookMultiplier);
}

void URenegadeSoldierCombatComponent::ResetPlayerLockOnAimOffset(const bool bInstant)
{
    PlayerLockOnAimOffsetTarget = FVector2D::ZeroVector;
    LastPlayerLockOnAimInputTime = -BIG_NUMBER;
    if (bInstant || PlayerLockOn.AimOffsetInterpSpeed <= KINDA_SMALL_NUMBER)
    {
        PlayerLockOnAimOffsetCurrent = FVector2D::ZeroVector;
    }
}

void URenegadeSoldierCombatComponent::ApplyPlayerLockOnAimInputInternal(const FVector2D& SensitivityScaledLookInput)
{
    if (!PlayerLockOn.bEnableAimOffsetControl || !IsValid(PlayerLockOnTarget))
    {
        return;
    }

    const float Conversion = FMath::Max(0.0f, PlayerLockOn.AimOffsetCentimetersPerLookDegree);
    const float HorizontalDelta = SensitivityScaledLookInput.X * Conversion
        * FMath::Max(0.0f, PlayerLockOn.AimOffsetHorizontalSensitivityMultiplier);
    // Positive camera pitch input normally looks downward, so invert it to make upward input move the lock point upward.
    const float VerticalDelta = -SensitivityScaledLookInput.Y * Conversion
        * FMath::Max(0.0f, PlayerLockOn.AimOffsetVerticalSensitivityMultiplier);

    if (FMath::IsNearlyZero(HorizontalDelta) && FMath::IsNearlyZero(VerticalDelta))
    {
        return;
    }

    PlayerLockOnAimOffsetTarget.X = FMath::Clamp(
        PlayerLockOnAimOffsetTarget.X + HorizontalDelta,
        -FMath::Max(0.0f, PlayerLockOn.MaximumHorizontalAimOffset),
        FMath::Max(0.0f, PlayerLockOn.MaximumHorizontalAimOffset));
    PlayerLockOnAimOffsetTarget.Y = FMath::Clamp(
        PlayerLockOnAimOffsetTarget.Y + VerticalDelta,
        -FMath::Max(0.0f, PlayerLockOn.MaximumDownwardAimOffset),
        FMath::Max(0.0f, PlayerLockOn.MaximumUpwardAimOffset));

    LastPlayerLockOnAimInputTime = GetWorld() ? GetWorld()->GetTimeSeconds() : 0.0;
}

void URenegadeSoldierCombatComponent::PollPlayerLockOnAimOffsetInput(const float DeltaTime)
{
    if (!PlayerLockOn.bEnableAimOffsetControl || !PlayerLockOn.bAutomaticallyReadConfiguredLookAxes
        || !bPlayerLockOnInputHeld || !IsValid(PlayerLockOnTarget))
    {
        return;
    }

    // When the plugin's built-in look path is active it already routes the same axes into the offset.
    if (PlayerInput.bEnableBuiltInInput && PlayerInput.bEnableBuiltInLookInput)
    {
        return;
    }

    APlayerController* PlayerController = Cast<APlayerController>(GetOwningController());
    if (!IsValid(PlayerController) || !PlayerController->InputEnabled())
    {
        return;
    }

    const float AimLookMultiplier = bIsPlayerAiming
        ? FMath::Clamp(PlayerInput.AimingLookSensitivityMultiplier, 0.0f, 2.0f)
        : 1.0f;

    // Enhanced Input often consumes MouseX/MouseY before GetInputAnalogKeyState can report
    // a useful value. GetInputMouseDelta remains available and makes automatic lock-point
    // movement work without an extra Blueprint axis call.
    float RawMouseDeltaX = 0.0f;
    float RawMouseDeltaY = 0.0f;
    PlayerController->GetInputMouseDelta(RawMouseDeltaX, RawMouseDeltaY);

    const float RawMouseYaw = PlayerInput.MouseLookXAxis == EKeys::MouseX
        ? RawMouseDeltaX
        : GetBuiltInInputAxis(PlayerController, PlayerInput.MouseLookXAxis);
    const float RawMousePitch = PlayerInput.MouseLookYAxis == EKeys::MouseY
        ? RawMouseDeltaY
        : GetBuiltInInputAxis(PlayerController, PlayerInput.MouseLookYAxis);

    const float MouseYaw = RawMouseYaw * FMath::Max(0.0f, PlayerInput.MouseYawSensitivity);
    float MousePitch = RawMousePitch * FMath::Max(0.0f, PlayerInput.MousePitchSensitivity);
    if (PlayerInput.bInvertMouseY)
    {
        MousePitch *= -1.0f;
    }

    const float GamepadYaw = ApplyGamepadDeadZone(GetBuiltInInputAxis(PlayerController, PlayerInput.GamepadLookXAxis))
        * FMath::Max(0.0f, PlayerInput.GamepadYawSpeedDegreesPerSecond)
        * FMath::Max(0.0f, DeltaTime);
    float GamepadPitch = ApplyGamepadDeadZone(GetBuiltInInputAxis(PlayerController, PlayerInput.GamepadLookYAxis))
        * FMath::Max(0.0f, PlayerInput.GamepadPitchSpeedDegreesPerSecond)
        * FMath::Max(0.0f, DeltaTime);
    if (PlayerInput.bInvertGamepadY)
    {
        GamepadPitch *= -1.0f;
    }

    ApplyPlayerLockOnAimInputInternal(FVector2D(
        (MouseYaw + GamepadYaw) * AimLookMultiplier,
        (MousePitch + GamepadPitch) * AimLookMultiplier));
}

void URenegadeSoldierCombatComponent::UpdatePlayerLockOnAimOffset(const float DeltaTime)
{
    if (!PlayerLockOn.bEnableAimOffsetControl || !IsValid(PlayerLockOnTarget))
    {
        ResetPlayerLockOnAimOffset(true);
        return;
    }

    const double Now = GetWorld() ? GetWorld()->GetTimeSeconds() : 0.0;
    const bool bShouldRecenter = PlayerLockOn.bAutoRecenterAimOffset
        && Now - LastPlayerLockOnAimInputTime >= FMath::Max(0.0f, PlayerLockOn.AimOffsetRecenterDelaySeconds);
    if (bShouldRecenter)
    {
        PlayerLockOnAimOffsetTarget = FVector2D::ZeroVector;
    }

    const float InterpSpeed = bShouldRecenter
        ? FMath::Max(0.0f, PlayerLockOn.AimOffsetRecenterInterpSpeed)
        : FMath::Max(0.0f, PlayerLockOn.AimOffsetInterpSpeed);
    if (InterpSpeed <= KINDA_SMALL_NUMBER || DeltaTime <= 0.0f)
    {
        PlayerLockOnAimOffsetCurrent = PlayerLockOnAimOffsetTarget;
        return;
    }

    PlayerLockOnAimOffsetCurrent.X = FMath::FInterpTo(
        PlayerLockOnAimOffsetCurrent.X, PlayerLockOnAimOffsetTarget.X, DeltaTime, InterpSpeed);
    PlayerLockOnAimOffsetCurrent.Y = FMath::FInterpTo(
        PlayerLockOnAimOffsetCurrent.Y, PlayerLockOnAimOffsetTarget.Y, DeltaTime, InterpSpeed);
}

FVector URenegadeSoldierCombatComponent::GetPlayerLockOnManualWorldOffset() const
{
    if (!PlayerLockOn.bEnableAimOffsetControl || PlayerLockOnAimOffsetCurrent.IsNearlyZero())
    {
        return FVector::ZeroVector;
    }

    FVector ScreenRight = GetOwner() ? GetOwner()->GetActorRightVector() : FVector::RightVector;
    if (AController* Controller = GetOwningController())
    {
        FVector ViewLocation;
        FRotator ViewRotation;
        Controller->GetPlayerViewPoint(ViewLocation, ViewRotation);
        ScreenRight = FRotationMatrix(ViewRotation).GetUnitAxis(EAxis::Y).GetSafeNormal();
    }

    return ScreenRight * PlayerLockOnAimOffsetCurrent.X
        + FVector::UpVector * PlayerLockOnAimOffsetCurrent.Y;
}

void URenegadeSoldierCombatComponent::SetPlayerLockOnIndicatorTexture(UTexture2D* NewTexture)
{
    Targeting.PlayerLockOnIndicatorTexture = NewTexture;
    PlayerLockOn.LockOnIndicatorTexture = NewTexture; // Keep the legacy serialized field synchronized.
    if (IsValid(NewTexture) && IsValid(PlayerLockOnTarget))
    {
        CreateOrUpdateLockOnIndicator();
    }
    else
    {
        HideLockOnIndicator();
    }
}

void URenegadeSoldierCombatComponent::SetPlayerLockOnIndicatorColor(FLinearColor NewColor)
{
    Targeting.PlayerLockOnIndicatorColor = NewColor;

    // The PNG is rendered by the Slate image hosted inside the Widget Component.
    // Tint the image itself so RGB and alpha are multiplied with the source texture.
    if (PlayerLockOnIndicatorSlateImage.IsValid())
    {
        PlayerLockOnIndicatorSlateImage->SetColorAndOpacity(FSlateColor(Targeting.PlayerLockOnIndicatorColor));
    }

    if (IsValid(PlayerLockOnIndicatorComponent))
    {
        // Keep the outer component neutral to avoid multiplying the selected tint twice.
        PlayerLockOnIndicatorComponent->SetTintColorAndOpacity(FLinearColor::White);
        PlayerLockOnIndicatorComponent->RequestRenderUpdate();
    }
}

void URenegadeSoldierCombatComponent::PlayerStartLockOn()
{
    if (!PlayerLockOn.bEnableLockOn || bIsDead || !IsLocallyControlledPlayer())
    {
        return;
    }

    bPlayerLockOnInputHeld = true;
    bPlayerLockOnAimRequested = PlayerLockOn.bAutomaticallyAimWhileLocking;
    RefreshPlayerAimingFromInputSources();

    RefreshPlayerLockOnTarget();
    UpdateComponentTickState();
}

void URenegadeSoldierCombatComponent::PlayerStopLockOn()
{
    bPlayerLockOnInputHeld = false;
    bPlayerLockOnAimRequested = false;
    ClearPlayerLockOnTargetInternal(false);
    RefreshPlayerAimingFromInputSources();
    UpdateComponentTickState();
}

void URenegadeSoldierCombatComponent::PlayerSetLockOnHeld(const bool bHeld)
{
    if (bHeld)
    {
        PlayerStartLockOn();
    }
    else
    {
        PlayerStopLockOn();
    }
}

bool URenegadeSoldierCombatComponent::PlayerLockOnToTarget(AActor* NewTarget)
{
    if (!PlayerLockOn.bEnableLockOn || bIsDead || !IsLocallyControlledPlayer()
        || !IsPlayerLockOnCandidateValid(NewTarget, true)
        || (PlayerLockOn.bRequireLineOfSightToAcquire && !HasPlayerLockOnLineOfSight(NewTarget)))
    {
        return false;
    }

    bPlayerLockOnInputHeld = true;
    bPlayerLockOnAimRequested = PlayerLockOn.bAutomaticallyAimWhileLocking;
    RefreshPlayerAimingFromInputSources();

    SetPlayerLockOnTargetInternal(NewTarget);
    UpdateComponentTickState();
    return true;
}

bool URenegadeSoldierCombatComponent::RefreshPlayerLockOnTarget()
{
    if (!PlayerLockOn.bEnableLockOn || bIsDead || !IsLocallyControlledPlayer())
    {
        return false;
    }

    if (IsValid(PlayerLockOnTarget) && IsPlayerLockOnCandidateValid(PlayerLockOnTarget, false))
    {
        return true;
    }

    AActor* BestTarget = FindBestPlayerLockOnTarget();
    SetPlayerLockOnTargetInternal(BestTarget);
    LastPlayerLockOnSearchTime = GetWorld() ? GetWorld()->GetTimeSeconds() : 0.0;
    return IsValid(BestTarget);
}

bool URenegadeSoldierCombatComponent::PlayerSwitchLockOnTarget(const bool bSwitchRight)
{
    if (!PlayerLockOn.bEnableLockOn || !PlayerLockOn.bEnableTargetSwitching
        || bIsDead || !IsLocallyControlledPlayer())
    {
        return false;
    }

    const double Now = GetWorld() ? GetWorld()->GetTimeSeconds() : 0.0;
    if (Now - LastPlayerLockOnSwitchTime < FMath::Max(0.0f, PlayerLockOn.TargetSwitchCooldownSeconds))
    {
        return false;
    }

    AActor* NewTarget = IsValid(PlayerLockOnTarget)
        ? FindDirectionalPlayerLockOnTarget(bSwitchRight)
        : FindBestPlayerLockOnTarget();
    if (!IsValid(NewTarget))
    {
        return false;
    }

    LastPlayerLockOnSwitchTime = Now;
    SetPlayerLockOnTargetInternal(NewTarget);
    return true;
}

bool URenegadeSoldierCombatComponent::IsPlayerLockOnCandidateValid(const AActor* Candidate, const bool bForAcquisition) const
{
    if (!PlayerLockOn.bEnableLockOn || !IsValid(Candidate) || Candidate == GetOwner()
        || !IsValid(GetOwner()) || !IsHostileToActor(Candidate))
    {
        return false;
    }

    const URenegadeSoldierCombatComponent* CandidateCombat = Candidate->FindComponentByClass<URenegadeSoldierCombatComponent>();
    if (!IsValid(CandidateCombat) || !CandidateCombat->bRegisterAsCombatTarget || CandidateCombat->bIsDead)
    {
        return false;
    }

    FVector ViewLocation = GetOwner()->GetActorLocation();
    FVector ViewDirection = GetOwner()->GetActorForwardVector();
    if (AController* Controller = GetOwningController())
    {
        FRotator ViewRotation;
        Controller->GetPlayerViewPoint(ViewLocation, ViewRotation);
        ViewDirection = ViewRotation.Vector().GetSafeNormal();
    }

    const FVector ToTarget = GetAimLocation(Candidate) - ViewLocation;
    const float Distance = ToTarget.Size();
    if (Distance <= KINDA_SMALL_NUMBER)
    {
        return false;
    }

    const float MaximumDistance = FMath::Max(100.0f, PlayerLockOn.MaximumAcquisitionDistance)
        * (bForAcquisition ? 1.0f : FMath::Max(1.0f, PlayerLockOn.BreakDistanceMultiplier));
    if (Distance > MaximumDistance)
    {
        return false;
    }

    const float Dot = FMath::Clamp(FVector::DotProduct(ViewDirection, ToTarget / Distance), -1.0f, 1.0f);
    const float AngleDegrees = FMath::RadiansToDegrees(FMath::Acos(Dot));
    const float MaximumAngle = bForAcquisition
        ? FMath::Clamp(PlayerLockOn.AcquisitionHalfAngleDegrees, 1.0f, 179.0f)
        : FMath::Clamp(PlayerLockOn.BreakHalfAngleDegrees, 1.0f, 179.0f);
    return AngleDegrees <= MaximumAngle;
}

bool URenegadeSoldierCombatComponent::HasPlayerLockOnLineOfSight(const AActor* Candidate) const
{
    if (!IsValid(Candidate) || !IsValid(GetOwner()) || !GetWorld())
    {
        return false;
    }

    FVector TraceStart = GetOwner()->GetActorLocation();
    if (AController* Controller = GetOwningController())
    {
        FRotator ViewRotation;
        Controller->GetPlayerViewPoint(TraceStart, ViewRotation);
    }
    else if (IsValid(OwnerCharacter))
    {
        FRotator EyeRotation;
        OwnerCharacter->GetActorEyesViewPoint(TraceStart, EyeRotation);
    }

    const FVector TraceEnd = GetAimLocation(Candidate) + PlayerLockOn.TargetAimOffset;
    FCollisionQueryParams QueryParams(SCENE_QUERY_STAT(RenegadePlayerLockOnLOS), true, GetOwner());
    RenegadeCombatPrivate::AddOwnerHierarchyToTraceIgnore(GetOwner(), QueryParams);

    FHitResult Hit;
    const bool bHit = GetWorld()->LineTraceSingleByChannel(
        Hit,
        TraceStart,
        TraceEnd,
        PlayerLockOn.LineOfSightTraceChannel,
        QueryParams);

    bool bVisible = !bHit || Hit.GetActor() == Candidate;
    if (!bVisible && bHit)
    {
        if (const URenegadeSoldierCombatComponent* ResolvedCombat = RenegadeCombatPrivate::ResolveCombatComponentFromActorHierarchy(Hit.GetActor()))
        {
            bVisible = ResolvedCombat->GetOwner() == Candidate;
        }
    }

    if (PlayerLockOn.bDrawLockOnDebug)
    {
        DrawDebugLine(GetWorld(), TraceStart, bHit ? Hit.ImpactPoint : TraceEnd,
            bVisible ? FColor::Green : FColor::Red, false, 0.05f, 0, 1.5f);
    }

    return bVisible;
}

AActor* URenegadeSoldierCombatComponent::FindBestPlayerLockOnTarget(const AActor* ExcludedTarget) const
{
    if (!GetWorld() || !IsValid(GetOwner()))
    {
        return nullptr;
    }

    URenegadeCombatRegistrySubsystem* Registry = GetWorld()->GetSubsystem<URenegadeCombatRegistrySubsystem>();
    if (!IsValid(Registry))
    {
        return nullptr;
    }

    FVector ViewLocation = GetOwner()->GetActorLocation();
    FVector ViewDirection = GetOwner()->GetActorForwardVector();
    if (AController* Controller = GetOwningController())
    {
        FRotator ViewRotation;
        Controller->GetPlayerViewPoint(ViewLocation, ViewRotation);
        ViewDirection = ViewRotation.Vector().GetSafeNormal();
    }

    TArray<URenegadeSoldierCombatComponent*> Combatants;
    Registry->GetCombatants(Combatants);

    AActor* BestTarget = nullptr;
    float BestScore = BIG_NUMBER;
    const float MaximumDistance = FMath::Max(100.0f, PlayerLockOn.MaximumAcquisitionDistance);
    const float MaximumAngle = FMath::Clamp(PlayerLockOn.AcquisitionHalfAngleDegrees, 1.0f, 179.0f);

    for (const URenegadeSoldierCombatComponent* CandidateCombat : Combatants)
    {
        AActor* Candidate = IsValid(CandidateCombat) ? CandidateCombat->GetOwner() : nullptr;
        if (!IsValid(Candidate) || Candidate == ExcludedTarget || !IsPlayerLockOnCandidateValid(Candidate, true))
        {
            continue;
        }

        if (PlayerLockOn.bRequireLineOfSightToAcquire && !HasPlayerLockOnLineOfSight(Candidate))
        {
            continue;
        }

        const FVector ToTarget = GetAimLocation(Candidate) - ViewLocation;
        const float Distance = FMath::Max(1.0f, ToTarget.Size());
        const float Dot = FMath::Clamp(FVector::DotProduct(ViewDirection, ToTarget / Distance), -1.0f, 1.0f);
        const float Angle = FMath::RadiansToDegrees(FMath::Acos(Dot));
        const float Score = (Angle / MaximumAngle) * 0.82f + (Distance / MaximumDistance) * 0.18f;

        if (Score < BestScore)
        {
            BestScore = Score;
            BestTarget = Candidate;
        }

        if (PlayerLockOn.bDrawLockOnDebug)
        {
            DrawDebugSphere(GetWorld(), GetAimLocation(Candidate), 22.0f, 8, FColor::Cyan, false, 0.05f, 0, 1.0f);
        }
    }

    return BestTarget;
}

AActor* URenegadeSoldierCombatComponent::FindDirectionalPlayerLockOnTarget(const bool bSwitchRight) const
{
    if (!IsValid(PlayerLockOnTarget) || !GetWorld())
    {
        return FindBestPlayerLockOnTarget();
    }

    URenegadeCombatRegistrySubsystem* Registry = GetWorld()->GetSubsystem<URenegadeCombatRegistrySubsystem>();
    if (!IsValid(Registry))
    {
        return nullptr;
    }

    FVector ViewLocation = GetOwner() ? GetOwner()->GetActorLocation() : FVector::ZeroVector;
    if (AController* Controller = GetOwningController())
    {
        FRotator ViewRotation;
        Controller->GetPlayerViewPoint(ViewLocation, ViewRotation);
    }

    const float CurrentYaw = (GetAimLocation(PlayerLockOnTarget) - ViewLocation).Rotation().Yaw;
    AActor* BestPrimary = nullptr;
    AActor* BestWrap = nullptr;
    float BestPrimaryMagnitude = BIG_NUMBER;
    float BestWrapMagnitude = -BIG_NUMBER;

    TArray<URenegadeSoldierCombatComponent*> Combatants;
    Registry->GetCombatants(Combatants);
    for (const URenegadeSoldierCombatComponent* CandidateCombat : Combatants)
    {
        AActor* Candidate = IsValid(CandidateCombat) ? CandidateCombat->GetOwner() : nullptr;
        if (!IsValid(Candidate) || Candidate == PlayerLockOnTarget || !IsPlayerLockOnCandidateValid(Candidate, true))
        {
            continue;
        }
        if (PlayerLockOn.bRequireLineOfSightToAcquire && !HasPlayerLockOnLineOfSight(Candidate))
        {
            continue;
        }

        const float CandidateYaw = (GetAimLocation(Candidate) - ViewLocation).Rotation().Yaw;
        const float DeltaYaw = FMath::FindDeltaAngleDegrees(CurrentYaw, CandidateYaw);
        const bool bPrimarySide = bSwitchRight ? DeltaYaw > 1.0f : DeltaYaw < -1.0f;
        const float Magnitude = FMath::Abs(DeltaYaw);

        if (bPrimarySide && Magnitude < BestPrimaryMagnitude)
        {
            BestPrimaryMagnitude = Magnitude;
            BestPrimary = Candidate;
        }
        else if (!bPrimarySide && Magnitude > BestWrapMagnitude)
        {
            BestWrapMagnitude = Magnitude;
            BestWrap = Candidate;
        }
    }

    return IsValid(BestPrimary) ? BestPrimary : BestWrap;
}

void URenegadeSoldierCombatComponent::SetPlayerLockOnTargetInternal(AActor* NewTarget)
{
    if (NewTarget == PlayerLockOnTarget)
    {
        CreateOrUpdateLockOnIndicator();
        return;
    }

    AActor* PreviousTarget = PlayerLockOnTarget;
    const bool bWasLocked = IsValid(PreviousTarget);
    PlayerLockOnTarget = NewTarget;
    if (PlayerLockOn.bResetAimOffsetWhenTargetChanges)
    {
        ResetPlayerLockOnAimOffset(true);
    }
    const bool bIsLocked = IsValid(PlayerLockOnTarget);

    if (bIsLocked)
    {
        LastPlayerLockOnVisibleTime = GetWorld() ? GetWorld()->GetTimeSeconds() : 0.0;
        bPlayerLockOnAimRequested = PlayerLockOn.bAutomaticallyAimWhileLocking && bPlayerLockOnInputHeld;
        RefreshPlayerAimingFromInputSources();
        CreateOrUpdateLockOnIndicator();
    }
    else
    {
        HideLockOnIndicator();
    }

    OnPlayerLockOnTargetChanged.Broadcast(PreviousTarget, PlayerLockOnTarget);
    if (bWasLocked != bIsLocked)
    {
        OnPlayerLockOnStateChanged.Broadcast(bIsLocked);
    }
}

void URenegadeSoldierCombatComponent::ClearPlayerLockOnTargetInternal(const bool bRestoreAimStartedByLock)
{
    if (IsValid(PlayerLockOnTarget))
    {
        AActor* PreviousTarget = PlayerLockOnTarget;
        PlayerLockOnTarget = nullptr;
        HideLockOnIndicator();
        OnPlayerLockOnTargetChanged.Broadcast(PreviousTarget, nullptr);
        OnPlayerLockOnStateChanged.Broadcast(false);
    }
    else
    {
        HideLockOnIndicator();
    }

    ResetPlayerLockOnAimOffset(true);

    if (bRestoreAimStartedByLock)
    {
        bPlayerLockOnAimRequested = false;
        RefreshPlayerAimingFromInputSources();
    }
}

void URenegadeSoldierCombatComponent::UpdatePlayerLockOn(const float DeltaTime)
{
    if (!IsLocallyControlledPlayer())
    {
        return;
    }

    if (!PlayerLockOn.bEnableLockOn || bIsDead || !bPlayerLockOnInputHeld)
    {
        const bool bShouldRestoreAim = !bPlayerLockOnInputHeld || bIsDead || !PlayerLockOn.bEnableLockOn;
        if (bIsDead || !PlayerLockOn.bEnableLockOn)
        {
            bPlayerLockOnInputHeld = false;
        }

        if (IsValid(PlayerLockOnTarget) || bPlayerLockOnAimRequested)
        {
            if (bShouldRestoreAim)
            {
                bPlayerLockOnAimRequested = false;
            }
            ClearPlayerLockOnTargetInternal(bShouldRestoreAim);
        }
        else
        {
            HideLockOnIndicator();
        }
        return;
    }

    const double Now = GetWorld() ? GetWorld()->GetTimeSeconds() : 0.0;
    bool bTargetValid = IsValid(PlayerLockOnTarget) && IsPlayerLockOnCandidateValid(PlayerLockOnTarget, false);
    if (bTargetValid)
    {
        const bool bVisible = HasPlayerLockOnLineOfSight(PlayerLockOnTarget);
        if (bVisible)
        {
            LastPlayerLockOnVisibleTime = Now;
        }
        else if (PlayerLockOn.bBreakLockWhenOccluded
            && Now - LastPlayerLockOnVisibleTime > FMath::Max(0.0f, PlayerLockOn.OcclusionGraceSeconds))
        {
            bTargetValid = false;
        }
    }

    if (!bTargetValid)
    {
        ClearPlayerLockOnTargetInternal(false);
        if (Now - LastPlayerLockOnSearchTime >= 0.10)
        {
            LastPlayerLockOnSearchTime = Now;
            SetPlayerLockOnTargetInternal(FindBestPlayerLockOnTarget());
        }
    }

    if (!IsValid(PlayerLockOnTarget))
    {
        return;
    }

    bPlayerLockOnAimRequested = PlayerLockOn.bAutomaticallyAimWhileLocking;
    RefreshPlayerAimingFromInputSources();
    PollPlayerLockOnAimOffsetInput(DeltaTime);
    UpdatePlayerLockOnAimOffset(DeltaTime);

    APlayerController* PlayerController = Cast<APlayerController>(GetOwningController());
    if (IsValid(PlayerController))
    {
        FVector ViewLocation;
        FRotator ViewRotation;
        PlayerController->GetPlayerViewPoint(ViewLocation, ViewRotation);

        FVector ToTarget = GetPlayerLockOnAimLocation() - ViewLocation;
        if (!ToTarget.IsNearlyZero())
        {
            FRotator DesiredRotation = ToTarget.Rotation();
            DesiredRotation.Roll = 0.0f;
            if (!PlayerLockOn.bTrackTargetPitch)
            {
                DesiredRotation.Pitch = PlayerController->GetControlRotation().Pitch;
            }

            const float RotationSpeed = FMath::Max(0.0f, PlayerLockOn.CameraRotationInterpSpeed);
            const FRotator NewControlRotation = RotationSpeed <= KINDA_SMALL_NUMBER || DeltaTime <= 0.0f
                ? DesiredRotation
                : FMath::RInterpTo(PlayerController->GetControlRotation(), DesiredRotation, DeltaTime, RotationSpeed);
            PlayerController->SetControlRotation(NewControlRotation);
        }
    }

    CreateOrUpdateLockOnIndicator();

    if (PlayerLockOn.bDrawLockOnDebug && GetWorld())
    {
        DrawDebugLine(GetWorld(), GetMuzzleLocation(), GetPlayerLockOnAimLocation(), FColor::Yellow, false, 0.05f, 0, 2.0f);
    }
}

void URenegadeSoldierCombatComponent::CreateOrUpdateLockOnIndicator()
{
    UTexture2D* IndicatorTexture = GetPlayerLockOnIndicatorTexture();
    if (!IsLocallyControlledPlayer() || !IsValid(PlayerLockOnTarget) || !IsValid(IndicatorTexture)
        || !IsValid(GetOwner()))
    {
        HideLockOnIndicator();
        return;
    }

    if (!IsValid(PlayerLockOnIndicatorComponent))
    {
        PlayerLockOnIndicatorComponent = NewObject<UWidgetComponent>(GetOwner(), TEXT("RenegadePlayerLockOnIndicator"));
        if (!IsValid(PlayerLockOnIndicatorComponent))
        {
            return;
        }

        GetOwner()->AddInstanceComponent(PlayerLockOnIndicatorComponent);
        PlayerLockOnIndicatorComponent->SetMobility(EComponentMobility::Movable);
        PlayerLockOnIndicatorComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
        PlayerLockOnIndicatorComponent->SetGenerateOverlapEvents(false);
        PlayerLockOnIndicatorComponent->SetCastShadow(false);
        PlayerLockOnIndicatorComponent->SetIsReplicated(false);
        PlayerLockOnIndicatorComponent->SetWidgetSpace(EWidgetSpace::Screen);
        PlayerLockOnIndicatorComponent->SetBlendMode(EWidgetBlendMode::Transparent);
        PlayerLockOnIndicatorComponent->SetDrawAtDesiredSize(false);
        PlayerLockOnIndicatorComponent->SetPivot(FVector2D(0.5f, 0.5f));
        PlayerLockOnIndicatorComponent->SetWindowFocusable(false);
        PlayerLockOnIndicatorComponent->SetTwoSided(true);
        PlayerLockOnIndicatorComponent->SetOpacityFromTexture(1.0f);
        PlayerLockOnIndicatorComponent->SetTintColorAndOpacity(FLinearColor::White);
        PlayerLockOnIndicatorComponent->RegisterComponent();

        PlayerLockOnIndicatorBrush.DrawAs = ESlateBrushDrawType::Image;
        PlayerLockOnIndicatorSlateImage = SNew(SImage)
            .Image(&PlayerLockOnIndicatorBrush)
            .ColorAndOpacity(FSlateColor(Targeting.PlayerLockOnIndicatorColor));
        PlayerLockOnIndicatorComponent->SetSlateWidget(PlayerLockOnIndicatorSlateImage);
    }

    PlayerLockOnIndicatorBrush.SetResourceObject(IndicatorTexture);
    const float TextureWidth = FMath::Max(1.0f, static_cast<float>(IndicatorTexture->GetSizeX()));
    const float TextureHeight = FMath::Max(1.0f, static_cast<float>(IndicatorTexture->GetSizeY()));
    PlayerLockOnIndicatorBrush.ImageSize = FVector2D(TextureWidth, TextureHeight);

    if (PlayerLockOnIndicatorSlateImage.IsValid())
    {
        PlayerLockOnIndicatorSlateImage->SetImage(&PlayerLockOnIndicatorBrush);
        PlayerLockOnIndicatorSlateImage->SetColorAndOpacity(FSlateColor(Targeting.PlayerLockOnIndicatorColor));
        PlayerLockOnIndicatorSlateImage->InvalidateImage();
    }

    // The Slate image owns the RGBA tint. Keep the Widget Component neutral so the
    // selected colour is applied exactly once while the PNG transparency is preserved.
    PlayerLockOnIndicatorComponent->SetTintColorAndOpacity(FLinearColor::White);
    PlayerLockOnIndicatorComponent->SetOpacityFromTexture(1.0f);
    PlayerLockOnIndicatorComponent->SetWorldLocation(GetPlayerLockOnAimLocation() + PlayerLockOn.LockOnIndicatorWorldOffset);

    const float TimeSeconds = GetWorld() ? GetWorld()->GetTimeSeconds() : 0.0f;
    const float Pulse = 1.0f + FMath::Max(0.0f, PlayerLockOn.IndicatorPulseAmount)
        * FMath::Sin(TimeSeconds * FMath::Max(0.0f, PlayerLockOn.IndicatorPulseSpeed) * (2.0f * PI));

    const FVector AbsScale = PlayerLockOn.LockOnIndicatorScale.GetAbs();
    const float WidthScale = FMath::Max(0.01f, AbsScale.X);
    const float HeightScale = FMath::Max(0.01f, AbsScale.Y);
    const FVector2D DrawSize(
        FMath::Max(1.0f, TextureWidth * WidthScale * FMath::Max(0.01f, Pulse)),
        FMath::Max(1.0f, TextureHeight * HeightScale * FMath::Max(0.01f, Pulse)));
    PlayerLockOnIndicatorComponent->SetDrawSize(DrawSize);
    PlayerLockOnIndicatorComponent->SetWorldScale3D(FVector::OneVector);
    PlayerLockOnIndicatorComponent->SetHiddenInGame(false);
    PlayerLockOnIndicatorComponent->SetVisibility(true, true);
    PlayerLockOnIndicatorComponent->RequestRenderUpdate();
}

void URenegadeSoldierCombatComponent::HideLockOnIndicator()
{
    if (IsValid(PlayerLockOnIndicatorComponent))
    {
        PlayerLockOnIndicatorComponent->SetVisibility(false, true);
        PlayerLockOnIndicatorComponent->SetHiddenInGame(true);
    }
}

void URenegadeSoldierCombatComponent::DestroyLockOnIndicator()
{
    if (IsValid(PlayerLockOnIndicatorComponent))
    {
        PlayerLockOnIndicatorComponent->SetSlateWidget(TSharedPtr<SWidget>());
        PlayerLockOnIndicatorComponent->DestroyComponent();
        PlayerLockOnIndicatorComponent = nullptr;
    }

    PlayerLockOnIndicatorSlateImage.Reset();
    PlayerLockOnIndicatorBrush.SetResourceObject(nullptr);
}

void URenegadeSoldierCombatComponent::PlayerReload()
{
    if (!bPlayerControlledCombat || bIsDead || !IsLocallyControlledPlayer())
    {
        return;
    }

    StopLocalPlayerFireTimer();

    if (HasAuthority())
    {
        StartReload();
    }
    else
    {
        ServerRequestPlayerReload(ActivePlayerWeapon);
    }
}

void URenegadeSoldierCombatComponent::PlayerStartAutomaticRifleFire()
{
    SelectPlayerWeapon(ERenegadePlayerWeaponSlot::AutomaticRifle);
    PlayerStartFire();
}

void URenegadeSoldierCombatComponent::PlayerStopAutomaticRifleFire()
{
    PlayerStopFire();
}

void URenegadeSoldierCombatComponent::PlayerFirePistol()
{
    SelectPlayerWeapon(ERenegadePlayerWeaponSlot::Pistol);
    PlayerFireOnce();
}

void URenegadeSoldierCombatComponent::PlayerFireRocketLauncher()
{
    SelectPlayerWeapon(ERenegadePlayerWeaponSlot::RocketLauncher);
    PlayerFireOnce();
}

void URenegadeSoldierCombatComponent::SelectPlayerWeapon(ERenegadePlayerWeaponSlot NewWeapon)
{
    if (!RenegadeCombatPrivate::IsValidPlayerWeaponSlot(NewWeapon)
        || !bPlayerControlledCombat || bIsDead || !IsLocallyControlledPlayer())
    {
        return;
    }

    StopLocalPlayerFireTimer();

    if (HasAuthority())
    {
        SetPlayerWeaponInternal(NewWeapon);
    }
    else
    {
        const ERenegadePlayerWeaponSlot PreviousWeapon = ActivePlayerWeapon;
        ActivePlayerWeapon = NewWeapon;
        SyncCurrentMagazineFromPlayerWeapon();
        if (PreviousWeapon != ActivePlayerWeapon)
        {
            OnPlayerWeaponChanged.Broadcast(PreviousWeapon, ActivePlayerWeapon);
        }
        ServerSelectPlayerWeapon(NewWeapon);
    }
}

void URenegadeSoldierCombatComponent::SelectPlayerAutomaticRifle()
{
    SelectPlayerWeapon(ERenegadePlayerWeaponSlot::AutomaticRifle);
}

void URenegadeSoldierCombatComponent::SelectPlayerPistol()
{
    SelectPlayerWeapon(ERenegadePlayerWeaponSlot::Pistol);
}

void URenegadeSoldierCombatComponent::SelectPlayerRocketLauncher()
{
    SelectPlayerWeapon(ERenegadePlayerWeaponSlot::RocketLauncher);
}

void URenegadeSoldierCombatComponent::SetPlayerWeaponInternal(ERenegadePlayerWeaponSlot NewWeapon)
{
    if (!RenegadeCombatPrivate::IsValidPlayerWeaponSlot(NewWeapon)
        || !HasAuthority() || !bPlayerControlledCombat || bIsDead || ActivePlayerWeapon == NewWeapon)
    {
        SyncCurrentMagazineFromPlayerWeapon();
        return;
    }

    if (bReloading && GetWorld())
    {
        GetWorld()->GetTimerManager().ClearTimer(ReloadTimer);
        bReloading = false;
        MulticastReloadFinished();
    }

    const ERenegadePlayerWeaponSlot PreviousWeapon = ActivePlayerWeapon;
    ActivePlayerWeapon = NewWeapon;
    SyncCurrentMagazineFromPlayerWeapon();
    OnPlayerWeaponChanged.Broadcast(PreviousWeapon, ActivePlayerWeapon);

    if (AActor* Owner = GetOwner())
    {
        Owner->ForceNetUpdate();
    }
}

void URenegadeSoldierCombatComponent::ServerSelectPlayerWeapon_Implementation(ERenegadePlayerWeaponSlot NewWeapon)
{
    SetPlayerWeaponInternal(NewWeapon);
}

void URenegadeSoldierCombatComponent::ServerRequestPlayerReload_Implementation(ERenegadePlayerWeaponSlot RequestedWeapon)
{
    if (!RenegadeCombatPrivate::IsValidPlayerWeaponSlot(RequestedWeapon)
        || !bPlayerControlledCombat || bIsDead || RequestedWeapon != ActivePlayerWeapon)
    {
        return;
    }

    StartReload();
}

void URenegadeSoldierCombatComponent::ServerRequestPlayerShot_Implementation(
    FVector_NetQuantize ClientViewLocation,
    FVector_NetQuantizeNormal ClientViewDirection,
    ERenegadePlayerWeaponSlot RequestedWeapon,
    bool bClientAiming)
{
    PerformPlayerShotServer(ClientViewLocation, ClientViewDirection, RequestedWeapon, bClientAiming);
}

void URenegadeSoldierCombatComponent::ServerRequestPlayerRocketShot_Implementation(
    FVector_NetQuantize ClientViewLocation,
    FVector_NetQuantizeNormal ClientViewDirection,
    bool bClientAiming)
{
    PerformPlayerShotServer(
        ClientViewLocation,
        ClientViewDirection,
        ERenegadePlayerWeaponSlot::RocketLauncher,
        bClientAiming);
}

void URenegadeSoldierCombatComponent::ServerSetPlayerAiming_Implementation(bool bNewAiming)
{
    if (bPlayerControlledCombat)
    {
        SetPlayerAimingInternal(bNewAiming);
    }
}

void URenegadeSoldierCombatComponent::PerformPlayerShotServer(
    const FVector& ClientViewLocation,
    const FVector& ClientViewDirection,
    ERenegadePlayerWeaponSlot RequestedWeapon,
    bool bClientAiming)
{
    if (!RenegadeCombatPrivate::IsValidPlayerWeaponSlot(RequestedWeapon)
        || !HasAuthority() || !bPlayerControlledCombat || bIsDead || bReloading || !GetWorld()
        || (PlayerInput.bRequireAimToFire && !bClientAiming)
        || !IsValid(Cast<APlayerController>(GetOwningController())))
    {
        return;
    }

    SetPlayerAimingInternal(bClientAiming);

    if (RequestedWeapon != ActivePlayerWeapon)
    {
        SetPlayerWeaponInternal(RequestedWeapon);
    }

    const FRenegadeWeaponSettings Weapon = GetPlayerWeaponSettings(ActivePlayerWeapon);
    if (WeaponUsesMagazine(Weapon) && GetPlayerWeaponAmmo(ActivePlayerWeapon) <= 0)
    {
        if (PlayerCombat.bAutoReloadWhenEmpty)
        {
            StartReload();
        }
        return;
    }

    const double Now = GetWorld()->GetTimeSeconds();
    if (Now + KINDA_SMALL_NUMBER < NextAllowedPlayerShotServerTime)
    {
        return;
    }

    FVector AuthoritativeViewLocation = ClientViewLocation;
    FVector AuthoritativeViewDirection = ClientViewDirection.GetSafeNormal();

    FVector ServerViewLocation = GetMuzzleLocation();
    FVector ServerViewDirection = GetOwner() ? GetOwner()->GetActorForwardVector() : FVector::ForwardVector;
    if (AController* Controller = GetOwningController())
    {
        FRotator ServerViewRotation;
        Controller->GetPlayerViewPoint(ServerViewLocation, ServerViewRotation);
        ServerViewDirection = ServerViewRotation.Vector().GetSafeNormal();
    }

    const float MaximumOriginError = FMath::Max(0.0f, PlayerCombat.MaximumClientViewOriginError);
    if (AuthoritativeViewLocation.ContainsNaN()
        || (MaximumOriginError > 0.0f && FVector::DistSquared(AuthoritativeViewLocation, ServerViewLocation) > FMath::Square(MaximumOriginError)))
    {
        AuthoritativeViewLocation = ServerViewLocation;
    }

    if (AuthoritativeViewDirection.ContainsNaN() || AuthoritativeViewDirection.IsNearlyZero())
    {
        AuthoritativeViewDirection = ServerViewDirection;
    }

    const float MaxAimErrorDegrees = FMath::Clamp(PlayerCombat.MaximumClientAimAngleError, 0.0f, 180.0f);
    if (MaxAimErrorDegrees < 180.0f)
    {
        const float MinimumDot = FMath::Cos(FMath::DegreesToRadians(MaxAimErrorDegrees));
        if (FVector::DotProduct(AuthoritativeViewDirection, ServerViewDirection) < MinimumDot)
        {
            AuthoritativeViewDirection = ServerViewDirection;
        }
    }

    if (PlayerCombat.bApplyWeaponSpread)
    {
        float SpreadDegrees = FMath::Max(0.0f, Weapon.HipFireSpreadDegrees);
        if (GetOwner() && GetOwner()->GetVelocity().SizeSquared2D() > FMath::Square(20.0f))
        {
            SpreadDegrees += FMath::Max(0.0f, Weapon.MovingSpreadPenaltyDegrees);
        }
        if (bIsPlayerAiming)
        {
            SpreadDegrees *= FMath::Clamp(PlayerCombat.AimedSpreadMultiplier, 0.0f, 1.0f);
        }
        AuthoritativeViewDirection = FMath::VRandCone(AuthoritativeViewDirection, FMath::DegreesToRadians(SpreadDegrees));
    }

    const bool bShotExecuted = ExecuteWeaponShot(
        Weapon,
        AuthoritativeViewLocation,
        AuthoritativeViewDirection,
        PlayerCombat.bPreventMuzzleObstructionShooting);

    if (!bShotExecuted)
    {
        return;
    }

    if (WeaponUsesMagazine(Weapon))
    {
        SetPlayerAmmo(ActivePlayerWeapon, GetPlayerWeaponAmmo(ActivePlayerWeapon) - 1);
    }

    const float SecondsPerShot = 60.0f / GetEffectiveRoundsPerMinute(Weapon);
    NextAllowedPlayerShotServerTime = Now + SecondsPerShot * FMath::Clamp(PlayerCombat.ServerFireRateTolerance, 0.80f, 1.0f);

    if (WeaponUsesMagazine(Weapon) && GetPlayerWeaponAmmo(ActivePlayerWeapon) <= 0 && PlayerCombat.bAutoReloadWhenEmpty)
    {
        StartReload();
    }

    if (AActor* Owner = GetOwner())
    {
        Owner->ForceNetUpdate();
    }
}

void URenegadeSoldierCombatComponent::SetBulletVisualSpawnComponent(USceneComponent* NewSpawnComponent)
{
    if (!IsValid(NewSpawnComponent))
    {
        RuntimeBulletVisualSpawnComponent = nullptr;
        return;
    }

    if (NewSpawnComponent->GetOwner() != GetOwner())
    {
        UE_LOG(LogRenegadeSoldierCombat, Warning,
            TEXT("%s rejected bullet visual spawn component %s because it belongs to a different actor."),
            *GetNameSafe(GetOwner()), *GetNameSafe(NewSpawnComponent));
        return;
    }

    RuntimeBulletVisualSpawnComponent = NewSpawnComponent;
}

void URenegadeSoldierCombatComponent::ClearBulletVisualSpawnComponent()
{
    RuntimeBulletVisualSpawnComponent = nullptr;
}

USceneComponent* URenegadeSoldierCombatComponent::GetBulletVisualSpawnComponent() const
{
    return ResolveBulletVisualSpawnComponent();
}

FVector URenegadeSoldierCombatComponent::GetBulletVisualSpawnLocation() const
{
    return ResolveBulletVisualSpawnLocation(GetMuzzleLocation());
}

void URenegadeSoldierCombatComponent::PreviewBulletMeshVisual(FVector TraceStart, FVector TraceEnd)
{
    SpawnBulletMeshVisual(TraceStart, TraceEnd, nullptr);
}

void URenegadeSoldierCombatComponent::PreviewBulletMeshFromConfiguredSpawn(FVector TraceEnd)
{
    SpawnBulletMeshVisual(GetMuzzleLocation(), TraceEnd, nullptr);
}


void URenegadeSoldierCombatComponent::SetRocketLauncherMuzzleComponent(USceneComponent* NewMuzzleComponent)
{
    if (!IsValid(NewMuzzleComponent))
    {
        RuntimeRocketLauncherMuzzleComponent = nullptr;
        return;
    }

    if (NewMuzzleComponent->GetOwner() != GetOwner())
    {
        UE_LOG(LogRenegadeSoldierCombat, Warning,
            TEXT("%s rejected rocket-launcher muzzle component %s because it belongs to a different actor."),
            *GetNameSafe(GetOwner()), *GetNameSafe(NewMuzzleComponent));
        return;
    }

    RuntimeRocketLauncherMuzzleComponent = NewMuzzleComponent;
}

void URenegadeSoldierCombatComponent::ClearRocketLauncherMuzzleComponent()
{
    RuntimeRocketLauncherMuzzleComponent = nullptr;
}

USceneComponent* URenegadeSoldierCombatComponent::GetRocketLauncherMuzzleComponent() const
{
    return ResolveRocketLauncherMuzzleComponent();
}

FVector URenegadeSoldierCombatComponent::GetRocketLauncherMuzzleLocation() const
{
    return ResolveRocketLauncherMuzzleLocation(GetMuzzleLocation());
}

void URenegadeSoldierCombatComponent::PreviewRocketLauncherVisual(FVector ImpactLocation)
{
    const FRenegadeWeaponSettings Weapon = GetActiveWeaponSettings();
    if (!IsRocketLauncherWeapon(Weapon))
    {
        UE_LOG(LogRenegadeSoldierCombat, Warning,
            TEXT("%s cannot preview a rocket because its active Weapon Class is not Rocket Launcher."),
            *GetNameSafe(GetOwner()));
        return;
    }

    const FVector LaunchLocation = ResolveRocketLauncherMuzzleLocation(GetMuzzleLocation());
    const float Distance = FVector::Distance(LaunchLocation, ImpactLocation);
    const float FlightSeconds = FMath::Min(
        FMath::Max(0.05f, Weapon.RocketLauncher.MaximumFlightSeconds),
        Distance / FMath::Max(100.0f, Weapon.RocketLauncher.ProjectileSpeed));
    SpawnRocketLauncherVisual(Weapon, LaunchLocation, ImpactLocation, FMath::Max(0.01f, FlightSeconds));
}


void URenegadeSoldierCombatComponent::SetGrenadeLauncherMuzzleComponent(USceneComponent* NewMuzzleComponent)
{
    if (!IsValid(NewMuzzleComponent))
    {
        RuntimeGrenadeLauncherMuzzleComponent = nullptr;
        return;
    }

    if (NewMuzzleComponent->GetOwner() != GetOwner())
    {
        UE_LOG(LogRenegadeSoldierCombat, Warning,
            TEXT("%s rejected grenade-launcher muzzle component %s because it belongs to a different actor."),
            *GetNameSafe(GetOwner()), *GetNameSafe(NewMuzzleComponent));
        return;
    }

    RuntimeGrenadeLauncherMuzzleComponent = NewMuzzleComponent;
}

void URenegadeSoldierCombatComponent::ClearGrenadeLauncherMuzzleComponent()
{
    RuntimeGrenadeLauncherMuzzleComponent = nullptr;
}

USceneComponent* URenegadeSoldierCombatComponent::GetGrenadeLauncherMuzzleComponent() const
{
    return ResolveGrenadeLauncherMuzzleComponent();
}

FVector URenegadeSoldierCombatComponent::GetGrenadeLauncherMuzzleLocation() const
{
    return ResolveGrenadeLauncherMuzzleLocation(GetMuzzleLocation());
}

bool URenegadeSoldierCombatComponent::CalculateGrenadeLaunchVelocityToLocation(
    FVector TargetLocation,
    FVector& OutLaunchVelocity,
    float& OutFlightSeconds) const
{
    const FRenegadeWeaponSettings Weapon = GetActiveWeaponSettings();
    if (!IsGrenadeLauncherWeapon(Weapon))
    {
        OutLaunchVelocity = FVector::ZeroVector;
        OutFlightSeconds = 0.0f;
        return false;
    }

    return SolveGrenadeBallisticVelocity(
        Weapon,
        ResolveGrenadeLauncherMuzzleLocation(GetMuzzleLocation()),
        TargetLocation,
        OutLaunchVelocity,
        OutFlightSeconds);
}

bool URenegadeSoldierCombatComponent::PreviewGroundBloodAtLocation(FVector BulletImpactLocation)
{
    FHitResult PreviewHit;
    PreviewHit.ImpactPoint = BulletImpactLocation;
    PreviewHit.Location = BulletImpactLocation;
    return SpawnGroundBloodSplatter(PreviewHit);
}

void URenegadeSoldierCombatComponent::PrepareIncomingCombatHit(const FHitResult& HitResult, const FVector& ShotDirection)
{
    PendingIncomingHit = HitResult;
    PendingIncomingShotDirection = ShotDirection.GetSafeNormal();
    bHasPendingIncomingHit = true;
}

void URenegadeSoldierCombatComponent::ClearIncomingCombatHit()
{
    PendingIncomingHit = FHitResult();
    PendingIncomingShotDirection = FVector::ZeroVector;
    bHasPendingIncomingHit = false;
}

void URenegadeSoldierCombatComponent::HandleOwnerAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
    if (!HasAuthority() || bIsDead || bInvulnerable || Damage <= 0.0f)
    {
        ClearIncomingCombatHit();
        return;
    }

    ApplyHealthDelta(-Damage, InstigatedBy, DamageCauser);

    AActor* Aggressor = DamageCauser;
    if ((!IsValid(Aggressor) || !IsHostileToActor(Aggressor)) && InstigatedBy)
    {
        Aggressor = InstigatedBy->GetPawn();
    }

    if (!bPlayerControlledCombat && !bIsDead && Targeting.bRetaliateWhenDamaged && IsValid(Aggressor) && IsHostileToActor(Aggressor))
    {
        SetTargetInternal(Aggressor, true);
    }

    ClearIncomingCombatHit();
}

void URenegadeSoldierCombatComponent::OnRep_TeamId()
{
}

void URenegadeSoldierCombatComponent::OnRep_CurrentHealth(float PreviousHealth)
{
    OnHealthChanged.Broadcast(PreviousHealth, CurrentHealth, nullptr, nullptr);
}

void URenegadeSoldierCombatComponent::OnRep_Dead()
{
    if (bIsDead)
    {
        if (bIsPlayerAiming)
        {
            const bool bPreviousAiming = bIsPlayerAiming;
            bIsPlayerAiming = false;
            HandlePlayerAimStateChanged(bPreviousAiming);
            OnPlayerAimChanged.Broadcast(false);
        }
        else
        {
            RestorePlayerAimRotationMode();
            UpdateComponentTickState();
        }

        if (!bVisualRagdollActive)
        {
            BeginRagdollVisuals(FVector::ZeroVector, NAME_None);
        }
    }
    else if (bVisualRagdollActive)
    {
        EndRagdollVisuals(GetOwner() ? GetOwner()->GetActorTransform() : FTransform::Identity);
    }
}

void URenegadeSoldierCombatComponent::OnRep_CurrentTarget()
{
    AActor* PreviousTarget = LastLocallyNotifiedTarget.Get();
    HandleLocalTargetTransition(PreviousTarget, CurrentTarget, !bIsDead);
}

void URenegadeSoldierCombatComponent::OnRep_ActivePlayerWeapon(ERenegadePlayerWeaponSlot PreviousWeapon)
{
    SyncCurrentMagazineFromPlayerWeapon();
    StopLocalPlayerFireTimer();
    OnPlayerWeaponChanged.Broadcast(PreviousWeapon, ActivePlayerWeapon);
}

void URenegadeSoldierCombatComponent::OnRep_AutomaticRifleAmmo(int32 PreviousAmmo)
{
    if (ActivePlayerWeapon == ERenegadePlayerWeaponSlot::AutomaticRifle)
    {
        CurrentMagazineAmmo = CurrentAutomaticRifleAmmo;
    }
    OnPlayerAmmoChanged.Broadcast(ERenegadePlayerWeaponSlot::AutomaticRifle, PreviousAmmo, CurrentAutomaticRifleAmmo);
}

void URenegadeSoldierCombatComponent::OnRep_PistolAmmo(int32 PreviousAmmo)
{
    if (ActivePlayerWeapon == ERenegadePlayerWeaponSlot::Pistol)
    {
        CurrentMagazineAmmo = CurrentPistolAmmo;
    }
    OnPlayerAmmoChanged.Broadcast(ERenegadePlayerWeaponSlot::Pistol, PreviousAmmo, CurrentPistolAmmo);
}

void URenegadeSoldierCombatComponent::OnRep_RocketLauncherAmmo(int32 PreviousAmmo)
{
    if (ActivePlayerWeapon == ERenegadePlayerWeaponSlot::RocketLauncher)
    {
        CurrentMagazineAmmo = CurrentRocketLauncherAmmo;
    }
    OnPlayerAmmoChanged.Broadcast(ERenegadePlayerWeaponSlot::RocketLauncher, PreviousAmmo, CurrentRocketLauncherAmmo);
}

void URenegadeSoldierCombatComponent::OnRep_PlayerAiming(bool bPreviousAiming)
{
    if (bPreviousAiming != bIsPlayerAiming)
    {
        HandlePlayerAimStateChanged(bPreviousAiming);
        OnPlayerAimChanged.Broadcast(bIsPlayerAiming);
    }
}

void URenegadeSoldierCombatComponent::RefreshTargeting()
{
    if (!HasAuthority() || bPlayerControlledCombat || !bAutoCombatEnabled || bIsDead)
    {
        return;
    }

    const float Now = GetWorld() ? GetWorld()->GetTimeSeconds() : 0.0f;
    bool bKeepCurrentTarget = false;

    if (IsValidCombatTarget(CurrentTarget))
    {
        FVector SeenAimLocation;
        if (!Targeting.bRequireLineOfSight || HasLineOfSightTo(CurrentTarget, &SeenAimLocation))
        {
            LastTargetSeenTime = Now;
            LastKnownTargetLocation = CurrentTarget->GetActorLocation();
            bKeepCurrentTarget = true;
        }
        else if ((Now - LastTargetSeenTime) <= FMath::Max(0.0f, Targeting.LostSightGraceSeconds))
        {
            bKeepCurrentTarget = true;
        }
    }

    if (!bKeepCurrentTarget)
    {
        SetTargetInternal(FindBestTarget(), true);
    }
}

AActor* URenegadeSoldierCombatComponent::FindBestTarget() const
{
    if (!GetWorld() || !GetOwner())
    {
        return nullptr;
    }

    URenegadeCombatRegistrySubsystem* Registry = GetWorld()->GetSubsystem<URenegadeCombatRegistrySubsystem>();
    if (!Registry)
    {
        return nullptr;
    }

    const FVector OwnerLocation = GetOwner()->GetActorLocation();
    const float SearchRadiusSquared = FMath::Square(FMath::Max(100.0f, Targeting.SearchRadius));

    float BestSoldierScore = TNumericLimits<float>::Max();
    AActor* BestSoldier = nullptr;
    TArray<URenegadeSoldierCombatComponent*> Combatants;
    Registry->GetCombatants(Combatants);
    for (URenegadeSoldierCombatComponent* CandidateCombat : Combatants)
    {
        if (!IsValid(CandidateCombat) || CandidateCombat == this)
        {
            continue;
        }
        AActor* CandidateActor = CandidateCombat->GetOwner();
        if (!IsValid(CandidateActor) || CandidateCombat->bIsDead || !CandidateCombat->bRegisterAsCombatTarget || !IsHostileToActor(CandidateActor))
        {
            continue;
        }
        const float DistanceSquared = FVector::DistSquared(OwnerLocation, GetAimLocation(CandidateActor));
        if (DistanceSquared > SearchRadiusSquared)
        {
            continue;
        }
        if (Targeting.bRequireLineOfSight && !HasLineOfSightTo(CandidateActor))
        {
            continue;
        }
        const float HealthBias = FMath::Clamp(CandidateCombat->GetHealthPercent(), 0.0f, 1.0f) * 25000.0f;
        const float Score = DistanceSquared + HealthBias;
        if (Score < BestSoldierScore)
        {
            BestSoldierScore = Score;
            BestSoldier = CandidateActor;
        }
    }

    float BestHarvesterScore = TNumericLimits<float>::Max();
    AActor* BestHarvester = nullptr;
    if (Targeting.bTargetHostileHarvesters)
    {
        TArray<URenegadeHarvesterCombatComponent*> Harvesters;
        Registry->GetHarvesters(Harvesters);
        for (URenegadeHarvesterCombatComponent* CandidateHarvester : Harvesters)
        {
            if (!IsValid(CandidateHarvester)
                || !CandidateHarvester->TargetSettings.bRegisterAsCombatTarget
                || !CandidateHarvester->IsOperational())
            {
                continue;
            }
            AActor* CandidateActor = CandidateHarvester->GetOwner();
            if (!IsValid(CandidateActor) || !IsHostileToActor(CandidateActor))
            {
                continue;
            }
            const float DistanceSquared = FVector::DistSquared(OwnerLocation, CandidateHarvester->GetTargetAimLocation());
            if (DistanceSquared > SearchRadiusSquared)
            {
                continue;
            }
            if (Targeting.bRequireLineOfSight && !HasLineOfSightTo(CandidateActor))
            {
                continue;
            }
            const float Priority = FMath::Max(0.01f, CandidateHarvester->TargetSettings.InfantryTargetPriority);
            const float Score = (DistanceSquared * FMath::Max(0.01f, Targeting.HarvesterTargetDistanceScoreMultiplier)) / Priority;
            if (Score < BestHarvesterScore)
            {
                BestHarvesterScore = Score;
                BestHarvester = CandidateActor;
            }
        }
    }

    AActor* BestMobileTarget = BestSoldier;
    float BestMobileScore = BestSoldierScore;
    const bool bAllowHarvesterToOverrideSoldier = !Targeting.bPreferSoldiersOverHarvesters || !IsValid(BestSoldier);
    if (IsValid(BestHarvester) && bAllowHarvesterToOverrideSoldier && (!IsValid(BestMobileTarget) || BestHarvesterScore < BestMobileScore))
    {
        BestMobileTarget = BestHarvester;
        BestMobileScore = BestHarvesterScore;
    }

    if (Targeting.BuildingTargetPolicy == ERenegadeBuildingTargetPolicy::Never)
    {
        return BestMobileTarget;
    }
    if (Targeting.BuildingTargetPolicy == ERenegadeBuildingTargetPolicy::WhenNoSoldierTarget && IsValid(BestMobileTarget))
    {
        return BestMobileTarget;
    }

    TArray<URenegadeBuildingCombatComponent*> Buildings;
    Registry->GetBuildings(Buildings);
    float BestBuildingScore = TNumericLimits<float>::Max();
    AActor* BestBuilding = nullptr;
    for (URenegadeBuildingCombatComponent* CandidateBuilding : Buildings)
    {
        if (!IsValid(CandidateBuilding)
            || CandidateBuilding->bIsDestroyed
            || CandidateBuilding->CurrentHealth <= 0.0f
            || !CandidateBuilding->TargetSettings.bRegisterAsCombatTarget)
        {
            continue;
        }
        AActor* CandidateActor = CandidateBuilding->GetOwner();
        if (!IsValid(CandidateActor) || !IsHostileToActor(CandidateActor))
        {
            continue;
        }
        const float DistanceSquared = FVector::DistSquared(OwnerLocation, CandidateBuilding->GetTargetAimLocation());
        if (DistanceSquared > SearchRadiusSquared)
        {
            continue;
        }
        if (Targeting.bRequireLineOfSight && !HasLineOfSightTo(CandidateActor))
        {
            continue;
        }
        const float Priority = FMath::Max(0.01f, CandidateBuilding->TargetSettings.InfantryTargetPriority);
        const float Score = (DistanceSquared * FMath::Max(0.01f, Targeting.BuildingTargetDistanceScoreMultiplier)) / Priority;
        if (Score < BestBuildingScore)
        {
            BestBuildingScore = Score;
            BestBuilding = CandidateActor;
        }
    }

    if (!IsValid(BestBuilding))
    {
        return BestMobileTarget;
    }
    if (!IsValid(BestMobileTarget))
    {
        return BestBuilding;
    }
    if (Targeting.BuildingTargetPolicy == ERenegadeBuildingTargetPolicy::PreferBuildings)
    {
        return BestBuilding;
    }
    return BestBuildingScore < BestMobileScore ? BestBuilding : BestMobileTarget;
}

bool URenegadeSoldierCombatComponent::HasLineOfSightTo(const AActor* Target, FVector* OutAimLocation) const
{
    if (!IsValid(Target) || !GetWorld() || !GetOwner())
    {
        return false;
    }

    const FVector Start = GetMuzzleLocation();
    const FVector AimLocation = GetAimLocation(Target);
    if (OutAimLocation)
    {
        *OutAimLocation = AimLocation;
    }

    FCollisionQueryParams QueryParams(SCENE_QUERY_STAT(RenegadeCombatLineOfSight), false, GetOwner());
    RenegadeCombatPrivate::AddOwnerHierarchyToTraceIgnore(GetOwner(), QueryParams);

    FHitResult Hit;
    const FRenegadeWeaponSettings Weapon = GetActiveWeaponSettings();
    const bool bBlocked = RenegadeCombatPrivate::PerformWeaponTrace(GetWorld(), Hit, Start, AimLocation, Weapon, QueryParams);
    if (!bBlocked || Hit.GetActor() == Target)
    {
        return true;
    }

    const URenegadeSoldierCombatComponent* ResolvedHitCombat =
        RenegadeCombatPrivate::ResolveCombatComponentFromActorHierarchy(Hit.GetActor());
    if (IsValid(ResolvedHitCombat) && ResolvedHitCombat->GetOwner() == Target)
    {
        return true;
    }

    const URenegadeHarvesterCombatComponent* ResolvedHarvester =
        RenegadeCombatPrivate::ResolveHarvesterComponentFromActorHierarchy(Hit.GetActor());
    if (IsValid(ResolvedHarvester) && ResolvedHarvester->GetOwner() == Target)
    {
        return true;
    }

    const URenegadeBuildingCombatComponent* ResolvedBuilding =
        RenegadeCombatPrivate::ResolveBuildingComponentFromActorHierarchy(Hit.GetActor());
    return IsValid(ResolvedBuilding) && ResolvedBuilding->GetOwner() == Target;
}

FVector URenegadeSoldierCombatComponent::GetAimLocation(const AActor* Target) const
{
    if (!IsValid(Target))
    {
        return FVector::ZeroVector;
    }

    if (const URenegadeHarvesterCombatComponent* TargetHarvester = Target->FindComponentByClass<URenegadeHarvesterCombatComponent>())
    {
        return TargetHarvester->GetTargetAimLocation();
    }

    if (const URenegadeBuildingCombatComponent* TargetBuilding = Target->FindComponentByClass<URenegadeBuildingCombatComponent>())
    {
        return TargetBuilding->GetTargetAimLocation();
    }

    if (const URenegadeSoldierCombatComponent* TargetCombat = Target->FindComponentByClass<URenegadeSoldierCombatComponent>())
    {
        if (TargetCombat->OwnerMesh)
        {
            const FRenegadeWeaponSettings Weapon = GetActiveWeaponSettings();
            if (!Weapon.AimBoneName.IsNone() && TargetCombat->OwnerMesh->DoesSocketExist(Weapon.AimBoneName))
            {
                return TargetCombat->OwnerMesh->GetSocketLocation(Weapon.AimBoneName) + FVector(0.0f, 0.0f, Targeting.AimHeightOffset);
            }
        }
    }

    return Target->GetActorLocation() + FVector(0.0f, 0.0f, Targeting.AimHeightOffset + 65.0f);
}

FVector URenegadeSoldierCombatComponent::GetMuzzleLocation() const
{
    const FRenegadeWeaponSettings Weapon = GetActiveWeaponSettings();
    if (OwnerMesh && !Weapon.MuzzleSocketName.IsNone() && OwnerMesh->DoesSocketExist(Weapon.MuzzleSocketName))
    {
        return OwnerMesh->GetSocketLocation(Weapon.MuzzleSocketName);
    }

    if (OwnerCharacter)
    {
        FVector EyeLocation;
        FRotator EyeRotation;
        OwnerCharacter->GetActorEyesViewPoint(EyeLocation, EyeRotation);
        return EyeLocation;
    }

    return GetOwner() ? GetOwner()->GetActorLocation() + FVector(0.0f, 0.0f, 70.0f) : FVector::ZeroVector;
}

void URenegadeSoldierCombatComponent::SetTargetInternal(AActor* NewTarget, bool bResumeSplineWhenCleared)
{
    if (!HasAuthority())
    {
        return;
    }

    if (bPlayerControlledCombat)
    {
        NewTarget = nullptr;
    }

    if (NewTarget && !IsValidCombatTarget(NewTarget))
    {
        NewTarget = nullptr;
    }

    AActor* PreviousTarget = CurrentTarget;
    if (PreviousTarget == NewTarget)
    {
        return;
    }

    CurrentTarget = NewTarget;
    HandleLocalTargetTransition(PreviousTarget, NewTarget, bResumeSplineWhenCleared);

    if (NewTarget)
    {
        LastTargetSeenTime = GetWorld() ? GetWorld()->GetTimeSeconds() : 0.0f;
        LastKnownTargetLocation = NewTarget->GetActorLocation();
        const FRenegadeWeaponSettings Weapon = GetActiveWeaponSettings();
        BurstShotsRemaining = IsExplosiveProjectileWeapon(Weapon)
            ? 1
            : FMath::RandRange(FMath::Max(1, Weapon.MinimumBurstShots), FMath::Max(FMath::Max(1, Weapon.MinimumBurstShots), Weapon.MaximumBurstShots));
        ScheduleNextShot(0.05f + FMath::FRandRange(0.0f, 0.12f));
    }
    else if (UWorld* World = GetWorld())
    {
        World->GetTimerManager().ClearTimer(FireTimer);
        World->GetTimerManager().ClearTimer(ReloadTimer);
        bReloading = false;
    }

    if (AActor* Owner = GetOwner())
    {
        Owner->ForceNetUpdate();
    }
}

void URenegadeSoldierCombatComponent::HandleLocalTargetTransition(AActor* PreviousTarget, AActor* NewTarget, bool bResumeSplineWhenCleared)
{
    LastLocallyNotifiedTarget = NewTarget;
    OnTargetChanged.Broadcast(PreviousTarget, NewTarget);

    if (NewTarget)
    {
        OnCombatStarted.Broadcast(NewTarget);
        if (HasAuthority())
        {
            TakeCombatMovementControl(NewTarget);
            if (bLockCombatRotationToCurrentTarget)
            {
                ApplyCombatFacingMode();
                UpdateCombatFacing(0.0f);
            }
            UpdateComponentTickState();
        }
    }
    else if (PreviousTarget)
    {
        const FVector ResumeLocation = GetOwner() ? GetOwner()->GetActorLocation() : FVector::ZeroVector;
        OnCombatEnded.Broadcast(PreviousTarget, ResumeLocation);
        if (HasAuthority())
        {
            RestoreCombatFacingMode(true);

            if (bResumeSplineWhenCleared && !bIsDead)
            {
                ReleaseCombatMovementControl();
            }
            else
            {
                if (AAIController* AIController = GetOwningAIController())
                {
                    AIController->ClearFocus(EAIFocusPriority::Gameplay);
                    AIController->StopMovement();
                }
                bMovementControlTaken = false;
            }
            UpdateComponentTickState();
        }
    }
}

void URenegadeSoldierCombatComponent::ScheduleNextShot(float DelaySeconds)
{
    if (!HasAuthority() || bPlayerControlledCombat || bIsDead || !CurrentTarget || !GetWorld())
    {
        return;
    }

    GetWorld()->GetTimerManager().SetTimer(FireTimer, this, &URenegadeSoldierCombatComponent::TryFireShot, FMath::Max(0.01f, DelaySeconds), false);
}

void URenegadeSoldierCombatComponent::TryFireShot()
{
    if (!HasAuthority() || bPlayerControlledCombat || bIsDead || bReloading || !IsValidCombatTarget(CurrentTarget))
    {
        return;
    }

    const FRenegadeWeaponSettings Weapon = GetActiveWeaponSettings();
    const FVector TraceStart = IsRocketLauncherWeapon(Weapon)
        ? ResolveRocketLauncherMuzzleLocation(GetMuzzleLocation())
        : (IsGrenadeLauncherWeapon(Weapon)
            ? ResolveGrenadeLauncherMuzzleLocation(GetMuzzleLocation())
            : GetMuzzleLocation());
    FVector AimLocation = GetAimLocation(CurrentTarget);

    if (IsRocketLauncherWeapon(Weapon) && Weapon.RocketLauncher.bPredictTargetMovement && IsValid(CurrentTarget))
    {
        const float InitialDistance = FVector::Distance(TraceStart, AimLocation);
        const float EstimatedFlightSeconds = InitialDistance / FMath::Max(100.0f, Weapon.RocketLauncher.ProjectileSpeed);
        const float LeadSeconds = FMath::Min(
            FMath::Max(0.0f, Weapon.RocketLauncher.MaximumTargetLeadSeconds),
            FMath::Max(0.0f, EstimatedFlightSeconds));
        AimLocation += CurrentTarget->GetVelocity() * LeadSeconds;
    }
    else if (IsGrenadeLauncherWeapon(Weapon) && Weapon.GrenadeLauncher.bPredictTargetMovement && IsValid(CurrentTarget))
    {
        AimLocation = ResolveGrenadeLeadTargetLocation(Weapon, TraceStart, CurrentTarget, AimLocation);
    }

    const float TargetDistance = FVector::Distance(TraceStart, AimLocation);

    if (TargetDistance > FMath::Max(1.0f, Weapon.MaximumRange))
    {
        ScheduleNextShot(0.15f);
        return;
    }

    const float MinimumExplosiveDistance = IsRocketLauncherWeapon(Weapon)
        ? FMath::Max(0.0f, Weapon.RocketLauncher.MinimumAIFiringDistance)
        : (IsGrenadeLauncherWeapon(Weapon)
            ? FMath::Max(0.0f, Weapon.GrenadeLauncher.MinimumAIFiringDistance)
            : 0.0f);
    if (IsExplosiveProjectileWeapon(Weapon) && TargetDistance < MinimumExplosiveDistance)
    {
        ScheduleNextShot(0.12f);
        return;
    }

    if (Targeting.bRequireLineOfSight && !HasLineOfSightTo(CurrentTarget))
    {
        ScheduleNextShot(0.12f);
        return;
    }

    if (WeaponUsesMagazine(Weapon) && CurrentMagazineAmmo <= 0)
    {
        StartReload();
        return;
    }

    float SpreadDegrees = FMath::Max(0.0f, Weapon.HipFireSpreadDegrees);
    if (GetOwner() && GetOwner()->GetVelocity().SizeSquared2D() > FMath::Square(20.0f))
    {
        SpreadDegrees += FMath::Max(0.0f, Weapon.MovingSpreadPenaltyDegrees);
    }

    bool bShotExecuted = false;
    if (IsGrenadeLauncherWeapon(Weapon))
    {
        FVector AimDirection = (AimLocation - TraceStart).GetSafeNormal();
        if (AimDirection.IsNearlyZero())
        {
            ScheduleNextShot(0.08f);
            return;
        }
        AimDirection = FMath::VRandCone(AimDirection, FMath::DegreesToRadians(SpreadDegrees));
        const FVector SpreadAimLocation = TraceStart + AimDirection * FMath::Max(1.0f, TargetDistance);
        bShotExecuted = ExecuteGrenadeLauncherShot(Weapon, SpreadAimLocation);
    }
    else
    {
        FVector ShotDirection = (AimLocation - TraceStart).GetSafeNormal();
        ShotDirection = FMath::VRandCone(ShotDirection, FMath::DegreesToRadians(SpreadDegrees));
        bShotExecuted = ExecuteWeaponShot(Weapon, TraceStart, ShotDirection, false);
    }

    if (!bShotExecuted)
    {
        ScheduleNextShot(0.08f);
        return;
    }

    if (WeaponUsesMagazine(Weapon))
    {
        CurrentMagazineAmmo = FMath::Max(0, CurrentMagazineAmmo - 1);
    }

    --BurstShotsRemaining;
    const float SecondsPerShot = 60.0f / GetEffectiveRoundsPerMinute(Weapon);

    if (WeaponUsesMagazine(Weapon) && CurrentMagazineAmmo <= 0)
    {
        StartReload();
    }
    else if (IsExplosiveProjectileWeapon(Weapon))
    {
        BurstShotsRemaining = 1;
        ScheduleNextShot(SecondsPerShot);
    }
    else if (BurstShotsRemaining > 0)
    {
        ScheduleNextShot(SecondsPerShot);
    }
    else
    {
        const int32 MinBurst = FMath::Max(1, Weapon.MinimumBurstShots);
        const int32 MaxBurst = FMath::Max(MinBurst, Weapon.MaximumBurstShots);
        BurstShotsRemaining = FMath::RandRange(MinBurst, MaxBurst);
        ScheduleNextShot(FMath::FRandRange(FMath::Max(0.0f, Weapon.MinimumBurstPause), FMath::Max(Weapon.MinimumBurstPause, Weapon.MaximumBurstPause)));
    }
}

bool URenegadeSoldierCombatComponent::ExecuteRocketLauncherShot(
    const FRenegadeWeaponSettings& Weapon,
    const FVector& TraceStart,
    const FVector& BaseShotDirection,
    bool bUseMuzzleObstructionTrace)
{
    if (!HasAuthority() || !GetWorld() || !GetOwner())
    {
        return false;
    }

    const FVector ShotDirection = BaseShotDirection.GetSafeNormal();
    if (ShotDirection.IsNearlyZero())
    {
        return false;
    }

    const float MaximumRange = FMath::Max(1.0f, Weapon.MaximumRange);
    const FVector DesiredAimEnd = TraceStart + ShotDirection * MaximumRange;

    FCollisionQueryParams QueryParams(SCENE_QUERY_STAT(RenegadeRocketLauncherTrace), true, GetOwner());
    QueryParams.bReturnPhysicalMaterial = true;
    RenegadeCombatPrivate::AddOwnerHierarchyToTraceIgnore(GetOwner(), QueryParams);

    FHitResult AimHit;
    const bool bAimBlockingHit = RenegadeCombatPrivate::PerformWeaponTrace(
        GetWorld(),
        AimHit,
        TraceStart,
        DesiredAimEnd,
        Weapon,
        QueryParams);
    const FVector CameraAimPoint = bAimBlockingHit ? AimHit.ImpactPoint : DesiredAimEnd;

    const FVector LaunchLocation = ResolveRocketLauncherMuzzleLocation(GetMuzzleLocation());
    FVector ConfirmedAimPoint = CameraAimPoint;
    const FVector LaunchToAim = ConfirmedAimPoint - LaunchLocation;
    const float LaunchAimDistance = LaunchToAim.Size();
    if (LaunchAimDistance > MaximumRange && LaunchAimDistance > KINDA_SMALL_NUMBER)
    {
        ConfirmedAimPoint = LaunchLocation + (LaunchToAim / LaunchAimDistance) * MaximumRange;
    }

    FHitResult FinalHit;
    const bool bFinalBlockingHit = RenegadeCombatPrivate::PerformWeaponTrace(
        GetWorld(),
        FinalHit,
        LaunchLocation,
        ConfirmedAimPoint,
        Weapon,
        QueryParams);
    const FVector ImpactLocation = bFinalBlockingHit ? FinalHit.ImpactPoint : ConfirmedAimPoint;

    AActor* RawHitActor = bFinalBlockingHit ? FinalHit.GetActor() : nullptr;
    AActor* DirectHitActor = RawHitActor;
    if (URenegadeSoldierCombatComponent* HitCombat = bFinalBlockingHit
        ? RenegadeCombatPrivate::ResolveCombatComponentFromActorHierarchy(RawHitActor)
        : nullptr)
    {
        DirectHitActor = HitCombat->GetOwner();
    }
    else if (URenegadeHarvesterCombatComponent* HitHarvester = bFinalBlockingHit
        ? RenegadeCombatPrivate::ResolveHarvesterComponentFromActorHierarchy(RawHitActor)
        : nullptr)
    {
        DirectHitActor = HitHarvester->GetOwner();
    }
    else if (URenegadeBuildingCombatComponent* HitBuilding = bFinalBlockingHit
        ? RenegadeCombatPrivate::ResolveBuildingComponentFromActorHierarchy(RawHitActor)
        : nullptr)
    {
        DirectHitActor = HitBuilding->GetOwner();
    }
    else if (bFinalBlockingHit)
    {
        // Large/multipart building Blueprints can be struck on child geometry whose Actor hierarchy does not
        // directly expose the Building Combat Component. Recover the registered building from its bounds.
        constexpr float DirectBuildingImpactTolerance = 12.0f;
        if (URenegadeBuildingCombatComponent* RecoveredBuilding =
            RenegadeCombatPrivate::ResolveRegisteredBuildingAtImpactLocation(
                GetWorld(),
                FinalHit.ImpactPoint,
                DirectBuildingImpactTolerance))
        {
            DirectHitActor = RecoveredBuilding->GetOwner();
        }
    }

    const float Distance = FVector::Distance(LaunchLocation, ImpactLocation);
    const float FlightSeconds = FMath::Max(
        0.01f,
        FMath::Min(
            FMath::Max(0.05f, Weapon.RocketLauncher.MaximumFlightSeconds),
            Distance / FMath::Max(100.0f, Weapon.RocketLauncher.ProjectileSpeed)));

    QueuePendingRocketImpact(Weapon, ImpactLocation, FlightSeconds, DirectHitActor, FinalHit);
    MulticastRocketLaunched(LaunchLocation, ImpactLocation, FlightSeconds);

    if (Weapon.RocketLauncher.bDrawDebugRocket)
    {
        DrawDebugLine(
            GetWorld(),
            LaunchLocation,
            ImpactLocation,
            bFinalBlockingHit ? FColor::Orange : FColor::Red,
            false,
            Weapon.RocketLauncher.DebugDrawDuration,
            0,
            2.0f);
        DrawDebugPoint(
            GetWorld(),
            ImpactLocation,
            14.0f,
            bFinalBlockingHit ? FColor::Orange : FColor::Red,
            false,
            Weapon.RocketLauncher.DebugDrawDuration);
    }

    (void)bUseMuzzleObstructionTrace;
    return true;
}

void URenegadeSoldierCombatComponent::QueuePendingRocketImpact(
    const FRenegadeWeaponSettings& Weapon,
    const FVector& ImpactLocation,
    float FlightSeconds,
    AActor* DirectHitActor,
    const FHitResult& DirectHit)
{
    if (!HasAuthority())
    {
        return;
    }

    FRenegadePendingRocketImpactRuntimeState& State = PendingRocketImpacts.AddDefaulted_GetRef();
    State.ImpactLocation = ImpactLocation;
    State.ElapsedSeconds = 0.0f;
    State.DurationSeconds = FMath::Max(0.01f, FlightSeconds);
    State.Weapon = Weapon;
    State.DirectHitActor = DirectHitActor;
    State.DirectHit = DirectHit;
    UpdateComponentTickState();
}

void URenegadeSoldierCombatComponent::UpdatePendingRocketImpacts(float DeltaTime)
{
    if (!HasAuthority() || PendingRocketImpacts.Num() == 0)
    {
        return;
    }

    for (int32 Index = PendingRocketImpacts.Num() - 1; Index >= 0; --Index)
    {
        FRenegadePendingRocketImpactRuntimeState& State = PendingRocketImpacts[Index];
        State.ElapsedSeconds += FMath::Max(0.0f, DeltaTime);
        if (State.ElapsedSeconds + KINDA_SMALL_NUMBER < State.DurationSeconds)
        {
            continue;
        }

        ApplyRocketExplosionDamage(
            State.Weapon,
            State.ImpactLocation,
            State.DirectHitActor.Get(),
            State.DirectHit);
        PendingRocketImpacts.RemoveAtSwap(Index, 1, EAllowShrinking::No);
    }
}

bool URenegadeSoldierCombatComponent::HasRocketExplosionLineOfSight(
    const FRenegadeWeaponSettings& Weapon,
    const FVector& ImpactLocation,
    AActor* DamageActor,
    const FVector& DamageLocation) const
{
    if (!Weapon.RocketLauncher.bUseExplosionOcclusion || !GetWorld() || !IsValid(DamageActor))
    {
        return true;
    }

    FVector Direction = (DamageLocation - ImpactLocation).GetSafeNormal();
    if (Direction.IsNearlyZero())
    {
        return true;
    }

    FCollisionQueryParams QueryParams(SCENE_QUERY_STAT(RenegadeRocketExplosionOcclusion), false, GetOwner());
    RenegadeCombatPrivate::AddOwnerHierarchyToTraceIgnore(GetOwner(), QueryParams);
    RenegadeCombatPrivate::AddOwnerHierarchyToTraceIgnore(DamageActor, QueryParams);

    FHitResult OcclusionHit;
    const FVector Start = ImpactLocation + Direction * 4.0f;
    const FVector End = DamageLocation;
    return !GetWorld()->LineTraceSingleByChannel(
        OcclusionHit,
        Start,
        End,
        Weapon.RocketLauncher.ExplosionOcclusionTraceChannel,
        QueryParams);
}

void URenegadeSoldierCombatComponent::ApplyRocketExplosionDamage(
    const FRenegadeWeaponSettings& Weapon,
    const FVector& ImpactLocation,
    AActor* DirectHitActor,
    const FHitResult& DirectHit)
{
    if (!HasAuthority() || !GetWorld() || !GetOwner())
    {
        return;
    }

    const float InnerRadius = FMath::Max(0.0f, Weapon.RocketLauncher.ExplosionInnerRadius);
    const float OuterRadius = FMath::Max(InnerRadius, Weapon.RocketLauncher.ExplosionOuterRadius);
    const float MinimumDamageMultiplier = FMath::Clamp(Weapon.RocketLauncher.MinimumExplosionDamageMultiplier, 0.0f, 1.0f);
    const float MaximumDamage = FMath::Max(0.0f, Weapon.DamagePerShot);
    if (OuterRadius <= KINDA_SMALL_NUMBER || MaximumDamage <= 0.0f)
    {
        return;
    }

    TSubclassOf<UDamageType> ResolvedDamageType = Weapon.DamageTypeClass;
    if (!ResolvedDamageType)
    {
        ResolvedDamageType = UDamageType::StaticClass();
    }

    TSet<TWeakObjectPtr<AActor>> ProcessedActors;
    int32 DamagedTargetCount = 0;

    auto TryDamageActor = [this, &Weapon, &ImpactLocation, DirectHitActor, &DirectHit, InnerRadius, OuterRadius,
                           MinimumDamageMultiplier, MaximumDamage, ResolvedDamageType, &ProcessedActors, &DamagedTargetCount]
        (AActor* DamageActor, const FVector& DamageLocation, URenegadeSoldierCombatComponent* SoldierCombat,
         URenegadeHarvesterCombatComponent* HarvesterCombat, URenegadeBuildingCombatComponent* BuildingCombat)
    {
        const TWeakObjectPtr<AActor> DamageActorKey(DamageActor);
        if (!IsValid(DamageActor) || ProcessedActors.Contains(DamageActorKey))
        {
            return;
        }
        ProcessedActors.Add(DamageActorKey);

        const bool bIsSelf = DamageActor == GetOwner();
        if (bIsSelf)
        {
            if (!Weapon.RocketLauncher.bAllowSelfDamage)
            {
                return;
            }
        }
        else if (!Weapon.bAllowFriendlyFire && !IsHostileToActor(DamageActor))
        {
            return;
        }

        const bool bDirectHitTarget = DamageActor == DirectHitActor;
        FVector RadialDamageLocation = DamageLocation;
        if (IsValid(BuildingCombat))
        {
            RadialDamageLocation = RenegadeCombatPrivate::GetClosestPointOnBuildingBounds(BuildingCombat, ImpactLocation);
        }
        else if (IsValid(HarvesterCombat) && IsValid(HarvesterCombat->GetOwner()))
        {
            FVector BoundsMin = FVector::ZeroVector;
            FVector BoundsMax = FVector::ZeroVector;
            if (RenegadeCombatPrivate::GetActorHierarchyBounds(HarvesterCombat->GetOwner(), BoundsMin, BoundsMax))
            {
                RadialDamageLocation = FVector(
                    FMath::Clamp(ImpactLocation.X, BoundsMin.X, BoundsMax.X),
                    FMath::Clamp(ImpactLocation.Y, BoundsMin.Y, BoundsMax.Y),
                    FMath::Clamp(ImpactLocation.Z, BoundsMin.Z, BoundsMax.Z));
            }
        }
        FVector EffectiveDamageLocation = RadialDamageLocation;
        if (bDirectHitTarget && DirectHit.bBlockingHit)
        {
            EffectiveDamageLocation = DirectHit.ImpactPoint;
        }
        const float Distance = bDirectHitTarget
            ? 0.0f
            : FVector::Distance(ImpactLocation, EffectiveDamageLocation);
        if (Distance > OuterRadius)
        {
            return;
        }

        if (!bDirectHitTarget
            && !HasRocketExplosionLineOfSight(Weapon, ImpactLocation, DamageActor, EffectiveDamageLocation))
        {
            return;
        }

        float DamageMultiplier = 1.0f;
        if (Distance > InnerRadius && OuterRadius > InnerRadius + KINDA_SMALL_NUMBER)
        {
            const float FalloffAlpha = FMath::Clamp((Distance - InnerRadius) / (OuterRadius - InnerRadius), 0.0f, 1.0f);
            DamageMultiplier = FMath::Lerp(1.0f, MinimumDamageMultiplier, FalloffAlpha);
        }
        if (bDirectHitTarget)
        {
            DamageMultiplier *= FMath::Max(0.0f, Weapon.RocketLauncher.DirectHitDamageMultiplier);
        }

        const float Damage = MaximumDamage * DamageMultiplier;
        if (Damage <= 0.0f)
        {
            return;
        }

        FVector DamageDirection = (EffectiveDamageLocation - ImpactLocation).GetSafeNormal();
        if (DamageDirection.IsNearlyZero())
        {
            DamageDirection = FVector::UpVector;
        }

        FHitResult ExplosionHit;
        ExplosionHit.TraceStart = ImpactLocation;
        ExplosionHit.TraceEnd = EffectiveDamageLocation;
        ExplosionHit.Location = EffectiveDamageLocation;
        ExplosionHit.ImpactPoint = EffectiveDamageLocation;
        ExplosionHit.ImpactNormal = -DamageDirection;
        if (bDirectHitTarget)
        {
            ExplosionHit.BoneName = DirectHit.BoneName;
        }

        if (IsValid(SoldierCombat))
        {
            SoldierCombat->PrepareIncomingCombatHit(ExplosionHit, DamageDirection);
        }

        const float AppliedDamage = UGameplayStatics::ApplyPointDamage(
            DamageActor,
            Damage,
            DamageDirection,
            ExplosionHit,
            GetOwningController(),
            GetOwner(),
            ResolvedDamageType);

        if (Weapon.RocketLauncher.bDrawDebugRocket && (IsValid(BuildingCombat) || IsValid(HarvesterCombat)))
        {
            UE_LOG(
                LogRenegadeSoldierCombat,
                Log,
                TEXT("%s rocket explosion resolved %s %s at %.1f cm from its bounds and applied %.2f damage%s."),
                *GetNameSafe(GetOwner()),
                IsValid(HarvesterCombat) ? TEXT("Harvester") : TEXT("building"),
                *GetNameSafe(DamageActor),
                Distance,
                AppliedDamage,
                bDirectHitTarget ? TEXT(" (direct hit)") : TEXT(""));
        }

        if (IsValid(SoldierCombat))
        {
            SoldierCombat->ClearIncomingCombatHit();
        }

        if (AppliedDamage > 0.0f)
        {
            ++DamagedTargetCount;
        }
    };

    if (URenegadeCombatRegistrySubsystem* Registry = GetWorld()->GetSubsystem<URenegadeCombatRegistrySubsystem>())
    {
        TArray<URenegadeSoldierCombatComponent*> Combatants;
        Registry->GetCombatants(Combatants);
        for (URenegadeSoldierCombatComponent* Combatant : Combatants)
        {
            if (!IsValid(Combatant) || Combatant->bIsDead || !IsValid(Combatant->GetOwner()))
            {
                continue;
            }
            TryDamageActor(Combatant->GetOwner(), GetAimLocation(Combatant->GetOwner()), Combatant, nullptr, nullptr);
        }

        TArray<URenegadeHarvesterCombatComponent*> Harvesters;
        Registry->GetHarvesters(Harvesters);
        for (URenegadeHarvesterCombatComponent* Harvester : Harvesters)
        {
            if (!IsValid(Harvester) || !Harvester->IsOperational() || !IsValid(Harvester->GetOwner()))
            {
                continue;
            }
            TryDamageActor(Harvester->GetOwner(), Harvester->GetTargetAimLocation(), nullptr, Harvester, nullptr);
        }

        TArray<URenegadeBuildingCombatComponent*> Buildings;
        Registry->GetBuildings(Buildings);
        for (URenegadeBuildingCombatComponent* Building : Buildings)
        {
            if (!IsValid(Building) || Building->bIsDestroyed || Building->CurrentHealth <= 0.0f || !IsValid(Building->GetOwner()))
            {
                continue;
            }
            TryDamageActor(Building->GetOwner(), Building->GetTargetAimLocation(), nullptr, nullptr, Building);
        }
    }

    if (Weapon.RocketLauncher.bDrawDebugRocket)
    {
        DrawDebugSphere(
            GetWorld(),
            ImpactLocation,
            OuterRadius,
            24,
            DamagedTargetCount > 0 ? FColor::Green : FColor::Red,
            false,
            Weapon.RocketLauncher.DebugDrawDuration,
            0,
            2.0f);
        if (InnerRadius > KINDA_SMALL_NUMBER)
        {
            DrawDebugSphere(
                GetWorld(),
                ImpactLocation,
                InnerRadius,
                20,
                FColor::Yellow,
                false,
                Weapon.RocketLauncher.DebugDrawDuration,
                0,
                1.5f);
        }
    }
}


bool URenegadeSoldierCombatComponent::SolveGrenadeBallisticVelocity(
    const FRenegadeWeaponSettings& Weapon,
    const FVector& LaunchLocation,
    const FVector& TargetLocation,
    FVector& OutVelocity,
    float& OutFlightSeconds) const
{
    OutVelocity = FVector::ZeroVector;
    OutFlightSeconds = 0.0f;

    if (!GetWorld() || !IsGrenadeLauncherWeapon(Weapon))
    {
        return false;
    }

    const float Speed = FMath::Max(100.0f, Weapon.GrenadeLauncher.ProjectileSpeed);
    const float GravityMagnitude = FMath::Abs(GetWorld()->GetGravityZ()) * FMath::Max(0.0f, Weapon.GrenadeLauncher.GravityScale);
    const FVector Delta = TargetLocation - LaunchLocation;
    const FVector DeltaXY(Delta.X, Delta.Y, 0.0f);
    const float HorizontalDistance = DeltaXY.Size();

    if (GravityMagnitude <= KINDA_SMALL_NUMBER)
    {
        const FVector Direction = Delta.GetSafeNormal();
        if (Direction.IsNearlyZero())
        {
            return false;
        }
        OutVelocity = Direction * Speed;
        OutFlightSeconds = Delta.Size() / Speed;
        return OutFlightSeconds <= FMath::Max(0.05f, Weapon.GrenadeLauncher.MaximumFlightSeconds) + KINDA_SMALL_NUMBER;
    }

    if (HorizontalDistance <= KINDA_SMALL_NUMBER)
    {
        // Purely vertical targets are uncommon for infantry. Use the vertical quadratic directly.
        const float Sign = Delta.Z >= 0.0f ? 1.0f : -1.0f;
        const float InitialZVelocity = Sign * Speed;
        const float A = -0.5f * GravityMagnitude;
        const float B = InitialZVelocity;
        const float C = -Delta.Z;
        const float Discriminant = B * B - 4.0f * A * C;
        if (Discriminant < 0.0f || FMath::IsNearlyZero(A))
        {
            return false;
        }
        const float SqrtDiscriminant = FMath::Sqrt(Discriminant);
        const float T0 = (-B + SqrtDiscriminant) / (2.0f * A);
        const float T1 = (-B - SqrtDiscriminant) / (2.0f * A);
        const float FlightSeconds = T0 > KINDA_SMALL_NUMBER ? T0 : T1;
        if (FlightSeconds <= KINDA_SMALL_NUMBER)
        {
            return false;
        }
        OutVelocity = FVector(0.0f, 0.0f, InitialZVelocity);
        OutFlightSeconds = FlightSeconds;
        return FlightSeconds <= FMath::Max(0.05f, Weapon.GrenadeLauncher.MaximumFlightSeconds) + KINDA_SMALL_NUMBER;
    }

    const float SpeedSquared = Speed * Speed;
    const float SpeedFourth = SpeedSquared * SpeedSquared;
    const float Height = Delta.Z;
    const float RootTerm = SpeedFourth - GravityMagnitude * (
        GravityMagnitude * HorizontalDistance * HorizontalDistance + 2.0f * Height * SpeedSquared);
    if (RootTerm < -KINDA_SMALL_NUMBER)
    {
        return false;
    }

    // Treat tiny negative values caused by floating-point roundoff as the single tangent solution.
    const float SqrtRoot = FMath::Sqrt(FMath::Max(0.0f, RootTerm));
    const float Numerator = SpeedSquared + (Weapon.GrenadeLauncher.bUseHighArc ? SqrtRoot : -SqrtRoot);
    const float Denominator = GravityMagnitude * HorizontalDistance;
    if (FMath::IsNearlyZero(Denominator))
    {
        return false;
    }

    const float TanTheta = Numerator / Denominator;
    const float CosTheta = 1.0f / FMath::Sqrt(1.0f + TanTheta * TanTheta);
    const float SinTheta = TanTheta * CosTheta;
    const FVector HorizontalDirection = DeltaXY / HorizontalDistance;

    OutVelocity = HorizontalDirection * (Speed * CosTheta) + FVector::UpVector * (Speed * SinTheta);
    const float HorizontalSpeed = FMath::Max(KINDA_SMALL_NUMBER, Speed * CosTheta);
    OutFlightSeconds = HorizontalDistance / HorizontalSpeed;
    return OutFlightSeconds > KINDA_SMALL_NUMBER
        && OutFlightSeconds <= FMath::Max(0.05f, Weapon.GrenadeLauncher.MaximumFlightSeconds) + KINDA_SMALL_NUMBER;
}

FVector URenegadeSoldierCombatComponent::ResolveGrenadeLeadTargetLocation(
    const FRenegadeWeaponSettings& Weapon,
    const FVector& LaunchLocation,
    AActor* Target,
    const FVector& BaseAimLocation) const
{
    if (!IsValid(Target) || !Weapon.GrenadeLauncher.bPredictTargetMovement)
    {
        return BaseAimLocation;
    }

    const FVector TargetVelocity = Target->GetVelocity();
    if (TargetVelocity.IsNearlyZero())
    {
        return BaseAimLocation;
    }

    FVector PredictedLocation = BaseAimLocation;
    const int32 Iterations = FMath::Clamp(Weapon.GrenadeLauncher.TargetLeadIterations, 1, 4);
    const float MaximumLeadSeconds = FMath::Max(0.0f, Weapon.GrenadeLauncher.MaximumTargetLeadSeconds);
    for (int32 Iteration = 0; Iteration < Iterations; ++Iteration)
    {
        FVector LaunchVelocity;
        float FlightSeconds = 0.0f;
        if (!SolveGrenadeBallisticVelocity(Weapon, LaunchLocation, PredictedLocation, LaunchVelocity, FlightSeconds))
        {
            break;
        }
        const float LeadSeconds = FMath::Min(MaximumLeadSeconds, FMath::Max(0.0f, FlightSeconds));
        PredictedLocation = BaseAimLocation + TargetVelocity * LeadSeconds;
    }
    return PredictedLocation;
}

bool URenegadeSoldierCombatComponent::ExecuteGrenadeLauncherShot(
    const FRenegadeWeaponSettings& Weapon,
    const FVector& TargetLocation)
{
    if (!HasAuthority() || !GetWorld() || !GetOwner() || !IsGrenadeLauncherWeapon(Weapon))
    {
        return false;
    }

    const FVector LaunchLocation = ResolveGrenadeLauncherMuzzleLocation(GetMuzzleLocation());
    if (FVector::Distance(LaunchLocation, TargetLocation) > FMath::Max(1.0f, Weapon.MaximumRange))
    {
        return false;
    }

    FVector LaunchVelocity;
    float SolvedFlightSeconds = 0.0f;
    if (!SolveGrenadeBallisticVelocity(Weapon, LaunchLocation, TargetLocation, LaunchVelocity, SolvedFlightSeconds))
    {
        if (Weapon.GrenadeLauncher.bDrawDebugGrenade)
        {
            UE_LOG(LogRenegadeSoldierCombat, Verbose,
                TEXT("%s could not solve a Grenadier ballistic arc to %s with speed %.1f cm/s."),
                *GetNameSafe(GetOwner()), *TargetLocation.ToString(), Weapon.GrenadeLauncher.ProjectileSpeed);
        }
        return false;
    }

    FRenegadeGrenadeProjectileRuntimeState& State = ActiveGrenadeProjectiles.AddDefaulted_GetRef();
    State.GrenadeId = NextGrenadeId++;
    if (NextGrenadeId <= 0)
    {
        NextGrenadeId = 1;
    }
    State.Position = LaunchLocation;
    State.Velocity = LaunchVelocity;
    State.ElapsedSeconds = 0.0f;
    State.BounceCount = 0;
    State.bSettled = false;
    State.Weapon = Weapon;

    MulticastGrenadeLaunched(State.GrenadeId, LaunchLocation, LaunchVelocity);

    if (Weapon.GrenadeLauncher.bDrawDebugGrenade)
    {
        const FVector ApexHint = LaunchLocation + LaunchVelocity * FMath::Min(0.25f, SolvedFlightSeconds * 0.25f);
        DrawDebugLine(GetWorld(), LaunchLocation, ApexHint, FColor::Cyan, false, Weapon.GrenadeLauncher.DebugDrawDuration, 0, 1.5f);
    }

    UpdateComponentTickState();
    return true;
}

void URenegadeSoldierCombatComponent::UpdateActiveGrenadeProjectiles(float DeltaTime)
{
    if (!HasAuthority() || !GetWorld() || ActiveGrenadeProjectiles.Num() == 0)
    {
        return;
    }

    const float FrameSeconds = FMath::Max(0.0f, DeltaTime);
    for (int32 Index = ActiveGrenadeProjectiles.Num() - 1; Index >= 0; --Index)
    {
        if (!ActiveGrenadeProjectiles.IsValidIndex(Index))
        {
            continue;
        }

        FRenegadeGrenadeProjectileRuntimeState& State = ActiveGrenadeProjectiles[Index];
        const FRenegadeGrenadeLauncherSettings& Grenade = State.Weapon.GrenadeLauncher;
        const float LifetimeLimit = Grenade.DetonationMode == ERenegadeGrenadeDetonationMode::TimedBounce
            ? FMath::Min(FMath::Max(0.05f, Grenade.MaximumFlightSeconds), FMath::Max(0.05f, Grenade.TimedFuseSeconds))
            : FMath::Max(0.05f, Grenade.MaximumFlightSeconds);

        float RemainingSeconds = FrameSeconds;
        const float MaxStep = FMath::Clamp(Grenade.MaximumSimulationStepSeconds, 0.005f, 0.1f);
        while (RemainingSeconds > KINDA_SMALL_NUMBER && ActiveGrenadeProjectiles.IsValidIndex(Index))
        {
            FRenegadeGrenadeProjectileRuntimeState& LiveState = ActiveGrenadeProjectiles[Index];
            const float StepSeconds = FMath::Min(RemainingSeconds, MaxStep);
            const float TimeUntilFuse = LifetimeLimit - LiveState.ElapsedSeconds;
            if (TimeUntilFuse <= KINDA_SMALL_NUMBER)
            {
                FHitResult NoDirectHit;
                DetonateGrenadeProjectile(Index, LiveState.Position, FVector::UpVector, nullptr, NoDirectHit);
                break;
            }

            if (LiveState.bSettled)
            {
                const float SettledStep = FMath::Min(StepSeconds, TimeUntilFuse);
                LiveState.ElapsedSeconds += SettledStep;
                RemainingSeconds -= SettledStep;
                if (LiveState.ElapsedSeconds + KINDA_SMALL_NUMBER >= LifetimeLimit)
                {
                    FHitResult NoDirectHit;
                    DetonateGrenadeProjectile(Index, LiveState.Position, FVector::UpVector, nullptr, NoDirectHit);
                    break;
                }
                continue;
            }

            const float SimSeconds = FMath::Min(StepSeconds, TimeUntilFuse);
            const FVector Gravity(0.0f, 0.0f, GetWorld()->GetGravityZ() * FMath::Max(0.0f, Grenade.GravityScale));
            const FVector Start = LiveState.Position;
            const FVector End = Start + LiveState.Velocity * SimSeconds + 0.5f * Gravity * SimSeconds * SimSeconds;
            const FVector EndVelocity = LiveState.Velocity + Gravity * SimSeconds;

            FCollisionQueryParams QueryParams(SCENE_QUERY_STAT(RenegadeGrenadeProjectileSweep), true, GetOwner());
            QueryParams.bReturnPhysicalMaterial = true;
            RenegadeCombatPrivate::AddOwnerHierarchyToTraceIgnore(GetOwner(), QueryParams);
            const float CollisionRadius = FMath::Max(0.1f, Grenade.CollisionRadius);
            const FCollisionShape CollisionShape = FCollisionShape::MakeSphere(CollisionRadius);

            FHitResult ChannelHit;
            const bool bChannelHit = GetWorld()->SweepSingleByChannel(
                ChannelHit, Start, End, FQuat::Identity, LiveState.Weapon.TraceChannel, CollisionShape, QueryParams);
            FHitResult ObjectHit;
            bool bObjectHit = false;
            if (LiveState.Weapon.bUseCombatTargetObjectTraceFallback)
            {
                const FCollisionObjectQueryParams ObjectQueryParams(LiveState.Weapon.CombatTargetObjectType);
                bObjectHit = GetWorld()->SweepSingleByObjectType(
                    ObjectHit, Start, End, FQuat::Identity, ObjectQueryParams, CollisionShape, QueryParams);
            }

            FHitResult Hit;
            bool bBlockingHit = false;
            if (bChannelHit && bObjectHit)
            {
                Hit = ObjectHit.Distance < ChannelHit.Distance ? ObjectHit : ChannelHit;
                bBlockingHit = true;
            }
            else if (bChannelHit)
            {
                Hit = ChannelHit;
                bBlockingHit = true;
            }
            else if (bObjectHit)
            {
                Hit = ObjectHit;
                bBlockingHit = true;
            }

            LiveState.ElapsedSeconds += SimSeconds;
            RemainingSeconds -= SimSeconds;

            if (Grenade.bDrawDebugGrenade)
            {
                DrawDebugLine(GetWorld(), Start, bBlockingHit ? Hit.ImpactPoint : End,
                    bBlockingHit ? FColor::Orange : FColor::Cyan,
                    false, Grenade.DebugDrawDuration, 0, 1.25f);
            }

            if (!bBlockingHit)
            {
                LiveState.Position = End;
                LiveState.Velocity = EndVelocity;
                if (LiveState.ElapsedSeconds + KINDA_SMALL_NUMBER >= LifetimeLimit)
                {
                    FHitResult NoDirectHit;
                    DetonateGrenadeProjectile(Index, LiveState.Position, FVector::UpVector, nullptr, NoDirectHit);
                    break;
                }
                continue;
            }

            AActor* RawHitActor = Hit.GetActor();
            AActor* DirectHitActor = RawHitActor;
            if (URenegadeSoldierCombatComponent* HitCombat = RenegadeCombatPrivate::ResolveCombatComponentFromActorHierarchy(RawHitActor))
            {
                DirectHitActor = HitCombat->GetOwner();
            }
            else if (URenegadeHarvesterCombatComponent* HitHarvester = RenegadeCombatPrivate::ResolveHarvesterComponentFromActorHierarchy(RawHitActor))
            {
                DirectHitActor = HitHarvester->GetOwner();
            }
            else if (URenegadeBuildingCombatComponent* HitBuilding = RenegadeCombatPrivate::ResolveBuildingComponentFromActorHierarchy(RawHitActor))
            {
                DirectHitActor = HitBuilding->GetOwner();
            }
            else if (URenegadeBuildingCombatComponent* RecoveredBuilding =
                RenegadeCombatPrivate::ResolveRegisteredBuildingAtImpactLocation(GetWorld(), Hit.ImpactPoint, 12.0f))
            {
                DirectHitActor = RecoveredBuilding->GetOwner();
            }

            const FVector ImpactNormal = Hit.ImpactNormal.IsNearlyZero() ? FVector::UpVector : Hit.ImpactNormal.GetSafeNormal();
            if (Grenade.DetonationMode == ERenegadeGrenadeDetonationMode::Impact)
            {
                DetonateGrenadeProjectile(Index, Hit.ImpactPoint, ImpactNormal, DirectHitActor, Hit);
                break;
            }

            // Timed-bounce mode mirrors Renegade X alternate fire. Friendly/hostile actors are solid just like world geometry.
            ++LiveState.BounceCount;
            const FVector IncomingVelocity = EndVelocity;
            const float NormalSpeed = FVector::DotProduct(IncomingVelocity, ImpactNormal);
            const FVector NormalVelocity = ImpactNormal * NormalSpeed;
            const FVector TangentialVelocity = IncomingVelocity - NormalVelocity;
            FVector ReflectedVelocity = TangentialVelocity * (1.0f - FMath::Clamp(Grenade.BounceFriction, 0.0f, 1.0f))
                - NormalVelocity * FMath::Clamp(Grenade.BounceRestitution, 0.0f, 1.0f);

            if (LiveState.BounceCount >= FMath::Clamp(Grenade.MaximumBounces, 1, 32)
                || ReflectedVelocity.Size() < FMath::Max(0.0f, Grenade.MinimumBounceSpeed))
            {
                ReflectedVelocity = FVector::ZeroVector;
                LiveState.bSettled = true;
            }

            LiveState.Position = Hit.ImpactPoint + ImpactNormal * (CollisionRadius + 1.0f);
            LiveState.Velocity = ReflectedVelocity;
            MulticastGrenadeBounced(LiveState.GrenadeId, LiveState.Position, ImpactNormal, LiveState.Velocity);
            break; // Continue next frame from the corrected bounce point; avoids repeated same-frame contact loops.
        }

    }
}

void URenegadeSoldierCombatComponent::DetonateGrenadeProjectile(
    int32 ProjectileIndex,
    const FVector& ImpactLocation,
    const FVector& ImpactNormal,
    AActor* DirectHitActor,
    const FHitResult& DirectHit)
{
    if (!HasAuthority() || !ActiveGrenadeProjectiles.IsValidIndex(ProjectileIndex))
    {
        return;
    }

    const FRenegadeGrenadeProjectileRuntimeState State = ActiveGrenadeProjectiles[ProjectileIndex];
    ApplyGrenadeExplosionDamage(State.Weapon, ImpactLocation, DirectHitActor, DirectHit);
    const FVector SafeImpactNormal = ImpactNormal.IsNearlyZero() ? FVector::UpVector : ImpactNormal.GetSafeNormal();
    MulticastGrenadeExploded(State.GrenadeId, ImpactLocation, SafeImpactNormal);
    ActiveGrenadeProjectiles.RemoveAtSwap(ProjectileIndex, 1, EAllowShrinking::No);
}

bool URenegadeSoldierCombatComponent::HasGrenadeExplosionLineOfSight(
    const FRenegadeWeaponSettings& Weapon,
    const FVector& ImpactLocation,
    AActor* DamageActor,
    const FVector& DamageLocation) const
{
    if (!Weapon.GrenadeLauncher.bUseExplosionOcclusion || !GetWorld() || !IsValid(DamageActor))
    {
        return true;
    }

    const FVector Direction = (DamageLocation - ImpactLocation).GetSafeNormal();
    if (Direction.IsNearlyZero())
    {
        return true;
    }

    FCollisionQueryParams QueryParams(SCENE_QUERY_STAT(RenegadeGrenadeExplosionOcclusion), false, GetOwner());
    RenegadeCombatPrivate::AddOwnerHierarchyToTraceIgnore(GetOwner(), QueryParams);
    RenegadeCombatPrivate::AddOwnerHierarchyToTraceIgnore(DamageActor, QueryParams);

    FHitResult OcclusionHit;
    const FVector Start = ImpactLocation + Direction * 4.0f;
    return !GetWorld()->LineTraceSingleByChannel(
        OcclusionHit, Start, DamageLocation, Weapon.GrenadeLauncher.ExplosionOcclusionTraceChannel, QueryParams);
}

void URenegadeSoldierCombatComponent::ApplyGrenadeExplosionDamage(
    const FRenegadeWeaponSettings& Weapon,
    const FVector& ImpactLocation,
    AActor* DirectHitActor,
    const FHitResult& DirectHit)
{
    if (!HasAuthority() || !GetWorld() || !GetOwner())
    {
        return;
    }

    const float InnerRadius = FMath::Max(0.0f, Weapon.GrenadeLauncher.ExplosionInnerRadius);
    const float OuterRadius = FMath::Max(InnerRadius, Weapon.GrenadeLauncher.ExplosionOuterRadius);
    const float MinimumDamageMultiplier = FMath::Clamp(Weapon.GrenadeLauncher.MinimumExplosionDamageMultiplier, 0.0f, 1.0f);
    const float MaximumDamage = FMath::Max(0.0f, Weapon.DamagePerShot);
    if (OuterRadius <= KINDA_SMALL_NUMBER || MaximumDamage <= 0.0f)
    {
        return;
    }

    TSubclassOf<UDamageType> ResolvedDamageType = Weapon.DamageTypeClass;
    if (!ResolvedDamageType)
    {
        ResolvedDamageType = UDamageType::StaticClass();
    }

    TSet<TWeakObjectPtr<AActor>> ProcessedActors;
    int32 DamagedTargetCount = 0;

    auto TryDamageActor = [this, &Weapon, &ImpactLocation, DirectHitActor, &DirectHit, InnerRadius, OuterRadius,
                           MinimumDamageMultiplier, MaximumDamage, ResolvedDamageType, &ProcessedActors, &DamagedTargetCount]
        (AActor* DamageActor, const FVector& DamageLocation, URenegadeSoldierCombatComponent* SoldierCombat,
         URenegadeHarvesterCombatComponent* HarvesterCombat, URenegadeBuildingCombatComponent* BuildingCombat)
    {
        const TWeakObjectPtr<AActor> DamageActorKey(DamageActor);
        if (!IsValid(DamageActor) || ProcessedActors.Contains(DamageActorKey))
        {
            return;
        }
        ProcessedActors.Add(DamageActorKey);

        const bool bIsSelf = DamageActor == GetOwner();
        if (bIsSelf)
        {
            if (!Weapon.GrenadeLauncher.bAllowSelfDamage)
            {
                return;
            }
        }
        else if (!Weapon.bAllowFriendlyFire && !IsHostileToActor(DamageActor))
        {
            return;
        }

        const bool bDirectHitTarget = DamageActor == DirectHitActor;
        FVector RadialDamageLocation = DamageLocation;
        if (IsValid(BuildingCombat))
        {
            RadialDamageLocation = RenegadeCombatPrivate::GetClosestPointOnBuildingBounds(BuildingCombat, ImpactLocation);
        }
        else if (IsValid(HarvesterCombat) && IsValid(HarvesterCombat->GetOwner()))
        {
            FVector BoundsMin = FVector::ZeroVector;
            FVector BoundsMax = FVector::ZeroVector;
            if (RenegadeCombatPrivate::GetActorHierarchyBounds(HarvesterCombat->GetOwner(), BoundsMin, BoundsMax))
            {
                RadialDamageLocation = FVector(
                    FMath::Clamp(ImpactLocation.X, BoundsMin.X, BoundsMax.X),
                    FMath::Clamp(ImpactLocation.Y, BoundsMin.Y, BoundsMax.Y),
                    FMath::Clamp(ImpactLocation.Z, BoundsMin.Z, BoundsMax.Z));
            }
        }

        FVector EffectiveDamageLocation = RadialDamageLocation;
        if (bDirectHitTarget && DirectHit.bBlockingHit)
        {
            EffectiveDamageLocation = DirectHit.ImpactPoint;
        }
        const float Distance = bDirectHitTarget ? 0.0f : FVector::Distance(ImpactLocation, EffectiveDamageLocation);
        if (Distance > OuterRadius)
        {
            return;
        }
        if (!bDirectHitTarget && !HasGrenadeExplosionLineOfSight(Weapon, ImpactLocation, DamageActor, EffectiveDamageLocation))
        {
            return;
        }

        float DamageMultiplier = 1.0f;
        if (Distance > InnerRadius && OuterRadius > InnerRadius + KINDA_SMALL_NUMBER)
        {
            const float FalloffAlpha = FMath::Clamp((Distance - InnerRadius) / (OuterRadius - InnerRadius), 0.0f, 1.0f);
            DamageMultiplier = FMath::Lerp(1.0f, MinimumDamageMultiplier, FalloffAlpha);
        }
        if (bDirectHitTarget)
        {
            DamageMultiplier *= FMath::Max(0.0f, Weapon.GrenadeLauncher.DirectHitDamageMultiplier);
        }

        const float Damage = MaximumDamage * DamageMultiplier;
        if (Damage <= 0.0f)
        {
            return;
        }

        FVector DamageDirection = (EffectiveDamageLocation - ImpactLocation).GetSafeNormal();
        if (DamageDirection.IsNearlyZero())
        {
            DamageDirection = FVector::UpVector;
        }

        FHitResult ExplosionHit;
        ExplosionHit.TraceStart = ImpactLocation;
        ExplosionHit.TraceEnd = EffectiveDamageLocation;
        ExplosionHit.Location = EffectiveDamageLocation;
        ExplosionHit.ImpactPoint = EffectiveDamageLocation;
        ExplosionHit.ImpactNormal = -DamageDirection;
        if (bDirectHitTarget)
        {
            ExplosionHit.BoneName = DirectHit.BoneName;
        }

        if (IsValid(SoldierCombat))
        {
            SoldierCombat->PrepareIncomingCombatHit(ExplosionHit, DamageDirection);
        }

        const float AppliedDamage = UGameplayStatics::ApplyPointDamage(
            DamageActor, Damage, DamageDirection, ExplosionHit, GetOwningController(), GetOwner(), ResolvedDamageType);

        if (Weapon.GrenadeLauncher.bDrawDebugGrenade && (IsValid(BuildingCombat) || IsValid(HarvesterCombat)))
        {
            UE_LOG(LogRenegadeSoldierCombat, Log,
                TEXT("%s grenade explosion resolved %s %s at %.1f cm and applied %.2f damage%s."),
                *GetNameSafe(GetOwner()),
                IsValid(HarvesterCombat) ? TEXT("Harvester") : TEXT("building"),
                *GetNameSafe(DamageActor), Distance, AppliedDamage,
                bDirectHitTarget ? TEXT(" (direct hit)") : TEXT(""));
        }

        if (IsValid(SoldierCombat))
        {
            SoldierCombat->ClearIncomingCombatHit();
        }
        if (AppliedDamage > 0.0f)
        {
            ++DamagedTargetCount;
        }
    };

    if (URenegadeCombatRegistrySubsystem* Registry = GetWorld()->GetSubsystem<URenegadeCombatRegistrySubsystem>())
    {
        TArray<URenegadeSoldierCombatComponent*> Combatants;
        Registry->GetCombatants(Combatants);
        for (URenegadeSoldierCombatComponent* Combatant : Combatants)
        {
            if (IsValid(Combatant) && !Combatant->bIsDead && IsValid(Combatant->GetOwner()))
            {
                TryDamageActor(Combatant->GetOwner(), GetAimLocation(Combatant->GetOwner()), Combatant, nullptr, nullptr);
            }
        }

        TArray<URenegadeHarvesterCombatComponent*> Harvesters;
        Registry->GetHarvesters(Harvesters);
        for (URenegadeHarvesterCombatComponent* Harvester : Harvesters)
        {
            if (IsValid(Harvester) && Harvester->IsOperational() && IsValid(Harvester->GetOwner()))
            {
                TryDamageActor(Harvester->GetOwner(), Harvester->GetTargetAimLocation(), nullptr, Harvester, nullptr);
            }
        }

        TArray<URenegadeBuildingCombatComponent*> Buildings;
        Registry->GetBuildings(Buildings);
        for (URenegadeBuildingCombatComponent* Building : Buildings)
        {
            if (IsValid(Building) && !Building->bIsDestroyed && Building->CurrentHealth > 0.0f && IsValid(Building->GetOwner()))
            {
                TryDamageActor(Building->GetOwner(), Building->GetTargetAimLocation(), nullptr, nullptr, Building);
            }
        }
    }

    if (Weapon.GrenadeLauncher.bDrawDebugGrenade)
    {
        DrawDebugSphere(GetWorld(), ImpactLocation, OuterRadius, 24,
            DamagedTargetCount > 0 ? FColor::Green : FColor::Red,
            false, Weapon.GrenadeLauncher.DebugDrawDuration, 0, 2.0f);
        if (InnerRadius > KINDA_SMALL_NUMBER)
        {
            DrawDebugSphere(GetWorld(), ImpactLocation, InnerRadius, 20, FColor::Yellow,
                false, Weapon.GrenadeLauncher.DebugDrawDuration, 0, 1.5f);
        }
    }
}

bool URenegadeSoldierCombatComponent::ExecuteWeaponShot(
    const FRenegadeWeaponSettings& Weapon,
    const FVector& TraceStart,
    const FVector& BaseShotDirection,
    bool bUseMuzzleObstructionTrace)
{
    if (IsRocketLauncherWeapon(Weapon))
    {
        return ExecuteRocketLauncherShot(Weapon, TraceStart, BaseShotDirection, bUseMuzzleObstructionTrace);
    }

    if (!HasAuthority() || !GetWorld() || !GetOwner())
    {
        return false;
    }

    const FVector ShotDirection = BaseShotDirection.GetSafeNormal();
    if (ShotDirection.IsNearlyZero())
    {
        return false;
    }

    const float MaximumRange = FMath::Max(1.0f, Weapon.MaximumRange);
    const FVector DesiredAimEnd = TraceStart + ShotDirection * MaximumRange;

    FCollisionQueryParams QueryParams(SCENE_QUERY_STAT(RenegadeCombatWeaponTrace), true, GetOwner());
    QueryParams.bReturnPhysicalMaterial = true;
    RenegadeCombatPrivate::AddOwnerHierarchyToTraceIgnore(GetOwner(), QueryParams);

    FHitResult AimHit;
    const bool bAimBlockingHit = RenegadeCombatPrivate::PerformWeaponTrace(
        GetWorld(),
        AimHit,
        TraceStart,
        DesiredAimEnd,
        Weapon,
        QueryParams);
    const FVector CameraAimPoint = bAimBlockingHit ? AimHit.ImpactPoint : DesiredAimEnd;

    FVector FinalTraceStart = TraceStart;
    FHitResult FinalHit = AimHit;
    bool bFinalBlockingHit = bAimBlockingHit;

    FVector ConfirmedAimPoint = CameraAimPoint;
    if (bUseMuzzleObstructionTrace)
    {
        FinalTraceStart = ResolveBulletVisualSpawnLocation(GetMuzzleLocation());
        const FVector MuzzleToAim = CameraAimPoint - FinalTraceStart;
        const float MuzzleAimDistance = MuzzleToAim.Size();
        if (MuzzleAimDistance > MaximumRange && MuzzleAimDistance > KINDA_SMALL_NUMBER)
        {
            ConfirmedAimPoint = FinalTraceStart + (MuzzleToAim / MuzzleAimDistance) * MaximumRange;
        }

        FinalHit = FHitResult();
        bFinalBlockingHit = RenegadeCombatPrivate::PerformWeaponTrace(
            GetWorld(),
            FinalHit,
            FinalTraceStart,
            ConfirmedAimPoint,
            Weapon,
            QueryParams);
    }

    const FVector TraceEnd = bFinalBlockingHit ? FinalHit.ImpactPoint : ConfirmedAimPoint;
    AActor* RawHitActor = bFinalBlockingHit ? FinalHit.GetActor() : nullptr;
    URenegadeSoldierCombatComponent* HitCombat = bFinalBlockingHit
        ? RenegadeCombatPrivate::ResolveCombatComponentFromActorHierarchy(RawHitActor)
        : nullptr;
    URenegadeHarvesterCombatComponent* HitHarvester = bFinalBlockingHit
        ? RenegadeCombatPrivate::ResolveHarvesterComponentFromActorHierarchy(RawHitActor)
        : nullptr;
    URenegadeBuildingCombatComponent* HitBuilding = bFinalBlockingHit
        ? RenegadeCombatPrivate::ResolveBuildingComponentFromActorHierarchy(RawHitActor)
        : nullptr;

    AActor* DamageActor = nullptr;
    if (IsValid(HitCombat))
    {
        DamageActor = HitCombat->GetOwner();
    }
    else if (IsValid(HitHarvester))
    {
        DamageActor = HitHarvester->GetOwner();
    }
    else if (IsValid(HitBuilding))
    {
        DamageActor = HitBuilding->GetOwner();
    }
    else
    {
        DamageActor = RawHitActor;
    }

    const bool bResolvedSoldierOperational = IsValid(HitCombat) && !HitCombat->bIsDead;
    const bool bResolvedHarvesterOperational = IsValid(HitHarvester) && HitHarvester->IsOperational();
    const bool bResolvedBuildingOperational = IsValid(HitBuilding) && !HitBuilding->bIsDestroyed && HitBuilding->CurrentHealth > 0.0f;
    const bool bResolvedCombatTarget = bResolvedSoldierOperational || bResolvedHarvesterOperational || bResolvedBuildingOperational;
    const bool bCanDamageHitActor = IsValid(DamageActor)
        && bResolvedCombatTarget
        && (Weapon.bAllowFriendlyFire || IsHostileToActor(DamageActor));
    const bool bSpawnGroundBloodForHit = bCanDamageHitActor && bResolvedSoldierOperational;

    MulticastShotFired(
        FinalTraceStart,
        TraceEnd,
        bFinalBlockingHit,
        FinalHit,
        bSpawnGroundBloodForHit,
        bCanDamageHitActor);

    if (bCanDamageHitActor)
    {
        const float Damage = CalculateDamageForHit(Weapon, FinalHit, FVector::Distance(FinalTraceStart, FinalHit.ImpactPoint));
        const FVector DamageDirection = (TraceEnd - FinalTraceStart).GetSafeNormal();

        if (HitCombat)
        {
            HitCombat->PrepareIncomingCombatHit(FinalHit, DamageDirection);
        }

        TSubclassOf<UDamageType> ResolvedDamageType = Weapon.DamageTypeClass;
        if (!ResolvedDamageType)
        {
            ResolvedDamageType = UDamageType::StaticClass();
        }

        const float AppliedDamage = UGameplayStatics::ApplyPointDamage(
            DamageActor,
            Damage,
            DamageDirection,
            FinalHit,
            GetOwningController(),
            GetOwner(),
            ResolvedDamageType);

        if (CombatVisuals.bDrawDebugShotLine)
        {
            UE_LOG(
                LogRenegadeSoldierCombat,
                Log,
                TEXT("%s shot hit raw actor %s, resolved %s target %s, applied %.2f damage."),
                *GetNameSafe(GetOwner()),
                *GetNameSafe(RawHitActor),
                HitBuilding ? TEXT("building") : (HitHarvester ? TEXT("harvester") : TEXT("soldier")),
                *GetNameSafe(DamageActor),
                AppliedDamage);
        }

        if (HitCombat)
        {
            HitCombat->ClearIncomingCombatHit();
        }
    }
    else if (CombatVisuals.bDrawDebugShotLine && bFinalBlockingHit)
    {
        UE_LOG(
            LogRenegadeSoldierCombat,
            Log,
            TEXT("%s shot was blocked by %s but no hostile soldier, Harvester, or building target was resolved."),
            *GetNameSafe(GetOwner()),
            *GetNameSafe(RawHitActor));
    }

    return true;
}

bool URenegadeSoldierCombatComponent::ShouldRunCosmeticVisuals() const
{
    const UWorld* World = GetWorld();
    return World && World->GetNetMode() != NM_DedicatedServer;
}

USceneComponent* URenegadeSoldierCombatComponent::ResolveBulletVisualSpawnComponent() const
{
    if (IsValid(RuntimeBulletVisualSpawnComponent) && RuntimeBulletVisualSpawnComponent->GetOwner() == GetOwner())
    {
        return RuntimeBulletVisualSpawnComponent;
    }

    if (GetOwner())
    {
        if (UActorComponent* ReferencedComponent = BulletVisualSpawnComponent.GetComponent(GetOwner()))
        {
            if (USceneComponent* ReferencedSceneComponent = Cast<USceneComponent>(ReferencedComponent))
            {
                return ReferencedSceneComponent;
            }
        }

        if (!BulletVisualSpawnComponentTag.IsNone())
        {
            const TArray<UActorComponent*> TaggedComponents = GetOwner()->GetComponentsByTag(
                USceneComponent::StaticClass(), BulletVisualSpawnComponentTag);

            for (UActorComponent* TaggedComponent : TaggedComponents)
            {
                if (USceneComponent* TaggedSceneComponent = Cast<USceneComponent>(TaggedComponent))
                {
                    return TaggedSceneComponent;
                }
            }
        }
    }

    return nullptr;
}

FVector URenegadeSoldierCombatComponent::ResolveBulletVisualSpawnLocation(const FVector& FallbackTraceStart) const
{
    if (const USceneComponent* SpawnComponent = ResolveBulletVisualSpawnComponent())
    {
        return SpawnComponent->GetComponentTransform().TransformPosition(BulletVisualSpawnRelativeOffset);
    }

    return FallbackTraceStart;
}


USceneComponent* URenegadeSoldierCombatComponent::ResolveRocketLauncherMuzzleComponent() const
{
    if (IsValid(RuntimeRocketLauncherMuzzleComponent) && RuntimeRocketLauncherMuzzleComponent->GetOwner() == GetOwner())
    {
        return RuntimeRocketLauncherMuzzleComponent;
    }

    if (GetOwner())
    {
        if (UActorComponent* ReferencedComponent = RocketLauncherMuzzleComponent.GetComponent(GetOwner()))
        {
            if (USceneComponent* ReferencedSceneComponent = Cast<USceneComponent>(ReferencedComponent))
            {
                return ReferencedSceneComponent;
            }
        }

        if (!RocketLauncherMuzzleComponentTag.IsNone())
        {
            const TArray<UActorComponent*> TaggedComponents = GetOwner()->GetComponentsByTag(
                USceneComponent::StaticClass(), RocketLauncherMuzzleComponentTag);
            for (UActorComponent* TaggedComponent : TaggedComponents)
            {
                if (USceneComponent* TaggedSceneComponent = Cast<USceneComponent>(TaggedComponent))
                {
                    return TaggedSceneComponent;
                }
            }
        }
    }

    return nullptr;
}

FVector URenegadeSoldierCombatComponent::ResolveRocketLauncherMuzzleLocation(const FVector& FallbackLocation) const
{
    if (const USceneComponent* MuzzleComponent = ResolveRocketLauncherMuzzleComponent())
    {
        return MuzzleComponent->GetComponentTransform().TransformPosition(RocketLauncherMuzzleRelativeOffset);
    }

    return FallbackLocation;
}

UStaticMeshComponent* URenegadeSoldierCombatComponent::AcquireBulletVisualComponent(int32& OutVisualIndex)
{
    OutVisualIndex = INDEX_NONE;
    if (!ShouldRunCosmeticVisuals() || !IsValid(CombatVisuals.BulletMesh) || !GetOwner() || !GetWorld())
    {
        return nullptr;
    }

    const int32 PoolLimit = FMath::Clamp(CombatVisuals.BulletVisualPoolSize, 1, 32);
    for (int32 Index = 0; Index < BulletVisualStates.Num(); ++Index)
    {
        if (!BulletVisualStates[Index].bActive && BulletVisualComponents.IsValidIndex(Index) && IsValid(BulletVisualComponents[Index]))
        {
            OutVisualIndex = Index;
            return BulletVisualComponents[Index];
        }
    }

    if (BulletVisualComponents.Num() < PoolLimit)
    {
        UStaticMeshComponent* NewComponent = NewObject<UStaticMeshComponent>(GetOwner(), NAME_None, RF_Transient);
        if (!IsValid(NewComponent))
        {
            return nullptr;
        }

        GetOwner()->AddInstanceComponent(NewComponent);
        NewComponent->SetMobility(EComponentMobility::Movable);
        NewComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
        NewComponent->SetGenerateOverlapEvents(false);
        NewComponent->SetCanEverAffectNavigation(false);
        NewComponent->SetCastShadow(CombatVisuals.bBulletVisualCastsShadow);
        NewComponent->SetVisibility(false, true);
        NewComponent->SetHiddenInGame(true, true);
        NewComponent->RegisterComponent();

        OutVisualIndex = BulletVisualComponents.Add(NewComponent);
        BulletVisualStates.SetNum(BulletVisualComponents.Num());
        return NewComponent;
    }

    // At the cap, recycle the bullet nearest to arrival instead of allocating more components.
    float BestProgress = -1.0f;
    int32 BestIndex = INDEX_NONE;
    for (int32 Index = 0; Index < BulletVisualStates.Num(); ++Index)
    {
        const FRenegadeBulletVisualRuntimeState& State = BulletVisualStates[Index];
        const float Progress = State.DurationSeconds > KINDA_SMALL_NUMBER ? State.ElapsedSeconds / State.DurationSeconds : 1.0f;
        if (Progress > BestProgress && BulletVisualComponents.IsValidIndex(Index) && IsValid(BulletVisualComponents[Index]))
        {
            BestProgress = Progress;
            BestIndex = Index;
        }
    }

    if (BestIndex != INDEX_NONE)
    {
        DeactivateBulletVisual(BestIndex, true);
        OutVisualIndex = BestIndex;
        return BulletVisualComponents[BestIndex];
    }

    return nullptr;
}

bool URenegadeSoldierCombatComponent::SpawnBulletMeshVisual(const FVector& TraceStart, const FVector& TraceEnd, const FHitResult* BloodHitToDelay)
{
    if (!CombatVisuals.bEnableBulletMeshVisual || !IsValid(CombatVisuals.BulletMesh) || !ShouldRunCosmeticVisuals())
    {
        return false;
    }

    const FVector ConfiguredVisualStart = ResolveBulletVisualSpawnLocation(TraceStart);
    FVector Direction = TraceEnd - ConfiguredVisualStart;
    const float RawDistance = Direction.Size();
    if (RawDistance <= KINDA_SMALL_NUMBER)
    {
        return false;
    }
    Direction /= RawDistance;

    FVector VisualStart = ConfiguredVisualStart + Direction * FMath::Max(0.0f, CombatVisuals.BulletVisualMuzzleForwardOffset);
    FVector VisualEnd = TraceEnd - Direction * FMath::Min(FMath::Max(0.0f, CombatVisuals.BulletVisualImpactStopShortDistance), RawDistance * 0.25f);
    if (FVector::DistSquared(VisualStart, VisualEnd) <= 1.0f)
    {
        VisualStart = ConfiguredVisualStart;
        VisualEnd = TraceEnd;
    }

    int32 VisualIndex = INDEX_NONE;
    UStaticMeshComponent* BulletComponent = AcquireBulletVisualComponent(VisualIndex);
    if (!IsValid(BulletComponent) || !BulletVisualStates.IsValidIndex(VisualIndex))
    {
        return false;
    }

    BulletComponent->SetStaticMesh(CombatVisuals.BulletMesh);
    BulletComponent->SetCastShadow(CombatVisuals.bBulletVisualCastsShadow);
    if (IsValid(CombatVisuals.BulletMaterialOverride))
    {
        BulletComponent->SetMaterial(0, CombatVisuals.BulletMaterialOverride);
    }
    else
    {
        BulletComponent->SetMaterial(0, nullptr);
    }

    const FVector TravelDirection = (VisualEnd - VisualStart).GetSafeNormal();
    const FRotator TravelRotation = TravelDirection.Rotation() + CombatVisuals.BulletMeshRotationOffset;
    const float TravelDistance = FVector::Distance(VisualStart, VisualEnd);
    const float UnclampedDuration = TravelDistance / FMath::Max(100.0f, CombatVisuals.BulletVisualSpeed);
    const float MinDuration = FMath::Max(0.001f, CombatVisuals.MinimumBulletVisualSeconds);
    const float MaxDuration = FMath::Max(MinDuration, CombatVisuals.MaximumBulletVisualSeconds);

    FRenegadeBulletVisualRuntimeState& State = BulletVisualStates[VisualIndex];
    State.StartLocation = VisualStart;
    State.EndLocation = VisualEnd;
    State.TravelRotation = TravelRotation;
    State.ElapsedSeconds = 0.0f;
    State.DurationSeconds = FMath::Clamp(UnclampedDuration, MinDuration, MaxDuration);
    State.bActive = true;
    State.bSpawnBloodOnArrival = BloodHitToDelay != nullptr;
    State.PendingBloodHit = BloodHitToDelay ? *BloodHitToDelay : FHitResult();

    BulletComponent->SetWorldLocationAndRotation(VisualStart, TravelRotation, false, nullptr, ETeleportType::TeleportPhysics);
    BulletComponent->SetWorldScale3D(CombatVisuals.BulletMeshScale);
    BulletComponent->SetHiddenInGame(false, true);
    BulletComponent->SetVisibility(true, true);

    SetComponentTickEnabled(true);
    return true;
}

void URenegadeSoldierCombatComponent::UpdateBulletMeshVisuals(float DeltaTime)
{
    for (int32 Index = 0; Index < BulletVisualStates.Num(); ++Index)
    {
        FRenegadeBulletVisualRuntimeState& State = BulletVisualStates[Index];
        if (!State.bActive)
        {
            continue;
        }

        if (!BulletVisualComponents.IsValidIndex(Index) || !IsValid(BulletVisualComponents[Index]))
        {
            State = FRenegadeBulletVisualRuntimeState();
            continue;
        }

        State.ElapsedSeconds += FMath::Max(0.0f, DeltaTime);
        const float Alpha = State.DurationSeconds > KINDA_SMALL_NUMBER
            ? FMath::Clamp(State.ElapsedSeconds / State.DurationSeconds, 0.0f, 1.0f)
            : 1.0f;

        BulletVisualComponents[Index]->SetWorldLocationAndRotation(
            FMath::Lerp(State.StartLocation, State.EndLocation, Alpha),
            State.TravelRotation,
            false,
            nullptr,
            ETeleportType::TeleportPhysics);

        if (Alpha >= 1.0f)
        {
            DeactivateBulletVisual(Index, true);
        }
    }
}

bool URenegadeSoldierCombatComponent::HasActiveBulletMeshVisuals() const
{
    for (const FRenegadeBulletVisualRuntimeState& State : BulletVisualStates)
    {
        if (State.bActive)
        {
            return true;
        }
    }
    return false;
}

void URenegadeSoldierCombatComponent::DeactivateBulletVisual(int32 VisualIndex, bool bProcessPendingBlood)
{
    if (!BulletVisualStates.IsValidIndex(VisualIndex))
    {
        return;
    }

    const FRenegadeBulletVisualRuntimeState PreviousState = BulletVisualStates[VisualIndex];
    BulletVisualStates[VisualIndex] = FRenegadeBulletVisualRuntimeState();

    if (BulletVisualComponents.IsValidIndex(VisualIndex) && IsValid(BulletVisualComponents[VisualIndex]))
    {
        BulletVisualComponents[VisualIndex]->SetVisibility(false, true);
        BulletVisualComponents[VisualIndex]->SetHiddenInGame(true, true);
    }

    if (bProcessPendingBlood && PreviousState.bSpawnBloodOnArrival)
    {
        SpawnGroundBloodSplatter(PreviousState.PendingBloodHit);
    }
}

void URenegadeSoldierCombatComponent::StopAllBulletMeshVisuals()
{
    for (int32 Index = 0; Index < BulletVisualStates.Num(); ++Index)
    {
        DeactivateBulletVisual(Index, false);
    }
}


USceneComponent* URenegadeSoldierCombatComponent::ResolveGrenadeLauncherMuzzleComponent() const
{
    if (IsValid(RuntimeGrenadeLauncherMuzzleComponent) && RuntimeGrenadeLauncherMuzzleComponent->GetOwner() == GetOwner())
    {
        return RuntimeGrenadeLauncherMuzzleComponent;
    }

    if (!GetOwner())
    {
        return nullptr;
    }

    if (USceneComponent* ExactComponent = Cast<USceneComponent>(GrenadeLauncherMuzzleComponent.GetComponent(GetOwner())))
    {
        return ExactComponent;
    }

    if (!GrenadeLauncherMuzzleComponentTag.IsNone())
    {
        TArray<USceneComponent*> SceneComponents;
        GetOwner()->GetComponents<USceneComponent>(SceneComponents);
        for (USceneComponent* SceneComponent : SceneComponents)
        {
            if (IsValid(SceneComponent) && SceneComponent->ComponentHasTag(GrenadeLauncherMuzzleComponentTag))
            {
                return SceneComponent;
            }
        }
    }

    return nullptr;
}

FVector URenegadeSoldierCombatComponent::ResolveGrenadeLauncherMuzzleLocation(const FVector& FallbackLocation) const
{
    if (USceneComponent* MuzzleComponent = ResolveGrenadeLauncherMuzzleComponent())
    {
        return MuzzleComponent->GetComponentTransform().TransformPosition(GrenadeLauncherMuzzleRelativeOffset);
    }
    return FallbackLocation;
}

AActor* URenegadeSoldierCombatComponent::SpawnProjectileCosmeticActor(
    TSubclassOf<AActor> ActorClass,
    const FVector& Location,
    const FRotator& Rotation,
    float LifeSeconds,
    bool bDisableCollision) const
{
    if (!ActorClass || !ShouldRunCosmeticVisuals() || !GetWorld())
    {
        return nullptr;
    }

    FActorSpawnParameters SpawnParameters;
    SpawnParameters.Owner = GetOwner();
    SpawnParameters.Instigator = GetOwner() ? GetOwner()->GetInstigator() : nullptr;
    SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

    AActor* EffectActor = GetWorld()->SpawnActor<AActor>(ActorClass, Location, Rotation, SpawnParameters);
    if (IsValid(EffectActor))
    {
        // The launch multicast already spawns one cosmetic actor per view. Never replicate these helper actors.
        EffectActor->SetReplicates(false);
        if (bDisableCollision)
        {
            EffectActor->SetActorEnableCollision(false);
        }
        if (LifeSeconds > 0.0f)
        {
            EffectActor->SetLifeSpan(LifeSeconds);
        }
    }
    return EffectActor;
}

int32 URenegadeSoldierCombatComponent::AcquireRocketVisualSlot(const FRenegadeWeaponSettings& Weapon)
{
    if (!ShouldRunCosmeticVisuals() || !GetOwner() || !GetWorld())
    {
        return INDEX_NONE;
    }

    const int32 PoolLimit = FMath::Clamp(Weapon.RocketLauncher.RocketVisualPoolSize, 1, 12);
    int32 SelectedIndex = INDEX_NONE;
    for (int32 Index = 0; Index < RocketVisualStates.Num(); ++Index)
    {
        if (!RocketVisualStates[Index].bActive)
        {
            SelectedIndex = Index;
            break;
        }
    }

    if (SelectedIndex == INDEX_NONE && RocketVisualStates.Num() < PoolLimit)
    {
        SelectedIndex = RocketVisualStates.AddDefaulted();
        RocketVisualComponents.SetNum(RocketVisualStates.Num());
    }

    if (SelectedIndex == INDEX_NONE)
    {
        float BestProgress = -1.0f;
        for (int32 Index = 0; Index < RocketVisualStates.Num(); ++Index)
        {
            const FRenegadeRocketVisualRuntimeState& State = RocketVisualStates[Index];
            const float Progress = State.DurationSeconds > KINDA_SMALL_NUMBER
                ? State.ElapsedSeconds / State.DurationSeconds
                : 1.0f;
            if (Progress > BestProgress)
            {
                BestProgress = Progress;
                SelectedIndex = Index;
            }
        }

        if (SelectedIndex != INDEX_NONE)
        {
            DeactivateRocketLauncherVisual(SelectedIndex, false);
        }
    }

    if (SelectedIndex == INDEX_NONE)
    {
        return INDEX_NONE;
    }

    if (RocketVisualComponents.Num() < RocketVisualStates.Num())
    {
        RocketVisualComponents.SetNum(RocketVisualStates.Num());
    }

    if (IsValid(Weapon.RocketLauncher.RocketMesh)
        && (!RocketVisualComponents.IsValidIndex(SelectedIndex) || !IsValid(RocketVisualComponents[SelectedIndex])))
    {
        UStaticMeshComponent* NewComponent = NewObject<UStaticMeshComponent>(GetOwner(), NAME_None, RF_Transient);
        if (IsValid(NewComponent))
        {
            GetOwner()->AddInstanceComponent(NewComponent);
            NewComponent->SetMobility(EComponentMobility::Movable);
            NewComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
            NewComponent->SetGenerateOverlapEvents(false);
            NewComponent->SetCanEverAffectNavigation(false);
            NewComponent->SetVisibility(false, true);
            NewComponent->SetHiddenInGame(true, true);
            NewComponent->RegisterComponent();
            RocketVisualComponents[SelectedIndex] = NewComponent;
        }
    }

    return SelectedIndex;
}

void URenegadeSoldierCombatComponent::SpawnRocketLauncherVisual(
    const FRenegadeWeaponSettings& Weapon,
    const FVector& LaunchLocation,
    const FVector& ImpactLocation,
    float FlightSeconds)
{
    if (!ShouldRunCosmeticVisuals())
    {
        return;
    }

    FVector Direction = ImpactLocation - LaunchLocation;
    const float RawDistance = Direction.Size();
    if (RawDistance <= KINDA_SMALL_NUMBER)
    {
        return;
    }
    Direction /= RawDistance;

    const FVector VisualStart = LaunchLocation
        + Direction * FMath::Max(0.0f, Weapon.RocketLauncher.RocketVisualMuzzleForwardOffset);
    FVector VisualEnd = ImpactLocation
        - Direction * FMath::Min(
            FMath::Max(0.0f, Weapon.RocketLauncher.RocketVisualImpactStopShortDistance),
            RawDistance * 0.25f);
    if (FVector::DistSquared(VisualStart, VisualEnd) <= 1.0f)
    {
        VisualEnd = ImpactLocation;
    }

    const FRotator TravelRotation = Direction.Rotation() + Weapon.RocketLauncher.RocketMeshRotationOffset;
    const int32 VisualIndex = AcquireRocketVisualSlot(Weapon);
    if (!RocketVisualStates.IsValidIndex(VisualIndex))
    {
        return;
    }

    FRenegadeRocketVisualRuntimeState& State = RocketVisualStates[VisualIndex];
    State.StartLocation = VisualStart;
    State.VisualEndLocation = VisualEnd;
    State.ImpactLocation = ImpactLocation;
    State.TravelRotation = TravelRotation;
    State.ElapsedSeconds = 0.0f;
    State.DurationSeconds = FMath::Max(0.01f, FlightSeconds);
    State.bActive = true;
    State.Weapon = Weapon;
    State.FlightEffectActor = SpawnProjectileCosmeticActor(
        Weapon.RocketLauncher.RocketFlightEffectActorClass,
        VisualStart,
        TravelRotation,
        0.0f,
        true);

    if (RocketVisualComponents.IsValidIndex(VisualIndex) && IsValid(RocketVisualComponents[VisualIndex]))
    {
        UStaticMeshComponent* RocketComponent = RocketVisualComponents[VisualIndex];
        RocketComponent->SetStaticMesh(Weapon.RocketLauncher.RocketMesh);
        RocketComponent->SetCastShadow(Weapon.RocketLauncher.bRocketVisualCastsShadow);
        if (IsValid(Weapon.RocketLauncher.RocketMaterialOverride))
        {
            RocketComponent->SetMaterial(0, Weapon.RocketLauncher.RocketMaterialOverride);
        }
        else
        {
            RocketComponent->SetMaterial(0, nullptr);
        }
        RocketComponent->SetWorldLocationAndRotation(VisualStart, TravelRotation, false, nullptr, ETeleportType::TeleportPhysics);
        RocketComponent->SetWorldScale3D(Weapon.RocketLauncher.RocketMeshScale);
        RocketComponent->SetHiddenInGame(false, true);
        RocketComponent->SetVisibility(IsValid(Weapon.RocketLauncher.RocketMesh), true);
    }

    SetComponentTickEnabled(true);
}

void URenegadeSoldierCombatComponent::UpdateRocketLauncherVisuals(float DeltaTime)
{
    for (int32 Index = 0; Index < RocketVisualStates.Num(); ++Index)
    {
        FRenegadeRocketVisualRuntimeState& State = RocketVisualStates[Index];
        if (!State.bActive)
        {
            continue;
        }

        State.ElapsedSeconds += FMath::Max(0.0f, DeltaTime);
        const float Alpha = State.DurationSeconds > KINDA_SMALL_NUMBER
            ? FMath::Clamp(State.ElapsedSeconds / State.DurationSeconds, 0.0f, 1.0f)
            : 1.0f;
        const FVector NewLocation = FMath::Lerp(State.StartLocation, State.VisualEndLocation, Alpha);

        if (RocketVisualComponents.IsValidIndex(Index) && IsValid(RocketVisualComponents[Index]))
        {
            RocketVisualComponents[Index]->SetWorldLocationAndRotation(
                NewLocation,
                State.TravelRotation,
                false,
                nullptr,
                ETeleportType::TeleportPhysics);
        }
        if (AActor* FlightEffectActor = State.FlightEffectActor.Get())
        {
            FlightEffectActor->SetActorLocationAndRotation(
                NewLocation,
                State.TravelRotation,
                false,
                nullptr,
                ETeleportType::TeleportPhysics);
        }

        if (Alpha >= 1.0f)
        {
            DeactivateRocketLauncherVisual(Index, true);
        }
    }
}

void URenegadeSoldierCombatComponent::DeactivateRocketLauncherVisual(int32 VisualIndex, bool bSpawnImpactPresentation)
{
    if (!RocketVisualStates.IsValidIndex(VisualIndex))
    {
        return;
    }

    const FRenegadeRocketVisualRuntimeState PreviousState = RocketVisualStates[VisualIndex];
    RocketVisualStates[VisualIndex] = FRenegadeRocketVisualRuntimeState();

    if (RocketVisualComponents.IsValidIndex(VisualIndex) && IsValid(RocketVisualComponents[VisualIndex]))
    {
        RocketVisualComponents[VisualIndex]->SetVisibility(false, true);
        RocketVisualComponents[VisualIndex]->SetHiddenInGame(true, true);
    }
    if (AActor* FlightEffectActor = PreviousState.FlightEffectActor.Get())
    {
        FlightEffectActor->Destroy();
    }

    if (!bSpawnImpactPresentation || !PreviousState.bActive)
    {
        return;
    }

    const FRenegadeRocketLauncherSettings& Rocket = PreviousState.Weapon.RocketLauncher;
    SpawnProjectileCosmeticActor(
        Rocket.RocketImpactEffectActorClass,
        PreviousState.ImpactLocation,
        PreviousState.TravelRotation,
        FMath::Max(0.0f, Rocket.RocketImpactEffectLifeSeconds),
        true);

    if (IsValid(Rocket.RocketImpactSound))
    {
        UGameplayStatics::PlaySoundAtLocation(
            this,
            Rocket.RocketImpactSound,
            PreviousState.ImpactLocation,
            FMath::Max(0.0f, Rocket.RocketImpactVolumeMultiplier));
    }
    OnRocketImpacted.Broadcast(PreviousState.ImpactLocation);
}

void URenegadeSoldierCombatComponent::StopAllRocketLauncherVisuals()
{
    for (int32 Index = 0; Index < RocketVisualStates.Num(); ++Index)
    {
        DeactivateRocketLauncherVisual(Index, false);
    }
}

bool URenegadeSoldierCombatComponent::HasActiveRocketLauncherVisuals() const
{
    for (const FRenegadeRocketVisualRuntimeState& State : RocketVisualStates)
    {
        if (State.bActive)
        {
            return true;
        }
    }
    return false;
}


int32 URenegadeSoldierCombatComponent::AcquireGrenadeVisualSlot(const FRenegadeWeaponSettings& Weapon)
{
    if (!ShouldRunCosmeticVisuals() || !GetOwner() || !GetWorld())
    {
        return INDEX_NONE;
    }

    const int32 PoolLimit = FMath::Clamp(Weapon.GrenadeLauncher.GrenadeVisualPoolSize, 1, 24);
    int32 SelectedIndex = INDEX_NONE;
    for (int32 Index = 0; Index < GrenadeVisualStates.Num(); ++Index)
    {
        if (!GrenadeVisualStates[Index].bActive)
        {
            SelectedIndex = Index;
            break;
        }
    }

    if (SelectedIndex == INDEX_NONE && GrenadeVisualStates.Num() < PoolLimit)
    {
        SelectedIndex = GrenadeVisualStates.AddDefaulted();
        GrenadeVisualComponents.SetNum(GrenadeVisualStates.Num());
    }

    if (SelectedIndex == INDEX_NONE)
    {
        float LongestElapsed = -1.0f;
        for (int32 Index = 0; Index < GrenadeVisualStates.Num(); ++Index)
        {
            if (GrenadeVisualStates[Index].ElapsedSeconds > LongestElapsed)
            {
                LongestElapsed = GrenadeVisualStates[Index].ElapsedSeconds;
                SelectedIndex = Index;
            }
        }
        if (SelectedIndex != INDEX_NONE)
        {
            DeactivateGrenadeLauncherVisual(SelectedIndex);
        }
    }

    if (SelectedIndex == INDEX_NONE)
    {
        return INDEX_NONE;
    }

    if (GrenadeVisualComponents.Num() < GrenadeVisualStates.Num())
    {
        GrenadeVisualComponents.SetNum(GrenadeVisualStates.Num());
    }

    if (IsValid(Weapon.GrenadeLauncher.GrenadeMesh)
        && (!GrenadeVisualComponents.IsValidIndex(SelectedIndex) || !IsValid(GrenadeVisualComponents[SelectedIndex])))
    {
        UStaticMeshComponent* NewComponent = NewObject<UStaticMeshComponent>(GetOwner(), NAME_None, RF_Transient);
        if (IsValid(NewComponent))
        {
            GetOwner()->AddInstanceComponent(NewComponent);
            NewComponent->SetMobility(EComponentMobility::Movable);
            NewComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
            NewComponent->SetGenerateOverlapEvents(false);
            NewComponent->SetCanEverAffectNavigation(false);
            NewComponent->SetVisibility(false, true);
            NewComponent->SetHiddenInGame(true, true);
            NewComponent->RegisterComponent();
            GrenadeVisualComponents[SelectedIndex] = NewComponent;
        }
    }

    return SelectedIndex;
}

int32 URenegadeSoldierCombatComponent::FindGrenadeVisualById(int32 GrenadeId) const
{
    for (int32 Index = 0; Index < GrenadeVisualStates.Num(); ++Index)
    {
        if (GrenadeVisualStates[Index].bActive && GrenadeVisualStates[Index].GrenadeId == GrenadeId)
        {
            return Index;
        }
    }
    return INDEX_NONE;
}

void URenegadeSoldierCombatComponent::SpawnGrenadeLauncherVisual(
    int32 GrenadeId,
    const FRenegadeWeaponSettings& Weapon,
    const FVector& LaunchLocation,
    const FVector& InitialVelocity)
{
    if (!ShouldRunCosmeticVisuals())
    {
        return;
    }

    const int32 VisualIndex = AcquireGrenadeVisualSlot(Weapon);
    if (!GrenadeVisualStates.IsValidIndex(VisualIndex))
    {
        return;
    }

    FRenegadeGrenadeVisualRuntimeState& State = GrenadeVisualStates[VisualIndex];
    State.GrenadeId = GrenadeId;
    State.Position = LaunchLocation;
    State.Velocity = InitialVelocity;
    State.ElapsedSeconds = 0.0f;
    State.bActive = true;
    State.bSettled = false;
    State.Weapon = Weapon;

    const FRotator TravelRotation = InitialVelocity.IsNearlyZero()
        ? (GetOwner() ? GetOwner()->GetActorRotation() : FRotator::ZeroRotator)
        : InitialVelocity.Rotation();
    State.FlightEffectActor = SpawnProjectileCosmeticActor(
        Weapon.GrenadeLauncher.GrenadeFlightEffectActorClass,
        LaunchLocation,
        TravelRotation,
        0.0f,
        true);

    if (GrenadeVisualComponents.IsValidIndex(VisualIndex) && IsValid(GrenadeVisualComponents[VisualIndex]))
    {
        UStaticMeshComponent* GrenadeComponent = GrenadeVisualComponents[VisualIndex];
        GrenadeComponent->SetStaticMesh(Weapon.GrenadeLauncher.GrenadeMesh);
        GrenadeComponent->SetCastShadow(Weapon.GrenadeLauncher.bGrenadeVisualCastsShadow);
        if (IsValid(Weapon.GrenadeLauncher.GrenadeMaterialOverride))
        {
            GrenadeComponent->SetMaterial(0, Weapon.GrenadeLauncher.GrenadeMaterialOverride);
        }
        else
        {
            GrenadeComponent->SetMaterial(0, nullptr);
        }
        GrenadeComponent->SetWorldLocationAndRotation(
            LaunchLocation,
            TravelRotation + Weapon.GrenadeLauncher.GrenadeMeshRotationOffset,
            false, nullptr, ETeleportType::TeleportPhysics);
        GrenadeComponent->SetWorldScale3D(Weapon.GrenadeLauncher.GrenadeMeshScale);
        GrenadeComponent->SetHiddenInGame(false, true);
        GrenadeComponent->SetVisibility(IsValid(Weapon.GrenadeLauncher.GrenadeMesh), true);
    }

    SetComponentTickEnabled(true);
}

void URenegadeSoldierCombatComponent::UpdateGrenadeLauncherVisuals(float DeltaTime)
{
    if (!GetWorld())
    {
        return;
    }

    for (int32 Index = 0; Index < GrenadeVisualStates.Num(); ++Index)
    {
        FRenegadeGrenadeVisualRuntimeState& State = GrenadeVisualStates[Index];
        if (!State.bActive)
        {
            continue;
        }

        const float StepSeconds = FMath::Max(0.0f, DeltaTime);
        if (!State.bSettled)
        {
            const FVector Gravity(0.0f, 0.0f,
                GetWorld()->GetGravityZ() * FMath::Max(0.0f, State.Weapon.GrenadeLauncher.GravityScale));
            State.Position += State.Velocity * StepSeconds + 0.5f * Gravity * StepSeconds * StepSeconds;
            State.Velocity += Gravity * StepSeconds;
        }
        State.ElapsedSeconds += StepSeconds;

        FRotator MeshRotation = State.Weapon.GrenadeLauncher.bOrientGrenadeMeshToVelocity && !State.Velocity.IsNearlyZero()
            ? State.Velocity.Rotation()
            : (GetOwner() ? GetOwner()->GetActorRotation() : FRotator::ZeroRotator);
        MeshRotation += State.Weapon.GrenadeLauncher.GrenadeMeshRotationOffset;
        MeshRotation.Roll += State.Weapon.GrenadeLauncher.GrenadeMeshSpinDegreesPerSecond.X * State.ElapsedSeconds;
        MeshRotation.Pitch += State.Weapon.GrenadeLauncher.GrenadeMeshSpinDegreesPerSecond.Y * State.ElapsedSeconds;
        MeshRotation.Yaw += State.Weapon.GrenadeLauncher.GrenadeMeshSpinDegreesPerSecond.Z * State.ElapsedSeconds;

        if (GrenadeVisualComponents.IsValidIndex(Index) && IsValid(GrenadeVisualComponents[Index]))
        {
            GrenadeVisualComponents[Index]->SetWorldLocationAndRotation(
                State.Position, MeshRotation, false, nullptr, ETeleportType::TeleportPhysics);
        }
        if (AActor* FlightEffectActor = State.FlightEffectActor.Get())
        {
            const FRotator EffectRotation = State.Velocity.IsNearlyZero() ? MeshRotation : State.Velocity.Rotation();
            FlightEffectActor->SetActorLocationAndRotation(
                State.Position, EffectRotation, false, nullptr, ETeleportType::TeleportPhysics);
        }

        // Authoritative explosion RPC normally arrives first. This only prevents orphaned cosmetics after packet loss/travel.
        const float SafetyLifetime = FMath::Max(0.05f, State.Weapon.GrenadeLauncher.MaximumFlightSeconds) + 1.0f;
        if (State.ElapsedSeconds > SafetyLifetime)
        {
            DeactivateGrenadeLauncherVisual(Index);
        }
    }
}

void URenegadeSoldierCombatComponent::CorrectGrenadeVisualBounce(
    int32 GrenadeId,
    const FVector& BounceLocation,
    const FVector& ImpactNormal,
    const FVector& NewVelocity)
{
    const int32 VisualIndex = FindGrenadeVisualById(GrenadeId);
    if (!GrenadeVisualStates.IsValidIndex(VisualIndex))
    {
        return;
    }

    FRenegadeGrenadeVisualRuntimeState& State = GrenadeVisualStates[VisualIndex];
    State.Position = BounceLocation;
    State.Velocity = NewVelocity;
    State.bSettled = NewVelocity.IsNearlyZero();

    FRotator MeshRotation = !NewVelocity.IsNearlyZero() ? NewVelocity.Rotation() : ImpactNormal.Rotation();
    MeshRotation += State.Weapon.GrenadeLauncher.GrenadeMeshRotationOffset;
    if (GrenadeVisualComponents.IsValidIndex(VisualIndex) && IsValid(GrenadeVisualComponents[VisualIndex]))
    {
        GrenadeVisualComponents[VisualIndex]->SetWorldLocationAndRotation(
            BounceLocation, MeshRotation, false, nullptr, ETeleportType::TeleportPhysics);
    }
}

void URenegadeSoldierCombatComponent::DeactivateGrenadeLauncherVisual(int32 VisualIndex, bool bDestroyFlightEffect)
{
    if (!GrenadeVisualStates.IsValidIndex(VisualIndex))
    {
        return;
    }

    const FRenegadeGrenadeVisualRuntimeState PreviousState = GrenadeVisualStates[VisualIndex];
    GrenadeVisualStates[VisualIndex] = FRenegadeGrenadeVisualRuntimeState();

    if (GrenadeVisualComponents.IsValidIndex(VisualIndex) && IsValid(GrenadeVisualComponents[VisualIndex]))
    {
        GrenadeVisualComponents[VisualIndex]->SetVisibility(false, true);
        GrenadeVisualComponents[VisualIndex]->SetHiddenInGame(true, true);
    }
    if (bDestroyFlightEffect)
    {
        if (AActor* FlightEffectActor = PreviousState.FlightEffectActor.Get())
        {
            FlightEffectActor->Destroy();
        }
    }
}

void URenegadeSoldierCombatComponent::StopAllGrenadeLauncherVisuals()
{
    for (int32 Index = 0; Index < GrenadeVisualStates.Num(); ++Index)
    {
        DeactivateGrenadeLauncherVisual(Index);
    }
}

bool URenegadeSoldierCombatComponent::HasActiveGrenadeLauncherVisuals() const
{
    for (const FRenegadeGrenadeVisualRuntimeState& State : GrenadeVisualStates)
    {
        if (State.bActive)
        {
            return true;
        }
    }
    return false;
}

void URenegadeSoldierCombatComponent::PlayGrenadeImpactPresentation(
    const FRenegadeWeaponSettings& Weapon,
    const FVector& ImpactLocation,
    const FVector& ImpactNormal)
{
    const FRotator ImpactRotation = ImpactNormal.IsNearlyZero() ? FRotator::ZeroRotator : ImpactNormal.Rotation();
    SpawnProjectileCosmeticActor(
        Weapon.GrenadeLauncher.GrenadeImpactEffectActorClass,
        ImpactLocation,
        ImpactRotation,
        FMath::Max(0.0f, Weapon.GrenadeLauncher.GrenadeImpactEffectLifeSeconds),
        true);

    if (IsValid(Weapon.GrenadeLauncher.GrenadeImpactSound))
    {
        UGameplayStatics::PlaySoundAtLocation(
            this, Weapon.GrenadeLauncher.GrenadeImpactSound, ImpactLocation,
            FMath::Max(0.0f, Weapon.GrenadeLauncher.GrenadeImpactVolumeMultiplier));
    }
}

void URenegadeSoldierCombatComponent::PlayGrenadeBouncePresentation(
    const FRenegadeWeaponSettings& Weapon,
    const FVector& BounceLocation,
    const FVector& ImpactNormal)
{
    SpawnProjectileCosmeticActor(
        Weapon.GrenadeLauncher.GrenadeBounceEffectActorClass,
        BounceLocation,
        ImpactNormal.IsNearlyZero() ? FRotator::ZeroRotator : ImpactNormal.Rotation(),
        FMath::Max(0.0f, Weapon.GrenadeLauncher.GrenadeBounceEffectLifeSeconds),
        true);

    if (IsValid(Weapon.GrenadeLauncher.GrenadeBounceSound))
    {
        UGameplayStatics::PlaySoundAtLocation(
            this, Weapon.GrenadeLauncher.GrenadeBounceSound, BounceLocation,
            FMath::Max(0.0f, Weapon.GrenadeLauncher.GrenadeBounceVolumeMultiplier));
    }
}

bool URenegadeSoldierCombatComponent::SpawnGroundBloodSplatter(const FHitResult& BulletHit)
{
    if (!CombatVisuals.bEnableGroundBloodSplatter || !ShouldRunCosmeticVisuals() || !GetWorld())
    {
        return false;
    }

    TArray<UMaterialInterface*> ValidMaterials;
    for (const TObjectPtr<UMaterialInterface>& MaterialPtr : CombatVisuals.GroundBloodDecalMaterials)
    {
        UMaterialInterface* Material = MaterialPtr.Get();
        if (IsValid(Material))
        {
            ValidMaterials.Add(Material);
        }
    }

    const bool bHasDecalMaterial = !ValidMaterials.IsEmpty();
    const bool bHasActorEffect = CombatVisuals.GroundBloodEffectActorClass != nullptr;
    if (!bHasDecalMaterial && !bHasActorEffect)
    {
        return false;
    }

    if (FMath::FRand() > FMath::Clamp(CombatVisuals.GroundBloodSpawnChance, 0.0f, 1.0f))
    {
        return false;
    }

    const float Now = GetWorld()->GetTimeSeconds();
    if (Now - LastGroundBloodTime < FMath::Max(0.0f, CombatVisuals.MinimumSecondsBetweenGroundBlood))
    {
        return false;
    }

    const FVector SourceLocation = !BulletHit.ImpactPoint.IsNearlyZero() ? BulletHit.ImpactPoint : BulletHit.Location;
    const FVector TraceStart = SourceLocation + FVector::UpVector * FMath::Max(1.0f, CombatVisuals.GroundBloodTraceUpDistance);
    const FVector TraceEnd = SourceLocation - FVector::UpVector * FMath::Max(1.0f, CombatVisuals.GroundBloodTraceDownDistance);

    FCollisionQueryParams QueryParams(SCENE_QUERY_STAT(RenegadeGroundBloodTrace), false, GetOwner());
    QueryParams.AddIgnoredActor(GetOwner());
    if (AActor* HitActor = BulletHit.GetActor())
    {
        QueryParams.AddIgnoredActor(HitActor);
    }

    FHitResult GroundHit;
    if (!GetWorld()->LineTraceSingleByChannel(GroundHit, TraceStart, TraceEnd, CombatVisuals.GroundBloodTraceChannel, QueryParams))
    {
        return false;
    }

    const FVector SpawnLocation = GroundHit.ImpactPoint + GroundHit.ImpactNormal * FMath::Max(0.0f, CombatVisuals.GroundBloodSurfaceOffset);
    FRotator SpawnRotation = GroundHit.ImpactNormal.Rotation();
    SpawnRotation.Roll += FMath::FRandRange(0.0f, 360.0f);

    UDecalComponent* SpawnedDecal = nullptr;
    if (bHasDecalMaterial)
    {
        UMaterialInterface* SelectedMaterial = ValidMaterials[FMath::RandRange(0, ValidMaterials.Num() - 1)];
        const float MinSize = FMath::Max(1.0f, FMath::Min(CombatVisuals.GroundBloodSizeRange.X, CombatVisuals.GroundBloodSizeRange.Y));
        const float MaxSize = FMath::Max(MinSize, FMath::Max(CombatVisuals.GroundBloodSizeRange.X, CombatVisuals.GroundBloodSizeRange.Y));
        const float DecalSize = FMath::FRandRange(MinSize, MaxSize);

        SpawnedDecal = UGameplayStatics::SpawnDecalAtLocation(
            this,
            SelectedMaterial,
            FVector(FMath::Max(1.0f, CombatVisuals.GroundBloodDecalDepth), DecalSize, DecalSize),
            SpawnLocation,
            SpawnRotation,
            FMath::Max(0.0f, CombatVisuals.GroundBloodLifeSeconds));

        if (IsValid(SpawnedDecal) && CombatVisuals.GroundBloodLifeSeconds > 0.0f && CombatVisuals.GroundBloodFadeSeconds > 0.0f)
        {
            const float FadeDuration = FMath::Min(CombatVisuals.GroundBloodFadeSeconds, CombatVisuals.GroundBloodLifeSeconds);
            SpawnedDecal->SetFadeOut(FMath::Max(0.0f, CombatVisuals.GroundBloodLifeSeconds - FadeDuration), FadeDuration, true);
        }
    }

    if (bHasActorEffect)
    {
        FActorSpawnParameters SpawnParameters;
        SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
        SpawnParameters.ObjectFlags |= RF_Transient;
        AActor* EffectActor = GetWorld()->SpawnActor<AActor>(CombatVisuals.GroundBloodEffectActorClass, SpawnLocation, SpawnRotation, SpawnParameters);
        if (IsValid(EffectActor))
        {
            // The shot multicast already creates one local cosmetic on every view; never replicate this helper actor.
            EffectActor->SetReplicates(false);
            if (CombatVisuals.GroundBloodLifeSeconds > 0.0f)
            {
                EffectActor->SetLifeSpan(CombatVisuals.GroundBloodLifeSeconds);
            }
        }
    }

    LastGroundBloodTime = Now;
    OnGroundBloodSpawned.Broadcast(SpawnedDecal, BulletHit, GroundHit);
    return true;
}

void URenegadeSoldierCombatComponent::UpdateComponentTickState()
{
    const bool bNeedsCombatFacing = HasAuthority() && !bIsDead && bLockCombatRotationToCurrentTarget && IsValid(CurrentTarget);
    const bool bNeedsBuiltInPlayerInput = bPlayerControlledCombat && PlayerInput.bEnableBuiltInInput;
    const bool bNeedsPlayerLockOn = bPlayerControlledCombat && IsLocallyControlledPlayer()
        && (bPlayerLockOnInputHeld || IsValid(PlayerLockOnTarget));
    const bool bNeedsPendingRocketImpact = HasAuthority() && PendingRocketImpacts.Num() > 0;
    const bool bNeedsGrenadeSimulation = HasAuthority() && ActiveGrenadeProjectiles.Num() > 0;
    SetComponentTickEnabled(
        bNeedsCombatFacing
        || bNeedsBuiltInPlayerInput
        || bNeedsPlayerLockOn
        || HasPlayerAimPresentationWork()
        || HasActiveBulletMeshVisuals()
        || HasActiveRocketLauncherVisuals()
        || HasActiveGrenadeLauncherVisuals()
        || bNeedsPendingRocketImpact
        || bNeedsGrenadeSimulation);
}

void URenegadeSoldierCombatComponent::StartReload()
{
    if (!HasAuthority() || bReloading || bIsDead || !GetWorld())
    {
        return;
    }

    const FRenegadeWeaponSettings Weapon = GetActiveWeaponSettings();
    if (!WeaponUsesMagazine(Weapon))
    {
        return;
    }

    const int32 ExistingAmmo = bPlayerControlledCombat
        ? GetPlayerWeaponAmmo(ActivePlayerWeapon)
        : CurrentMagazineAmmo;
    if (ExistingAmmo >= GetEffectiveMagazineSize(Weapon))
    {
        return;
    }

    bReloading = true;
    MulticastReloadStarted();
    GetWorld()->GetTimerManager().SetTimer(ReloadTimer, this, &URenegadeSoldierCombatComponent::FinishReload, GetEffectiveReloadSeconds(Weapon), false);
}

void URenegadeSoldierCombatComponent::FinishReload()
{
    if (!HasAuthority() || bIsDead)
    {
        return;
    }

    const FRenegadeWeaponSettings Weapon = GetActiveWeaponSettings();
    if (bPlayerControlledCombat)
    {
        SetPlayerAmmo(ActivePlayerWeapon, GetEffectiveMagazineSize(Weapon));
    }
    else
    {
        CurrentMagazineAmmo = GetEffectiveMagazineSize(Weapon);
    }

    bReloading = false;
    MulticastReloadFinished();

    if (!bPlayerControlledCombat && CurrentTarget)
    {
        ScheduleNextShot(0.05f);
    }
}

float URenegadeSoldierCombatComponent::CalculateDamageForHit(const FRenegadeWeaponSettings& Weapon, const FHitResult& Hit, float Distance) const
{
    float Damage = FMath::Max(0.0f, Weapon.DamagePerShot);
    const float MaxRange = FMath::Max(1.0f, Weapon.MaximumRange);
    const float RangeFraction = FMath::Clamp(Distance / MaxRange, 0.0f, 1.0f);
    const float FalloffStart = FMath::Clamp(Weapon.DamageFalloffStartFraction, 0.0f, 1.0f);

    if (RangeFraction > FalloffStart)
    {
        const float Alpha = (RangeFraction - FalloffStart) / FMath::Max(KINDA_SMALL_NUMBER, 1.0f - FalloffStart);
        Damage *= FMath::Lerp(1.0f, FMath::Clamp(Weapon.MinimumLongRangeDamageMultiplier, 0.0f, 1.0f), Alpha);
    }

    if (Weapon.CriticalBones.Contains(Hit.BoneName))
    {
        Damage *= FMath::Max(1.0f, Weapon.CriticalHitMultiplier);
    }

    return Damage;
}

bool URenegadeSoldierCombatComponent::CanTakeCombatMovementControl() const
{
    if (bPlayerControlledCombat || !CombatMovement.bEnableCombatMovement || !OwnerCharacter || !GetOwningAIController())
    {
        return false;
    }

    AActor* Owner = GetOwner();
    if (Owner && Owner->GetClass()->ImplementsInterface(URenegadeCombatMovementBridge::StaticClass()))
    {
        return IRenegadeCombatMovementBridge::Execute_CanCombatTakeMovementControl(Owner);
    }

    return true;
}

void URenegadeSoldierCombatComponent::TakeCombatMovementControl(AActor* AgainstTarget)
{
    if (!HasAuthority())
    {
        return;
    }

    if (bLockCombatRotationToCurrentTarget)
    {
        ApplyCombatFacingMode();
        if (AAIController* AIController = GetOwningAIController())
        {
            AIController->SetFocus(AgainstTarget, EAIFocusPriority::Gameplay);
        }
    }

    if (!CanTakeCombatMovementControl())
    {
        return;
    }

    if (bMovementControlTaken)
    {
        return;
    }

    if (AAIController* AIController = GetOwningAIController())
    {
        AIController->StopMovement();
    }

    if (OwnerMovement && OriginalMaxWalkSpeed > 0.0f)
    {
        OwnerMovement->MaxWalkSpeed = OriginalMaxWalkSpeed * FMath::Max(0.1f, CombatMovement.CombatWalkSpeedMultiplier);
    }

    bMovementControlTaken = true;
    OnSplineMovementPauseRequested.Broadcast(AgainstTarget);

    AActor* Owner = GetOwner();
    if (Owner && Owner->GetClass()->ImplementsInterface(URenegadeCombatMovementBridge::StaticClass()))
    {
        IRenegadeCombatMovementBridge::Execute_CombatMovementInterrupted(Owner, AgainstTarget);
    }
}

void URenegadeSoldierCombatComponent::ReleaseCombatMovementControl()
{
    if (!HasAuthority())
    {
        return;
    }

    RestoreCombatFacingMode(true);

    if (AAIController* AIController = GetOwningAIController())
    {
        AIController->StopMovement();
    }

    if (!bMovementControlTaken)
    {
        UpdateComponentTickState();
        return;
    }

    if (OwnerMovement && OriginalMaxWalkSpeed > 0.0f)
    {
        OwnerMovement->MaxWalkSpeed = OriginalMaxWalkSpeed;
    }

    const FVector ResumeLocation = GetOwner() ? GetOwner()->GetActorLocation() : FVector::ZeroVector;
    OnSplineMovementResumeRequested.Broadcast(ResumeLocation);

    AActor* Owner = GetOwner();
    if (Owner && Owner->GetClass()->ImplementsInterface(URenegadeCombatMovementBridge::StaticClass()))
    {
        IRenegadeCombatMovementBridge::Execute_CombatMovementResumed(Owner, ResumeLocation);
    }

    bMovementControlTaken = false;
    UpdateComponentTickState();
}

void URenegadeSoldierCombatComponent::ApplyCombatFacingMode()
{
    if (!bLockCombatRotationToCurrentTarget)
    {
        return;
    }

    ResolveOwnerComponents();

    if (OwnerMovement)
    {
        // Prevent the movement vector from turning the body away from the enemy.
        OwnerMovement->bOrientRotationToMovement = false;
        OwnerMovement->bUseControllerDesiredRotation = true;
    }

    if (OwnerCharacter)
    {
        // The controller's combat look rotation now owns character yaw.
        OwnerCharacter->bUseControllerRotationYaw = true;
    }

    bCombatFacingModeApplied = true;
}

void URenegadeSoldierCombatComponent::RestoreCombatFacingMode(bool bClearGameplayFocus)
{
    if (bCombatFacingModeApplied)
    {
        ResolveOwnerComponents();

        if (OwnerMovement)
        {
            OwnerMovement->bOrientRotationToMovement = bOriginalOrientRotationToMovement;
            OwnerMovement->bUseControllerDesiredRotation = bOriginalUseControllerDesiredRotation;
        }

        if (OwnerCharacter)
        {
            OwnerCharacter->bUseControllerRotationYaw = bOriginalUseControllerRotationYaw;
        }

        bCombatFacingModeApplied = false;
    }

    if (bClearGameplayFocus)
    {
        if (AAIController* AIController = GetOwningAIController())
        {
            AIController->ClearFocus(EAIFocusPriority::Gameplay);
        }
    }
}

void URenegadeSoldierCombatComponent::UpdateCombatFacing(float DeltaTime)
{
    if (!HasAuthority() || bIsDead || !bLockCombatRotationToCurrentTarget || !IsValid(CurrentTarget) || !GetOwner())
    {
        return;
    }

    ApplyCombatFacingMode();

    const FVector OwnerLocation = GetOwner()->GetActorLocation();
    FVector ToTarget = GetAimLocation(CurrentTarget) - OwnerLocation;
    ToTarget.Z = 0.0f;

    if (ToTarget.IsNearlyZero())
    {
        return;
    }

    const FRotator DesiredActorRotation(0.0f, ToTarget.Rotation().Yaw, 0.0f);
    const float RotationSpeed = FMath::Max(0.0f, CombatTargetRotationSpeedDegrees);
    const FRotator NewActorRotation = RotationSpeed <= KINDA_SMALL_NUMBER || DeltaTime <= 0.0f
        ? DesiredActorRotation
        : FMath::RInterpConstantTo(GetOwner()->GetActorRotation(), DesiredActorRotation, DeltaTime, RotationSpeed);

    if (AAIController* AIController = GetOwningAIController())
    {
        AIController->SetFocus(CurrentTarget, EAIFocusPriority::Gameplay);
        FRotator DesiredControlRotation = (GetAimLocation(CurrentTarget) - OwnerLocation).Rotation();
        DesiredControlRotation.Roll = 0.0f;
        AIController->SetControlRotation(DesiredControlRotation);
    }

    // This explicit yaw update guarantees the lock even when a Character Blueprint previously
    // used orientation-to-movement or another movement task changes its travel direction.
    GetOwner()->SetActorRotation(NewActorRotation, ETeleportType::None);
}

void URenegadeSoldierCombatComponent::PerformCombatMovement()
{
    if (!HasAuthority() || bIsDead || !CurrentTarget || !CanTakeCombatMovementControl())
    {
        return;
    }

    AAIController* AIController = GetOwningAIController();
    if (!AIController || !GetOwner())
    {
        return;
    }

    const FVector OwnerLocation = GetOwner()->GetActorLocation();
    const FVector TargetLocation = CurrentTarget->GetActorLocation();
    FVector ToTarget = TargetLocation - OwnerLocation;
    ToTarget.Z = 0.0f;
    const float Distance = ToTarget.Size();
    const FVector Forward = ToTarget.GetSafeNormal();
    const FVector Right = FVector::CrossProduct(FVector::UpVector, Forward).GetSafeNormal();

    FVector DesiredDestination = OwnerLocation;
    ERenegadeCombatMoveType MoveType = ERenegadeCombatMoveType::Hold;
    const FRenegadeWeaponSettings ActiveWeapon = GetActiveWeaponSettings();
    float PreferredMinimumRange = CombatMovement.PreferredMinimumRange;
    if (IsRocketLauncherWeapon(ActiveWeapon))
    {
        PreferredMinimumRange = FMath::Max(PreferredMinimumRange, ActiveWeapon.RocketLauncher.MinimumAIFiringDistance);
    }
    else if (IsGrenadeLauncherWeapon(ActiveWeapon))
    {
        PreferredMinimumRange = FMath::Max(PreferredMinimumRange, ActiveWeapon.GrenadeLauncher.MinimumAIFiringDistance);
    }

    if (Targeting.bRequireLineOfSight && !HasLineOfSightTo(CurrentTarget))
    {
        DesiredDestination = LastKnownTargetLocation;
        MoveType = ERenegadeCombatMoveType::SearchLastKnownPosition;
    }
    else if (Distance > CombatMovement.PreferredMaximumRange)
    {
        DesiredDestination = OwnerLocation + Forward * CombatMovement.AdvanceStepDistance;
        MoveType = ERenegadeCombatMoveType::Advance;
    }
    else if (Distance < PreferredMinimumRange)
    {
        DesiredDestination = OwnerLocation - Forward * CombatMovement.RetreatStepDistance + Right * StrafeDirection * (CombatMovement.StrafeStepDistance * 0.35f);
        MoveType = ERenegadeCombatMoveType::Retreat;
    }
    else
    {
        if (FMath::FRand() <= FMath::Clamp(CombatMovement.StrafeDirectionChangeChance, 0.0f, 1.0f))
        {
            StrafeDirection *= -1;
        }

        DesiredDestination = OwnerLocation + Right * StrafeDirection * CombatMovement.StrafeStepDistance;
        MoveType = StrafeDirection > 0 ? ERenegadeCombatMoveType::StrafeRight : ERenegadeCombatMoveType::StrafeLeft;
    }

    FVector ProjectedDestination;
    if (ProjectCombatDestination(DesiredDestination, ProjectedDestination))
    {
        AIController->MoveToLocation(
            ProjectedDestination,
            FMath::Max(0.0f, CombatMovement.MoveAcceptanceRadius),
            true,
            CombatMovement.bUsePathfinding,
            false,
            true,
            nullptr,
            true);

        OnCombatMoveRequested.Broadcast(ProjectedDestination, MoveType);
    }
}

bool URenegadeSoldierCombatComponent::ProjectCombatDestination(const FVector& DesiredDestination, FVector& OutProjectedDestination) const
{
    if (!GetWorld())
    {
        return false;
    }

    if (UNavigationSystemV1* NavSystem = UNavigationSystemV1::GetCurrent(GetWorld()))
    {
        FNavLocation NavLocation;
        const float Extent = FMath::Max(50.0f, CombatMovement.NavigationProjectionExtent);
        if (NavSystem->ProjectPointToNavigation(DesiredDestination, NavLocation, FVector(Extent, Extent, Extent)))
        {
            OutProjectedDestination = NavLocation.Location;
            return true;
        }
    }

    return false;
}

void URenegadeSoldierCombatComponent::ApplyHealthDelta(float Delta, AController* InstigatedBy, AActor* DamageCauser)
{
    if (!HasAuthority() || bIsDead || FMath::IsNearlyZero(Delta))
    {
        return;
    }

    const float PreviousHealth = CurrentHealth;
    CurrentHealth = FMath::Clamp(CurrentHealth + Delta, 0.0f, FMath::Max(1.0f, HealthAndRespawn.MaximumHealth));
    OnHealthChanged.Broadcast(PreviousHealth, CurrentHealth, DamageCauser, InstigatedBy);

    if (CurrentHealth <= 0.0f)
    {
        BeginDeath(InstigatedBy, DamageCauser);
    }
}

void URenegadeSoldierCombatComponent::BeginDeath(AController* InstigatedBy, AActor* DamageCauser)
{
    if (!HasAuthority() || bIsDead)
    {
        return;
    }

    bIsDead = true;
    bInvulnerable = true;
    SetPlayerAimingInternal(false);

    FVector ImpulseDirection = PendingIncomingShotDirection;
    FName HitBone = bHasPendingIncomingHit ? PendingIncomingHit.BoneName : NAME_None;

    AActor* Killer = InstigatedBy ? InstigatedBy->GetPawn() : nullptr;
    if (!Killer)
    {
        Killer = DamageCauser;
    }

    if (ImpulseDirection.IsNearlyZero() && Killer && GetOwner())
    {
        ImpulseDirection = (GetOwner()->GetActorLocation() - Killer->GetActorLocation()).GetSafeNormal();
    }
    if (ImpulseDirection.IsNearlyZero())
    {
        ImpulseDirection = GetOwner() ? GetOwner()->GetActorForwardVector() : FVector::ForwardVector;
    }

    const FVector RagdollImpulse = ImpulseDirection * FMath::Max(0.0f, HealthAndRespawn.RagdollImpulseStrength);

    SetTargetInternal(nullptr, false);
    if (UWorld* World = GetWorld())
    {
        World->GetTimerManager().ClearTimer(TargetRefreshTimer);
        World->GetTimerManager().ClearTimer(CombatMovementTimer);
        World->GetTimerManager().ClearTimer(FireTimer);
        World->GetTimerManager().ClearTimer(ReloadTimer);
    }
    bReloading = false;

    MulticastBeginDeath(Killer, RagdollImpulse, HitBone);

    if (HealthAndRespawn.bCanRespawn && GetWorld())
    {
        GetWorld()->GetTimerManager().SetTimer(RespawnTimer, this, &URenegadeSoldierCombatComponent::RespawnNow, FMath::Max(0.01f, HealthAndRespawn.RespawnDelaySeconds), false);
    }

    if (AActor* Owner = GetOwner())
    {
        Owner->ForceNetUpdate();
    }
}

void URenegadeSoldierCombatComponent::BeginRagdollVisuals(const FVector& Impulse, FName HitBone)
{
    if (bVisualRagdollActive)
    {
        return;
    }

    ResolveOwnerComponents();
    ResetBuiltInPlayerInputState(true);
    bPlayerLockOnInputHeld = false;
    ClearPlayerLockOnTargetInternal(false);
    StopLocalPlayerFireTimer();
    RestoreCombatFacingMode(true);
    UpdateComponentTickState();

    if (AAIController* AIController = GetOwningAIController())
    {
        AIController->StopMovement();
    }

    if (OwnerMovement)
    {
        OwnerMovement->StopMovementImmediately();
        OwnerMovement->DisableMovement();
    }

    if (OwnerCapsule && HealthAndRespawn.bDisableCapsuleCollisionOnDeath)
    {
        OwnerCapsule->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    }

    FString RagdollFailureReason;
    if (HealthAndRespawn.bEnableAutomaticRagdoll && ValidateRagdollSetup(RagdollFailureReason))
    {
        CaptureOriginalMeshStateIfNeeded();

        OwnerMesh->SetCollisionProfileName(HealthAndRespawn.RagdollCollisionProfileName);
        OwnerMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

        // SetSimulatePhysics normally detaches a component automatically. The stable per-bone path
        // does not guarantee that behaviour, so detach explicitly to stop the capsule/root transform
        // from pulling simulated bones back toward the standing character location.
        OwnerMesh->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);

        if (HealthAndRespawn.bDisableSecondaryAnimationDuringRagdoll)
        {
            // Secondary animation systems can continue writing bone transforms after Chaos starts,
            // producing long limbs, cloth spikes or bones pulled toward their pre-death pose.
            OwnerMesh->bDisableClothSimulation = true;
            OwnerMesh->SetAllowAnimDynamicsAnimNode(false, false);
            OwnerMesh->SetAllowRigidBodyAnimNode(false, false);
            OwnerMesh->SetDisablePostProcessBlueprint(true);
            OwnerMesh->ResetAnimInstanceDynamics(ETeleportType::TeleportPhysics);
        }

        const FName RagdollRootBone = ResolveRagdollRootBone();
        if (!RagdollRootBone.IsNone())
        {
            OwnerMesh->SetAllBodiesBelowSimulatePhysics(
                RagdollRootBone,
                true,
                HealthAndRespawn.bIncludeRagdollRootBone);

            if (HealthAndRespawn.bForceFullPhysicsBlendOnRagdoll)
            {
                OwnerMesh->SetAllBodiesBelowPhysicsBlendWeight(
                    RagdollRootBone,
                    1.0f,
                    false,
                    HealthAndRespawn.bIncludeRagdollRootBone);
            }
        }
        else
        {
            // Compatibility fallback for unusual skeletons with no resolvable physics root.
            OwnerMesh->SetAllBodiesSimulatePhysics(true);
            if (HealthAndRespawn.bForceFullPhysicsBlendOnRagdoll)
            {
                OwnerMesh->SetAllBodiesPhysicsBlendWeight(1.0f, false);
            }
        }

        OwnerMesh->WakeAllRigidBodies();

        if (!Impulse.IsNearlyZero())
        {
            const FName SafeImpulseBone = OwnerMesh->GetBoneIndex(HitBone) != INDEX_NONE ? HitBone : RagdollRootBone;
            OwnerMesh->AddImpulse(Impulse, SafeImpulseBone, HealthAndRespawn.bRagdollImpulseIsVelocityChange);
        }
    }
    else if (HealthAndRespawn.bEnableAutomaticRagdoll && HealthAndRespawn.bLogRagdollSetupWarnings)
    {
        UE_LOG(LogRenegadeSoldierCombat, Warning, TEXT("%s: Automatic ragdoll could not start. %s"),
            GetOwner() ? *GetOwner()->GetName() : TEXT("Unknown Soldier"),
            *RagdollFailureReason);
    }

    bVisualRagdollActive = true;
    OnRagdollStarted.Broadcast();
}

void URenegadeSoldierCombatComponent::EndRagdollVisuals(const FTransform& RespawnTransform)
{
    ResolveOwnerComponents();

    if (OwnerMesh)
    {
        // Clear every body regardless of the selected root so no body remains partially simulated.
        OwnerMesh->SetAllBodiesPhysicsBlendWeight(0.0f, false);
        OwnerMesh->SetAllBodiesSimulatePhysics(false);
        OwnerMesh->SetSimulatePhysics(false);
        OwnerMesh->PutAllRigidBodiesToSleep();

        if (USceneComponent* Parent = OriginalMeshParent.Get())
        {
            OwnerMesh->AttachToComponent(Parent, FAttachmentTransformRules::KeepWorldTransform);
        }
        OwnerMesh->SetRelativeTransform(OriginalMeshRelativeTransform);
        OwnerMesh->SetCollisionProfileName(OriginalMeshCollisionProfile);
        OwnerMesh->SetCollisionEnabled(OriginalMeshCollisionEnabled);

        if (HealthAndRespawn.bDisableSecondaryAnimationDuringRagdoll)
        {
            OwnerMesh->bDisableClothSimulation = bOriginalDisableClothSimulation;
            OwnerMesh->SetAllowAnimDynamicsAnimNode(!bOriginalDisableAnimDynamicsAnimNode, true);
            OwnerMesh->SetAllowRigidBodyAnimNode(!bOriginalDisableRigidBodyAnimNode, true);
            OwnerMesh->SetDisablePostProcessBlueprint(bOriginalDisablePostProcessBlueprint);
            OwnerMesh->ResetAnimInstanceDynamics(ETeleportType::TeleportPhysics);
            OwnerMesh->ResetClothTeleportMode();
        }
    }

    if (GetOwner())
    {
        GetOwner()->SetActorTransform(RespawnTransform, false, nullptr, ETeleportType::TeleportPhysics);
    }

    if (HealthAndRespawn.bApplyRespawnRotationToController)
    {
        if (AController* Controller = GetOwningController())
        {
            Controller->SetControlRotation(RespawnTransform.GetRotation().Rotator());
        }
    }

    if (OwnerCapsule)
    {
        OwnerCapsule->SetCollisionEnabled(OriginalCapsuleCollisionEnabled);
    }

    if (OwnerMovement)
    {
        OwnerMovement->StopMovementImmediately();
        OwnerMovement->SetMovementMode(MOVE_Walking);
        if (OriginalMaxWalkSpeed > 0.0f)
        {
            OwnerMovement->MaxWalkSpeed = OriginalMaxWalkSpeed;
        }
    }

    bVisualRagdollActive = false;
}

FTransform URenegadeSoldierCombatComponent::SelectTransformFromList(
    const TArray<FTransform>& Transforms,
    ERenegadeRespawnLocationSelection SelectionMode,
    int32& InOutSequentialIndex) const
{
    if (Transforms.IsEmpty())
    {
        return OriginalActorTransform;
    }

    int32 SelectedIndex = 0;
    switch (SelectionMode)
    {
        case ERenegadeRespawnLocationSelection::Random:
            SelectedIndex = FMath::RandRange(0, Transforms.Num() - 1);
            break;

        case ERenegadeRespawnLocationSelection::Sequential:
            SelectedIndex = FMath::Abs(InOutSequentialIndex) % Transforms.Num();
            InOutSequentialIndex = (SelectedIndex + 1) % Transforms.Num();
            break;

        case ERenegadeRespawnLocationSelection::First:
        default:
            SelectedIndex = 0;
            break;
    }

    return Transforms[SelectedIndex];
}

AActor* URenegadeSoldierCombatComponent::SelectTaggedRespawnActor() const
{
    if (!GetWorld() || HealthAndRespawn.RespawnActorTag.IsNone())
    {
        return nullptr;
    }

    TArray<AActor*> TaggedActors;
    for (TActorIterator<AActor> It(GetWorld()); It; ++It)
    {
        AActor* Candidate = *It;
        if (IsValid(Candidate) && Candidate != GetOwner() && Candidate->ActorHasTag(HealthAndRespawn.RespawnActorTag))
        {
            TaggedActors.Add(Candidate);
        }
    }

    TaggedActors.Sort([](const AActor& Left, const AActor& Right)
    {
        return Left.GetPathName() < Right.GetPathName();
    });

    if (TaggedActors.IsEmpty())
    {
        return nullptr;
    }

    int32 SelectedIndex = 0;
    switch (HealthAndRespawn.TaggedActorSelection)
    {
        case ERenegadeRespawnLocationSelection::Random:
            SelectedIndex = FMath::RandRange(0, TaggedActors.Num() - 1);
            break;

        case ERenegadeRespawnLocationSelection::Sequential:
            SelectedIndex = FMath::Abs(TaggedRespawnSequentialIndex) % TaggedActors.Num();
            TaggedRespawnSequentialIndex = (SelectedIndex + 1) % TaggedActors.Num();
            break;

        case ERenegadeRespawnLocationSelection::First:
        default:
            SelectedIndex = 0;
            break;
    }

    return TaggedActors[SelectedIndex];
}

FTransform URenegadeSoldierCombatComponent::ResolveRespawnTransform()
{
    FTransform ResolvedTransform = OriginalActorTransform;

    switch (HealthAndRespawn.RespawnTransformMode)
    {
        case ERenegadeRespawnTransformMode::MatchingTeamSpawnPoint:
            if (ARenegadeSoldierSpawnPoint* SpawnPoint = SelectTeamSpawnPoint())
            {
                ResolvedTransform = SpawnPoint->GetActorTransform();
            }
            break;

        case ERenegadeRespawnTransformMode::CustomTransform:
            ResolvedTransform = HealthAndRespawn.CustomRespawnTransform;
            break;

        case ERenegadeRespawnTransformMode::CustomTransformList:
            ResolvedTransform = SelectTransformFromList(
                HealthAndRespawn.CustomRespawnTransforms,
                HealthAndRespawn.CustomRespawnSelection,
                CustomRespawnSequentialIndex);
            break;

        case ERenegadeRespawnTransformMode::TaggedActor:
            if (AActor* TaggedActor = SelectTaggedRespawnActor())
            {
                ResolvedTransform = TaggedActor->GetActorTransform();
            }
            break;

        case ERenegadeRespawnTransformMode::RuntimeOverride:
            ResolvedTransform = bHasRuntimeRespawnTransform ? RuntimeRespawnTransform : OriginalActorTransform;
            break;

        case ERenegadeRespawnTransformMode::OriginalTransform:
        default:
            ResolvedTransform = OriginalActorTransform;
            break;
    }

    FVector Location = ResolvedTransform.GetLocation();
    Location.Z += HealthAndRespawn.RespawnVerticalOffset;
    ResolvedTransform.SetLocation(Location);
    return ResolvedTransform;
}

ARenegadeSoldierSpawnPoint* URenegadeSoldierCombatComponent::SelectTeamSpawnPoint() const
{
    if (!GetWorld())
    {
        return nullptr;
    }

    int32 HighestPriority = TNumericLimits<int32>::Lowest();
    TArray<ARenegadeSoldierSpawnPoint*> MatchingPoints;

    for (TActorIterator<ARenegadeSoldierSpawnPoint> It(GetWorld()); It; ++It)
    {
        ARenegadeSoldierSpawnPoint* SpawnPoint = *It;
        if (!IsValid(SpawnPoint) || !SpawnPoint->bEnabled || !SpawnPoint->TeamId.IsEqual(TeamId, ENameCase::IgnoreCase))
        {
            continue;
        }

        if (SpawnPoint->Priority > HighestPriority)
        {
            HighestPriority = SpawnPoint->Priority;
            MatchingPoints.Reset();
            MatchingPoints.Add(SpawnPoint);
        }
        else if (SpawnPoint->Priority == HighestPriority)
        {
            MatchingPoints.Add(SpawnPoint);
        }
    }

    return MatchingPoints.Num() > 0 ? MatchingPoints[FMath::RandRange(0, MatchingPoints.Num() - 1)] : nullptr;
}

void URenegadeSoldierCombatComponent::EndRespawnInvulnerability()
{
    bInvulnerable = false;
}

AController* URenegadeSoldierCombatComponent::GetOwningController() const
{
    return OwnerCharacter ? OwnerCharacter->GetController() : (GetOwner() ? GetOwner()->GetInstigatorController() : nullptr);
}

AAIController* URenegadeSoldierCombatComponent::GetOwningAIController() const
{
    return Cast<AAIController>(GetOwningController());
}

void URenegadeSoldierCombatComponent::MulticastShotFired_Implementation(FVector TraceStart, FVector TraceEnd, bool bBlockingHit, FHitResult HitResult, bool bSpawnGroundBloodForHit, bool bDamagedCombatTarget)
{
    OnShotFired.Broadcast(TraceStart, TraceEnd, bBlockingHit, HitResult);

    if (CombatVisuals.bDrawDebugShotLine && GetWorld() && ShouldRunCosmeticVisuals())
    {
        const FLinearColor DebugLinearColor = bDamagedCombatTarget
            ? CombatVisuals.DebugShotDamageColor
            : (bBlockingHit ? CombatVisuals.DebugShotBlockedColor : CombatVisuals.DebugShotMissColor);
        const FColor DebugColor = DebugLinearColor.ToFColor(true);
        const float DebugDuration = FMath::Max(0.0f, CombatVisuals.DebugShotLineDuration);
        const float DebugThickness = FMath::Max(0.0f, CombatVisuals.DebugShotLineThickness);

        DrawDebugLine(GetWorld(), TraceStart, TraceEnd, DebugColor, false, DebugDuration, 0, DebugThickness);
        if (bBlockingHit && CombatVisuals.bDrawDebugShotImpactPoint)
        {
            DrawDebugPoint(GetWorld(), TraceEnd, 12.0f, DebugColor, false, DebugDuration, 0);
        }
    }

    const bool bDelayBlood = bSpawnGroundBloodForHit
        && CombatVisuals.bEnableGroundBloodSplatter
        && CombatVisuals.bDelayGroundBloodUntilBulletArrives;
    const bool bBulletWasSpawned = SpawnBulletMeshVisual(TraceStart, TraceEnd, bDelayBlood ? &HitResult : nullptr);

    if (bSpawnGroundBloodForHit && (!bDelayBlood || !bBulletWasSpawned))
    {
        SpawnGroundBloodSplatter(HitResult);
    }
}

void URenegadeSoldierCombatComponent::MulticastRocketLaunched_Implementation(
    FVector_NetQuantize LaunchLocation,
    FVector_NetQuantize ImpactLocation,
    float FlightSeconds)
{
    const FRenegadeWeaponSettings Weapon = GetActiveWeaponSettings();
    OnRocketLaunched.Broadcast(LaunchLocation, ImpactLocation, FlightSeconds);

    if (!IsRocketLauncherWeapon(Weapon) || !ShouldRunCosmeticVisuals())
    {
        return;
    }

    const FVector Direction = (FVector(ImpactLocation) - FVector(LaunchLocation)).GetSafeNormal();
    const FRotator LaunchRotation = Direction.IsNearlyZero()
        ? (GetOwner() ? GetOwner()->GetActorRotation() : FRotator::ZeroRotator)
        : Direction.Rotation();

    SpawnProjectileCosmeticActor(
        Weapon.RocketLauncher.RocketMuzzleEffectActorClass,
        LaunchLocation,
        LaunchRotation,
        FMath::Max(0.0f, Weapon.RocketLauncher.RocketMuzzleEffectLifeSeconds),
        true);

    if (IsValid(Weapon.RocketLauncher.RocketFireSound))
    {
        UGameplayStatics::PlaySoundAtLocation(
            this,
            Weapon.RocketLauncher.RocketFireSound,
            LaunchLocation,
            FMath::Max(0.0f, Weapon.RocketLauncher.RocketFireVolumeMultiplier));
    }

    SpawnRocketLauncherVisual(Weapon, LaunchLocation, ImpactLocation, FMath::Max(0.01f, FlightSeconds));
}


void URenegadeSoldierCombatComponent::MulticastGrenadeLaunched_Implementation(
    int32 GrenadeId,
    FVector_NetQuantize LaunchLocation,
    FVector_NetQuantize10 InitialVelocity)
{
    const FRenegadeWeaponSettings Weapon = GetActiveWeaponSettings();
    OnGrenadeLaunched.Broadcast(GrenadeId, LaunchLocation, InitialVelocity);

    if (!IsGrenadeLauncherWeapon(Weapon) || !ShouldRunCosmeticVisuals())
    {
        return;
    }

    const FRotator LaunchRotation = InitialVelocity.IsNearlyZero()
        ? (GetOwner() ? GetOwner()->GetActorRotation() : FRotator::ZeroRotator)
        : InitialVelocity.Rotation();
    SpawnProjectileCosmeticActor(
        Weapon.GrenadeLauncher.GrenadeMuzzleEffectActorClass,
        LaunchLocation,
        LaunchRotation,
        FMath::Max(0.0f, Weapon.GrenadeLauncher.GrenadeMuzzleEffectLifeSeconds),
        true);

    if (IsValid(Weapon.GrenadeLauncher.GrenadeFireSound))
    {
        UGameplayStatics::PlaySoundAtLocation(
            this, Weapon.GrenadeLauncher.GrenadeFireSound, LaunchLocation,
            FMath::Max(0.0f, Weapon.GrenadeLauncher.GrenadeFireVolumeMultiplier));
    }

    SpawnGrenadeLauncherVisual(GrenadeId, Weapon, LaunchLocation, InitialVelocity);
}

void URenegadeSoldierCombatComponent::MulticastGrenadeBounced_Implementation(
    int32 GrenadeId,
    FVector_NetQuantize BounceLocation,
    FVector_NetQuantizeNormal ImpactNormal,
    FVector_NetQuantize10 NewVelocity)
{
    OnGrenadeBounced.Broadcast(GrenadeId, BounceLocation, ImpactNormal, NewVelocity);
    if (!ShouldRunCosmeticVisuals())
    {
        return;
    }

    const int32 VisualIndex = FindGrenadeVisualById(GrenadeId);
    const FRenegadeWeaponSettings Weapon = GrenadeVisualStates.IsValidIndex(VisualIndex)
        ? GrenadeVisualStates[VisualIndex].Weapon
        : GetActiveWeaponSettings();
    if (!IsGrenadeLauncherWeapon(Weapon))
    {
        return;
    }

    CorrectGrenadeVisualBounce(GrenadeId, BounceLocation, ImpactNormal, NewVelocity);
    PlayGrenadeBouncePresentation(Weapon, BounceLocation, ImpactNormal);
}

void URenegadeSoldierCombatComponent::MulticastGrenadeExploded_Implementation(
    int32 GrenadeId,
    FVector_NetQuantize ImpactLocation,
    FVector_NetQuantizeNormal ImpactNormal)
{
    OnGrenadeExploded.Broadcast(GrenadeId, ImpactLocation, ImpactNormal);

    const int32 VisualIndex = FindGrenadeVisualById(GrenadeId);
    const FRenegadeWeaponSettings Weapon = GrenadeVisualStates.IsValidIndex(VisualIndex)
        ? GrenadeVisualStates[VisualIndex].Weapon
        : GetActiveWeaponSettings();
    if (GrenadeVisualStates.IsValidIndex(VisualIndex))
    {
        DeactivateGrenadeLauncherVisual(VisualIndex);
    }

    if (!IsGrenadeLauncherWeapon(Weapon) || !ShouldRunCosmeticVisuals())
    {
        return;
    }
    PlayGrenadeImpactPresentation(Weapon, ImpactLocation, ImpactNormal);
}

void URenegadeSoldierCombatComponent::MulticastReloadStarted_Implementation()
{
    bReloading = true;
    PauseLocalPlayerFireTimer();
    OnReloadStarted.Broadcast();
}

void URenegadeSoldierCombatComponent::MulticastReloadFinished_Implementation()
{
    bReloading = false;
    OnReloadFinished.Broadcast();

    if (bLocalPlayerFireHeld
        && IsLocallyControlledPlayer()
        && ActivePlayerWeapon == ERenegadePlayerWeaponSlot::AutomaticRifle
        && !bIsDead)
    {
        PlayerStartFire();
    }
}

void URenegadeSoldierCombatComponent::MulticastBeginDeath_Implementation(AActor* Killer, FVector RagdollImpulse, FName HitBone)
{
    BeginRagdollVisuals(RagdollImpulse, HitBone);
    OnDeath.Broadcast(Killer, RagdollImpulse, HitBone);
}

void URenegadeSoldierCombatComponent::MulticastFinishRespawn_Implementation(FTransform RespawnTransform)
{
    EndRagdollVisuals(RespawnTransform);
    OnRespawnTransformSelected.Broadcast(RespawnTransform);
    OnRespawned.Broadcast();

    if (HasAuthority())
    {
        const FVector ResumeLocation = GetOwner() ? GetOwner()->GetActorLocation() : FVector::ZeroVector;
        OnSplineMovementResumeRequested.Broadcast(ResumeLocation);
        AActor* Owner = GetOwner();
        if (Owner && Owner->GetClass()->ImplementsInterface(URenegadeCombatMovementBridge::StaticClass()))
        {
            IRenegadeCombatMovementBridge::Execute_CombatMovementResumed(Owner, ResumeLocation);
        }
    }
}
