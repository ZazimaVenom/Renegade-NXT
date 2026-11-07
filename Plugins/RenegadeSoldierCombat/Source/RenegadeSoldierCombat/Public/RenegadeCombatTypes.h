#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "InputCoreTypes.h"
#include "RenegadeBuildingCombatTypes.h"
#include "RenegadeCombatTypes.generated.h"

class AActor;
class UDamageType;
class UMaterialInterface;
class UStaticMesh;
class UTexture2D;
class USoundBase;

UENUM(BlueprintType)
enum class ERenegadeWeaponClass : uint8
{
    AutomaticRifle UMETA(DisplayName="Automatic Rifle"),
    Pistol UMETA(DisplayName="Pistol"),
    RocketLauncher UMETA(DisplayName="Rocket Launcher"),
    Custom UMETA(DisplayName="Custom"),
    /** Appended after the legacy values so existing serialized Weapon Class values remain stable. */
    GrenadeLauncher UMETA(DisplayName="Grenade Launcher")
};

/** Renegade / Renegade X style grenade detonation behaviour. */
UENUM(BlueprintType)
enum class ERenegadeGrenadeDetonationMode : uint8
{
    /** Standard Grenadier primary fire: the projectile explodes on its first blocking impact. */
    Impact UMETA(DisplayName="Impact (Renegade Primary Fire)"),
    /** Renegade X style alternate behaviour: bounce until the exposed fuse expires. */
    TimedBounce UMETA(DisplayName="Timed Bounce (Renegade X Alt Fire)")
};

UENUM(BlueprintType)
enum class ERenegadePlayerWeaponSlot : uint8
{
    AutomaticRifle UMETA(DisplayName="Automatic Rifle"),
    Pistol UMETA(DisplayName="Pistol"),
    RocketLauncher UMETA(DisplayName="Rocket Launcher")
};

UENUM(BlueprintType)
enum class ERenegadeCombatMoveType : uint8
{
    Hold,
    Advance,
    Retreat,
    StrafeLeft,
    StrafeRight,
    SearchLastKnownPosition
};

UENUM(BlueprintType)
enum class ERenegadeRespawnTransformMode : uint8
{
    OriginalTransform UMETA(DisplayName="Original Actor Transform"),
    MatchingTeamSpawnPoint UMETA(DisplayName="Random Matching Team Spawn Point"),
    CustomTransform UMETA(DisplayName="Custom Transform"),
    CustomTransformList UMETA(DisplayName="Custom Transform List"),
    TaggedActor UMETA(DisplayName="Actor With Respawn Tag"),
    RuntimeOverride UMETA(DisplayName="Runtime Transform Override")
};

UENUM(BlueprintType)
enum class ERenegadeRespawnLocationSelection : uint8
{
    First UMETA(DisplayName="First Location"),
    Random UMETA(DisplayName="Random Location"),
    Sequential UMETA(DisplayName="Sequential Locations")
};

USTRUCT(BlueprintType)
struct RENEGADESOLDIERCOMBAT_API FRenegadeRocketLauncherSettings
{
    GENERATED_BODY()

    /** Uses dedicated one-round launcher cadence values instead of the generic magazine and fire-rate fields. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rocket Launcher|Cadence")
    bool bOverrideStandardMagazineAndCadence = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rocket Launcher|Cadence", meta=(ClampMin="1", EditCondition="bOverrideStandardMagazineAndCadence"))
    int32 MagazineSize = 1;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rocket Launcher|Cadence", meta=(ClampMin="0.01", EditCondition="bOverrideStandardMagazineAndCadence"))
    float ReloadSeconds = 2.75f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rocket Launcher|Cadence", meta=(ClampMin="1.0", EditCondition="bOverrideStandardMagazineAndCadence"))
    float RoundsPerMinute = 38.0f;

    /** AI will retreat rather than launch explosive rockets inside this distance. Player/manual firing is not blocked. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rocket Launcher|AI", meta=(ClampMin="0.0", Units="cm"))
    float MinimumAIFiringDistance = 650.0f;

    /** Leads moving targets using the estimated straight-line rocket flight time. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rocket Launcher|AI")
    bool bPredictTargetMovement = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rocket Launcher|AI", meta=(ClampMin="0.0", ClampMax="3.0", EditCondition="bPredictTargetMovement"))
    float MaximumTargetLeadSeconds = 0.75f;

    /** Authoritative and cosmetic straight-line travel speed in centimetres per second. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rocket Launcher|Flight", meta=(ClampMin="100.0", Units="cm/s"))
    float ProjectileSpeed = 4200.0f;

    /** Safety cap for extremely long visual/server flight times. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rocket Launcher|Flight", meta=(ClampMin="0.05"))
    float MaximumFlightSeconds = 5.0f;

    /** DamagePerShot is the maximum explosion damage inside this radius. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rocket Launcher|Explosion", meta=(ClampMin="0.0", Units="cm"))
    float ExplosionInnerRadius = 160.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rocket Launcher|Explosion", meta=(ClampMin="1.0", Units="cm"))
    float ExplosionOuterRadius = 475.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rocket Launcher|Explosion", meta=(ClampMin="0.0", ClampMax="1.0"))
    float MinimumExplosionDamageMultiplier = 0.20f;

    /** Additional multiplier for the actor directly struck by the rocket trace. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rocket Launcher|Explosion", meta=(ClampMin="0.0"))
    float DirectHitDamageMultiplier = 1.20f;

    /** Prevents explosion damage through walls and solid cover. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rocket Launcher|Explosion")
    bool bUseExplosionOcclusion = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rocket Launcher|Explosion", meta=(EditCondition="bUseExplosionOcclusion"))
    TEnumAsByte<ECollisionChannel> ExplosionOcclusionTraceChannel = ECC_Visibility;

    /** Allows the launcher owner to receive its own splash damage. Team damage still follows Weapon > Allow Friendly Fire. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rocket Launcher|Explosion")
    bool bAllowSelfDamage = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rocket Launcher|Visual")
    TObjectPtr<UStaticMesh> RocketMesh = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rocket Launcher|Visual")
    TObjectPtr<UMaterialInterface> RocketMaterialOverride = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rocket Launcher|Visual")
    FVector RocketMeshScale = FVector(1.0f);

    /** Added after orienting local X toward the travel direction. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rocket Launcher|Visual")
    FRotator RocketMeshRotationOffset = FRotator::ZeroRotator;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rocket Launcher|Visual", meta=(ClampMin="0.0", Units="cm"))
    float RocketVisualMuzzleForwardOffset = 12.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rocket Launcher|Visual", meta=(ClampMin="0.0", Units="cm"))
    float RocketVisualImpactStopShortDistance = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rocket Launcher|Visual|Performance", meta=(ClampMin="1", ClampMax="12"))
    int32 RocketVisualPoolSize = 3;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rocket Launcher|Visual|Performance")
    bool bRocketVisualCastsShadow = false;

    /** Optional local cosmetic Blueprint actor moved with the rocket, suitable for Niagara smoke/trail systems. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rocket Launcher|Effects")
    TSubclassOf<AActor> RocketFlightEffectActorClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rocket Launcher|Effects")
    TSubclassOf<AActor> RocketMuzzleEffectActorClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rocket Launcher|Effects", meta=(ClampMin="0.0"))
    float RocketMuzzleEffectLifeSeconds = 2.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rocket Launcher|Effects")
    TSubclassOf<AActor> RocketImpactEffectActorClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rocket Launcher|Effects", meta=(ClampMin="0.0"))
    float RocketImpactEffectLifeSeconds = 5.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rocket Launcher|Audio")
    TObjectPtr<USoundBase> RocketFireSound = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rocket Launcher|Audio", meta=(ClampMin="0.0"))
    float RocketFireVolumeMultiplier = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rocket Launcher|Audio")
    TObjectPtr<USoundBase> RocketImpactSound = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rocket Launcher|Audio", meta=(ClampMin="0.0"))
    float RocketImpactVolumeMultiplier = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rocket Launcher|Debug")
    bool bDrawDebugRocket = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rocket Launcher|Debug", meta=(ClampMin="0.0", EditCondition="bDrawDebugRocket"))
    float DebugDrawDuration = 2.0f;
};


/**
 * Fully exposed Renegade-style automatic grenade-launcher behaviour.
 * Defaults model the classic Grenadier role: 8-round cylinder, 0.75 s cadence,
 * gravity-driven 40 mm style arc, impact detonation, radial splash, and a 3.2 s reload.
 */
USTRUCT(BlueprintType)
struct RENEGADESOLDIERCOMBAT_API FRenegadeGrenadeLauncherSettings
{
    GENERATED_BODY()

