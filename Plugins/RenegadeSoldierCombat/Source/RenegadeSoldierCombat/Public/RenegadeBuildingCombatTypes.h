#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "RenegadeBuildingCombatTypes.generated.h"

class AActor;
class UDamageType;
class UMaterialInterface;
class UNiagaraSystem;
class UParticleSystem;
class USoundAttenuation;
class USoundBase;
class USoundConcurrency;
class UStaticMesh;

UENUM(BlueprintType)
enum class ERenegadeBuildingType : uint8
{
    Generic UMETA(DisplayName="Generic Building"),
    Refinery UMETA(DisplayName="Refinery"),
    Barracks UMETA(DisplayName="Barracks"),
    Silo UMETA(DisplayName="Tiberium Silo"),
    HandOfNod UMETA(DisplayName="Hand of Nod"),
    WeaponsFactory UMETA(DisplayName="Weapons Factory"),
    PowerPlant UMETA(DisplayName="Power Plant"),
    Helipad UMETA(DisplayName="Helipad"),
    RepairPad UMETA(DisplayName="Repair Pad"),
    Airstrip UMETA(DisplayName="Airstrip"),
    Obelisk UMETA(DisplayName="Obelisk of Light"),
    AdvancedGuardTower UMETA(DisplayName="Advanced Guard Tower")
};

UENUM(BlueprintType)
enum class ERenegadeBuildingDefenseType : uint8
{
    None UMETA(DisplayName="No Automatic Defence"),
    AdvancedGuardTower UMETA(DisplayName="Advanced Guard Tower Rockets"),
    Obelisk UMETA(DisplayName="Obelisk Laser")
};

UENUM(BlueprintType)
enum class ERenegadeBuildingTargetPolicy : uint8
{
    Never UMETA(DisplayName="Never Target Buildings"),
    WhenNoSoldierTarget UMETA(DisplayName="Buildings When No Soldier Target"),
    ClosestValidTarget UMETA(DisplayName="Closest Soldier or Building"),
    PreferBuildings UMETA(DisplayName="Prefer Buildings")
};

UENUM(BlueprintType)
enum class ERenegadeDefenseTargetSelection : uint8
{
    Closest UMETA(DisplayName="Closest Enemy"),
    LowestHealth UMETA(DisplayName="Lowest Health Enemy"),
    Random UMETA(DisplayName="Random Enemy")
};

UENUM(BlueprintType)
enum class ERenegadeNiagaraBeamParameterType : uint8
{
    Position UMETA(DisplayName="Niagara Position"),
    Vector3 UMETA(DisplayName="Vector 3")
};

UENUM(BlueprintType)
enum class ERenegadeObeliskParticlePreference : uint8
{
    NiagaraThenCascade UMETA(DisplayName="Niagara, then Cascade fallback"),
    CascadeThenNiagara UMETA(DisplayName="Cascade, then Niagara fallback")
};

USTRUCT(BlueprintType)
struct RENEGADESOLDIERCOMBAT_API FRenegadeBuildingHealthSettings
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Building Health", meta=(ClampMin="1.0"))
    float MaximumHealth = 1000.0f;

    /** Enables a replicated low-health state and Blueprint event for damaged-building presentation. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Building Health|Low Health")
    bool bEnableLowHealthState = true;

    /** Health percentage at or below which the building enters low health. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Building Health|Low Health", meta=(ClampMin="0.01", ClampMax="0.99", EditCondition="bEnableLowHealthState"))
    float LowHealthThresholdPercent = 0.25f;

    /** Extra health percentage required before repair clears low health, preventing rapid state flicker near the threshold. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Building Health|Low Health", meta=(ClampMin="0.0", ClampMax="0.50", EditCondition="bEnableLowHealthState"))
    float LowHealthRecoveryHysteresisPercent = 0.05f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Building Health", meta=(ClampMin="0.0"))
    float IncomingDamageMultiplier = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Building Health")
    bool bCanBeDamaged = true;

    /** Keeps the Blueprint actor alive by default so Blueprint destruction meshes, animations and rebuilding can be used. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Building Destruction")
    bool bDestroyOwnerActorOnZeroHealth = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Building Destruction", meta=(EditCondition="!bDestroyOwnerActorOnZeroHealth"))
    bool bDisableOwnerCollisionOnDestroyed = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Building Destruction", meta=(EditCondition="!bDestroyOwnerActorOnZeroHealth"))
    bool bHideOwnerOnDestroyed = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Building Destruction", meta=(EditCondition="!bDestroyOwnerActorOnZeroHealth"))
    bool bAllowRepairAfterDestroyed = true;
};

USTRUCT(BlueprintType)
struct RENEGADESOLDIERCOMBAT_API FRenegadeBuildingTargetSettings
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Building Target")
    bool bRegisterAsCombatTarget = true;

    /** Higher values make this building more attractive to enemy infantry when several buildings are valid. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Building Target", meta=(ClampMin="0.01"))
    float InfantryTargetPriority = 1.0f;

    /** World-space fallback offset from the building bounds centre when no target Scene Component is assigned. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Building Target")
    FVector FallbackAimOffset = FVector::ZeroVector;
};

/**
 * Team-perspective EVA/CABAL variants for one building announcement.
 * The listening client selects its own team and whether this building is friendly or hostile.
 */
