#include "RenegadeBuildingCombatComponent.h"

#include "RenegadeCombatRegistrySubsystem.h"
#include "RenegadeHarvesterCombatComponent.h"
#include "RenegadeHarvestPoint.h"
#include "RenegadeRefineryDockPoint.h"
#include "RenegadeTeamCreditsManager.h"
#include "RenegadeSoldierCombatComponent.h"
#include "RenegadeSoldierCombatModule.h"

#include "Components/AudioComponent.h"
#include "Components/PrimitiveComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "CollisionQueryParams.h"
#include "DrawDebugHelpers.h"
#include "Engine/World.h"
#include "EngineUtils.h"
#include "GameFramework/Character.h"
#include "GameFramework/Controller.h"
#include "GameFramework/DamageType.h"
#include "GameFramework/Pawn.h"
#include "Kismet/GameplayStatics.h"
#include "Materials/MaterialInterface.h"
#include "Net/UnrealNetwork.h"
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraSystem.h"
#include "Particles/ParticleSystem.h"
#include "Particles/ParticleSystemComponent.h"
#include "Sound/SoundAttenuation.h"
#include "Sound/SoundBase.h"
#include "Sound/SoundConcurrency.h"

namespace RenegadeBuildingPrivate
{
    static bool IsNeutralTeamName(const FName TeamName)
    {
        return TeamName.IsNone() || TeamName.IsEqual(FName(TEXT("Neutral")), ENameCase::IgnoreCase);
    }

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
}

URenegadeBuildingCombatComponent::URenegadeBuildingCombatComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
    PrimaryComponentTick.bStartWithTickEnabled = false;
    SetIsReplicatedByDefault(true);
}

void URenegadeBuildingCombatComponent::BeginPlay()
{
    Super::BeginPlay();

    AutoResolveDefenseType();

    if (AActor* Owner = GetOwner())
    {
        bOriginalOwnerHidden = Owner->IsHidden();
        bOriginalOwnerCollisionEnabled = Owner->GetActorEnableCollision();

        if (HasAuthority() && bEnsureOwnerReplicates)
        {
            Owner->SetReplicates(true);
            if (bEnsureOwnerAlwaysRelevant)
            {
                Owner->bAlwaysRelevant = true;
            }
        }

        if (HealthSettings.bCanBeDamaged)
        {
            Owner->SetCanBeDamaged(true);
        }

        Owner->OnTakeAnyDamage.AddDynamic(this, &URenegadeBuildingCombatComponent::HandleOwnerAnyDamage);
    }

    if (HasAuthority())
    {
        CurrentHealth = FMath::Max(1.0f, HealthSettings.MaximumHealth);
        bIsLowHealth = false;
        bIsDestroyed = false;
        bTeamPowerOnline = IsDefensePowerAvailable();
    }

    RegisterWithCombatWorld();

    if (HasAuthority() && BuildingType == ERenegadeBuildingType::Refinery && bEnableHarvesterSpawner)
    {
        if (UWorld* World = GetWorld())
        {
            if (URenegadeCombatRegistrySubsystem* Registry = World->GetSubsystem<URenegadeCombatRegistrySubsystem>())
            {
                Registry->GetTeamCreditsManager(true);
            }
        }
        if (bAutoSpawnHarvesterOnBeginPlay)
        {
            StartInitialHarvesterSpawn();
        }
    }

    if (HasAuthority() && bAutoStartDefenseOnBeginPlay && DefenseType != ERenegadeBuildingDefenseType::None)
    {
        StartBuildingDefense();
    }

    UpdateTickState();
}

void URenegadeBuildingCombatComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    StopAllRocketVisuals();
    StopAllObeliskLaserVisuals();

    for (UStaticMeshComponent* RocketComponent : RocketVisualComponents)
    {
        if (IsValid(RocketComponent))
        {
            RocketComponent->DestroyComponent();
        }
    }
    RocketVisualComponents.Reset();
    RocketVisualStates.Reset();

    if (AActor* Owner = GetOwner())
    {
        Owner->OnTakeAnyDamage.RemoveDynamic(this, &URenegadeBuildingCombatComponent::HandleOwnerAnyDamage);
    }

    UnregisterFromCombatWorld();

    if (UWorld* World = GetWorld())
    {
        World->GetTimerManager().ClearAllTimersForObject(this);
    }

    Super::EndPlay(EndPlayReason);
}

void URenegadeBuildingCombatComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
    UpdateRocketVisuals(DeltaTime);
    UpdateTickState();
}

void URenegadeBuildingCombatComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(URenegadeBuildingCombatComponent, TeamId);
    DOREPLIFETIME(URenegadeBuildingCombatComponent, CurrentHealth);
    DOREPLIFETIME(URenegadeBuildingCombatComponent, bIsLowHealth);
    DOREPLIFETIME(URenegadeBuildingCombatComponent, bIsDestroyed);
    DOREPLIFETIME(URenegadeBuildingCombatComponent, CurrentDefenseTarget);
    DOREPLIFETIME(URenegadeBuildingCombatComponent, bObeliskCharging);
    DOREPLIFETIME(URenegadeBuildingCombatComponent, bTeamPowerOnline);
    DOREPLIFETIME(URenegadeBuildingCombatComponent, ActiveHarvester);
}

bool URenegadeBuildingCombatComponent::HasAuthority() const
{
    return IsValid(GetOwner()) && GetOwner()->HasAuthority();
}

void URenegadeBuildingCombatComponent::RegisterWithCombatWorld()
{
    // Every building is registered for team-power queries. Infantry targetability is filtered separately.
    if (UWorld* World = GetWorld())
    {
        if (URenegadeCombatRegistrySubsystem* Registry = World->GetSubsystem<URenegadeCombatRegistrySubsystem>())
        {
            Registry->RegisterBuilding(this);
        }
    }
}

void URenegadeBuildingCombatComponent::UnregisterFromCombatWorld()
{
    if (UWorld* World = GetWorld())
    {
        if (URenegadeCombatRegistrySubsystem* Registry = World->GetSubsystem<URenegadeCombatRegistrySubsystem>())
        {
            Registry->UnregisterBuilding(this);
        }
    }
}

void URenegadeBuildingCombatComponent::AutoResolveDefenseType()
{
    if (DefenseType != ERenegadeBuildingDefenseType::None)
    {
        return;
    }

    if (BuildingType == ERenegadeBuildingType::AdvancedGuardTower)
    {
        DefenseType = ERenegadeBuildingDefenseType::AdvancedGuardTower;
    }
    else if (BuildingType == ERenegadeBuildingType::Obelisk)
    {
        DefenseType = ERenegadeBuildingDefenseType::Obelisk;
    }
}

void URenegadeBuildingCombatComponent::UpdateTickState()
{
    bool bHasActiveRocket = false;
    for (const FRenegadeBuildingRocketRuntimeState& State : RocketVisualStates)
    {
        if (State.bActive)
        {
            bHasActiveRocket = true;
            break;
        }
    }

    SetComponentTickEnabled(bHasActiveRocket);
}

USceneComponent* URenegadeBuildingCombatComponent::ResolveSceneComponent(
    const FComponentReference& Reference,
    const FName ComponentTag,
    USceneComponent* RuntimeOverride) const
{
    AActor* Owner = GetOwner();
    if (!IsValid(Owner))
    {
        return nullptr;
    }

    if (IsValid(RuntimeOverride) && RuntimeOverride->GetOwner() == Owner)
    {
        return RuntimeOverride;
    }

    if (UActorComponent* ReferencedComponent = Reference.GetComponent(Owner))
    {
        if (USceneComponent* SceneComponent = Cast<USceneComponent>(ReferencedComponent))
        {
            return SceneComponent;
        }
    }

    if (!ComponentTag.IsNone())
    {
        const TArray<UActorComponent*> TaggedComponents = Owner->GetComponentsByTag(USceneComponent::StaticClass(), ComponentTag);
        for (UActorComponent* TaggedComponent : TaggedComponents)
        {
            if (USceneComponent* SceneComponent = Cast<USceneComponent>(TaggedComponent))
            {
                return SceneComponent;
            }
        }
    }

    return nullptr;
}

FVector URenegadeBuildingCombatComponent::ResolveSceneLocation(
    const FComponentReference& Reference,
    const FName ComponentTag,
    USceneComponent* RuntimeOverride,
    const FVector& RelativeOffset,
    const FVector& Fallback) const
{
    if (const USceneComponent* SceneComponent = ResolveSceneComponent(Reference, ComponentTag, RuntimeOverride))
    {
        return SceneComponent->GetComponentTransform().TransformPosition(RelativeOffset);
    }

    return Fallback;
}

void URenegadeBuildingCombatComponent::SetTeamId(const FName NewTeamId)
{
    if (!HasAuthority())
    {
        return;
    }

    TeamId = NewTeamId;
    UpdateReplicatedPowerState();
    RefreshDefenseTargeting();
    if (IsValid(ActiveHarvester))
    {
        if (URenegadeHarvesterCombatComponent* HarvesterCombat = ActiveHarvester->FindComponentByClass<URenegadeHarvesterCombatComponent>())
        {
            HarvesterCombat->SetTeamId(TeamId);
        }
    }

    if (AActor* Owner = GetOwner())
    {
        Owner->ForceNetUpdate();
    }
}

float URenegadeBuildingCombatComponent::GetHealthPercent() const
{
    return CurrentHealth / FMath::Max(1.0f, HealthSettings.MaximumHealth);
}

bool URenegadeBuildingCombatComponent::IsHostileToActor(const AActor* OtherActor) const
{
    if (!IsValid(OtherActor) || OtherActor == GetOwner())
    {
        return false;
    }

    FName OtherTeam = NAME_None;
    if (const URenegadeSoldierCombatComponent* SoldierCombat = OtherActor->FindComponentByClass<URenegadeSoldierCombatComponent>())
    {
        OtherTeam = SoldierCombat->TeamId;
    }
    else if (const URenegadeHarvesterCombatComponent* HarvesterCombat = OtherActor->FindComponentByClass<URenegadeHarvesterCombatComponent>())
    {
        OtherTeam = HarvesterCombat->TeamId;
    }
    else if (const URenegadeBuildingCombatComponent* BuildingCombat = OtherActor->FindComponentByClass<URenegadeBuildingCombatComponent>())
    {
        OtherTeam = BuildingCombat->TeamId;
    }
    else
    {
        return false;
    }

    if (RenegadeBuildingPrivate::IsNeutralTeamName(TeamId) || RenegadeBuildingPrivate::IsNeutralTeamName(OtherTeam))
    {
        return false;
    }

    if (TeamId.IsEqual(OtherTeam, ENameCase::IgnoreCase))
    {
        return false;
    }

    return bDifferentNonNeutralTeamsAreEnemies;
}

FVector URenegadeBuildingCombatComponent::GetTargetAimLocation() const
{
    AActor* Owner = GetOwner();
    if (!IsValid(Owner))
    {
        return FVector::ZeroVector;
    }

    FVector BoundsOrigin = Owner->GetActorLocation();
    FVector BoundsExtent = FVector::ZeroVector;
    Owner->GetActorBounds(true, BoundsOrigin, BoundsExtent);

    const FVector Fallback = BoundsOrigin + TargetSettings.FallbackAimOffset;
    return ResolveSceneLocation(
        TargetPointComponent,
        TargetPointComponentTag,
        RuntimeTargetPointComponent,
        TargetPointRelativeOffset,
        Fallback);
}