    /** Uses dedicated Grenadier magazine/reload/fire-rate values instead of the generic weapon cadence fields. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|Cadence")
    bool bOverrideStandardMagazineAndCadence = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|Cadence", meta=(ClampMin="1", EditCondition="bOverrideStandardMagazineAndCadence"))
    int32 MagazineSize = 8;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|Cadence", meta=(ClampMin="0.01", EditCondition="bOverrideStandardMagazineAndCadence"))
    float ReloadSeconds = 3.2f;

    /** 80 RPM equals one grenade every 0.75 seconds. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|Cadence", meta=(ClampMin="1.0", EditCondition="bOverrideStandardMagazineAndCadence"))
    float RoundsPerMinute = 80.0f;

    /** AI keeps outside this radius before firing an explosive round. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|AI", meta=(ClampMin="0.0", Units="cm"))
    float MinimumAIFiringDistance = 650.0f;

    /** Iteratively leads moving targets using the solved ballistic flight time. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|AI")
    bool bPredictTargetMovement = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|AI", meta=(ClampMin="0.0", ClampMax="5.0", EditCondition="bPredictTargetMovement"))
    float MaximumTargetLeadSeconds = 1.5f;

    /** Number of ballistic lead refinements. Two is normally enough and remains inexpensive. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|AI", meta=(ClampMin="1", ClampMax="4", EditCondition="bPredictTargetMovement"))
    int32 TargetLeadIterations = 2;

    /** Launch speed in centimetres per second. Renegade X uses a fast but visibly arcing grenade. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|Ballistics", meta=(ClampMin="100.0", Units="cm/s"))
    float ProjectileSpeed = 3000.0f;

    /** Multiplies the active world's Z gravity. 1.0 follows the map's normal gravity. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|Ballistics", meta=(ClampMin="0.0", ClampMax="5.0"))
    float GravityScale = 1.0f;

    /** Chooses the steeper of the two physically valid ballistic solutions when one exists. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|Ballistics")
    bool bUseHighArc = false;

    /** Safety lifetime. Impact grenades explode when this expires; timed grenades use the smaller fuse/lifetime value. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|Ballistics", meta=(ClampMin="0.05"))
    float MaximumFlightSeconds = 5.0f;

    /** Sphere-sweep radius used by the authoritative projectile so fast grenades do not tunnel through thin geometry. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|Ballistics", meta=(ClampMin="0.1", Units="cm"))
    float CollisionRadius = 9.0f;

    /** Maximum physics sub-step for server collision simulation. Lower values improve high-speed collision precision. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|Ballistics|Performance", meta=(ClampMin="0.005", ClampMax="0.1"))
    float MaximumSimulationStepSeconds = 0.025f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|Detonation")
    ERenegadeGrenadeDetonationMode DetonationMode = ERenegadeGrenadeDetonationMode::Impact;

    /** Fuse used by Timed Bounce mode. The grenade still respects Maximum Flight Seconds. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|Detonation", meta=(ClampMin="0.05", EditCondition="DetonationMode == ERenegadeGrenadeDetonationMode::TimedBounce"))
    float TimedFuseSeconds = 2.5f;

    /** Fraction of normal impact speed retained after a timed-grenade bounce. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|Detonation|Bounce", meta=(ClampMin="0.0", ClampMax="1.0", EditCondition="DetonationMode == ERenegadeGrenadeDetonationMode::TimedBounce"))
    float BounceRestitution = 0.45f;

    /** Fraction of tangential velocity removed at each timed-grenade bounce. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|Detonation|Bounce", meta=(ClampMin="0.0", ClampMax="1.0", EditCondition="DetonationMode == ERenegadeGrenadeDetonationMode::TimedBounce"))
    float BounceFriction = 0.18f;

    /** Below this speed a timed grenade settles instead of endlessly micro-bouncing. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|Detonation|Bounce", meta=(ClampMin="0.0", Units="cm/s", EditCondition="DetonationMode == ERenegadeGrenadeDetonationMode::TimedBounce"))
    float MinimumBounceSpeed = 180.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|Detonation|Bounce", meta=(ClampMin="1", ClampMax="32", EditCondition="DetonationMode == ERenegadeGrenadeDetonationMode::TimedBounce"))
    int32 MaximumBounces = 12;

    /** DamagePerShot is the maximum radial explosion damage inside this radius. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|Explosion", meta=(ClampMin="0.0", Units="cm"))
    float ExplosionInnerRadius = 100.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|Explosion", meta=(ClampMin="1.0", Units="cm"))
    float ExplosionOuterRadius = 300.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|Explosion", meta=(ClampMin="0.0", ClampMax="1.0"))
    float MinimumExplosionDamageMultiplier = 0.20f;

    /** Multiplier applied to the actor directly struck by an impact grenade. 1.1875 turns the 80 damage preset into the classic 95 direct+splash total. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|Explosion", meta=(ClampMin="0.0"))
    float DirectHitDamageMultiplier = 1.1875f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|Explosion")
    bool bUseExplosionOcclusion = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|Explosion", meta=(EditCondition="bUseExplosionOcclusion"))
    TEnumAsByte<ECollisionChannel> ExplosionOcclusionTraceChannel = ECC_Visibility;

    /** Renegade-style explosive self-damage. The AI safe-distance setting normally keeps Grenadiers outside their own splash. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|Explosion")
    bool bAllowSelfDamage = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|Visual")
    TObjectPtr<UStaticMesh> GrenadeMesh = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|Visual")
    TObjectPtr<UMaterialInterface> GrenadeMaterialOverride = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|Visual")
    FVector GrenadeMeshScale = FVector(1.0f);

    /** Added after orienting local X toward projectile velocity. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|Visual")
    FRotator GrenadeMeshRotationOffset = FRotator::ZeroRotator;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|Visual")
    bool bOrientGrenadeMeshToVelocity = true;

    /** Cosmetic local-axis spin applied in degrees per second. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|Visual")
    FVector GrenadeMeshSpinDegreesPerSecond = FVector(720.0f, 180.0f, 0.0f);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|Visual|Performance", meta=(ClampMin="1", ClampMax="24"))
    int32 GrenadeVisualPoolSize = 12;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|Visual|Performance")
    bool bGrenadeVisualCastsShadow = false;

    /** Optional local cosmetic Blueprint actor moved with the grenade, suitable for Niagara trails. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|Effects")
    TSubclassOf<AActor> GrenadeFlightEffectActorClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|Effects")
    TSubclassOf<AActor> GrenadeMuzzleEffectActorClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|Effects", meta=(ClampMin="0.0"))
    float GrenadeMuzzleEffectLifeSeconds = 1.5f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|Effects")
    TSubclassOf<AActor> GrenadeImpactEffectActorClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|Effects", meta=(ClampMin="0.0"))
    float GrenadeImpactEffectLifeSeconds = 5.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|Effects|Bounce", meta=(EditCondition="DetonationMode == ERenegadeGrenadeDetonationMode::TimedBounce"))
    TSubclassOf<AActor> GrenadeBounceEffectActorClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|Effects|Bounce", meta=(ClampMin="0.0", EditCondition="DetonationMode == ERenegadeGrenadeDetonationMode::TimedBounce"))
    float GrenadeBounceEffectLifeSeconds = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|Audio")
    TObjectPtr<USoundBase> GrenadeFireSound = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|Audio", meta=(ClampMin="0.0"))
    float GrenadeFireVolumeMultiplier = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|Audio")
    TObjectPtr<USoundBase> GrenadeImpactSound = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|Audio", meta=(ClampMin="0.0"))
    float GrenadeImpactVolumeMultiplier = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|Audio|Bounce", meta=(EditCondition="DetonationMode == ERenegadeGrenadeDetonationMode::TimedBounce"))
    TObjectPtr<USoundBase> GrenadeBounceSound = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|Audio|Bounce", meta=(ClampMin="0.0", EditCondition="DetonationMode == ERenegadeGrenadeDetonationMode::TimedBounce"))
    float GrenadeBounceVolumeMultiplier = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|Debug")
    bool bDrawDebugGrenade = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grenade Launcher|Debug", meta=(ClampMin="0.0", EditCondition="bDrawDebugGrenade"))
    float DebugDrawDuration = 2.0f;
};

USTRUCT(BlueprintType)
struct RENEGADESOLDIERCOMBAT_API FRenegadeWeaponSettings
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon")
    ERenegadeWeaponClass WeaponClass = ERenegadeWeaponClass::AutomaticRifle;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon", meta=(ClampMin="1.0"))
    float DamagePerShot = 11.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon", meta=(ClampMin="1.0"))
    float MaximumRange = 4500.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon", meta=(ClampMin="1.0"))
    float RoundsPerMinute = 600.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon|Burst", meta=(ClampMin="1"))
    int32 MinimumBurstShots = 3;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon|Burst", meta=(ClampMin="1"))
    int32 MaximumBurstShots = 7;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon|Burst", meta=(ClampMin="0.0"))
    float MinimumBurstPause = 0.20f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon|Burst", meta=(ClampMin="0.0"))
    float MaximumBurstPause = 0.55f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon|Accuracy", meta=(ClampMin="0.0", ClampMax="45.0"))
    float HipFireSpreadDegrees = 2.2f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon|Accuracy", meta=(ClampMin="0.0", ClampMax="45.0"))
    float MovingSpreadPenaltyDegrees = 1.4f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon|Damage", meta=(ClampMin="1.0"))
    float CriticalHitMultiplier = 2.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon|Damage")
    TArray<FName> CriticalBones = { FName(TEXT("head")), FName(TEXT("neck_01")) };

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon|Damage", meta=(ClampMin="0.0", ClampMax="1.0"))
    float MinimumLongRangeDamageMultiplier = 0.70f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon|Damage", meta=(ClampMin="0.0", ClampMax="1.0"))
    float DamageFalloffStartFraction = 0.65f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon|Magazine")
    bool bUseMagazine = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon|Magazine", meta=(ClampMin="1", EditCondition="bUseMagazine"))
    int32 MagazineSize = 30;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon|Magazine", meta=(ClampMin="0.0", EditCondition="bUseMagazine"))
    float ReloadSeconds = 2.1f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon|Sockets")
    FName MuzzleSocketName = TEXT("Muzzle");

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon|Sockets")
    FName AimBoneName = TEXT("spine_03");

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon|Trace")
    TEnumAsByte<ECollisionChannel> TraceChannel = ECC_Visibility;

    /** Also checks the configured combat-target object type and chooses whichever valid hit is closest. This allows Character hits even when their mesh/capsule does not block the weapon trace channel. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon|Trace")
    bool bUseCombatTargetObjectTraceFallback = true;

    /** Object type used by the combat-target fallback trace. Character capsules normally use Pawn. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon|Trace", meta=(EditCondition="bUseCombatTargetObjectTraceFallback"))
    TEnumAsByte<ECollisionChannel> CombatTargetObjectType = ECC_Pawn;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon|Trace")
    bool bAllowFriendlyFire = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon|Damage")
    TSubclassOf<UDamageType> DamageTypeClass;

    /** Dedicated projectile, explosion, cadence, visual and audio configuration used when Weapon Class is Rocket Launcher. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon|Rocket Launcher")
    FRenegadeRocketLauncherSettings RocketLauncher;

    /** Dedicated ballistic projectile, explosion, cadence, visual and audio configuration used when Weapon Class is Grenade Launcher. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon|Grenade Launcher")
    FRenegadeGrenadeLauncherSettings GrenadeLauncher;
};

USTRUCT(BlueprintType)
struct RENEGADESOLDIERCOMBAT_API FRenegadeTargetingSettings
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Targeting", meta=(ClampMin="100.0"))
    float SearchRadius = 5000.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Targeting", meta=(ClampMin="0.05"))
    float TargetRefreshSeconds = 0.25f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Targeting", meta=(ClampMin="0.0"))
    float LostSightGraceSeconds = 1.75f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Targeting")
    bool bRequireLineOfSight = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Targeting")
    bool bRetaliateWhenDamaged = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Targeting", meta=(ClampMin="1.0"))
    float LoseTargetRadiusMultiplier = 1.25f;

    /** Signed vertical offset in centimetres applied to the selected aim bone or fallback target point. Negative values move AI and player lock-on aim downward; positive values move it upward. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Targeting", meta=(ClampMin="-500.0", ClampMax="500.0", UIMin="-250.0", UIMax="250.0", Units="cm", ToolTip="Signed vertical offset from the configured Aim Bone. Use negative values to move the lock-on point down toward the chest or torso."))
    float AimHeightOffset = 8.0f;

    /** PNG/Texture2D displayed over the hostile soldier selected by the local player lock-on system. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Targeting|Player Lock-On Visual", meta=(DisplayName="Lock-On Indicator PNG / Texture", DisplayThumbnail="true"))
    TObjectPtr<UTexture2D> PlayerLockOnIndicatorTexture = nullptr;

    /** RGBA tint multiplied with the lock-on texture. The alpha channel remains combined with the PNG transparency. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Targeting|Player Lock-On Visual", meta=(DisplayName="Lock-On Indicator Color", sRGB="true"))
    FLinearColor PlayerLockOnIndicatorColor = FLinearColor::White;

    /** Controls whether autonomous infantry may acquire hostile building components as combat targets. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Targeting|Buildings")
    ERenegadeBuildingTargetPolicy BuildingTargetPolicy = ERenegadeBuildingTargetPolicy::WhenNoSoldierTarget;

    /** Multiplies building distance score. Values below 1 make buildings more attractive; values above 1 favour soldiers. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Targeting|Buildings", meta=(ClampMin="0.01"))
    float BuildingTargetDistanceScoreMultiplier = 1.0f;


    /** Allows autonomous infantry to acquire hostile Harvesters registered by RenegadeHarvesterCombatComponent. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Targeting|Harvesters")
    bool bTargetHostileHarvesters = true;

    /** When true, a valid hostile infantry target always wins over a Harvester. Harvesters are still attacked when no soldier target is available. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Targeting|Harvesters")
    bool bPreferSoldiersOverHarvesters = true;

    /** Multiplies Harvester distance score. Values below 1 make Harvesters more attractive to infantry. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Targeting|Harvesters", meta=(ClampMin="0.01"))
    float HarvesterTargetDistanceScoreMultiplier = 1.35f;
};

USTRUCT(BlueprintType)
struct RENEGADESOLDIERCOMBAT_API FRenegadeCombatMovementSettings
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combat Movement")
    bool bEnableCombatMovement = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combat Movement", meta=(ClampMin="0.10"))
    float MovementUpdateSeconds = 0.55f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combat Movement", meta=(ClampMin="0.0"))
    float PreferredMinimumRange = 700.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combat Movement", meta=(ClampMin="0.0"))
    float PreferredMaximumRange = 1800.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combat Movement", meta=(ClampMin="50.0"))
    float AdvanceStepDistance = 650.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combat Movement", meta=(ClampMin="50.0"))
    float RetreatStepDistance = 550.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combat Movement", meta=(ClampMin="50.0"))
    float StrafeStepDistance = 500.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combat Movement", meta=(ClampMin="0.0"))
    float NavigationProjectionExtent = 500.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combat Movement", meta=(ClampMin="0.0"))
    float MoveAcceptanceRadius = 90.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combat Movement", meta=(ClampMin="0.1", ClampMax="3.0"))
    float CombatWalkSpeedMultiplier = 0.85f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combat Movement", meta=(ClampMin="0.0", ClampMax="1.0"))
    float StrafeDirectionChangeChance = 0.28f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combat Movement")
    bool bUsePathfinding = true;
};


USTRUCT(BlueprintType)
struct RENEGADESOLDIERCOMBAT_API FRenegadePlayerCombatSettings
{
    GENERATED_BODY()

    /** Uses the owning Player Controller view/camera ray to aim manual shots. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Aiming")
    bool bUseControllerViewForAim = true;

    /** Maximum accepted distance between the client camera origin and the authoritative pawn view origin. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Aiming|Networking", meta=(ClampMin="0.0"))
    float MaximumClientViewOriginError = 650.0f;

    /** Maximum accepted angular difference between the submitted client aim and replicated controller aim. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Aiming|Networking", meta=(ClampMin="0.0", ClampMax="180.0"))
    float MaximumClientAimAngleError = 70.0f;

    /** Applies the weapon's hip-fire and movement spread to player shots. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Aiming")
    bool bApplyWeaponSpread = true;

    /** Multiplies final player spread while Aim is active. 0 is perfectly accurate and 1 keeps full hip-fire spread. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Aiming", meta=(ClampMin="0.0", ClampMax="1.0", EditCondition="bApplyWeaponSpread"))
    float AimedSpreadMultiplier = 0.35f;

    /** Performs a second trace from the muzzle to the camera aim point so the player cannot shoot through nearby cover. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Aiming")
    bool bPreventMuzzleObstructionShooting = true;

    /** Automatic rifle repeatedly requests shots while the fire input is held. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Input")
    bool bAutomaticRifleFiresWhileHeld = true;

    /** Automatically starts a reload when a player weapon reaches zero magazine ammunition. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Input")
    bool bAutoReloadWhenEmpty = true;

    /** Refills both player weapons when the same actor respawns. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Respawn")
    bool bRefillAllWeaponsOnRespawn = true;

    /** Server cadence tolerance. Values below 1 permit a small amount of network jitter without allowing faster fire. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Input|Networking", meta=(ClampMin="0.80", ClampMax="1.0"))
    float ServerFireRateTolerance = 0.92f;
};


/**
 * Local and network-safe presentation applied while a player-controlled combatant is aiming.
 * Camera zoom is cosmetic/local. Character yaw remains authoritative through normal Character replication.
 */
USTRUCT(BlueprintType)
struct RENEGADESOLDIERCOMBAT_API FRenegadePlayerAimPresentationSettings
{
    GENERATED_BODY()