USTRUCT(BlueprintType)
struct RENEGADESOLDIERCOMBAT_API FRenegadeBuildingEvaSoundSet
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="GDI EVA")
    TObjectPtr<USoundBase> GDIFriendlyBuildingSound;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="GDI EVA")
    TObjectPtr<USoundBase> GDIEnemyBuildingSound;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Nod EVA")
    TObjectPtr<USoundBase> NodFriendlyBuildingSound;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Nod EVA")
    TObjectPtr<USoundBase> NodEnemyBuildingSound;
};

USTRUCT(BlueprintType)
struct RENEGADESOLDIERCOMBAT_API FRenegadeBuildingAudioSettings
{
    GENERATED_BODY()

    /** Selects GDI EVA or Nod EVA and friendly/enemy wording independently on every listening client. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Building EVA")
    bool bUseTeamAwareEvaSounds = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Building EVA|Under Attack", meta=(EditCondition="bUseTeamAwareEvaSounds"))
    FRenegadeBuildingEvaSoundSet UnderAttackEvaSounds;

    /** Backward-compatible fallback when no matching team-aware under-attack sound is assigned. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Building EVA|Under Attack")
    TObjectPtr<USoundBase> UnderAttackSound;

    /** Per-building cooldown before this building asks to play another alert. A world-wide lock still prevents overlap between buildings. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Building EVA|Under Attack", meta=(ClampMin="0.0"))
    float UnderAttackCooldownSeconds = 8.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Building EVA|Under Attack", meta=(ClampMin="0.0"))
    float UnderAttackVolumeMultiplier = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Building EVA|Under Attack", meta=(ClampMin="0.01"))
    float UnderAttackPitchMultiplier = 1.0f;

    /** Additional quiet time after an under-attack announcement finishes. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Building EVA|Under Attack", meta=(ClampMin="0.0"))
    float GlobalUnderAttackQuietTimeSeconds = 0.20f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Building EVA|Low Health", meta=(EditCondition="bUseTeamAwareEvaSounds"))
    FRenegadeBuildingEvaSoundSet LowHealthEvaSounds;

    /** Backward-compatible fallback for the imminent-destruction warning. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Building EVA|Low Health")
    TObjectPtr<USoundBase> LowHealthWarningSound;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Building EVA|Low Health", meta=(ClampMin="0.0"))
    float LowHealthWarningVolumeMultiplier = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Building EVA|Low Health", meta=(ClampMin="0.01"))
    float LowHealthWarningPitchMultiplier = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Building EVA|Low Health", meta=(ClampMin="0.0"))
    float GlobalLowHealthQuietTimeSeconds = 0.25f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Building EVA|Destroyed", meta=(EditCondition="bUseTeamAwareEvaSounds"))
    FRenegadeBuildingEvaSoundSet DestroyedEvaSounds;

    /** Backward-compatible fallback when no matching team-aware destroyed sound is assigned. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Building EVA|Destroyed")
    TObjectPtr<USoundBase> DestroyedSound;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Building EVA|Destroyed", meta=(ClampMin="0.0"))
    float DestroyedSoundVolumeMultiplier = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Building EVA|Destroyed", meta=(ClampMin="0.01"))
    float DestroyedSoundPitchMultiplier = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Building EVA|Destroyed", meta=(ClampMin="0.0"))
    float GlobalDestroyedQuietTimeSeconds = 0.35f;

    /** Optional positional attenuation shared by all building EVA announcements. Leave empty for normal announcer-style playback. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Building EVA|Playback")
    TObjectPtr<USoundAttenuation> UnderAttackAttenuation;

    /** Optional concurrency shared by all building EVA announcements. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Building EVA|Playback")
    TObjectPtr<USoundConcurrency> UnderAttackConcurrency;
};

USTRUCT(BlueprintType)
struct RENEGADESOLDIERCOMBAT_API FRenegadeBuildingDefenseTargetingSettings
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Defence Targeting", meta=(ClampMin="100.0"))
    float AttackRange = 6000.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Defence Targeting", meta=(ClampMin="0.0"))
    float MinimumAttackRange = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Defence Targeting", meta=(ClampMin="0.05"))
    float TargetRefreshSeconds = 0.20f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Defence Targeting")
    bool bRequireLineOfSight = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Defence Targeting")
    ERenegadeDefenseTargetSelection TargetSelection = ERenegadeDefenseTargetSelection::Closest;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Defence Targeting")
    FVector TargetAimOffset = FVector(0.0f, 0.0f, 35.0f);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Defence Targeting")
    TEnumAsByte<ECollisionChannel> TraceChannel = ECC_Visibility;

    /** Adds a Pawn object trace so Character capsules can still be found when they do not block the authored trace channel. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Defence Targeting")
    bool bUsePawnObjectTraceFallback = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Defence Targeting", meta=(EditCondition="bUsePawnObjectTraceFallback"))
    TEnumAsByte<ECollisionChannel> PawnObjectType = ECC_Pawn;

    /** Optional C&C-style dependency. If enabled, the defence pauses when its team's registered Power Plant is destroyed. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Defence Power")
    bool bRequiresTeamPower = false;

    /** Keeps standalone test maps functional when no Power Plant component is registered for this team. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Defence Power", meta=(EditCondition="bRequiresTeamPower"))
    bool bTreatMissingPowerPlantAsPowered = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Defence Debug")
    bool bDrawDebugAttackTrace = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Defence Debug", meta=(ClampMin="0.0", EditCondition="bDrawDebugAttackTrace"))
    float DebugTraceDuration = 2.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Defence Debug", meta=(ClampMin="0.0", EditCondition="bDrawDebugAttackTrace"))
    float DebugTraceThickness = 2.0f;
};

USTRUCT(BlueprintType)
struct RENEGADESOLDIERCOMBAT_API FRenegadeAdvancedGuardTowerSettings
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AGT", meta=(ClampMin="0.05"))
    float FireIntervalSeconds = 2.4f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AGT", meta=(ClampMin="0.0"))
    float InitialFireDelaySeconds = 0.35f;

    /** Damage applied by each of the two traced rockets. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AGT|Damage", meta=(ClampMin="0.0"))
    float DamagePerRocket = 85.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AGT|Damage")
    TSubclassOf<UDamageType> DamageTypeClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AGT|Accuracy", meta=(ClampMin="0.0", ClampMax="30.0"))
    float RocketSpreadDegrees = 0.35f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AGT|Visual")
    TObjectPtr<UStaticMesh> RocketMesh;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AGT|Visual")
    TObjectPtr<UMaterialInterface> RocketMaterialOverride;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AGT|Visual")
    FVector RocketMeshScale = FVector(1.0f);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AGT|Visual")
    FRotator RocketMeshRotationOffset = FRotator::ZeroRotator;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AGT|Visual", meta=(ClampMin="1.0"))
    float RocketVisualSpeed = 5000.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AGT|Visual", meta=(ClampMin="0.05"))
    float MaximumRocketVisualLifetime = 4.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AGT|Visual")
    bool bRocketVisualCastsShadow = false;

    /** Optional Blueprint effect spawned where each visual rocket arrives. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AGT|Visual")
    TSubclassOf<AActor> RocketImpactEffectActorClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AGT|Audio")
    TObjectPtr<USoundBase> RocketFireSound;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AGT|Audio", meta=(ClampMin="0.0"))
    float RocketFireVolumeMultiplier = 1.0f;
};

USTRUCT(BlueprintType)
struct RENEGADESOLDIERCOMBAT_API FRenegadeObeliskSettings
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Obelisk", meta=(ClampMin="0.0"))
    float InitialFireDelaySeconds = 0.50f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Obelisk", meta=(ClampMin="0.0"))
    float ChargeSeconds = 2.0f;

    /** Delay between the completion of one laser shot and the next charge. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Obelisk", meta=(ClampMin="0.05"))
    float FireIntervalSeconds = 4.5f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Obelisk|Damage", meta=(ClampMin="0.0"))
    float LaserDamage = 500.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Obelisk|Damage")
    TSubclassOf<UDamageType> DamageTypeClass;

    /**
     * Selects which particle technology is preferred when both are assigned.
     * The other technology is used automatically if the preferred asset is unassigned or fails to spawn.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Obelisk|Visual")
    ERenegadeObeliskParticlePreference ParticleSystemPreference = ERenegadeObeliskParticlePreference::NiagaraThenCascade;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Obelisk|Visual|Niagara")
    TObjectPtr<UNiagaraSystem> LaserNiagaraSystem;

    /** Classic Cascade particle-system fallback for older beam assets. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Obelisk|Visual|Cascade")
    TObjectPtr<UParticleSystem> LaserCascadeParticleSystem;

    /**
     * Legacy serialized switch retained only for compatibility with v1.4.1 Blueprints.
     * v1.4.2 always writes the authoritative trace start/end into Cascade automatically.
     */
    UPROPERTY()
    bool bSetCascadeBeamSourceAndTarget = true;

