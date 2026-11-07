#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "RenegadeHarvesterCombatTypes.generated.h"

class AActor;
class UDamageType;
class UMaterialInterface;
class UNiagaraSystem;
class UParticleSystem;
class USkeletalMesh;
class USoundAttenuation;
class USoundBase;
class USoundConcurrency;
class UStaticMesh;

UENUM(BlueprintType)
enum class ERenegadeHarvesterLifecycleState : uint8
{
    Idle = 0 UMETA(DisplayName="Idle / Travelling"),
    Harvesting = 1 UMETA(DisplayName="Harvesting"),
    ReturningToRefinery = 2 UMETA(DisplayName="Returning To Refinery"),
    RefineryDocking = 3 UMETA(DisplayName="Docking To Refinery"),
    RefineryUnloading = 4 UMETA(DisplayName="Unloading At Refinery"),
    LeavingRefinery = 5 UMETA(DisplayName="Leaving Refinery"),
    Destroyed = 6 UMETA(DisplayName="Destroyed"),
    ApproachingHarvestPoint = 7 UMETA(DisplayName="Approaching Harvest Point"),
    WaitingToHarvest = 8 UMETA(DisplayName="Waiting To Harvest"),
    RefineryDocked = 9 UMETA(DisplayName="Docked At Refinery")
};

USTRUCT(BlueprintType)
struct RENEGADESOLDIERCOMBAT_API FRenegadeHarvesterHealthSettings
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Harvester Health", meta=(ClampMin="1.0"))
    float MaximumHealth = 1200.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Harvester Health", meta=(ClampMin="0.0"))
    float IncomingDamageMultiplier = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Harvester Health")
    bool bCanBeDamaged = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Harvester Health|Critical", meta=(ClampMin="0.01", ClampMax="0.99"))
    float CriticalHealthPercent = 0.25f;
};