bool URenegadeBuildingCombatComponent::IsValidDefenseTarget(const AActor* PossibleTarget) const
{
    if (!IsValid(PossibleTarget) || PossibleTarget == GetOwner() || bIsDestroyed || DefenseType == ERenegadeBuildingDefenseType::None)
    {
        return false;
    }

    const URenegadeSoldierCombatComponent* TargetCombat = PossibleTarget->FindComponentByClass<URenegadeSoldierCombatComponent>();
    if (!IsValid(TargetCombat) || TargetCombat->bIsDead || !TargetCombat->bRegisterAsCombatTarget || !IsHostileToActor(PossibleTarget))
    {
        return false;
    }

    FVector TraceOrigin = GetTargetAimLocation();
    if (DefenseType == ERenegadeBuildingDefenseType::Obelisk)
    {
        TraceOrigin = ResolveSceneLocation(
            ObeliskLaserStartComponent,
            ObeliskLaserStartComponentTag,
            RuntimeObeliskLaserStartComponent,
            ObeliskLaserStartRelativeOffset,
            TraceOrigin);
    }
    else if (DefenseType == ERenegadeBuildingDefenseType::AdvancedGuardTower)
    {
        TraceOrigin = ResolveSceneLocation(
            AGTLeftRocketMuzzleComponent,
            AGTLeftRocketMuzzleTag,
            RuntimeAGTLeftMuzzleComponent,
            AGTLeftRocketMuzzleRelativeOffset,
            TraceOrigin);
    }

    const float DistanceSquared = FVector::DistSquared(TraceOrigin, GetDefenseTargetAimLocation(PossibleTarget));
    const float MaximumRange = FMath::Max(100.0f, DefenseTargeting.AttackRange);
    const float MinimumRange = FMath::Max(0.0f, DefenseTargeting.MinimumAttackRange);
    return DistanceSquared <= FMath::Square(MaximumRange) && DistanceSquared >= FMath::Square(MinimumRange);
}

void URenegadeBuildingCombatComponent::RepairBuilding(const float Amount)
{
    if (!HasAuthority() || Amount <= 0.0f)
    {
        return;
    }

    if (bIsDestroyed)
    {
        if (HealthSettings.bAllowRepairAfterDestroyed)
        {
            RestoreBuilding(Amount);
        }
        return;
    }

    ApplyHealthDelta(Amount, nullptr, nullptr);
}

void URenegadeBuildingCombatComponent::SetBuildingHealth(const float NewHealth)
{
    if (!HasAuthority())
    {
        return;
    }

    if (NewHealth <= 0.0f)
    {
        ForceDestroyBuilding(nullptr);
        return;
    }

    if (bIsDestroyed)
    {
        RestoreBuilding(NewHealth);
        return;
    }

    const float PreviousHealth = CurrentHealth;
    CurrentHealth = FMath::Clamp(NewHealth, 0.0f, FMath::Max(1.0f, HealthSettings.MaximumHealth));
    OnBuildingHealthChanged.Broadcast(PreviousHealth, CurrentHealth, nullptr, nullptr);
    RefreshLowHealthState(nullptr, CurrentHealth < PreviousHealth);

    if (AActor* Owner = GetOwner())
    {
        Owner->ForceNetUpdate();
    }
}

void URenegadeBuildingCombatComponent::ForceDestroyBuilding(AActor* Destroyer)
{
    if (!HasAuthority() || bIsDestroyed)
    {
        return;
    }

    const float PreviousHealth = CurrentHealth;
    CurrentHealth = 0.0f;
    OnBuildingHealthChanged.Broadcast(PreviousHealth, CurrentHealth, Destroyer, Destroyer ? Destroyer->GetInstigatorController() : nullptr);
    if (bIsLowHealth)
    {
        bIsLowHealth = false;
        OnBuildingLowHealthChanged.Broadcast(false, 0.0f, Destroyer);
    }
    BeginBuildingDestroyed(Destroyer ? Destroyer->GetInstigatorController() : nullptr, Destroyer);
}

void URenegadeBuildingCombatComponent::RestoreBuilding(const float RestoredHealth)
{
    if (!HasAuthority())
    {
        return;
    }

    const float DesiredHealth = RestoredHealth < 0.0f ? HealthSettings.MaximumHealth : RestoredHealth;
    const float PreviousHealth = CurrentHealth;

    bIsDestroyed = false;
    bIsLowHealth = false;
    CurrentHealth = FMath::Clamp(DesiredHealth, 1.0f, FMath::Max(1.0f, HealthSettings.MaximumHealth));
    RestoreOperationalPresentation();
    RegisterWithCombatWorld();
    OnBuildingHealthChanged.Broadcast(PreviousHealth, CurrentHealth, nullptr, nullptr);
    RefreshLowHealthState(nullptr, false);
    OnBuildingRestored.Broadcast();

    if (bAutoStartDefenseOnBeginPlay && DefenseType != ERenegadeBuildingDefenseType::None)
    {
        StartBuildingDefense();
    }

    if (BuildingType == ERenegadeBuildingType::Refinery && bEnableHarvesterSpawner && !IsValid(ActiveHarvester))
    {
        ScheduleHarvesterRespawn(HarvesterRespawnDelaySeconds);
    }

    if (AActor* Owner = GetOwner())
    {
        Owner->ForceNetUpdate();
    }
}

void URenegadeBuildingCombatComponent::HandleOwnerAnyDamage(
    AActor* DamagedActor,
    const float Damage,
    const UDamageType* DamageType,
    AController* InstigatedBy,
    AActor* DamageCauser)
{
    if (!HasAuthority() || DamagedActor != GetOwner() || bIsDestroyed || !HealthSettings.bCanBeDamaged || Damage <= 0.0f)
    {
        return;
    }

    const float AdjustedDamage = Damage * FMath::Max(0.0f, HealthSettings.IncomingDamageMultiplier);
    if (AdjustedDamage <= 0.0f)
    {
        return;
    }

    RequestUnderAttackAnnouncement(DamageCauser, AdjustedDamage);
    ApplyHealthDelta(-AdjustedDamage, InstigatedBy, DamageCauser);
}

void URenegadeBuildingCombatComponent::ApplyHealthDelta(const float Delta, AController* InstigatedBy, AActor* DamageCauser)
{
    if (!HasAuthority() || bIsDestroyed || FMath::IsNearlyZero(Delta))
    {
        return;
    }

    const float PreviousHealth = CurrentHealth;
    CurrentHealth = FMath::Clamp(CurrentHealth + Delta, 0.0f, FMath::Max(1.0f, HealthSettings.MaximumHealth));
    OnBuildingHealthChanged.Broadcast(PreviousHealth, CurrentHealth, DamageCauser, InstigatedBy);

    if (CurrentHealth <= 0.0f)
    {
        BeginBuildingDestroyed(InstigatedBy, DamageCauser);
    }
    else
    {
        RefreshLowHealthState(DamageCauser, Delta < 0.0f);
    }

    if (AActor* Owner = GetOwner())
    {
        Owner->ForceNetUpdate();
    }
}

void URenegadeBuildingCombatComponent::BeginBuildingDestroyed(AController* InstigatedBy, AActor* Destroyer)
{
    if (!HasAuthority() || bIsDestroyed)
    {
        return;
    }

    if (AActor* Owner = GetOwner())
    {
        Owner->FlushNetDormancy();
    }

    bIsDestroyed = true;
    CurrentHealth = 0.0f;
    if (bRequireOperationalRefineryForHarvesterSpawn)
    {
        ClearHarvesterRespawnTimer();
    }
    if (bIsLowHealth)
    {
        bIsLowHealth = false;
        OnBuildingLowHealthChanged.Broadcast(false, 0.0f, Destroyer);
    }
    StopBuildingDefense();
    ApplyDestroyedPresentation();

    const FVector EffectLocation = GetTargetAimLocation();
    MulticastBuildingDestroyed(Destroyer, EffectLocation);

    if (AActor* Owner = GetOwner())
    {
        Owner->ForceNetUpdate();
        if (HealthSettings.bDestroyOwnerActorOnZeroHealth)
        {
            // Leave one short replication window for the reliable destruction multicast before removing the actor.
            Owner->SetLifeSpan(0.10f);
        }
    }
}

void URenegadeBuildingCombatComponent::ApplyDestroyedPresentation()
{
    AActor* Owner = GetOwner();
    if (!IsValid(Owner) || HealthSettings.bDestroyOwnerActorOnZeroHealth)
    {
        return;
    }

    if (HealthSettings.bDisableOwnerCollisionOnDestroyed)
    {
        Owner->SetActorEnableCollision(false);
    }

    if (HealthSettings.bHideOwnerOnDestroyed)
    {
        Owner->SetActorHiddenInGame(true);
    }
}

void URenegadeBuildingCombatComponent::RestoreOperationalPresentation()
{
    AActor* Owner = GetOwner();
    if (!IsValid(Owner))
    {
        return;
    }

    Owner->SetActorEnableCollision(bOriginalOwnerCollisionEnabled);
    Owner->SetActorHiddenInGame(bOriginalOwnerHidden);
}

void URenegadeBuildingCombatComponent::RequestUnderAttackAnnouncement(AActor* Attacker, const float Damage)
{
    UWorld* World = GetWorld();
    if (!IsValid(World))
    {
        return;
    }

    const float Now = World->GetTimeSeconds();
    if ((Now - LastUnderAttackRequestTime) < FMath::Max(0.0f, AudioSettings.UnderAttackCooldownSeconds))
    {
        OnBuildingUnderAttack.Broadcast(Attacker, Damage);
        return;
    }

    LastUnderAttackRequestTime = Now;
    if (AActor* Owner = GetOwner())
    {
        Owner->FlushNetDormancy();
    }
    MulticastBuildingUnderAttack(Attacker, Damage, GetTargetAimLocation());
}

void URenegadeBuildingCombatComponent::RefreshLowHealthState(AActor* DamageCauser, const bool bAllowWarningSound)
{
    if (!HasAuthority())
    {
        return;
    }

    const bool bPreviousLowHealth = bIsLowHealth;
    bool bNewLowHealth = false;

    if (HealthSettings.bEnableLowHealthState && !bIsDestroyed && CurrentHealth > 0.0f)
    {
        const float HealthPercent = GetHealthPercent();
        const float EnterThreshold = FMath::Clamp(HealthSettings.LowHealthThresholdPercent, 0.01f, 0.99f);
        const float ExitThreshold = FMath::Clamp(
            EnterThreshold + FMath::Max(0.0f, HealthSettings.LowHealthRecoveryHysteresisPercent),
            EnterThreshold,
            1.0f);

        bNewLowHealth = bPreviousLowHealth
            ? HealthPercent <= ExitThreshold
            : HealthPercent <= EnterThreshold;
    }

    if (bNewLowHealth == bPreviousLowHealth)
    {
        return;
    }

    if (AActor* Owner = GetOwner())
    {
        Owner->FlushNetDormancy();
    }

    bIsLowHealth = bNewLowHealth;
    OnBuildingLowHealthChanged.Broadcast(bIsLowHealth, GetHealthPercent(), DamageCauser);

    if (bIsLowHealth && bAllowWarningSound)
    {
        MulticastBuildingLowHealthWarning(GetTargetAimLocation());
    }

    if (AActor* Owner = GetOwner())
    {
        Owner->ForceNetUpdate();
    }
}

FName URenegadeBuildingCombatComponent::ResolveLocalEvaListenerTeam() const
{
    if (!IsValid(GetWorld()) || GetWorld()->GetNetMode() == NM_DedicatedServer)
    {
        return NAME_None;
    }

    if (APawn* LocalPawn = UGameplayStatics::GetPlayerPawn(this, 0))
    {
        if (const URenegadeSoldierCombatComponent* LocalCombat = LocalPawn->FindComponentByClass<URenegadeSoldierCombatComponent>())
        {
            return LocalCombat->TeamId;
        }
    }

    return NAME_None;
}