    /** Master switch for camera-facing rotation and camera zoom while the player aim state is active. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Aim Presentation")
    bool bEnableAimPresentation = true;

    /** Keeps the Character body yaw aligned with the owning camera/controller forward direction while aiming. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Aim Presentation|Rotation", meta=(EditCondition="bEnableAimPresentation"))
    bool bRotateCharacterToCameraForward = true;

    /** Instantly aligns body yaw when aim begins before smooth maintenance takes over. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Aim Presentation|Rotation", meta=(EditCondition="bEnableAimPresentation && bRotateCharacterToCameraForward"))
    bool bSnapCharacterToCameraYawOnAimStart = true;

    /** Maximum body yaw rotation speed while aiming. Set to 0 for instant alignment every frame. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Aim Presentation|Rotation", meta=(ClampMin="0.0", EditCondition="bEnableAimPresentation && bRotateCharacterToCameraForward"))
    float CharacterRotationSpeedDegreesPerSecond = 1080.0f;

    /** Prevents movement direction from turning the Character away from the camera while aiming. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Aim Presentation|Rotation", meta=(EditCondition="bEnableAimPresentation && bRotateCharacterToCameraForward"))
    bool bDisableOrientRotationToMovementWhileAiming = true;

    /** Lets Character Movement use Controller rotation while aiming. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Aim Presentation|Rotation", meta=(EditCondition="bEnableAimPresentation && bRotateCharacterToCameraForward"))
    bool bUseControllerDesiredRotationWhileAiming = true;

    /** Lets the Character consume Controller yaw while aiming. Original Blueprint settings are restored on release. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Aim Presentation|Rotation", meta=(EditCondition="bEnableAimPresentation && bRotateCharacterToCameraForward"))
    bool bUseControllerRotationYawWhileAiming = true;

    /** Smoothly changes the local player's camera field of view while aiming. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Aim Presentation|Camera", meta=(EditCondition="bEnableAimPresentation"))
    bool bZoomCameraWhileAiming = true;

    /** Horizontal field of view used while aiming. Lower values zoom farther in. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Aim Presentation|Camera", meta=(ClampMin="5.0", ClampMax="170.0", EditCondition="bEnableAimPresentation && bZoomCameraWhileAiming"))
    float AimedFieldOfView = 65.0f;

    /** FOV interpolation speed when entering aim. Set to 0 for instant zoom. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Aim Presentation|Camera", meta=(ClampMin="0.0", EditCondition="bEnableAimPresentation && bZoomCameraWhileAiming"))
    float ZoomInInterpSpeed = 14.0f;

    /** FOV interpolation speed when leaving aim. Set to 0 for instant restoration. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Aim Presentation|Camera", meta=(ClampMin="0.0", EditCondition="bEnableAimPresentation && bZoomCameraWhileAiming"))
    float ZoomOutInterpSpeed = 10.0f;

    /** Finds the active Camera Component automatically when no camera component is explicitly assigned. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Aim Presentation|Camera", meta=(EditCondition="bEnableAimPresentation && bZoomCameraWhileAiming"))
    bool bAutoFindActiveCameraComponent = true;

    /** Uses PlayerCameraManager FOV locking when the player pawn has no usable Camera Component. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Aim Presentation|Camera", meta=(EditCondition="bEnableAimPresentation && bZoomCameraWhileAiming"))
    bool bUsePlayerCameraManagerFallback = true;
};


/**
 * Local third-person lock-on targeting for player-controlled combatants.
 * The selected target is cosmetic/local; authoritative shots still use the existing validated player trace path.
 */
USTRUCT(BlueprintType)
struct RENEGADESOLDIERCOMBAT_API FRenegadePlayerLockOnSettings
{
    GENERATED_BODY()