USTRUCT(BlueprintType)
struct RENEGADESOLDIERCOMBAT_API FRenegadeHarvesterTargetSettings
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Harvester Target")
    bool bRegisterAsCombatTarget = true;

    /** Higher values make infantry more willing to attack this Harvester when several valid targets exist. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Harvester Target", meta=(ClampMin="0.01"))
    float InfantryTargetPriority = 0.65f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Harvester Target")
    FVector FallbackAimOffset = FVector(0.0f, 0.0f, 120.0f);
};

USTRUCT(BlueprintType)
struct RENEGADESOLDIERCOMBAT_API FRenegadeHarvesterTurretSettings
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Turret")
    bool bEnableDefensiveTurret = true;

    /** Harvester defence is infantry-first by design. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Turret|Targeting")
    bool bPrioritizeInfantry = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Turret|Targeting")
    bool bAllowTargetEnemyHarvesters = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Turret|Targeting", meta=(ClampMin="100.0"))
    float SearchRadius = 4200.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Turret|Targeting", meta=(ClampMin="0.05"))
    float TargetRefreshSeconds = 0.20f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Turret|Targeting")
    bool bRequireLineOfSight = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Turret|Targeting", meta=(ClampMin="0.0"))
    float LostSightGraceSeconds = 0.65f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Turret|Rotation", meta=(ClampMin="1.0"))
    float YawRotationSpeedDegreesPerSecond = 150.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Turret|Rotation", meta=(ClampMin="1.0"))
    float PitchRotationSpeedDegreesPerSecond = 110.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Turret|Rotation")
    bool bLimitYawRelativeToHarvester = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Turret|Rotation", meta=(ClampMin="0.0", ClampMax="180.0", EditCondition="bLimitYawRelativeToHarvester"))
    float MaximumYawOffsetDegrees = 150.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Turret|Rotation", meta=(ClampMin="-89.0", ClampMax="89.0"))
    float MinimumPitchDegrees = -12.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Turret|Rotation", meta=(ClampMin="-89.0", ClampMax="89.0"))
    float MaximumPitchDegrees = 38.0f;


    /** Turret must be this close to the desired aim direction before a shot may fire. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Turret|Rotation", meta=(ClampMin="0.1", ClampMax="45.0"))
    float FireAlignmentToleranceDegrees = 9.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Turret|Weapon", meta=(ClampMin="0.0"))
    float DamagePerShot = 9.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Turret|Weapon", meta=(ClampMin="1.0"))
    float MaximumRange = 4300.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Turret|Weapon", meta=(ClampMin="1.0"))
    float RoundsPerMinute = 520.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Turret|Weapon", meta=(ClampMin="0.0", ClampMax="30.0"))
    float SpreadDegrees = 1.65f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Turret|Weapon")
    TEnumAsByte<ECollisionChannel> TraceChannel = ECC_Visibility;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Turret|Weapon")
    bool bAllowFriendlyFire = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Turret|Weapon")
    TSubclassOf<UDamageType> DamageTypeClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Turret|Bullet Visual")
    bool bUseBulletMesh = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Turret|Bullet Visual", meta=(EditCondition="bUseBulletMesh"))
    TObjectPtr<UStaticMesh> BulletMesh;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Turret|Bullet Visual", meta=(EditCondition="bUseBulletMesh"))
    TObjectPtr<UMaterialInterface> BulletMaterialOverride;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Turret|Bullet Visual", meta=(EditCondition="bUseBulletMesh"))
    FVector BulletMeshScale = FVector(0.12f, 0.12f, 0.12f);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Turret|Bullet Visual", meta=(EditCondition="bUseBulletMesh"))
    FRotator BulletMeshRotationOffset = FRotator::ZeroRotator;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Turret|Bullet Visual", meta=(ClampMin="1.0", EditCondition="bUseBulletMesh"))
    float BulletVisualSpeed = 18000.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Turret|Bullet Visual", meta=(ClampMin="1", ClampMax="128", EditCondition="bUseBulletMesh"))
    int32 BulletVisualPoolSize = 32;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Turret|FX|Muzzle")
    TObjectPtr<UParticleSystem> MuzzleCascade;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Turret|FX|Muzzle")
    TObjectPtr<UNiagaraSystem> MuzzleNiagara;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Turret|FX|Impact")
    TObjectPtr<UParticleSystem> ImpactCascade;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Turret|FX|Impact")
    TObjectPtr<UNiagaraSystem> ImpactNiagara;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Turret|Audio")
    TObjectPtr<USoundBase> FireSound;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Turret|Audio", meta=(ClampMin="0.0"))
    float FireSoundVolumeMultiplier = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Turret|Debug")
    bool bDrawDebug = false;
};

USTRUCT(BlueprintType)
struct RENEGADESOLDIERCOMBAT_API FRenegadeHarvesterGroundAlignmentSettings
{
    GENERATED_BODY()

    /** Visually pitch/roll the Harvester body to follow uneven ground while leaving the Character capsule upright for navigation. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ground Alignment")
    bool bEnableGroundAlignment = true;

    /** Collision channel used by the four suspension-style terrain probes. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ground Alignment")
    TEnumAsByte<ECollisionChannel> TraceChannel = ECC_Visibility;

    /** Distance forward from the Character origin used by the front-left/front-right ground probes. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ground Alignment|Probe Layout", meta=(ClampMin="10.0", Units="cm"))
    float FrontProbeDistance = 260.0f;

    /** Distance rearward from the Character origin used by the rear-left/rear-right ground probes. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ground Alignment|Probe Layout", meta=(ClampMin="10.0", Units="cm"))
    float RearProbeDistance = 260.0f;

    /** Half-width from the vehicle centre line to each left/right probe. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ground Alignment|Probe Layout", meta=(ClampMin="10.0", Units="cm"))
    float HalfTrackWidth = 135.0f;

    /** Height above each probe origin where the downward trace begins. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ground Alignment|Trace", meta=(ClampMin="0.0", Units="cm"))
    float TraceStartHeight = 180.0f;

    /** Distance below the vehicle origin that each ground trace may search. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ground Alignment|Trace", meta=(ClampMin="10.0", Units="cm"))
    float TraceDownDistance = 500.0f;

    /** Maximum visual nose-up/nose-down angle applied to the Harvester body. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ground Alignment|Rotation", meta=(ClampMin="0.0", ClampMax="45.0", Units="deg"))
    float MaximumPitchDegrees = 18.0f;

    /** Maximum visual side-to-side lean applied to the Harvester body. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ground Alignment|Rotation", meta=(ClampMin="0.0", ClampMax="45.0", Units="deg"))
    float MaximumRollDegrees = 14.0f;

    /** Exponential interpolation speed used to smooth suspension-style pitch/roll changes. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ground Alignment|Rotation", meta=(ClampMin="0.0"))
    float RotationInterpSpeed = 7.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ground Alignment|Debug")
    bool bDrawDebugGroundProbes = false;
};

USTRUCT(BlueprintType)
struct RENEGADESOLDIERCOMBAT_API FRenegadeHarvesterEconomySettings
{
    GENERATED_BODY()

    /** Fixed server economy update interval. Lower values update cargo/credits more frequently; 0.10 s is smooth without per-frame credit replication. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Economy", meta=(ClampMin="0.02", ClampMax="1.0", Units="s"))
    float EconomyUpdateIntervalSeconds = 0.10f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Economy", meta=(ClampMin="1.0"))
    float CargoCapacity = 100.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Economy|Harvesting")
    bool bAutomaticallyGatherCargoWhileHarvesting = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Economy|Harvesting", meta=(ClampMin="0.0", EditCondition="bAutomaticallyGatherCargoWhileHarvesting"))
    float HarvestRateUnitsPerSecond = 10.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Economy|Unloading")
    bool bAutomaticallyUnloadWhileDocked = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Economy|Unloading", meta=(ClampMin="0.0", EditCondition="bAutomaticallyUnloadWhileDocked"))
    float UnloadRateUnitsPerSecond = 25.0f;

    /** Team credits generated by one cargo unit. Fractional credit remainder is carried between unload ticks. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Economy|Credits", meta=(ClampMin="0.0"))
    float CreditsPerCargoUnit = 2.0f;
};

USTRUCT(BlueprintType)
struct RENEGADESOLDIERCOMBAT_API FRenegadeHarvesterCycleSettings
{
    GENERATED_BODY()

    /** Automatically leave the spline and drive to the assigned Harvest Point when its approach radius is reached. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Cycle|Harvest Point")
    bool bEnableAutomaticHarvestPointApproach = true;

    /** If true, the placeable Harvest Point actor supplies approach/interaction radii. Disable to use the Harvester overrides below. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Cycle|Harvest Point")
    bool bUseHarvestPointDefinedDistances = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Cycle|Harvest Point", meta=(ClampMin="100.0", EditCondition="!bUseHarvestPointDefinedDistances", Units="cm"))
    float HarvestPointApproachDistance = 1600.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Cycle|Harvest Point", meta=(ClampMin="25.0", EditCondition="!bUseHarvestPointDefinedDistances", Units="cm"))
    float HarvestPointAcceptanceDistance = 180.0f;

    /** Wait after arriving at the field before harvesting begins. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Cycle|Harvest Timing", meta=(ClampMin="0.0", Units="s"))
    float HarvestArrivalDelaySeconds = 0.75f;

    /** Total automatic harvesting time. Zero means harvest until cargo is full or End Harvesting is called manually. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Cycle|Harvest Timing", meta=(ClampMin="0.0", Units="s"))
    float HarvestDurationSeconds = 8.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Cycle|Harvest Timing")
    bool bFinishHarvestWhenCargoFull = true;

    /** Delay after harvesting ends before the Spline AI movement claim is released for the return journey. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Cycle|Harvest Timing", meta=(ClampMin="0.0", Units="s"))
    float PostHarvestDepartureDelaySeconds = 0.35f;

    /** Automatically perform the final MoveTo from the return spline into the owning Refinery's HarvesterDock point. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Cycle|Refinery")
    bool bEnableAutomaticRefineryDocking = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Cycle|Refinery", meta=(ClampMin="100.0", Units="cm"))
    float RefineryDockApproachDistance = 1600.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Cycle|Refinery", meta=(ClampMin="25.0", Units="cm"))
    float RefineryDockAcceptanceDistance = 180.0f;

    /** Wait after physically reaching the dock before unloading starts. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Cycle|Refinery Timing", meta=(ClampMin="0.0", Units="s"))
    float UnloadStartDelaySeconds = 0.65f;

    /** Maximum automatic unload time. Zero means unload until cargo reaches zero. Remaining cargo is deposited when this timer expires. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Cycle|Refinery Timing", meta=(ClampMin="0.0", Units="s"))
    float UnloadDurationSeconds = 5.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Cycle|Refinery Timing")
    bool bFinishUnloadWhenCargoEmpty = true;

    /** Keeps the Harvester at the dock briefly after unloading before its spline is released again. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Cycle|Refinery Timing", meta=(ClampMin="0.0", Units="s"))
    float PostUnloadDepartureDelaySeconds = 0.75f;

    /** When no usable RenegadeSplineFollower route is assigned, navigate directly between Harvest Point and Refinery Dock Point. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Cycle|Direct Navigation Fallback")
    bool bEnableDirectNavigationFallback = true;

    /** Small grace period after BeginPlay before deciding no spline route exists, allowing spawn hooks to assign/start one. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Cycle|Direct Navigation Fallback", meta=(ClampMin="0.0", Units="s", EditCondition="bEnableDirectNavigationFallback"))
    float DirectNavigationFallbackDelaySeconds = 0.5f;

    /** Reissues direct/final approach MoveTo at this interval if navigation is interrupted. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Cycle|Movement", meta=(ClampMin="0.10", ClampMax="5.0", Units="s"))
    float MovementRetrySeconds = 0.75f;

    /** Cooperates with RenegadeSplineAI through its external movement claim API when that component is present. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Cycle|Movement")
    bool bUseSplineExternalMovementClaim = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Cycle|Movement", meta=(EditCondition="bUseSplineExternalMovementClaim"))
    FName SplineMovementClaimName = TEXT("HarvesterCycle");

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Cycle|Movement", meta=(ClampMin="0.0", Units="s", EditCondition="bUseSplineExternalMovementClaim"))
    float SplineResumeDelaySeconds = 0.25f;
};

USTRUCT(BlueprintType)
struct RENEGADESOLDIERCOMBAT_API FRenegadeHarvesterEvaSoundSet
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="GDI EVA")
    TObjectPtr<USoundBase> GDIFriendlyHarvesterSound;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="GDI EVA")
    TObjectPtr<USoundBase> GDIEnemyHarvesterSound;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Nod EVA")
    TObjectPtr<USoundBase> NodFriendlyHarvesterSound;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Nod EVA")
    TObjectPtr<USoundBase> NodEnemyHarvesterSound;
};

USTRUCT(BlueprintType)
struct RENEGADESOLDIERCOMBAT_API FRenegadeHarvesterAudioSettings
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Harvester EVA")
    bool bUseTeamAwareEvaSounds = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Harvester EVA|Under Attack", meta=(EditCondition="bUseTeamAwareEvaSounds"))
    FRenegadeHarvesterEvaSoundSet UnderAttackEvaSounds;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Harvester EVA|Under Attack")
    TObjectPtr<USoundBase> UnderAttackSound;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Harvester EVA|Under Attack", meta=(ClampMin="0.0"))
    float UnderAttackCooldownSeconds = 7.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Harvester EVA|Under Attack", meta=(ClampMin="0.0"))
    float UnderAttackVolumeMultiplier = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Harvester EVA|Critical", meta=(EditCondition="bUseTeamAwareEvaSounds"))
    FRenegadeHarvesterEvaSoundSet CriticalEvaSounds;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Harvester EVA|Critical")
    TObjectPtr<USoundBase> CriticalHealthSound;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Harvester EVA|Destroyed", meta=(EditCondition="bUseTeamAwareEvaSounds"))
    FRenegadeHarvesterEvaSoundSet DestroyedEvaSounds;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Harvester EVA|Destroyed")
    TObjectPtr<USoundBase> DestroyedSound;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Harvester EVA|Destroyed", meta=(ClampMin="0.0"))
    float DestroyedSoundVolumeMultiplier = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Harvester EVA|Playback")
    TObjectPtr<USoundAttenuation> Attenuation;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Harvester EVA|Playback")
    TObjectPtr<USoundConcurrency> Concurrency;
};

USTRUCT(BlueprintType)
struct RENEGADESOLDIERCOMBAT_API FRenegadeHarvesterDestructionSettings
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Destruction|Explosion")
    TObjectPtr<UParticleSystem> ExplosionCascade;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Destruction|Explosion")
    TObjectPtr<UNiagaraSystem> ExplosionNiagara;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Destruction|Explosion")
    TObjectPtr<USoundBase> ExplosionSound;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Destruction|Wreck")
    TObjectPtr<UStaticMesh> DestroyedWreckStaticMesh;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Destruction|Wreck")
    TObjectPtr<USkeletalMesh> DestroyedWreckSkeletalMesh;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Destruction|Wreck")
    FVector WreckRelativeLocation = FVector::ZeroVector;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Destruction|Wreck")
    FRotator WreckRelativeRotation = FRotator::ZeroRotator;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Destruction|Wreck")
    FVector WreckScale = FVector::OneVector;

    /** Seconds before the old destroyed Harvester wreck and its smoke are cleaned up. Zero keeps the wreck indefinitely. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Destruction|Wreck", meta=(ClampMin="0.0", Units="s"))
    float WreckCleanupSeconds = 90.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Destruction|Wreck")
    bool bEnableWreckCollision = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Destruction|Wreck", meta=(EditCondition="bEnableWreckCollision"))
    FName WreckCollisionProfileName = TEXT("BlockAll");

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Destruction|Wreck|Smoke")
    TObjectPtr<UParticleSystem> WreckSmokeCascade;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Destruction|Wreck|Smoke")
    TObjectPtr<UNiagaraSystem> WreckSmokeNiagara;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Destruction|Wreck|Smoke")
    FVector WreckSmokeRelativeLocation = FVector(0.0f, 0.0f, 80.0f);
};