USoundBase* URenegadeBuildingCombatComponent::ResolveEvaSoundForLocalListener(
    const FRenegadeBuildingEvaSoundSet& TeamSounds,
    USoundBase* FallbackSound) const
{
    if (!AudioSettings.bUseTeamAwareEvaSounds)
    {
        return FallbackSound;
    }

    const FName ListenerTeam = ResolveLocalEvaListenerTeam();
    if (RenegadeBuildingPrivate::IsNeutralTeamName(ListenerTeam)
        || RenegadeBuildingPrivate::IsNeutralTeamName(TeamId))
    {
        return FallbackSound;
    }

    const bool bFriendlyBuilding = ListenerTeam.IsEqual(TeamId, ENameCase::IgnoreCase);
    USoundBase* SelectedSound = nullptr;

    if (ListenerTeam.IsEqual(FName(TEXT("GDI")), ENameCase::IgnoreCase))
    {
        SelectedSound = bFriendlyBuilding
            ? TeamSounds.GDIFriendlyBuildingSound.Get()
            : TeamSounds.GDIEnemyBuildingSound.Get();
    }
    else if (ListenerTeam.IsEqual(FName(TEXT("Nod")), ENameCase::IgnoreCase))
    {
        SelectedSound = bFriendlyBuilding
            ? TeamSounds.NodFriendlyBuildingSound.Get()
            : TeamSounds.NodEnemyBuildingSound.Get();
    }

    return IsValid(SelectedSound) ? SelectedSound : FallbackSound;
}

void URenegadeBuildingCombatComponent::TryPlayEvaAnnouncement(
    USoundBase* Sound,
    const FVector& Location,
    const float Volume,
    const float Pitch,
    const float QuietTime,
    const int32 Priority) const
{
    if (!IsValid(Sound))
    {
        return;
    }

    if (UWorld* World = GetWorld())
    {
        if (URenegadeCombatRegistrySubsystem* Registry = World->GetSubsystem<URenegadeCombatRegistrySubsystem>())
        {
            Registry->TryPlayGlobalBuildingEvaSound(
                Sound,
                Location,
                Volume,
                Pitch,
                QuietTime,
                AudioSettings.UnderAttackAttenuation,
                AudioSettings.UnderAttackConcurrency,
                GetOwner(),
                Priority,
                true);
        }
    }
}

void URenegadeBuildingCombatComponent::MulticastBuildingUnderAttack_Implementation(AActor* Attacker, const float Damage, const FVector_NetQuantize SoundLocation)
{
    OnBuildingUnderAttack.Broadcast(Attacker, Damage);

    USoundBase* Sound = ResolveEvaSoundForLocalListener(AudioSettings.UnderAttackEvaSounds, AudioSettings.UnderAttackSound);
    TryPlayEvaAnnouncement(
        Sound,
        SoundLocation,
        AudioSettings.UnderAttackVolumeMultiplier,
        AudioSettings.UnderAttackPitchMultiplier,
        AudioSettings.GlobalUnderAttackQuietTimeSeconds,
        0);
}

void URenegadeBuildingCombatComponent::MulticastBuildingLowHealthWarning_Implementation(const FVector_NetQuantize SoundLocation)
{
    USoundBase* Sound = ResolveEvaSoundForLocalListener(AudioSettings.LowHealthEvaSounds, AudioSettings.LowHealthWarningSound);
    TryPlayEvaAnnouncement(
        Sound,
        SoundLocation,
        AudioSettings.LowHealthWarningVolumeMultiplier,
        AudioSettings.LowHealthWarningPitchMultiplier,
        AudioSettings.GlobalLowHealthQuietTimeSeconds,
        1);
}

void URenegadeBuildingCombatComponent::MulticastBuildingDestroyed_Implementation(AActor* Destroyer, const FVector_NetQuantize EffectLocation)
{
    StopAllObeliskLaserVisuals();
    ApplyDestroyedPresentation();
    OnBuildingDestroyed.Broadcast(Destroyer);

    USoundBase* Sound = ResolveEvaSoundForLocalListener(AudioSettings.DestroyedEvaSounds, AudioSettings.DestroyedSound);
    TryPlayEvaAnnouncement(
        Sound,
        EffectLocation,
        AudioSettings.DestroyedSoundVolumeMultiplier,
        AudioSettings.DestroyedSoundPitchMultiplier,
        AudioSettings.GlobalDestroyedQuietTimeSeconds,
        2);
}

void URenegadeBuildingCombatComponent::StartBuildingDefense()
{
    if (!HasAuthority() || bIsDestroyed || DefenseType == ERenegadeBuildingDefenseType::None || !GetWorld())
    {
        return;
    }

    bDefenseRunning = true;
    UpdateReplicatedPowerState();

    const float RefreshRate = FMath::Max(0.05f, DefenseTargeting.TargetRefreshSeconds);
    GetWorld()->GetTimerManager().SetTimer(
        DefenseRefreshTimer,
        this,
        &URenegadeBuildingCombatComponent::RefreshDefenseTargeting,
        RefreshRate,
        true,
        FMath::FRandRange(0.01f, RefreshRate));

    RefreshDefenseTargeting();
}

void URenegadeBuildingCombatComponent::StopBuildingDefense()
{
    if (!HasAuthority())
    {
        return;
    }

    bDefenseRunning = false;
    bObeliskCharging = false;

    if (UWorld* World = GetWorld())
    {
        World->GetTimerManager().ClearTimer(DefenseRefreshTimer);
        World->GetTimerManager().ClearTimer(DefenseAttackTimer);
        World->GetTimerManager().ClearTimer(ObeliskChargeTimer);
    }

    SetDefenseTargetInternal(nullptr);
}

void URenegadeBuildingCombatComponent::ForceDefenseTargetRefresh()
{
    if (HasAuthority())
    {
        RefreshDefenseTargeting();
    }
}

void URenegadeBuildingCombatComponent::SetDefenseTarget(AActor* NewTarget)
{
    if (HasAuthority())
    {
        SetDefenseTargetInternal(IsValidDefenseTarget(NewTarget) ? NewTarget : nullptr);
    }
}

void URenegadeBuildingCombatComponent::ClearDefenseTarget()
{
    if (HasAuthority())
    {
        SetDefenseTargetInternal(nullptr);
    }
}

void URenegadeBuildingCombatComponent::RefreshDefenseTargeting()
{
    if (!HasAuthority() || !bDefenseRunning || bIsDestroyed || DefenseType == ERenegadeBuildingDefenseType::None)
    {
        return;
    }

    UpdateReplicatedPowerState();
    if (!bTeamPowerOnline)
    {
        if (bObeliskCharging)
        {
            bObeliskCharging = false;
            if (UWorld* World = GetWorld())
            {
                World->GetTimerManager().ClearTimer(ObeliskChargeTimer);
                World->GetTimerManager().ClearTimer(DefenseAttackTimer);
            }
        }
        SetDefenseTargetInternal(nullptr);
        return;
    }

    const bool bCurrentTargetValid = IsValidDefenseTarget(CurrentDefenseTarget)
        && (!DefenseTargeting.bRequireLineOfSight || HasLineOfSightToDefenseTarget(CurrentDefenseTarget));

    if (!bCurrentTargetValid)
    {
        SetDefenseTargetInternal(FindBestDefenseTarget());
    }

    if (IsValid(CurrentDefenseTarget) && GetWorld())
    {
        const bool bAttackPending = GetWorld()->GetTimerManager().IsTimerActive(DefenseAttackTimer)
            || GetWorld()->GetTimerManager().IsTimerActive(ObeliskChargeTimer)
            || bObeliskCharging;

        if (!bAttackPending)
        {
            const float InitialDelay = DefenseType == ERenegadeBuildingDefenseType::AdvancedGuardTower
                ? AdvancedGuardTower.InitialFireDelaySeconds
                : Obelisk.InitialFireDelaySeconds;
            ScheduleNextDefenseAttack(InitialDelay);
        }
    }
}

AActor* URenegadeBuildingCombatComponent::FindBestDefenseTarget() const
{
    UWorld* World = GetWorld();
    if (!IsValid(World) || !IsValid(GetOwner()))
    {
        return nullptr;
    }

    URenegadeCombatRegistrySubsystem* Registry = World->GetSubsystem<URenegadeCombatRegistrySubsystem>();
    if (!IsValid(Registry))
    {
        return nullptr;
    }

    TArray<URenegadeSoldierCombatComponent*> Combatants;
    Registry->GetCombatants(Combatants);

    TArray<AActor*> ValidCandidates;
    ValidCandidates.Reserve(Combatants.Num());

    for (URenegadeSoldierCombatComponent* CandidateCombat : Combatants)
    {
        if (!IsValid(CandidateCombat))
        {
            continue;
        }

        AActor* CandidateActor = CandidateCombat->GetOwner();
        if (!IsValidDefenseTarget(CandidateActor))
        {
            continue;
        }

        if (DefenseTargeting.bRequireLineOfSight && !HasLineOfSightToDefenseTarget(CandidateActor))
        {
            continue;
        }

        ValidCandidates.Add(CandidateActor);
    }

    if (ValidCandidates.IsEmpty())
    {
        return nullptr;
    }

    if (DefenseTargeting.TargetSelection == ERenegadeDefenseTargetSelection::Random)
    {
        return ValidCandidates[FMath::RandRange(0, ValidCandidates.Num() - 1)];
    }

    const FVector Origin = GetTargetAimLocation();
    AActor* BestTarget = nullptr;
    float BestScore = TNumericLimits<float>::Max();

    for (AActor* Candidate : ValidCandidates)
    {
        float Score = FVector::DistSquared(Origin, Candidate->GetActorLocation());

        if (DefenseTargeting.TargetSelection == ERenegadeDefenseTargetSelection::LowestHealth)
        {
            if (const URenegadeSoldierCombatComponent* Combat = Candidate->FindComponentByClass<URenegadeSoldierCombatComponent>())
            {
                Score = FMath::Clamp(Combat->GetHealthPercent(), 0.0f, 1.0f) * 100000000.0f
                    + FVector::DistSquared(Origin, Candidate->GetActorLocation());
            }
        }

        if (Score < BestScore)
        {
            BestScore = Score;
            BestTarget = Candidate;
        }
    }

    return BestTarget;
}

bool URenegadeBuildingCombatComponent::HasLineOfSightToDefenseTarget(const AActor* Target, FVector* OutAimLocation) const
{
    if (!IsValid(Target))
    {
        return false;
    }

    FVector Start = GetTargetAimLocation();
    if (DefenseType == ERenegadeBuildingDefenseType::Obelisk)
    {
        Start = ResolveSceneLocation(
            ObeliskLaserStartComponent,
            ObeliskLaserStartComponentTag,
            RuntimeObeliskLaserStartComponent,
            ObeliskLaserStartRelativeOffset,
            Start);
    }
    else if (DefenseType == ERenegadeBuildingDefenseType::AdvancedGuardTower)
    {
        Start = ResolveSceneLocation(
            AGTLeftRocketMuzzleComponent,
            AGTLeftRocketMuzzleTag,
            RuntimeAGTLeftMuzzleComponent,
            AGTLeftRocketMuzzleRelativeOffset,
            Start);
    }

    const FVector AimLocation = GetDefenseTargetAimLocation(Target);
    if (OutAimLocation)
    {
        *OutAimLocation = AimLocation;
    }

    FHitResult Hit;
    if (!PerformDefenseTrace(Start, AimLocation, Hit))
    {
        return true;
    }

    if (Hit.GetActor() == Target)
    {
        return true;
    }

    const URenegadeSoldierCombatComponent* ResolvedCombat = ResolveSoldierCombatFromActorHierarchy(Hit.GetActor());
    return IsValid(ResolvedCombat) && ResolvedCombat->GetOwner() == Target;
}

FVector URenegadeBuildingCombatComponent::GetDefenseTargetAimLocation(const AActor* Target) const
{
    if (!IsValid(Target))
    {
        return FVector::ZeroVector;
    }

    if (const URenegadeSoldierCombatComponent* Combat = Target->FindComponentByClass<URenegadeSoldierCombatComponent>())
    {
        if (const USkeletalMeshComponent* Mesh = Combat->GetResolvedRagdollMesh())
        {
            return Mesh->Bounds.Origin + DefenseTargeting.TargetAimOffset;
        }
    }

    FVector BoundsOrigin = Target->GetActorLocation();
    FVector BoundsExtent = FVector::ZeroVector;
    Target->GetActorBounds(true, BoundsOrigin, BoundsExtent);
    return BoundsOrigin + DefenseTargeting.TargetAimOffset;
}