    /** Master switch for player lock-on targeting. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Lock-On")
    bool bEnableLockOn = true;

    /** Deprecated v1.5.0 serialization field. Lock-on always uses its dedicated inputs from v1.5.1 onward. */
    UPROPERTY(meta=(DeprecatedProperty, DeprecationMessage="Normal aim and lock-on now use separate controls."))
    bool bUseAimInputAsLockOn = false;

    /** Dedicated keyboard lock-on input. Holding it also enters aim when Automatically Aim While Locking is enabled. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Lock-On|Input", meta=(EditCondition="bEnableLockOn"))
    FKey KeyboardMouseLockOnKey = EKeys::LeftAlt;

    /** Dedicated gamepad lock-on input. Defaults to Left Shoulder / LB, directly above Left Trigger. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Lock-On|Input", meta=(EditCondition="bEnableLockOn"))
    FKey GamepadLockOnKey = EKeys::Gamepad_LeftShoulder;

    /** Automatically enters the existing player aim state while a target lock is held. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Lock-On|Input", meta=(EditCondition="bEnableLockOn"))
    bool bAutomaticallyAimWhileLocking = true;

    /** Maximum initial acquisition distance. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Lock-On|Acquisition", meta=(ClampMin="100.0", EditCondition="bEnableLockOn"))
    float MaximumAcquisitionDistance = 5000.0f;

    /** Maximum view-space angle from the camera forward direction for initial acquisition. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Lock-On|Acquisition", meta=(ClampMin="1.0", ClampMax="179.0", EditCondition="bEnableLockOn"))
    float AcquisitionHalfAngleDegrees = 42.0f;

    /** Current targets may remain locked slightly farther away than the initial acquisition distance. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Lock-On|Maintenance", meta=(ClampMin="1.0", EditCondition="bEnableLockOn"))
    float BreakDistanceMultiplier = 1.25f;

    /** Current targets are released if they move this far outside the camera forward direction. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Lock-On|Maintenance", meta=(ClampMin="1.0", ClampMax="179.0", EditCondition="bEnableLockOn"))
    float BreakHalfAngleDegrees = 78.0f;

    /** Requires a clear visibility trace before initially locking a soldier. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Lock-On|Line of Sight", meta=(EditCondition="bEnableLockOn"))
    bool bRequireLineOfSightToAcquire = true;

    /** Releases a locked target after continuous obstruction exceeds the grace time. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Lock-On|Line of Sight", meta=(EditCondition="bEnableLockOn"))
    bool bBreakLockWhenOccluded = true;

    /** Short obstruction grace period prevents cover edges from causing unstable lock flicker. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Lock-On|Line of Sight", meta=(ClampMin="0.0", EditCondition="bEnableLockOn && bBreakLockWhenOccluded"))
    float OcclusionGraceSeconds = 0.45f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Lock-On|Line of Sight", meta=(EditCondition="bEnableLockOn"))
    TEnumAsByte<ECollisionChannel> LineOfSightTraceChannel = ECC_Visibility;

    /** Camera/controller interpolation speed toward the locked soldier. Set to 0 for instant tracking. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Lock-On|Camera", meta=(ClampMin="0.0", EditCondition="bEnableLockOn"))
    float CameraRotationInterpSpeed = 13.0f;

    /** Tracks vertical camera pitch as well as yaw. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Lock-On|Camera", meta=(EditCondition="bEnableLockOn"))
    bool bTrackTargetPitch = true;

    /** Adds movement prediction to the lock point. Hitscan weapons usually need only a very small value. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Lock-On|Camera", meta=(ClampMin="0.0", ClampMax="1.0", EditCondition="bEnableLockOn"))
    float TargetLeadSeconds = 0.035f;

    /** Additional signed world-space offset applied after the shared Targeting Aim Height Offset. Negative Z lowers the player lock-on point further. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Lock-On|Camera", meta=(EditCondition="bEnableLockOn", Units="cm", ToolTip="Fine adjustment added after Targeting > Aim Height Offset. Use a negative Z value to lower the player-only lock point."))
    FVector TargetAimOffset = FVector::ZeroVector;

    /** Lets mouse or right-stick look input move the lock point around the selected soldier instead of fighting camera tracking. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Lock-On|Aim Offset Control", meta=(EditCondition="bEnableLockOn"))
    bool bEnableAimOffsetControl = true;

    /** When enabled, built-in look input is consumed by the lock point while locked instead of rotating freely away from the target. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Lock-On|Aim Offset Control", meta=(EditCondition="bEnableLockOn && bEnableAimOffsetControl"))
    bool bConsumeLookInputWhileLocked = true;

    /** Automatically polls the configured mouse/right-stick axes while locked, even when the plugin's Built-In Look Input is disabled. Disable this only when feeding Player Add Lock On Aim Input manually. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Lock-On|Aim Offset Control", meta=(EditCondition="bEnableLockOn && bEnableAimOffsetControl"))
    bool bAutomaticallyReadConfiguredLookAxes = true;

    /** Converts the already sensitivity-scaled camera look input into centimetres of target-point movement. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Lock-On|Aim Offset Control", meta=(ClampMin="0.0", ClampMax="10.0", EditCondition="bEnableLockOn && bEnableAimOffsetControl", Units="cm", ToolTip="Uses the existing mouse sensitivity, gamepad yaw/pitch speeds, dead zone, inversion and aiming sensitivity multiplier before applying this conversion."))
    float AimOffsetCentimetersPerLookDegree = 0.55f;

    /** Additional horizontal response multiplier after the normal camera sensitivity settings. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Lock-On|Aim Offset Control", meta=(ClampMin="0.0", ClampMax="5.0", EditCondition="bEnableLockOn && bEnableAimOffsetControl"))
    float AimOffsetHorizontalSensitivityMultiplier = 1.0f;

    /** Additional vertical response multiplier after the normal camera sensitivity settings. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Lock-On|Aim Offset Control", meta=(ClampMin="0.0", ClampMax="5.0", EditCondition="bEnableLockOn && bEnableAimOffsetControl"))
    float AimOffsetVerticalSensitivityMultiplier = 1.0f;

    /** Maximum left/right displacement from the base target point. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Lock-On|Aim Offset Control|Limits", meta=(ClampMin="0.0", ClampMax="250.0", EditCondition="bEnableLockOn && bEnableAimOffsetControl", Units="cm"))
    float MaximumHorizontalAimOffset = 42.0f;

    /** Maximum upward displacement from the base target point. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Lock-On|Aim Offset Control|Limits", meta=(ClampMin="0.0", ClampMax="250.0", EditCondition="bEnableLockOn && bEnableAimOffsetControl", Units="cm"))
    float MaximumUpwardAimOffset = 65.0f;

    /** Maximum downward displacement from the base target point. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Lock-On|Aim Offset Control|Limits", meta=(ClampMin="0.0", ClampMax="250.0", EditCondition="bEnableLockOn && bEnableAimOffsetControl", Units="cm"))
    float MaximumDownwardAimOffset = 90.0f;

    /** Smoothing speed used while the player actively moves the lock point. Set to 0 for immediate response. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Lock-On|Aim Offset Control|Smoothing", meta=(ClampMin="0.0", EditCondition="bEnableLockOn && bEnableAimOffsetControl"))
    float AimOffsetInterpSpeed = 20.0f;

    /** Returns the movable lock point toward the authored Target Aim Offset after input stops. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Lock-On|Aim Offset Control|Recentering", meta=(EditCondition="bEnableLockOn && bEnableAimOffsetControl"))
    bool bAutoRecenterAimOffset = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Lock-On|Aim Offset Control|Recentering", meta=(ClampMin="0.0", EditCondition="bEnableLockOn && bEnableAimOffsetControl && bAutoRecenterAimOffset"))
    float AimOffsetRecenterDelaySeconds = 1.10f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Lock-On|Aim Offset Control|Recentering", meta=(ClampMin="0.0", EditCondition="bEnableLockOn && bEnableAimOffsetControl && bAutoRecenterAimOffset"))
    float AimOffsetRecenterInterpSpeed = 4.5f;

    /** Clears the movable offset whenever a different soldier becomes the active lock target. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Lock-On|Aim Offset Control", meta=(EditCondition="bEnableLockOn && bEnableAimOffsetControl"))
    bool bResetAimOffsetWhenTargetChanges = true;

    /** Player shot direction is corrected to the locked soldier while the lock remains valid. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Lock-On|Shooting", meta=(EditCondition="bEnableLockOn"))
    bool bAimPlayerShotsAtLockedTarget = true;

    /** Maximum angle over which lock-on may correct the submitted player shot direction. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Lock-On|Shooting", meta=(ClampMin="0.0", ClampMax="90.0", EditCondition="bEnableLockOn && bAimPlayerShotsAtLockedTarget"))
    float MaximumShotAssistAngleDegrees = 18.0f;

    /** Enables manual target cycling. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Lock-On|Switching", meta=(EditCondition="bEnableLockOn"))
    bool bEnableTargetSwitching = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Lock-On|Switching", meta=(EditCondition="bEnableLockOn && bEnableTargetSwitching"))
    FKey KeyboardMouseSwitchLeftKey = EKeys::Q;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Lock-On|Switching", meta=(EditCondition="bEnableLockOn && bEnableTargetSwitching"))
    FKey KeyboardMouseSwitchRightKey = EKeys::E;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Lock-On|Switching", meta=(EditCondition="bEnableLockOn && bEnableTargetSwitching"))
    FKey GamepadSwitchLeftKey = EKeys::Gamepad_DPad_Left;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Lock-On|Switching", meta=(EditCondition="bEnableLockOn && bEnableTargetSwitching"))
    FKey GamepadSwitchRightKey = EKeys::Gamepad_DPad_Right;

    /** A right-stick horizontal flick can cycle targets without requiring another gamepad button. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Lock-On|Switching", meta=(EditCondition="bEnableLockOn && bEnableTargetSwitching"))
    bool bEnableRightStickFlickSwitching = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Lock-On|Switching", meta=(ClampMin="0.1", ClampMax="1.0", EditCondition="bEnableLockOn && bEnableTargetSwitching && bEnableRightStickFlickSwitching"))
    float RightStickSwitchThreshold = 0.78f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Lock-On|Switching", meta=(ClampMin="0.0", EditCondition="bEnableLockOn && bEnableTargetSwitching"))
    float TargetSwitchCooldownSeconds = 0.22f;

    /** Deprecated v1.5.1 location retained only so existing Blueprint assignments migrate to Targeting > Player Lock-On Visual. */
    UPROPERTY(meta=(DeprecatedProperty, DeprecationMessage="Use Targeting.PlayerLockOnIndicatorTexture instead."))
    TObjectPtr<UTexture2D> LockOnIndicatorTexture = nullptr;