    /** Cascade beam emitter that receives the authoritative source and target points. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Obelisk|Visual|Cascade", meta=(ClampMin="0"))
    int32 CascadeBeamEmitterIndex = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Obelisk|Visual|Cascade", meta=(ClampMin="0"))
    int32 CascadeBeamSourceIndex = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Obelisk|Visual|Cascade", meta=(ClampMin="0"))
    int32 CascadeBeamTargetIndex = 0;

    /** Optional Cascade vector instance parameter receiving the world-space start. Leave None when the asset only uses Beam TypeData. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Obelisk|Visual|Cascade")
    FName CascadeStartVectorParameterName = NAME_None;

    /** Optional Cascade vector instance parameter receiving the world-space end. Leave None when the asset only uses Beam TypeData. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Obelisk|Visual|Cascade")
    FName CascadeEndVectorParameterName = NAME_None;

    /** User parameter receiving the world-space laser start. Common examples: User.BeamStart or User.Start. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Obelisk|Visual|Niagara")
    FName LaserStartParameterName = TEXT("User.BeamStart");

    /** User parameter receiving the world-space laser end. Common examples: User.BeamEnd or User.End. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Obelisk|Visual|Niagara")
    FName LaserEndParameterName = TEXT("User.BeamEnd");

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Obelisk|Visual|Niagara")
    ERenegadeNiagaraBeamParameterType BeamParameterType = ERenegadeNiagaraBeamParameterType::Position;

    /** Base visual scale applied to Niagara, Cascade, and the optional Blueprint laser actor. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Obelisk|Visual|Scale")
    FVector LaserVisualScale = FVector(1.0f);

    /** Additional multiplier for beam length along the effect's local +X axis. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Obelisk|Visual|Scale", meta=(ClampMin="0.01"))
    float LaserLengthScaleMultiplier = 1.0f;

    /** Additional multiplier for beam width/height on local Y and Z. Raise this to make the laser thicker. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Obelisk|Visual|Scale", meta=(ClampMin="0.01"))
    float LaserThicknessScaleMultiplier = 1.0f;

    /** Rotates the selected Niagara or Cascade component's +X axis toward the trace end. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Obelisk|Visual|Alignment")
    bool bRotateLaserSystemAlongTrace = true;

    /** Rotation correction for particle assets authored along an axis other than local +X. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Obelisk|Visual|Alignment")
    FRotator LaserVisualRotationOffset = FRotator::ZeroRotator;

    /**
     * Cascade fallback for effects that are not configured as native Beam TypeData.
     * The particle component is automatically stretched from the muzzle to the authoritative trace end.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Obelisk|Visual|Cascade")
    bool bAutoFitCascadeLaserToTrace = false;

    /** Optional equivalent distance fitting for fixed-length Niagara effects. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Obelisk|Visual|Niagara")
    bool bScaleLaserSystemAlongX = false;

    /** Length in Unreal units represented by X scale 1.0 in the authored particle effect. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Obelisk|Visual|Scale", meta=(ClampMin="1.0"))
    float AuthoredLaserLength = 1000.0f;

    /**
     * How long the Obelisk laser visual remains alive after a shot.
     * The plugin forcibly deactivates and destroys looping Niagara/Cascade components after this time.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Obelisk|Visual|Lifetime", meta=(ClampMin="0.01"))
    float LaserVisualLifetimeSeconds = 0.35f;

    /** Optional Blueprint visual actor spawned at the laser start and oriented toward the end. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Obelisk|Visual")
    TSubclassOf<AActor> LaserEffectActorClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Obelisk|Audio")
    TObjectPtr<USoundBase> ChargeSound;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Obelisk|Audio")
    TObjectPtr<USoundBase> ShootSound;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Obelisk|Audio", meta=(ClampMin="0.0"))
    float ChargeSoundVolumeMultiplier = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Obelisk|Audio", meta=(ClampMin="0.0"))
    float ShootSoundVolumeMultiplier = 1.0f;
};