void URenegadeBuildingCombatComponent::SetDefenseTargetInternal(AActor* NewTarget)
{
    if (!HasAuthority())
    {
        return;
    }

    if (CurrentDefenseTarget == NewTarget)
    {
        return;
    }

    AActor* PreviousTarget = CurrentDefenseTarget;
    CurrentDefenseTarget = NewTarget;
    bObeliskCharging = false;

    if (UWorld* World = GetWorld())
    {
        World->GetTimerManager().ClearTimer(DefenseAttackTimer);
        World->GetTimerManager().ClearTimer(ObeliskChargeTimer);
    }

    OnDefenseTargetChanged.Broadcast(PreviousTarget, CurrentDefenseTarget);

    if (AActor* Owner = GetOwner())
    {
        Owner->ForceNetUpdate();
    }
}

void URenegadeBuildingCombatComponent::ScheduleNextDefenseAttack(const float DelaySeconds)
{
    if (!HasAuthority() || !bDefenseRunning || bIsDestroyed || !IsValid(CurrentDefenseTarget) || !GetWorld())
    {
        return;
    }

    GetWorld()->GetTimerManager().SetTimer(
        DefenseAttackTimer,
        this,
        &URenegadeBuildingCombatComponent::ExecuteScheduledDefenseAttack,
        FMath::Max(0.01f, DelaySeconds),
        false);
}

void URenegadeBuildingCombatComponent::ExecuteScheduledDefenseAttack()
{
    if (!HasAuthority() || !bDefenseRunning || bIsDestroyed || !bTeamPowerOnline || !IsValidDefenseTarget(CurrentDefenseTarget))
    {
        RefreshDefenseTargeting();
        return;
    }

    if (DefenseTargeting.bRequireLineOfSight && !HasLineOfSightToDefenseTarget(CurrentDefenseTarget))
    {
        SetDefenseTargetInternal(nullptr);
        RefreshDefenseTargeting();
        return;
    }

    switch (DefenseType)
    {
        case ERenegadeBuildingDefenseType::AdvancedGuardTower:
            FireAdvancedGuardTower();
            ScheduleNextDefenseAttack(AdvancedGuardTower.FireIntervalSeconds);
            break;

        case ERenegadeBuildingDefenseType::Obelisk:
            BeginObeliskCharge();
            break;

        default:
            break;
    }
}

bool URenegadeBuildingCombatComponent::IsDefensePowerAvailable() const
{
    if (!DefenseTargeting.bRequiresTeamPower)
    {
        return true;
    }

    if (UWorld* World = GetWorld())
    {
        if (URenegadeCombatRegistrySubsystem* Registry = World->GetSubsystem<URenegadeCombatRegistrySubsystem>())
        {
            return Registry->IsTeamPowerOnline(TeamId, DefenseTargeting.bTreatMissingPowerPlantAsPowered);
        }
    }

    return DefenseTargeting.bTreatMissingPowerPlantAsPowered;
}

void URenegadeBuildingCombatComponent::UpdateReplicatedPowerState()
{
    if (!HasAuthority())
    {
        return;
    }

    const bool bNewPowerOnline = IsDefensePowerAvailable();
    if (bTeamPowerOnline != bNewPowerOnline)
    {
        bTeamPowerOnline = bNewPowerOnline;
        OnTeamPowerChanged.Broadcast(bTeamPowerOnline);
        if (AActor* Owner = GetOwner())
        {
            Owner->ForceNetUpdate();
        }
    }
}

void URenegadeBuildingCombatComponent::FireAdvancedGuardTower()
{
    if (!HasAuthority() || !IsValidDefenseTarget(CurrentDefenseTarget))
    {
        return;
    }

    const FVector AimLocation = GetDefenseTargetAimLocation(CurrentDefenseTarget);
    const FVector FallbackStart = GetTargetAimLocation();
    const FVector LeftStart = ResolveSceneLocation(
        AGTLeftRocketMuzzleComponent,
        AGTLeftRocketMuzzleTag,
        RuntimeAGTLeftMuzzleComponent,
        AGTLeftRocketMuzzleRelativeOffset,
        FallbackStart);
    const FVector RightStart = ResolveSceneLocation(
        AGTRightRocketMuzzleComponent,
        AGTRightRocketMuzzleTag,
        RuntimeAGTRightMuzzleComponent,
        AGTRightRocketMuzzleRelativeOffset,
        FallbackStart);

    auto FireOneRocket = [this, &AimLocation](const FVector& Start, FVector& OutEnd) -> bool
    {
        FVector Direction = (AimLocation - Start).GetSafeNormal();
        if (Direction.IsNearlyZero())
        {
            OutEnd = Start;
            return false;
        }

        Direction = FMath::VRandCone(Direction, FMath::DegreesToRadians(FMath::Max(0.0f, AdvancedGuardTower.RocketSpreadDegrees)));
        const FVector DesiredEnd = Start + Direction * FMath::Max(100.0f, DefenseTargeting.AttackRange);

        FHitResult Hit;
        const bool bBlockingHit = PerformDefenseTrace(Start, DesiredEnd, Hit);
        OutEnd = bBlockingHit ? Hit.ImpactPoint : DesiredEnd;
        const bool bDamaged = bBlockingHit && ApplyDefensePointDamage(Hit, Start, AdvancedGuardTower.DamagePerRocket, AdvancedGuardTower.DamageTypeClass);

        if (DefenseTargeting.bDrawDebugAttackTrace && GetWorld())
        {
            const FColor Color = bDamaged ? FColor::Green : (bBlockingHit ? FColor::Orange : FColor::Red);
            DrawDebugLine(GetWorld(), Start, OutEnd, Color, false, DefenseTargeting.DebugTraceDuration, 0, DefenseTargeting.DebugTraceThickness);
            if (bBlockingHit)
            {
                DrawDebugPoint(GetWorld(), OutEnd, 12.0f, Color, false, DefenseTargeting.DebugTraceDuration);
            }
        }

        return true;
    };

    FVector LeftEnd = LeftStart;
    FVector RightEnd = RightStart;
    const bool bUseLeft = FireOneRocket(LeftStart, LeftEnd);
    const bool bUseRight = FireOneRocket(RightStart, RightEnd);

    MulticastAGTRocketsFired(bUseLeft, LeftStart, LeftEnd, bUseRight, RightStart, RightEnd, FallbackStart);
}

void URenegadeBuildingCombatComponent::BeginObeliskCharge()
{
    if (!HasAuthority() || bObeliskCharging || !IsValidDefenseTarget(CurrentDefenseTarget) || !GetWorld())
    {
        return;
    }

    bObeliskCharging = true;
    const FVector ChargeLocation = ResolveSceneLocation(
        ObeliskLaserStartComponent,
        ObeliskLaserStartComponentTag,
        RuntimeObeliskLaserStartComponent,
        ObeliskLaserStartRelativeOffset,
        GetTargetAimLocation());

    MulticastObeliskChargeStarted(ChargeLocation);
    GetWorld()->GetTimerManager().SetTimer(
        ObeliskChargeTimer,
        this,
        &URenegadeBuildingCombatComponent::FireObeliskLaser,
        FMath::Max(0.01f, Obelisk.ChargeSeconds),
        false);

    if (AActor* Owner = GetOwner())
    {
        Owner->ForceNetUpdate();
    }
}

void URenegadeBuildingCombatComponent::FireObeliskLaser()
{
    if (!HasAuthority())
    {
        return;
    }

    bObeliskCharging = false;

    if (!bDefenseRunning || bIsDestroyed || !IsDefensePowerAvailable() || !IsValidDefenseTarget(CurrentDefenseTarget))
    {
        RefreshDefenseTargeting();
        return;
    }

    const FVector Start = ResolveSceneLocation(
        ObeliskLaserStartComponent,
        ObeliskLaserStartComponentTag,
        RuntimeObeliskLaserStartComponent,
        ObeliskLaserStartRelativeOffset,
        GetTargetAimLocation());
    const FVector AimLocation = GetDefenseTargetAimLocation(CurrentDefenseTarget);
    const FVector Direction = (AimLocation - Start).GetSafeNormal();
    const FVector DesiredEnd = Start + Direction * FMath::Max(100.0f, DefenseTargeting.AttackRange);

    FHitResult Hit;
    const bool bBlockingHit = PerformDefenseTrace(Start, DesiredEnd, Hit);
    const FVector End = bBlockingHit ? Hit.ImpactPoint : DesiredEnd;
    const bool bDamaged = bBlockingHit && ApplyDefensePointDamage(Hit, Start, Obelisk.LaserDamage, Obelisk.DamageTypeClass);

    if (DefenseTargeting.bDrawDebugAttackTrace && GetWorld())
    {
        const FColor Color = bDamaged ? FColor::Cyan : (bBlockingHit ? FColor::Orange : FColor::Red);
        DrawDebugLine(GetWorld(), Start, End, Color, false, DefenseTargeting.DebugTraceDuration, 0, DefenseTargeting.DebugTraceThickness);
        if (bBlockingHit)
        {
            DrawDebugPoint(GetWorld(), End, 16.0f, Color, false, DefenseTargeting.DebugTraceDuration);
        }
    }

    MulticastObeliskFired(Start, End);
    ScheduleNextDefenseAttack(Obelisk.FireIntervalSeconds);

    if (AActor* Owner = GetOwner())
    {
        Owner->ForceNetUpdate();
    }
}