    /** World-space offset from the target combat aim point. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Lock-On|Indicator", meta=(EditCondition="bEnableLockOn"))
    FVector LockOnIndicatorWorldOffset = FVector(0.0f, 0.0f, 15.0f);

    /** Base world scale of the indicator billboard. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Lock-On|Indicator", meta=(EditCondition="bEnableLockOn"))
    FVector LockOnIndicatorScale = FVector(0.35f, 0.35f, 0.35f);

    /** Keeps the indicator approximately consistent in screen size over distance. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Lock-On|Indicator", meta=(EditCondition="bEnableLockOn"))
    bool bUseScreenSizeScaling = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Lock-On|Indicator", meta=(ClampMin="0.0001", EditCondition="bEnableLockOn && bUseScreenSizeScaling"))
    float IndicatorScreenSize = 0.0025f;

    /** Subtle scale pulse amplitude. 0 disables pulsing. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Lock-On|Indicator", meta=(ClampMin="0.0", ClampMax="1.0", EditCondition="bEnableLockOn"))
    float IndicatorPulseAmount = 0.10f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Lock-On|Indicator", meta=(ClampMin="0.0", EditCondition="bEnableLockOn"))
    float IndicatorPulseSpeed = 5.0f;

    /** Draws acquisition candidates, the active target line, and the line-of-sight result. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Lock-On|Debug", meta=(EditCondition="bEnableLockOn"))
    bool bDrawLockOnDebug = false;
};


/**
 * Optional self-contained keyboard/mouse and gamepad bindings for player combat.
 * These bindings poll the owning local Player Controller, so no project Input Action assets are required.
 */
USTRUCT(BlueprintType)
struct RENEGADESOLDIERCOMBAT_API FRenegadePlayerInputSettings
{
    GENERATED_BODY()

    /** Enables the plugin's built-in input polling. Disable this when an existing Enhanced Input Blueprint drives the public input nodes. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Built-In Input")
    bool bEnableBuiltInInput = true;

    /** Applies mouse and right-stick look directly to the owning Player Controller. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Built-In Input|Look", meta=(EditCondition="bEnableBuiltInInput"))
    bool bEnableBuiltInLookInput = true;

    /** When true, look input is only applied while the Aim button is active. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Built-In Input|Look", meta=(EditCondition="bEnableBuiltInInput && bEnableBuiltInLookInput"))
    bool bOnlyLookWhileAiming = false;

    /** Multiplies mouse and right-stick look sensitivity while Aim is active. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Built-In Input|Look", meta=(ClampMin="0.0", ClampMax="2.0", EditCondition="bEnableBuiltInInput && bEnableBuiltInLookInput"))
    float AimingLookSensitivityMultiplier = 0.65f;

    /** Prevents weapon input while the Player Controller is displaying a mouse cursor for menus. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Built-In Input", meta=(EditCondition="bEnableBuiltInInput"))
    bool bIgnoreInputWhileMouseCursorVisible = true;

    /** Allows the input polling path to run while the world is paused. Disabled by default. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Built-In Input", meta=(EditCondition="bEnableBuiltInInput"))
    bool bAllowInputWhenPaused = false;

    /** Aim is held by default. Enable this to toggle aim on each Aim-button press. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Built-In Input|Aim", meta=(EditCondition="bEnableBuiltInInput"))
    bool bToggleAim = false;

    /** Requires Aim to be active before the Fire button can start a shot. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Built-In Input|Aim", meta=(EditCondition="bEnableBuiltInInput"))
    bool bRequireAimToFire = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Built-In Input|Keyboard and Mouse", meta=(EditCondition="bEnableBuiltInInput"))
    FKey KeyboardMouseFireKey = EKeys::LeftMouseButton;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Built-In Input|Keyboard and Mouse", meta=(EditCondition="bEnableBuiltInInput"))
    FKey KeyboardMouseAimKey = EKeys::RightMouseButton;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Built-In Input|Keyboard and Mouse", meta=(EditCondition="bEnableBuiltInInput"))
    FKey KeyboardMouseReloadKey = EKeys::R;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Built-In Input|Keyboard and Mouse", meta=(EditCondition="bEnableBuiltInInput"))
    FKey KeyboardMouseSelectRifleKey = EKeys::One;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Built-In Input|Keyboard and Mouse", meta=(EditCondition="bEnableBuiltInInput"))
    FKey KeyboardMouseSelectPistolKey = EKeys::Two;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Built-In Input|Keyboard and Mouse", meta=(EditCondition="bEnableBuiltInInput"))
    FKey KeyboardMouseSelectRocketLauncherKey = EKeys::Three;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Built-In Input|Keyboard and Mouse|Look", meta=(EditCondition="bEnableBuiltInInput && bEnableBuiltInLookInput"))
    FKey MouseLookXAxis = EKeys::MouseX;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Built-In Input|Keyboard and Mouse|Look", meta=(EditCondition="bEnableBuiltInInput && bEnableBuiltInLookInput"))
    FKey MouseLookYAxis = EKeys::MouseY;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Built-In Input|Keyboard and Mouse|Look", meta=(ClampMin="0.0", EditCondition="bEnableBuiltInInput && bEnableBuiltInLookInput"))
    float MouseYawSensitivity = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Built-In Input|Keyboard and Mouse|Look", meta=(ClampMin="0.0", EditCondition="bEnableBuiltInInput && bEnableBuiltInLookInput"))
    float MousePitchSensitivity = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Built-In Input|Keyboard and Mouse|Look", meta=(EditCondition="bEnableBuiltInInput && bEnableBuiltInLookInput"))
    bool bInvertMouseY = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Built-In Input|Gamepad", meta=(EditCondition="bEnableBuiltInInput"))
    FKey GamepadFireKey = EKeys::Gamepad_RightTriggerAxis;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Built-In Input|Gamepad", meta=(EditCondition="bEnableBuiltInInput"))
    FKey GamepadAimKey = EKeys::Gamepad_LeftTriggerAxis;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Built-In Input|Gamepad", meta=(EditCondition="bEnableBuiltInInput"))
    FKey GamepadReloadKey = EKeys::Gamepad_FaceButton_Left;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Built-In Input|Gamepad", meta=(EditCondition="bEnableBuiltInInput"))
    FKey GamepadSelectRifleKey = EKeys::Gamepad_DPad_Up;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Built-In Input|Gamepad", meta=(EditCondition="bEnableBuiltInInput"))
    FKey GamepadSelectPistolKey = EKeys::Gamepad_DPad_Down;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Built-In Input|Gamepad", meta=(EditCondition="bEnableBuiltInInput"))
    FKey GamepadSelectRocketLauncherKey = EKeys::Gamepad_DPad_Right;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Built-In Input|Gamepad", meta=(ClampMin="0.01", ClampMax="1.0", EditCondition="bEnableBuiltInInput"))
    float GamepadButtonThreshold = 0.45f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Built-In Input|Gamepad|Look", meta=(EditCondition="bEnableBuiltInInput && bEnableBuiltInLookInput"))
    FKey GamepadLookXAxis = EKeys::Gamepad_RightX;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Built-In Input|Gamepad|Look", meta=(EditCondition="bEnableBuiltInInput && bEnableBuiltInLookInput"))
    FKey GamepadLookYAxis = EKeys::Gamepad_RightY;

    /** Maximum right-stick yaw speed in degrees per second. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Built-In Input|Gamepad|Look", meta=(ClampMin="0.0", EditCondition="bEnableBuiltInInput && bEnableBuiltInLookInput"))
    float GamepadYawSpeedDegreesPerSecond = 180.0f;

    /** Maximum right-stick pitch speed in degrees per second. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Built-In Input|Gamepad|Look", meta=(ClampMin="0.0", EditCondition="bEnableBuiltInInput && bEnableBuiltInLookInput"))
    float GamepadPitchSpeedDegreesPerSecond = 135.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Built-In Input|Gamepad|Look", meta=(ClampMin="0.0", ClampMax="0.95", EditCondition="bEnableBuiltInInput && bEnableBuiltInLookInput"))
    float GamepadLookDeadZone = 0.12f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Built-In Input|Gamepad|Look", meta=(EditCondition="bEnableBuiltInInput && bEnableBuiltInLookInput"))
    bool bInvertGamepadY = false;
};

USTRUCT(BlueprintType)
struct RENEGADESOLDIERCOMBAT_API FRenegadeCombatVisualSettings
{
    GENERATED_BODY()

    /** Enables the lightweight pooled static-mesh bullet visual. Damage remains instant hitscan. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Bullet Visual")
    bool bEnableBulletMeshVisual = true;

    /** Static mesh used for the visible bullet/tracer. Leave empty to suppress automatic mesh spawning. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Bullet Visual", meta=(EditCondition="bEnableBulletMeshVisual"))
    TObjectPtr<UStaticMesh> BulletMesh = nullptr;

    /** Optional material override for material slot zero of the bullet mesh. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Bullet Visual", meta=(EditCondition="bEnableBulletMeshVisual"))
    TObjectPtr<UMaterialInterface> BulletMaterialOverride = nullptr;

    /** World scale applied to the bullet mesh. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Bullet Visual", meta=(EditCondition="bEnableBulletMeshVisual"))
    FVector BulletMeshScale = FVector(0.12f, 0.12f, 0.12f);

    /** Added after orienting the mesh's local X axis toward travel direction. Useful when the mesh points along Y or Z. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Bullet Visual", meta=(EditCondition="bEnableBulletMeshVisual"))
    FRotator BulletMeshRotationOffset = FRotator::ZeroRotator;

    /** Cosmetic travel speed in centimetres per second. The authoritative weapon remains hitscan. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Bullet Visual", meta=(ClampMin="100.0", EditCondition="bEnableBulletMeshVisual"))
    float BulletVisualSpeed = 30000.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Bullet Visual", meta=(ClampMin="0.001", EditCondition="bEnableBulletMeshVisual"))
    float MinimumBulletVisualSeconds = 0.025f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Bullet Visual", meta=(ClampMin="0.001", EditCondition="bEnableBulletMeshVisual"))
    float MaximumBulletVisualSeconds = 0.40f;

    /** Moves the visual forward along its travel direction to prevent it appearing inside the gun mesh. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Bullet Visual|Spawn", meta=(ClampMin="0.0", EditCondition="bEnableBulletMeshVisual"))
    float BulletVisualMuzzleForwardOffset = 6.0f;

    /** Stops the visual slightly before the impact surface to prevent mesh clipping. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Bullet Visual", meta=(ClampMin="0.0", EditCondition="bEnableBulletMeshVisual"))
    float BulletVisualImpactStopShortDistance = 2.0f;

    /** Maximum simultaneously allocated bullet mesh components per soldier. Components are reused instead of constantly spawned. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Bullet Visual|Performance", meta=(ClampMin="1", ClampMax="32", EditCondition="bEnableBulletMeshVisual"))
    int32 BulletVisualPoolSize = 6;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Bullet Visual|Performance", meta=(EditCondition="bEnableBulletMeshVisual"))
    bool bBulletVisualCastsShadow = false;

    /** Draws the exact authoritative weapon trace whenever a shot is executed. Useful for verifying player aim and collision setup. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Shot Debug")
    bool bDrawDebugShotLine = false;

    /** How long the shot debug line remains visible. Zero draws for one frame. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Shot Debug", meta=(ClampMin="0.0", EditCondition="bDrawDebugShotLine"))
    float DebugShotLineDuration = 2.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Shot Debug", meta=(ClampMin="0.0", EditCondition="bDrawDebugShotLine"))
    float DebugShotLineThickness = 1.5f;

    /** Draws a small point at a blocking hit location. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Shot Debug", meta=(EditCondition="bDrawDebugShotLine"))
    bool bDrawDebugShotImpactPoint = true;

    /** Colour used when the trace resolves and damages a combat target. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Shot Debug", meta=(EditCondition="bDrawDebugShotLine"))
    FLinearColor DebugShotDamageColor = FLinearColor::Green;

    /** Colour used when the trace hits geometry or a non-damageable actor. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Shot Debug", meta=(EditCondition="bDrawDebugShotLine"))
    FLinearColor DebugShotBlockedColor = FLinearColor(1.0f, 0.55f, 0.0f, 1.0f);

    /** Colour used when the trace reaches maximum range without a blocking hit. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Shot Debug", meta=(EditCondition="bDrawDebugShotLine"))
    FLinearColor DebugShotMissColor = FLinearColor::Red;

    /** Enables automatic blood placement beneath a successfully damaged hostile actor. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ground Blood")
    bool bEnableGroundBloodSplatter = true;

    /** One material is selected randomly for each blood decal. These must use the Deferred Decal material domain. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ground Blood", meta=(EditCondition="bEnableGroundBloodSplatter"))
    TArray<TObjectPtr<UMaterialInterface>> GroundBloodDecalMaterials;

    /** Optional local-only Blueprint actor for blood assets that are not decal materials, such as a Niagara/decal effect actor. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ground Blood", meta=(EditCondition="bEnableGroundBloodSplatter"))
    TSubclassOf<AActor> GroundBloodEffectActorClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ground Blood", meta=(ClampMin="0.0", ClampMax="1.0", EditCondition="bEnableGroundBloodSplatter"))
    float GroundBloodSpawnChance = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ground Blood", meta=(ClampMin="1.0", EditCondition="bEnableGroundBloodSplatter"))
    float GroundBloodTraceUpDistance = 40.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ground Blood", meta=(ClampMin="1.0", EditCondition="bEnableGroundBloodSplatter"))
    float GroundBloodTraceDownDistance = 260.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ground Blood", meta=(EditCondition="bEnableGroundBloodSplatter"))
    TEnumAsByte<ECollisionChannel> GroundBloodTraceChannel = ECC_Visibility;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ground Blood", meta=(ClampMin="1.0", EditCondition="bEnableGroundBloodSplatter"))
    FVector2D GroundBloodSizeRange = FVector2D(35.0f, 70.0f);

    /** Decal projection depth (the X value of Decal Size). */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ground Blood", meta=(ClampMin="1.0", EditCondition="bEnableGroundBloodSplatter"))
    float GroundBloodDecalDepth = 18.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ground Blood", meta=(ClampMin="0.0", EditCondition="bEnableGroundBloodSplatter"))
    float GroundBloodSurfaceOffset = 1.5f;