bool URenegadeBuildingCombatComponent::PerformDefenseTrace(const FVector& Start, const FVector& End, FHitResult& OutHit) const
{
    UWorld* World = GetWorld();
    if (!IsValid(World))
    {
        OutHit = FHitResult();
        return false;
    }

    FCollisionQueryParams QueryParams(SCENE_QUERY_STAT(RenegadeBuildingDefenseTrace), true, GetOwner());
    QueryParams.bReturnPhysicalMaterial = true;
    RenegadeBuildingPrivate::AddOwnerHierarchyToTraceIgnore(GetOwner(), QueryParams);

    FHitResult ChannelHit;
    const bool bChannelHit = World->LineTraceSingleByChannel(ChannelHit, Start, End, DefenseTargeting.TraceChannel, QueryParams);

    FHitResult PawnHit;
    bool bPawnHit = false;
    if (DefenseTargeting.bUsePawnObjectTraceFallback)
    {
        const FCollisionObjectQueryParams ObjectQueryParams(DefenseTargeting.PawnObjectType);
        bPawnHit = World->LineTraceSingleByObjectType(PawnHit, Start, End, ObjectQueryParams, QueryParams);
    }

    if (bChannelHit && bPawnHit)
    {
        OutHit = PawnHit.Distance < ChannelHit.Distance ? PawnHit : ChannelHit;
        return true;
    }

    if (bPawnHit)
    {
        OutHit = PawnHit;
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

URenegadeSoldierCombatComponent* URenegadeBuildingCombatComponent::ResolveSoldierCombatFromActorHierarchy(AActor* StartActor) const
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

    while (!PendingActors.IsEmpty() && InspectedActors < MaximumActorsToInspect)
    {
        AActor* Candidate = PendingActors.Pop(EAllowShrinking::No);
        if (!IsValid(Candidate) || VisitedActors.Contains(Candidate))
        {
            continue;
        }

        VisitedActors.Add(Candidate);
        ++InspectedActors;

        if (URenegadeSoldierCombatComponent* Combat = Candidate->FindComponentByClass<URenegadeSoldierCombatComponent>())
        {
            return Combat;
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

bool URenegadeBuildingCombatComponent::ApplyDefensePointDamage(
    const FHitResult& Hit,
    const FVector& TraceStart,
    const float Damage,
    TSubclassOf<UDamageType> DamageTypeClass)
{
    if (!HasAuthority() || Damage <= 0.0f)
    {
        return false;
    }

    URenegadeSoldierCombatComponent* HitCombat = ResolveSoldierCombatFromActorHierarchy(Hit.GetActor());
    if (!IsValid(HitCombat) || HitCombat->bIsDead || !IsHostileToActor(HitCombat->GetOwner()))
    {
        return false;
    }

    const FVector Direction = (Hit.ImpactPoint - TraceStart).GetSafeNormal();
    HitCombat->PrepareIncomingCombatHit(Hit, Direction);

    if (!DamageTypeClass)
    {
        DamageTypeClass = UDamageType::StaticClass();
    }

    const float AppliedDamage = UGameplayStatics::ApplyPointDamage(
        HitCombat->GetOwner(),
        Damage,
        Direction,
        Hit,
        GetOwner() ? GetOwner()->GetInstigatorController() : nullptr,
        GetOwner(),
        DamageTypeClass);

    HitCombat->ClearIncomingCombatHit();
    return AppliedDamage > 0.0f;
}

void URenegadeBuildingCombatComponent::MulticastAGTRocketsFired_Implementation(
    const bool bUseLeft,
    const FVector_NetQuantize LeftStart,
    const FVector_NetQuantize LeftEnd,
    const bool bUseRight,
    const FVector_NetQuantize RightStart,
    const FVector_NetQuantize RightEnd,
    const FVector_NetQuantize SoundLocation)
{
    if (IsValid(AdvancedGuardTower.RocketFireSound))
    {
        UGameplayStatics::PlaySoundAtLocation(
            this,
            AdvancedGuardTower.RocketFireSound,
            SoundLocation,
            FMath::Max(0.0f, AdvancedGuardTower.RocketFireVolumeMultiplier));
    }

    if (bUseLeft)
    {
        SpawnRocketVisual(LeftStart, LeftEnd, true);
        OnDefenseFired.Broadcast(ERenegadeBuildingDefenseType::AdvancedGuardTower, LeftStart, LeftEnd);
    }
    if (bUseRight)
    {
        SpawnRocketVisual(RightStart, RightEnd, true);
        OnDefenseFired.Broadcast(ERenegadeBuildingDefenseType::AdvancedGuardTower, RightStart, RightEnd);
    }
}

void URenegadeBuildingCombatComponent::MulticastObeliskChargeStarted_Implementation(const FVector_NetQuantize ChargeLocation)
{
    if (IsValid(Obelisk.ChargeSound))
    {
        UGameplayStatics::PlaySoundAtLocation(
            this,
            Obelisk.ChargeSound,
            ChargeLocation,
            FMath::Max(0.0f, Obelisk.ChargeSoundVolumeMultiplier));
    }
}

void URenegadeBuildingCombatComponent::MulticastObeliskFired_Implementation(const FVector_NetQuantize LaserStart, const FVector_NetQuantize LaserEnd)
{
    if (IsValid(Obelisk.ShootSound))
    {
        UGameplayStatics::PlaySoundAtLocation(
            this,
            Obelisk.ShootSound,
            LaserStart,
            FMath::Max(0.0f, Obelisk.ShootSoundVolumeMultiplier));
    }

    SpawnObeliskLaserVisual(LaserStart, LaserEnd);
    OnDefenseFired.Broadcast(ERenegadeBuildingDefenseType::Obelisk, LaserStart, LaserEnd);
}

void URenegadeBuildingCombatComponent::SpawnRocketVisual(const FVector& Start, const FVector& End, const bool bSpawnImpactEffect)
{
    if (!IsValid(AdvancedGuardTower.RocketMesh) || !IsValid(GetOwner()) || (GetWorld() && GetWorld()->GetNetMode() == NM_DedicatedServer))
    {
        return;
    }

    int32 VisualIndex = INDEX_NONE;
    UStaticMeshComponent* RocketComponent = AcquireRocketVisualComponent(VisualIndex);
    if (!IsValid(RocketComponent) || !RocketVisualStates.IsValidIndex(VisualIndex))
    {
        return;
    }

    const FVector Direction = (End - Start).GetSafeNormal();
    const float Distance = FVector::Distance(Start, End);
    const float Duration = FMath::Min(
        FMath::Max(0.05f, AdvancedGuardTower.MaximumRocketVisualLifetime),
        Distance / FMath::Max(1.0f, AdvancedGuardTower.RocketVisualSpeed));

    FRenegadeBuildingRocketRuntimeState& State = RocketVisualStates[VisualIndex];
    State.StartLocation = Start;
    State.EndLocation = End;
    State.TravelRotation = Direction.Rotation() + AdvancedGuardTower.RocketMeshRotationOffset;
    State.ElapsedSeconds = 0.0f;
    State.DurationSeconds = FMath::Max(0.01f, Duration);
    State.bActive = true;
    State.bSpawnImpactEffectOnArrival = bSpawnImpactEffect;

    RocketComponent->SetStaticMesh(AdvancedGuardTower.RocketMesh);
    RocketComponent->SetWorldLocationAndRotation(Start, State.TravelRotation);
    RocketComponent->SetWorldScale3D(AdvancedGuardTower.RocketMeshScale);
    RocketComponent->SetCastShadow(AdvancedGuardTower.bRocketVisualCastsShadow);
    RocketComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);

    if (IsValid(AdvancedGuardTower.RocketMaterialOverride))
    {
        RocketComponent->SetMaterial(0, AdvancedGuardTower.RocketMaterialOverride);
    }

    RocketComponent->SetVisibility(true, true);
    RocketComponent->Activate(true);
    UpdateTickState();
}

UStaticMeshComponent* URenegadeBuildingCombatComponent::AcquireRocketVisualComponent(int32& OutIndex)
{
    for (int32 Index = 0; Index < RocketVisualStates.Num(); ++Index)
    {
        if (!RocketVisualStates[Index].bActive && IsValid(RocketVisualComponents[Index]))
        {
            OutIndex = Index;
            return RocketVisualComponents[Index];
        }
    }

    AActor* Owner = GetOwner();
    if (!IsValid(Owner))
    {
        OutIndex = INDEX_NONE;
        return nullptr;
    }

    UStaticMeshComponent* NewComponent = NewObject<UStaticMeshComponent>(Owner);
    if (!IsValid(NewComponent))
    {
        OutIndex = INDEX_NONE;
        return nullptr;
    }

    NewComponent->SetMobility(EComponentMobility::Movable);
    NewComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    NewComponent->SetGenerateOverlapEvents(false);
    NewComponent->SetCanEverAffectNavigation(false);
    NewComponent->SetVisibility(false, true);
    NewComponent->RegisterComponent();

    RocketVisualComponents.Add(NewComponent);
    RocketVisualStates.AddDefaulted();
    OutIndex = RocketVisualComponents.Num() - 1;
    return NewComponent;
}

void URenegadeBuildingCombatComponent::UpdateRocketVisuals(const float DeltaTime)
{
    for (int32 Index = 0; Index < RocketVisualStates.Num(); ++Index)
    {
        FRenegadeBuildingRocketRuntimeState& State = RocketVisualStates[Index];
        UStaticMeshComponent* Component = RocketVisualComponents.IsValidIndex(Index) ? RocketVisualComponents[Index] : nullptr;
        if (!State.bActive || !IsValid(Component))
        {
            continue;
        }

        State.ElapsedSeconds += DeltaTime;
        const float Alpha = FMath::Clamp(State.ElapsedSeconds / FMath::Max(0.01f, State.DurationSeconds), 0.0f, 1.0f);
        Component->SetWorldLocationAndRotation(FMath::Lerp(State.StartLocation, State.EndLocation, Alpha), State.TravelRotation);

        if (Alpha >= 1.0f)
        {
            DeactivateRocketVisual(Index, true);
        }
    }
}

void URenegadeBuildingCombatComponent::DeactivateRocketVisual(const int32 Index, const bool bSpawnImpactEffect)
{
    if (!RocketVisualStates.IsValidIndex(Index))
    {
        return;
    }

    FRenegadeBuildingRocketRuntimeState& State = RocketVisualStates[Index];
    const FVector ImpactLocation = State.EndLocation;
    const bool bShouldSpawnImpact = bSpawnImpactEffect && State.bSpawnImpactEffectOnArrival;
    State = FRenegadeBuildingRocketRuntimeState();

    if (RocketVisualComponents.IsValidIndex(Index) && IsValid(RocketVisualComponents[Index]))
    {
        RocketVisualComponents[Index]->SetVisibility(false, true);
        RocketVisualComponents[Index]->Deactivate();
    }

    if (bShouldSpawnImpact && AdvancedGuardTower.RocketImpactEffectActorClass && GetWorld())
    {
        FActorSpawnParameters SpawnParameters;
        SpawnParameters.Owner = GetOwner();
        SpawnParameters.Instigator = GetOwner() ? GetOwner()->GetInstigator() : nullptr;
        GetWorld()->SpawnActor<AActor>(AdvancedGuardTower.RocketImpactEffectActorClass, ImpactLocation, FRotator::ZeroRotator, SpawnParameters);
    }
}

void URenegadeBuildingCombatComponent::StopAllRocketVisuals()
{
    for (int32 Index = 0; Index < RocketVisualStates.Num(); ++Index)
    {
        if (RocketVisualStates[Index].bActive)
        {
            DeactivateRocketVisual(Index, false);
        }
    }
    UpdateTickState();
}

void URenegadeBuildingCombatComponent::SpawnObeliskLaserVisual(const FVector& Start, const FVector& End)
{
    if (GetWorld() && GetWorld()->GetNetMode() == NM_DedicatedServer)
    {
        return;
    }

    // The Obelisk is a single-beam weapon. Remove any previous looping visual before
    // spawning the next shot so legacy Cascade systems can never accumulate.
    StopAllObeliskLaserVisuals();

    const FVector Direction = (End - Start).GetSafeNormal();
    const float Distance = FVector::Distance(Start, End);
    // Existing Blueprint structs created before v1.4.3 can deserialize the new field as zero.
    // Preserve a visible but brief default rather than reducing the beam to a single frame.
    const float LaserVisualLifetime = Obelisk.LaserVisualLifetimeSeconds > KINDA_SMALL_NUMBER
        ? Obelisk.LaserVisualLifetimeSeconds
        : 0.35f;
    const FRotator TraceRotation = Obelisk.bRotateLaserSystemAlongTrace ? Direction.Rotation() : FRotator::ZeroRotator;
    const FRotator Rotation = TraceRotation + Obelisk.LaserVisualRotationOffset;

    const auto SanitizeScaleAxis = [](const float Value) -> float
    {
        // Newly added nested-struct values can deserialize as zero in older Blueprint assets.
        // Treat zero as the safe 1.0 default so upgrading cannot make the laser invisible.
        return FMath::IsNearlyZero(Value) ? 1.0f : FMath::Abs(Value);
    };

    FVector BaseScale(
        SanitizeScaleAxis(Obelisk.LaserVisualScale.X),
        SanitizeScaleAxis(Obelisk.LaserVisualScale.Y),
        SanitizeScaleAxis(Obelisk.LaserVisualScale.Z));

    const float LengthMultiplier = Obelisk.LaserLengthScaleMultiplier > KINDA_SMALL_NUMBER
        ? Obelisk.LaserLengthScaleMultiplier
        : 1.0f;
    const float ThicknessMultiplier = Obelisk.LaserThicknessScaleMultiplier > KINDA_SMALL_NUMBER
        ? Obelisk.LaserThicknessScaleMultiplier
        : 1.0f;
    const float TraceLengthScale = Distance / FMath::Max(1.0f, Obelisk.AuthoredLaserLength);

    BaseScale.X *= LengthMultiplier;
    BaseScale.Y *= ThicknessMultiplier;
    BaseScale.Z *= ThicknessMultiplier;

    FVector NiagaraScale = BaseScale;
    if (Obelisk.bScaleLaserSystemAlongX)
    {
        NiagaraScale.X *= TraceLengthScale;
    }

    FVector CascadeScale = BaseScale;
    if (Obelisk.bAutoFitCascadeLaserToTrace || !Obelisk.bSetCascadeBeamSourceAndTarget)
    {
        CascadeScale.X *= TraceLengthScale;
    }

    const auto SpawnNiagaraLaser = [&]() -> bool
    {
        if (!IsValid(Obelisk.LaserNiagaraSystem))
        {
            return false;
        }

        UNiagaraComponent* NiagaraComponent = UNiagaraFunctionLibrary::SpawnSystemAtLocation(
            this,
            Obelisk.LaserNiagaraSystem,
            Start,
            Rotation,
            NiagaraScale,
            false,
            false,
            ENCPoolMethod::None,
            true);

        if (!IsValid(NiagaraComponent))
        {
            return false;
        }

        if (!Obelisk.LaserStartParameterName.IsNone())
        {
            if (Obelisk.BeamParameterType == ERenegadeNiagaraBeamParameterType::Position)
            {
                NiagaraComponent->SetVariablePosition(Obelisk.LaserStartParameterName, Start);
            }
            else
            {
                NiagaraComponent->SetVariableVec3(Obelisk.LaserStartParameterName, Start);
            }
        }

        if (!Obelisk.LaserEndParameterName.IsNone())
        {
            if (Obelisk.BeamParameterType == ERenegadeNiagaraBeamParameterType::Position)
            {
                NiagaraComponent->SetVariablePosition(Obelisk.LaserEndParameterName, End);
            }
            else
            {
                NiagaraComponent->SetVariableVec3(Obelisk.LaserEndParameterName, End);
            }
        }

        NiagaraComponent->Activate(true);
        ActiveObeliskNiagaraVisuals.Add(NiagaraComponent);

        if (UWorld* World = GetWorld())
        {
            FTimerHandle CleanupTimerHandle;
            FTimerDelegate CleanupDelegate;
            CleanupDelegate.BindUObject(this, &URenegadeBuildingCombatComponent::CleanupObeliskNiagaraVisual, NiagaraComponent);
            World->GetTimerManager().SetTimer(
                CleanupTimerHandle,
                CleanupDelegate,
                FMath::Max(0.01f, LaserVisualLifetime),
                false);
        }

        return true;
    };

    const auto SpawnCascadeLaser = [&]() -> bool
    {
        if (!IsValid(Obelisk.LaserCascadeParticleSystem))
        {
            return false;
        }

        AActor* Owner = GetOwner();
        if (!IsValid(Owner))
        {
            return false;
        }

        // Do not use SpawnEmitterAtLocation here. Some looping Cascade beam assets can
        // auto-activate during registration and display their authored default beam before
        // the authoritative source/target points are supplied. Build the component inactive,
        // configure it completely, and only then activate it.
        UParticleSystemComponent* ParticleComponent = NewObject<UParticleSystemComponent>(Owner, NAME_None, RF_Transient);
        if (!IsValid(ParticleComponent))
        {
            return false;
        }

        ParticleComponent->SetAutoActivate(false);
        ParticleComponent->bAutoDestroy = false;
        ParticleComponent->SetVisibility(false, true);
        ParticleComponent->SetTemplate(Obelisk.LaserCascadeParticleSystem);
        ParticleComponent->SetMobility(EComponentMobility::Movable);
        Owner->AddInstanceComponent(ParticleComponent);
        if (!ParticleComponent->IsRegistered())
        {
            ParticleComponent->RegisterComponent();
        }
        ParticleComponent->SetWorldLocationAndRotation(Start, Rotation);
        ParticleComponent->SetWorldScale3D(CascadeScale);

        const auto ApplyCascadeTraceEndpoints = [&]()
        {
            // Always drive the authoritative trace endpoints. This intentionally no longer
            // depends on the v1.4.1 checkbox, which could deserialize disabled in existing BPs.
            ParticleComponent->SetBeamSourcePoint(
                FMath::Max(0, Obelisk.CascadeBeamEmitterIndex),
                Start,
                FMath::Max(0, Obelisk.CascadeBeamSourceIndex));

            ParticleComponent->SetBeamTargetPoint(
                FMath::Max(0, Obelisk.CascadeBeamEmitterIndex),
                End,
                FMath::Max(0, Obelisk.CascadeBeamTargetIndex));

            if (!Obelisk.CascadeStartVectorParameterName.IsNone())
            {
                ParticleComponent->SetVectorParameter(Obelisk.CascadeStartVectorParameterName, Start);
            }

            if (!Obelisk.CascadeEndVectorParameterName.IsNone())
            {
                ParticleComponent->SetVectorParameter(Obelisk.CascadeEndVectorParameterName, End);
            }
        };

        // Set before activation for assets that read instance parameters during spawn,
        // then set again after activation for native Cascade Beam TypeData emitters.
        ApplyCascadeTraceEndpoints();
        ParticleComponent->SetVisibility(true, true);
        ParticleComponent->ActivateSystem(true);
        ParticleComponent->SetWorldLocationAndRotation(Start, Rotation);
        ParticleComponent->SetWorldScale3D(CascadeScale);
        ApplyCascadeTraceEndpoints();
        ActiveObeliskCascadeVisuals.Add(ParticleComponent);

        if (UWorld* World = GetWorld())
        {
            FTimerHandle CleanupTimerHandle;
            FTimerDelegate CleanupDelegate;
            CleanupDelegate.BindUObject(this, &URenegadeBuildingCombatComponent::CleanupObeliskCascadeVisual, ParticleComponent);
            World->GetTimerManager().SetTimer(
                CleanupTimerHandle,
                CleanupDelegate,
                FMath::Max(0.01f, LaserVisualLifetime),
                false);
        }

        // Some legacy Cascade emitters create their beam instance on the next world tick.
        // Reapply once more after initialization without keeping the component alive artificially.
        if (UWorld* World = GetWorld())
        {
            const TWeakObjectPtr<UParticleSystemComponent> WeakParticleComponent = ParticleComponent;
            const int32 EmitterIndex = FMath::Max(0, Obelisk.CascadeBeamEmitterIndex);
            const int32 SourceIndex = FMath::Max(0, Obelisk.CascadeBeamSourceIndex);
            const int32 TargetIndex = FMath::Max(0, Obelisk.CascadeBeamTargetIndex);
            const FName StartParameterName = Obelisk.CascadeStartVectorParameterName;
            const FName EndParameterName = Obelisk.CascadeEndVectorParameterName;
            const FVector CapturedStart = Start;
            const FVector CapturedEnd = End;

            World->GetTimerManager().SetTimerForNextTick(FTimerDelegate::CreateLambda(
                [WeakParticleComponent, EmitterIndex, SourceIndex, TargetIndex, StartParameterName, EndParameterName, CapturedStart, CapturedEnd]()
                {
                    if (!WeakParticleComponent.IsValid())
                    {
                        return;
                    }

                    UParticleSystemComponent* DeferredParticleComponent = WeakParticleComponent.Get();
                    DeferredParticleComponent->SetBeamSourcePoint(EmitterIndex, CapturedStart, SourceIndex);
                    DeferredParticleComponent->SetBeamTargetPoint(EmitterIndex, CapturedEnd, TargetIndex);

                    if (!StartParameterName.IsNone())
                    {
                        DeferredParticleComponent->SetVectorParameter(StartParameterName, CapturedStart);
                    }

                    if (!EndParameterName.IsNone())
                    {
                        DeferredParticleComponent->SetVectorParameter(EndParameterName, CapturedEnd);
                    }
                }));
        }

        return true;
    };

    bool bSpawnedParticleVisual = false;
    if (Obelisk.ParticleSystemPreference == ERenegadeObeliskParticlePreference::CascadeThenNiagara)
    {
        bSpawnedParticleVisual = SpawnCascadeLaser();
        if (!bSpawnedParticleVisual)
        {
            bSpawnedParticleVisual = SpawnNiagaraLaser();
        }
    }
    else
    {
        bSpawnedParticleVisual = SpawnNiagaraLaser();
        if (!bSpawnedParticleVisual)
        {
            bSpawnedParticleVisual = SpawnCascadeLaser();
        }
    }

    if (!bSpawnedParticleVisual && !Obelisk.LaserEffectActorClass)
    {
        UE_LOG(
            LogRenegadeSoldierCombat,
            Verbose,
            TEXT("Obelisk '%s' fired without a configured Niagara, Cascade, or Blueprint laser visual."),
            *GetNameSafe(GetOwner()));
    }

    // Preserve the existing Blueprint actor hook as an optional additional presentation layer.
    if (Obelisk.LaserEffectActorClass && GetWorld())
    {
        FVector ActorScale = BaseScale;
        if (Obelisk.bScaleLaserSystemAlongX)
        {
            ActorScale.X *= TraceLengthScale;
        }
        FTransform SpawnTransform(Rotation, Start, ActorScale);
        FActorSpawnParameters SpawnParameters;
        SpawnParameters.Owner = GetOwner();
        SpawnParameters.Instigator = GetOwner() ? GetOwner()->GetInstigator() : nullptr;
        if (AActor* LaserEffectActor = GetWorld()->SpawnActor<AActor>(Obelisk.LaserEffectActorClass, SpawnTransform, SpawnParameters))
        {
            LaserEffectActor->SetLifeSpan(FMath::Max(0.01f, LaserVisualLifetime));
        }
    }
}

void URenegadeBuildingCombatComponent::CleanupObeliskCascadeVisual(UParticleSystemComponent* ParticleComponent)
{
    ActiveObeliskCascadeVisuals.RemoveSingleSwap(ParticleComponent);

    if (!IsValid(ParticleComponent))
    {
        return;
    }

    // Looping Cascade beams do not necessarily finish on their own. Force all particles
    // out before destroying the runtime component so no laser remains after the shot.
    ParticleComponent->SetVisibility(false, true);
    ParticleComponent->DeactivateSystem();
    ParticleComponent->KillParticlesForced();
    ParticleComponent->SetTemplate(nullptr);
    ParticleComponent->DestroyComponent();
}

void URenegadeBuildingCombatComponent::CleanupObeliskNiagaraVisual(UNiagaraComponent* NiagaraComponent)
{
    ActiveObeliskNiagaraVisuals.RemoveSingleSwap(NiagaraComponent);

    if (!IsValid(NiagaraComponent))
    {
        return;
    }

    NiagaraComponent->Deactivate();
    NiagaraComponent->DestroyComponent();
}

void URenegadeBuildingCombatComponent::StopAllObeliskLaserVisuals()
{
    const TArray<TObjectPtr<UParticleSystemComponent>> CascadeVisuals = ActiveObeliskCascadeVisuals;
    for (UParticleSystemComponent* ParticleComponent : CascadeVisuals)
    {
        CleanupObeliskCascadeVisual(ParticleComponent);
    }
    ActiveObeliskCascadeVisuals.Reset();

    const TArray<TObjectPtr<UNiagaraComponent>> NiagaraVisuals = ActiveObeliskNiagaraVisuals;
    for (UNiagaraComponent* NiagaraComponent : NiagaraVisuals)
    {
        CleanupObeliskNiagaraVisual(NiagaraComponent);
    }
    ActiveObeliskNiagaraVisuals.Reset();
}


FTransform URenegadeBuildingCombatComponent::GetHarvesterSpawnTransform() const
{
    AActor* Owner = GetOwner();
    if (!IsValid(Owner))
    {
        return FTransform::Identity;
    }

    USceneComponent* SpawnPoint = ResolveSceneComponent(HarvesterSpawnPointComponent, HarvesterSpawnPointComponentTag, nullptr);
    if (IsValid(SpawnPoint))
    {
        const FTransform BaseTransform = SpawnPoint->GetComponentTransform();
        const FVector WorldLocation = BaseTransform.TransformPositionNoScale(HarvesterSpawnRelativeOffset);
        const FRotator WorldRotation = (BaseTransform.GetRotation() * HarvesterSpawnRotationOffset.Quaternion()).Rotator();
        return FTransform(WorldRotation, WorldLocation, FVector::OneVector);
    }

    const FTransform OwnerTransform = Owner->GetActorTransform();
    const FVector WorldLocation = OwnerTransform.TransformPositionNoScale(HarvesterSpawnRelativeOffset);
    const FRotator WorldRotation = (OwnerTransform.GetRotation() * HarvesterSpawnRotationOffset.Quaternion()).Rotator();
    return FTransform(WorldRotation, WorldLocation, FVector::OneVector);
}

FTransform URenegadeBuildingCombatComponent::GetHarvesterDockTransform() const
{
    if (IsValid(HarvesterRefineryDockPoint) && HarvesterRefineryDockPoint->IsCompatibleWithTeam(TeamId))
    {
        return HarvesterRefineryDockPoint->GetDockTransform();
    }

    AActor* Owner = GetOwner();
    if (!IsValid(Owner))
    {
        return FTransform::Identity;
    }

    USceneComponent* DockPoint = ResolveSceneComponent(HarvesterDockPointComponent, HarvesterDockPointComponentTag, nullptr);
    if (IsValid(DockPoint))
    {
        const FTransform BaseTransform = DockPoint->GetComponentTransform();
        const FVector WorldLocation = BaseTransform.TransformPositionNoScale(HarvesterDockRelativeOffset);
        const FRotator WorldRotation = (BaseTransform.GetRotation() * HarvesterDockRotationOffset.Quaternion()).Rotator();
        return FTransform(WorldRotation, WorldLocation, FVector::OneVector);
    }

    const FTransform OwnerTransform = Owner->GetActorTransform();
    const FVector WorldLocation = OwnerTransform.TransformPositionNoScale(HarvesterDockRelativeOffset);
    const FRotator WorldRotation = (OwnerTransform.GetRotation() * HarvesterDockRotationOffset.Quaternion()).Rotator();
    return FTransform(WorldRotation, WorldLocation, FVector::OneVector);
}

ARenegadeHarvestPoint* URenegadeBuildingCombatComponent::ResolveHarvesterHarvestPoint()
{
    if (IsValid(HarvesterHarvestPoint))
    {
        if (HarvesterHarvestPoint->IsCompatibleWithTeam(TeamId))
        {
            return HarvesterHarvestPoint;
        }
        return nullptr;
    }

    if (!HasAuthority() || !GetWorld() || !bAutoFindHarvesterHarvestPoint)
    {
        return nullptr;
    }

    const FVector Origin = IsValid(GetOwner()) ? GetOwner()->GetActorLocation() : FVector::ZeroVector;
    ARenegadeHarvestPoint* BestPoint = nullptr;
    float BestDistanceSq = BIG_NUMBER;
    for (TActorIterator<ARenegadeHarvestPoint> It(GetWorld()); It; ++It)
    {
        ARenegadeHarvestPoint* Candidate = *It;
        if (!IsValid(Candidate) || !Candidate->IsCompatibleWithTeam(TeamId))
        {
            continue;
        }
        if (!HarvesterHarvestPointGroup.IsNone() && Candidate->HarvestPointGroup != HarvesterHarvestPointGroup)
        {
            continue;
        }
        const float DistanceSq = FVector::DistSquared2D(Origin, Candidate->GetHarvestLocation());
        if (DistanceSq < BestDistanceSq)
        {
            BestDistanceSq = DistanceSq;
            BestPoint = Candidate;
        }
    }

    HarvesterHarvestPoint = BestPoint;
    return BestPoint;
}

ARenegadeRefineryDockPoint* URenegadeBuildingCombatComponent::ResolveHarvesterRefineryDockPoint()
{
    if (IsValid(HarvesterRefineryDockPoint))
    {
        if (HarvesterRefineryDockPoint->IsCompatibleWithTeam(TeamId))
        {
            HarvesterRefineryDockPoint->SetOwningRefineryActor(GetOwner());
            return HarvesterRefineryDockPoint;
        }
        return nullptr;
    }

    if (!HasAuthority() || !GetWorld() || !bAutoFindHarvesterRefineryDockPoint)
    {
        return nullptr;
    }

    const FVector Origin = IsValid(GetOwner()) ? GetOwner()->GetActorLocation() : FVector::ZeroVector;
    ARenegadeRefineryDockPoint* BestPoint = nullptr;
    float BestDistanceSq = BIG_NUMBER;
    for (TActorIterator<ARenegadeRefineryDockPoint> It(GetWorld()); It; ++It)
    {
        ARenegadeRefineryDockPoint* Candidate = *It;
        if (!IsValid(Candidate) || !Candidate->IsCompatibleWithTeam(TeamId))
        {
            continue;
        }
        if (!HarvesterRefineryDockPointGroup.IsNone() && Candidate->DockPointGroup != HarvesterRefineryDockPointGroup)
        {
            continue;
        }
        if (IsValid(Candidate->OwningRefineryActor) && Candidate->OwningRefineryActor != GetOwner())
        {
            continue;
        }
        const float DistanceSq = FVector::DistSquared2D(Origin, Candidate->GetDockTransform().GetLocation());
        if (DistanceSq < BestDistanceSq)
        {
            BestDistanceSq = DistanceSq;
            BestPoint = Candidate;
        }
    }

    HarvesterRefineryDockPoint = BestPoint;
    if (IsValid(BestPoint))
    {
        BestPoint->SetOwningRefineryActor(GetOwner());
    }
    return BestPoint;
}

bool URenegadeBuildingCombatComponent::IsPrimaryHarvesterSpawnerForOwner() const
{
    AActor* Owner = GetOwner();
    if (!IsValid(Owner))
    {
        return false;
    }

    TArray<URenegadeBuildingCombatComponent*> BuildingComponents;
    Owner->GetComponents<URenegadeBuildingCombatComponent>(BuildingComponents);
    for (URenegadeBuildingCombatComponent* Component : BuildingComponents)
    {
        if (IsValid(Component)
            && Component->BuildingType == ERenegadeBuildingType::Refinery
            && Component->bEnableHarvesterSpawner)
        {
            return Component == this;
        }
    }
    return true;
}

AActor* URenegadeBuildingCombatComponent::FindExistingTeamHarvester() const
{
    if (!HasAuthority() || !GetWorld() || !HarvesterCharacterClass || TeamId.IsNone())
    {
        return nullptr;
    }

    for (TActorIterator<ACharacter> It(GetWorld()); It; ++It)
    {
        ACharacter* Candidate = *It;
        if (!IsValid(Candidate) || !Candidate->IsA(HarvesterCharacterClass) || Candidate->IsHidden())
        {
            continue;
        }

        URenegadeHarvesterCombatComponent* HarvesterCombat = Candidate->FindComponentByClass<URenegadeHarvesterCombatComponent>();
        if (!IsValid(HarvesterCombat) || !HarvesterCombat->IsOperational())
        {
            continue;
        }

        if (!HarvesterCombat->TeamId.IsNone()
            && TeamId.IsEqual(HarvesterCombat->TeamId, ENameCase::IgnoreCase))
        {
            return Candidate;
        }

        if (URenegadeBuildingCombatComponent* ExistingRefinery = HarvesterCombat->GetOwningRefinery())
        {
            if (ExistingRefinery->GetOwner() == GetOwner())
            {
                return Candidate;
            }
        }
    }
    return nullptr;
}

AActor* URenegadeBuildingCombatComponent::FindExistingHarvesterForRefinery() const
{
    if (!HasAuthority() || !GetWorld() || !HarvesterCharacterClass || !IsValid(GetOwner()))
    {
        return nullptr;
    }

    const FVector SpawnLocation = GetHarvesterSpawnTransform().GetLocation();
    const float MaxDistanceSq = FMath::Square(FMath::Max(100.0f, ExistingHarvesterAdoptionRadius));
    ACharacter* Best = nullptr;
    float BestDistanceSq = MaxDistanceSq;

    for (TActorIterator<ACharacter> It(GetWorld()); It; ++It)
    {
        ACharacter* Candidate = *It;
        if (!IsValid(Candidate) || !Candidate->IsA(HarvesterCharacterClass) || Candidate->IsHidden())
        {
            continue;
        }

        URenegadeHarvesterCombatComponent* HarvesterCombat = Candidate->FindComponentByClass<URenegadeHarvesterCombatComponent>();
        if (!IsValid(HarvesterCombat) || !HarvesterCombat->IsOperational())
        {
            continue;
        }

        if (URenegadeBuildingCombatComponent* ExistingRefinery = HarvesterCombat->GetOwningRefinery())
        {
            if (ExistingRefinery != this && ExistingRefinery->GetOwner() != GetOwner())
            {
                continue;
            }
        }

        if (!TeamId.IsNone() && !HarvesterCombat->TeamId.IsNone()
            && !TeamId.IsEqual(HarvesterCombat->TeamId, ENameCase::IgnoreCase))
        {
            continue;
        }

        const float DistanceSq = FVector::DistSquared2D(Candidate->GetActorLocation(), SpawnLocation);
        if (DistanceSq <= BestDistanceSq)
        {
            BestDistanceSq = DistanceSq;
            Best = Candidate;
        }
    }

    return Best;
}

void URenegadeBuildingCombatComponent::AdoptHarvesterAsActive(ACharacter* Harvester)
{
    if (!HasAuthority() || !IsValid(Harvester))
    {
        return;
    }

    ClearHarvesterRespawnTimer();
    ActiveHarvester = Harvester;
    Harvester->OnDestroyed.AddUniqueDynamic(this, &URenegadeBuildingCombatComponent::HandleSpawnedHarvesterActorDestroyed);

    if (bEnsureSpawnedHarvesterHasAIController && !IsValid(Harvester->GetController()))
    {
        Harvester->SpawnDefaultController();
    }

    if (URenegadeHarvesterCombatComponent* HarvesterCombat = Harvester->FindComponentByClass<URenegadeHarvesterCombatComponent>())
    {
        HarvesterCombat->SetTeamId(TeamId);
        HarvesterCombat->SetOwningRefinery(this);
        HarvesterCombat->RequiredHarvestPointGroup = HarvesterHarvestPointGroup;
        HarvesterCombat->RequiredRefineryDockPointGroup = HarvesterRefineryDockPointGroup;
        if (ARenegadeHarvestPoint* HarvestPoint = ResolveHarvesterHarvestPoint())
        {
            HarvesterCombat->SetAssignedHarvestPoint(HarvestPoint);
        }
        if (ARenegadeRefineryDockPoint* DockPoint = ResolveHarvesterRefineryDockPoint())
        {
            HarvesterCombat->SetAssignedRefineryDockPoint(DockPoint);
        }
    }

    const bool bWasRespawn = bHasSpawnedHarvesterAtLeastOnce;
    bHasSpawnedHarvesterAtLeastOnce = true;
    OnHarvesterSpawned.Broadcast(Harvester);
    if (bWasRespawn)
    {
        OnHarvesterRespawned.Broadcast(Harvester);
    }
    if (AActor* Owner = GetOwner())
    {
        Owner->ForceNetUpdate();
    }
}

void URenegadeBuildingCombatComponent::StartInitialHarvesterSpawn()
{
    if (!HasAuthority() || !GetWorld() || !IsPrimaryHarvesterSpawnerForOwner() || bInitialHarvesterSpawnRequested || bHarvesterSpawnInProgress || IsValid(ActiveHarvester))
    {
        return;
    }
    bInitialHarvesterSpawnRequested = true;

    if (bEnforceSingleActiveHarvesterPerTeam)
    {
        if (ACharacter* ExistingTeamHarvester = Cast<ACharacter>(FindExistingTeamHarvester()))
        {
            UE_LOG(LogRenegadeSoldierCombat, Log, TEXT("Refinery %s adopted existing team Harvester %s instead of creating a duplicate."), *GetNameSafe(GetOwner()), *GetNameSafe(ExistingTeamHarvester));
            AdoptHarvesterAsActive(ExistingTeamHarvester);
            return;
        }
    }

    if (bAdoptExistingHarvesterOnBeginPlay)
    {
        if (ACharacter* ExistingHarvester = Cast<ACharacter>(FindExistingHarvesterForRefinery()))
        {
            AdoptHarvesterAsActive(ExistingHarvester);
            return;
        }
    }

    ClearHarvesterRespawnTimer();
    const float Delay = FMath::Max(0.0f, InitialHarvesterSpawnDelaySeconds);
    if (Delay <= KINDA_SMALL_NUMBER)
    {
        SpawnHarvesterNow();
        return;
    }
    GetWorld()->GetTimerManager().SetTimer(HarvesterRespawnTimer, this, &URenegadeBuildingCombatComponent::HandleHarvesterRespawnTimer, Delay, false);
    OnHarvesterRespawnScheduled.Broadcast(Delay);
}

void URenegadeBuildingCombatComponent::HandleHarvesterRespawnTimer()
{
    SpawnHarvesterNow();
}

void URenegadeBuildingCombatComponent::ClearHarvesterRespawnTimer()
{
    if (UWorld* World = GetWorld())
    {
        World->GetTimerManager().ClearTimer(HarvesterRespawnTimer);
    }
}

AActor* URenegadeBuildingCombatComponent::SpawnHarvesterNow()
{
    if (!HasAuthority() || !GetWorld() || !IsPrimaryHarvesterSpawnerForOwner() || BuildingType != ERenegadeBuildingType::Refinery || !bEnableHarvesterSpawner || !HarvesterCharacterClass)
    {
        return nullptr;
    }
    if (bHarvesterSpawnInProgress)
    {
        return ActiveHarvester;
    }
    if (bRequireOperationalRefineryForHarvesterSpawn && !IsBuildingOperational())
    {
        return nullptr;
    }
    if (IsValid(ActiveHarvester))
    {
        return ActiveHarvester;
    }

    if (bEnforceSingleActiveHarvesterPerTeam)
    {
        if (ACharacter* ExistingTeamHarvester = Cast<ACharacter>(FindExistingTeamHarvester()))
        {
            UE_LOG(LogRenegadeSoldierCombat, Log, TEXT("Refinery %s found existing team Harvester %s before spawn and adopted it."), *GetNameSafe(GetOwner()), *GetNameSafe(ExistingTeamHarvester));
            AdoptHarvesterAsActive(ExistingTeamHarvester);
            return ActiveHarvester;
        }
    }

    if (bAdoptExistingHarvesterOnBeginPlay)
    {
        if (ACharacter* ExistingHarvester = Cast<ACharacter>(FindExistingHarvesterForRefinery()))
        {
            AdoptHarvesterAsActive(ExistingHarvester);
            return ActiveHarvester;
        }
    }

    ClearHarvesterRespawnTimer();
    bHarvesterSpawnInProgress = true;
    const FTransform SpawnTransform = GetHarvesterSpawnTransform();
    ACharacter* NewHarvester = GetWorld()->SpawnActorDeferred<ACharacter>(
        HarvesterCharacterClass,
        SpawnTransform,
        GetOwner(),
        nullptr,
        ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn);
    if (!IsValid(NewHarvester))
    {
        bHarvesterSpawnInProgress = false;
        return nullptr;
    }

    // Claim the deferred actor immediately so any construction/BeginPlay re-entry cannot spawn a duplicate.
    ActiveHarvester = NewHarvester;
    NewHarvester->SetReplicates(true);
    NewHarvester->SetReplicateMovement(true);
    if (URenegadeHarvesterCombatComponent* HarvesterCombat = NewHarvester->FindComponentByClass<URenegadeHarvesterCombatComponent>())
    {
        HarvesterCombat->TeamId = TeamId;
        HarvesterCombat->OwningRefineryActor = GetOwner();
        HarvesterCombat->RequiredHarvestPointGroup = HarvesterHarvestPointGroup;
        HarvesterCombat->RequiredRefineryDockPointGroup = HarvesterRefineryDockPointGroup;
        HarvesterCombat->AssignedHarvestPoint = ResolveHarvesterHarvestPoint();
        HarvesterCombat->AssignedRefineryDockPoint = ResolveHarvesterRefineryDockPoint();
    }

    UGameplayStatics::FinishSpawningActor(NewHarvester, SpawnTransform);
    bHarvesterSpawnInProgress = false;

    if (bEnsureSpawnedHarvesterHasAIController && !IsValid(NewHarvester->GetController()))
    {
        NewHarvester->SpawnDefaultController();
        if (!IsValid(NewHarvester->GetController()))
        {
            UE_LOG(LogRenegadeSoldierCombat, Warning, TEXT("Refinery %s spawned Harvester %s but no AI Controller could be created. Check the Harvester Character Blueprint AI Controller Class."), *GetNameSafe(GetOwner()), *GetNameSafe(NewHarvester));
        }
    }

    NewHarvester->OnDestroyed.AddUniqueDynamic(this, &URenegadeBuildingCombatComponent::HandleSpawnedHarvesterActorDestroyed);

    if (URenegadeHarvesterCombatComponent* HarvesterCombat = NewHarvester->FindComponentByClass<URenegadeHarvesterCombatComponent>())
    {
        HarvesterCombat->SetTeamId(TeamId);
        HarvesterCombat->SetOwningRefinery(this);
        HarvesterCombat->RequiredHarvestPointGroup = HarvesterHarvestPointGroup;
        HarvesterCombat->RequiredRefineryDockPointGroup = HarvesterRefineryDockPointGroup;
        if (ARenegadeHarvestPoint* HarvestPoint = ResolveHarvesterHarvestPoint())
        {
            HarvesterCombat->SetAssignedHarvestPoint(HarvestPoint);
        }
        if (ARenegadeRefineryDockPoint* DockPoint = ResolveHarvesterRefineryDockPoint())
        {
            HarvesterCombat->SetAssignedRefineryDockPoint(DockPoint);
        }
    }
    else
    {
        UE_LOG(LogRenegadeSoldierCombat, Warning, TEXT("Refinery %s spawned Harvester %s without RenegadeHarvesterCombatComponent."), *GetNameSafe(GetOwner()), *GetNameSafe(NewHarvester));
    }

    const bool bWasRespawn = bHasSpawnedHarvesterAtLeastOnce;
    bHasSpawnedHarvesterAtLeastOnce = true;
    OnHarvesterSpawned.Broadcast(NewHarvester);
    if (bWasRespawn)
    {
        OnHarvesterRespawned.Broadcast(NewHarvester);
    }
    if (AActor* Owner = GetOwner())
    {
        Owner->ForceNetUpdate();
    }
    return NewHarvester;
}

void URenegadeBuildingCombatComponent::ScheduleHarvesterRespawn(const float DelayOverrideSeconds)
{
    if (!HasAuthority() || !GetWorld() || !IsPrimaryHarvesterSpawnerForOwner() || BuildingType != ERenegadeBuildingType::Refinery || !bEnableHarvesterSpawner || !HarvesterCharacterClass)
    {
        return;
    }
    if (bRequireOperationalRefineryForHarvesterSpawn && !IsBuildingOperational())
    {
        return;
    }
    if (IsValid(ActiveHarvester))
    {
        return;
    }

    ClearHarvesterRespawnTimer();
    const float Delay = FMath::Max(0.0f, DelayOverrideSeconds >= 0.0f ? DelayOverrideSeconds : HarvesterRespawnDelaySeconds);
    if (Delay <= KINDA_SMALL_NUMBER)
    {
        SpawnHarvesterNow();
        return;
    }
    GetWorld()->GetTimerManager().SetTimer(HarvesterRespawnTimer, this, &URenegadeBuildingCombatComponent::HandleHarvesterRespawnTimer, Delay, false);
    OnHarvesterRespawnScheduled.Broadcast(Delay);
}

void URenegadeBuildingCombatComponent::NotifyHarvesterDestroyed(AActor* DestroyedHarvester)
{
    if (!HasAuthority())
    {
        return;
    }
    if (IsValid(ActiveHarvester) && ActiveHarvester != DestroyedHarvester)
    {
        return;
    }
    ActiveHarvester = nullptr;
    if (AActor* Owner = GetOwner())
    {
        Owner->ForceNetUpdate();
    }
    ScheduleHarvesterRespawn(HarvesterRespawnDelaySeconds);
}

void URenegadeBuildingCombatComponent::HandleSpawnedHarvesterActorDestroyed(AActor* DestroyedActor)
{
    if (!HasAuthority() || ActiveHarvester != DestroyedActor)
    {
        return;
    }
    ActiveHarvester = nullptr;
    if (AActor* Owner = GetOwner())
    {
        Owner->ForceNetUpdate();
    }
    ScheduleHarvesterRespawn(HarvesterRespawnDelaySeconds);
}

void URenegadeBuildingCombatComponent::OnRep_ActiveHarvester(AActor* PreviousHarvester)
{
    if (ActiveHarvester != PreviousHarvester && IsValid(ActiveHarvester))
    {
        OnHarvesterSpawned.Broadcast(ActiveHarvester);
    }
}

void URenegadeBuildingCombatComponent::SetRuntimeTargetPointComponent(USceneComponent* NewComponent)
{
    if (!IsValid(NewComponent) || NewComponent->GetOwner() == GetOwner())
    {
        RuntimeTargetPointComponent = NewComponent;
    }
}

void URenegadeBuildingCombatComponent::SetRuntimeAGTRocketMuzzles(USceneComponent* LeftMuzzle, USceneComponent* RightMuzzle)
{
    if (!IsValid(LeftMuzzle) || LeftMuzzle->GetOwner() == GetOwner())
    {
        RuntimeAGTLeftMuzzleComponent = LeftMuzzle;
    }
    if (!IsValid(RightMuzzle) || RightMuzzle->GetOwner() == GetOwner())
    {
        RuntimeAGTRightMuzzleComponent = RightMuzzle;
    }
}

void URenegadeBuildingCombatComponent::SetRuntimeObeliskLaserStart(USceneComponent* LaserStart)
{
    if (!IsValid(LaserStart) || LaserStart->GetOwner() == GetOwner())
    {
        RuntimeObeliskLaserStartComponent = LaserStart;
    }
}

void URenegadeBuildingCombatComponent::PreviewAGTRocketVisuals(const FVector TraceEnd)
{
    if ((GetWorld() && GetWorld()->GetNetMode() == NM_DedicatedServer))
    {
        return;
    }

    const FVector FallbackStart = GetTargetAimLocation();
    const FVector LeftStart = ResolveSceneLocation(
        AGTLeftRocketMuzzleComponent,
        AGTLeftRocketMuzzleTag,
        RuntimeAGTLeftMuzzleComponent,
        AGTLeftRocketMuzzleRelativeOffset,
        FallbackStart);
    const FVector RightStart = ResolveSceneLocation(
        AGTRightRocketMuzzleComponent,
        AGTRightRocketMuzzleTag,
        RuntimeAGTRightMuzzleComponent,
        AGTRightRocketMuzzleRelativeOffset,
        FallbackStart);

    SpawnRocketVisual(LeftStart, TraceEnd, false);
    SpawnRocketVisual(RightStart, TraceEnd, false);
}

void URenegadeBuildingCombatComponent::PreviewObeliskLaser(const FVector TraceEnd)
{
    const FVector Start = ResolveSceneLocation(
        ObeliskLaserStartComponent,
        ObeliskLaserStartComponentTag,
        RuntimeObeliskLaserStartComponent,
        ObeliskLaserStartRelativeOffset,
        GetTargetAimLocation());
    SpawnObeliskLaserVisual(Start, TraceEnd);
}

void URenegadeBuildingCombatComponent::OnRep_TeamId()
{
}

void URenegadeBuildingCombatComponent::OnRep_CurrentHealth(const float PreviousHealth)
{
    OnBuildingHealthChanged.Broadcast(PreviousHealth, CurrentHealth, nullptr, nullptr);
}

void URenegadeBuildingCombatComponent::OnRep_LowHealth()
{
    OnBuildingLowHealthChanged.Broadcast(bIsLowHealth, GetHealthPercent(), nullptr);
}

void URenegadeBuildingCombatComponent::OnRep_Destroyed()
{
    if (bIsDestroyed)
    {
        ApplyDestroyedPresentation();
    }
    else
    {
        RestoreOperationalPresentation();
        OnBuildingRestored.Broadcast();
    }
}

void URenegadeBuildingCombatComponent::OnRep_DefenseTarget(AActor* PreviousTarget)
{
    OnDefenseTargetChanged.Broadcast(PreviousTarget, CurrentDefenseTarget);
}

void URenegadeBuildingCombatComponent::OnRep_ObeliskCharging()
{
}

void URenegadeBuildingCombatComponent::OnRep_TeamPowerOnline()
{
    OnTeamPowerChanged.Broadcast(bTeamPowerOnline);
}