    /** Zero keeps decals alive indefinitely. A positive value automatically removes them. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ground Blood|Lifetime", meta=(ClampMin="0.0", EditCondition="bEnableGroundBloodSplatter"))
    float GroundBloodLifeSeconds = 30.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ground Blood|Lifetime", meta=(ClampMin="0.0", EditCondition="bEnableGroundBloodSplatter"))
    float GroundBloodFadeSeconds = 5.0f;

    /** Per-soldier throttle that protects large battles from producing excessive decals. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ground Blood|Performance", meta=(ClampMin="0.0", EditCondition="bEnableGroundBloodSplatter"))
    float MinimumSecondsBetweenGroundBlood = 0.06f;

    /** When enabled, blood appears when the visible bullet reaches the trace end instead of immediately when the hitscan fires. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ground Blood", meta=(EditCondition="bEnableGroundBloodSplatter"))
    bool bDelayGroundBloodUntilBulletArrives = true;
};

USTRUCT(BlueprintType)
struct RENEGADESOLDIERCOMBAT_API FRenegadeHealthRespawnSettings
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Health", meta=(ClampMin="1.0"))
    float MaximumHealth = 100.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Health")
    bool bCanRespawn = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Respawn", meta=(ClampMin="0.0", EditCondition="bCanRespawn"))
    float RespawnDelaySeconds = 8.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Respawn", meta=(ClampMin="0.0", EditCondition="bCanRespawn"))
    float RespawnInvulnerabilitySeconds = 1.25f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Respawn", meta=(EditCondition="bCanRespawn"))
    ERenegadeRespawnTransformMode RespawnTransformMode = ERenegadeRespawnTransformMode::OriginalTransform;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Respawn", meta=(EditCondition="bCanRespawn"))
    FTransform CustomRespawnTransform = FTransform::Identity;


    /** Optional list of authored respawn transforms used by Custom Transform List mode. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Respawn|Custom Locations", meta=(EditCondition="bCanRespawn"))
    TArray<FTransform> CustomRespawnTransforms;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Respawn|Custom Locations", meta=(EditCondition="bCanRespawn"))
    ERenegadeRespawnLocationSelection CustomRespawnSelection = ERenegadeRespawnLocationSelection::Random;

    /** Finds enabled level actors carrying this Actor Tag when Tagged Actor mode is selected. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Respawn|Tagged Locations", meta=(EditCondition="bCanRespawn"))
    FName RespawnActorTag = TEXT("PlayerRespawn");

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Respawn|Tagged Locations", meta=(EditCondition="bCanRespawn"))
    ERenegadeRespawnLocationSelection TaggedActorSelection = ERenegadeRespawnLocationSelection::Random;

    /** Added in world Z after resolving any respawn transform. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Respawn", meta=(EditCondition="bCanRespawn"))
    float RespawnVerticalOffset = 0.0f;

    /** Rotates a Player Controller to match the selected respawn transform. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Respawn", meta=(EditCondition="bCanRespawn"))
    bool bApplyRespawnRotationToController = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ragdoll")
    bool bEnableAutomaticRagdoll = true;

    /** Optional component tag used to select the exact Skeletal Mesh Component that should ragdoll. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ragdoll")
    FName RagdollMeshComponentTag = NAME_None;

    /** If the Character Mesh has no usable Physics Asset, search the actor for another skeletal mesh that has one. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ragdoll")
    bool bAutoFindRagdollMeshWithPhysicsAsset = true;

    /** Forces the simulated bodies to fully drive the rendered pose while dead. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ragdoll")
    bool bForceFullPhysicsBlendOnRagdoll = true;

    /**
     * Prevents modular-character stretching by resolving a tagged/selected Leader Pose follower
     * to the leader skeletal mesh that owns the real bone transform buffer.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ragdoll|Stability")
    bool bResolveLeaderPoseMeshForRagdoll = true;

    /**
     * Uses Set All Bodies Below Simulate Physics instead of blindly enabling every body.
     * This is the recommended stable humanoid ragdoll path and avoids simulating helper/root bodies.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ragdoll|Stability")
    bool bUseRagdollRootBone = true;

    /** First bone whose body and descendants should enter ragdoll. Renegade NXT soldiers currently use spine. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ragdoll|Stability", meta=(EditCondition="bUseRagdollRootBone"))
    FName RagdollRootBone = TEXT("spine");

    /** Include the Ragdoll Root Bone itself when starting physics. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ragdoll|Stability", meta=(EditCondition="bUseRagdollRootBone"))
    bool bIncludeRagdollRootBone = true;

    /** Disable cloth, AnimDynamics, rigid-body AnimGraph nodes and post-process animation while ragdolled. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ragdoll|Stability")
    bool bDisableSecondaryAnimationDuringRagdoll = true;

    /** Print a clear Output Log warning when ragdoll cannot start. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ragdoll")
    bool bLogRagdollSetupWarnings = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ragdoll")
    FName RagdollCollisionProfileName = TEXT("Ragdoll");

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ragdoll", meta=(ClampMin="0.0"))
    float RagdollImpulseStrength = 1350.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ragdoll")
    bool bRagdollImpulseIsVelocityChange = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ragdoll")
    bool bDisableCapsuleCollisionOnDeath = true;
};
