// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RenegadeSoldierCombatComponent.h"

#ifdef RENEGADESOLDIERCOMBAT_RenegadeSoldierCombatComponent_generated_h
#error "RenegadeSoldierCombatComponent.generated.h already included, missing '#pragma once' in RenegadeSoldierCombatComponent.h"
#endif
#define RENEGADESOLDIERCOMBAT_RenegadeSoldierCombatComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
class UCameraComponent;
class UDamageType;
class UDecalComponent;
class USceneComponent;
class USkeletalMeshComponent;
class UTexture2D;
enum class ERenegadeCombatMoveType : uint8;
enum class ERenegadePlayerWeaponSlot : uint8;
struct FHitResult;
struct FLinearColor;
struct FRenegadeWeaponSettings;
struct FVector_NetQuantize;
struct FVector_NetQuantize10;
struct FVector_NetQuantizeNormal;

// ********** Begin Class URenegadeSoldierCombatComponent ******************************************
#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeSoldierCombatComponent_h_121_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastFinishRespawn_Implementation(FTransform RespawnTransform); \
	virtual void MulticastBeginDeath_Implementation(AActor* Killer, FVector RagdollImpulse, FName HitBone); \
	virtual void MulticastReloadFinished_Implementation(); \
	virtual void MulticastReloadStarted_Implementation(); \
	virtual void MulticastGrenadeExploded_Implementation(int32 GrenadeId, FVector_NetQuantize ImpactLocation, FVector_NetQuantizeNormal ImpactNormal); \
	virtual void MulticastGrenadeBounced_Implementation(int32 GrenadeId, FVector_NetQuantize BounceLocation, FVector_NetQuantizeNormal ImpactNormal, FVector_NetQuantize10 NewVelocity); \
	virtual void MulticastGrenadeLaunched_Implementation(int32 GrenadeId, FVector_NetQuantize LaunchLocation, FVector_NetQuantize10 InitialVelocity); \
	virtual void MulticastRocketLaunched_Implementation(FVector_NetQuantize LaunchLocation, FVector_NetQuantize ImpactLocation, float FlightSeconds); \
	virtual void MulticastShotFired_Implementation(FVector TraceStart, FVector TraceEnd, bool bBlockingHit, FHitResult HitResult, bool bSpawnGroundBloodForHit, bool bDamagedCombatTarget); \
	virtual void ServerSelectPlayerWeapon_Implementation(ERenegadePlayerWeaponSlot NewWeapon); \
	virtual void ServerRequestPlayerReload_Implementation(ERenegadePlayerWeaponSlot RequestedWeapon); \
	virtual void ServerSetPlayerAiming_Implementation(bool bNewAiming); \
	virtual void ServerRequestPlayerRocketShot_Implementation(FVector_NetQuantize ClientViewLocation, FVector_NetQuantizeNormal ClientViewDirection, bool bClientAiming); \
	virtual void ServerRequestPlayerShot_Implementation(FVector_NetQuantize ClientViewLocation, FVector_NetQuantizeNormal ClientViewDirection, ERenegadePlayerWeaponSlot RequestedWeapon, bool bClientAiming); \
	DECLARE_FUNCTION(execMulticastFinishRespawn); \
	DECLARE_FUNCTION(execMulticastBeginDeath); \
	DECLARE_FUNCTION(execMulticastReloadFinished); \
	DECLARE_FUNCTION(execMulticastReloadStarted); \
	DECLARE_FUNCTION(execMulticastGrenadeExploded); \
	DECLARE_FUNCTION(execMulticastGrenadeBounced); \
	DECLARE_FUNCTION(execMulticastGrenadeLaunched); \
	DECLARE_FUNCTION(execMulticastRocketLaunched); \
	DECLARE_FUNCTION(execMulticastShotFired); \
	DECLARE_FUNCTION(execServerSelectPlayerWeapon); \
	DECLARE_FUNCTION(execServerRequestPlayerReload); \
	DECLARE_FUNCTION(execServerSetPlayerAiming); \
	DECLARE_FUNCTION(execServerRequestPlayerRocketShot); \
	DECLARE_FUNCTION(execServerRequestPlayerShot); \
	DECLARE_FUNCTION(execOnRep_PlayerAiming); \
	DECLARE_FUNCTION(execOnRep_RocketLauncherAmmo); \
	DECLARE_FUNCTION(execOnRep_PistolAmmo); \
	DECLARE_FUNCTION(execOnRep_AutomaticRifleAmmo); \
	DECLARE_FUNCTION(execOnRep_ActivePlayerWeapon); \
	DECLARE_FUNCTION(execOnRep_CurrentTarget); \
	DECLARE_FUNCTION(execOnRep_Dead); \
	DECLARE_FUNCTION(execOnRep_CurrentHealth); \
	DECLARE_FUNCTION(execOnRep_TeamId); \
	DECLARE_FUNCTION(execHandleOwnerAnyDamage); \
	DECLARE_FUNCTION(execPreviewGroundBloodAtLocation); \
	DECLARE_FUNCTION(execCalculateGrenadeLaunchVelocityToLocation); \
	DECLARE_FUNCTION(execGetGrenadeLauncherMuzzleLocation); \
	DECLARE_FUNCTION(execGetGrenadeLauncherMuzzleComponent); \
	DECLARE_FUNCTION(execClearGrenadeLauncherMuzzleComponent); \
	DECLARE_FUNCTION(execSetGrenadeLauncherMuzzleComponent); \
	DECLARE_FUNCTION(execPreviewRocketLauncherVisual); \
	DECLARE_FUNCTION(execGetRocketLauncherMuzzleLocation); \
	DECLARE_FUNCTION(execGetRocketLauncherMuzzleComponent); \
	DECLARE_FUNCTION(execClearRocketLauncherMuzzleComponent); \
	DECLARE_FUNCTION(execSetRocketLauncherMuzzleComponent); \
	DECLARE_FUNCTION(execPreviewBulletMeshFromConfiguredSpawn); \
	DECLARE_FUNCTION(execPreviewBulletMeshVisual); \
	DECLARE_FUNCTION(execGetBulletVisualSpawnLocation); \
	DECLARE_FUNCTION(execGetBulletVisualSpawnComponent); \
	DECLARE_FUNCTION(execClearBulletVisualSpawnComponent); \
	DECLARE_FUNCTION(execSetBulletVisualSpawnComponent); \
	DECLARE_FUNCTION(execGetActiveWeaponSettings); \
	DECLARE_FUNCTION(execGetResolvedRagdollMesh); \
	DECLARE_FUNCTION(execValidateRagdollSetup); \
	DECLARE_FUNCTION(execIsInvulnerable); \
	DECLARE_FUNCTION(execSetInvulnerable); \
	DECLARE_FUNCTION(execClearCustomRespawnTransforms); \
	DECLARE_FUNCTION(execAddCustomRespawnTransform); \
	DECLARE_FUNCTION(execSetCustomRespawnTransforms); \
	DECLARE_FUNCTION(execHasRuntimeRespawnTransform); \
	DECLARE_FUNCTION(execClearRuntimeRespawnTransform); \
	DECLARE_FUNCTION(execSetRuntimeRespawnTransform); \
	DECLARE_FUNCTION(execRespawnNow); \
	DECLARE_FUNCTION(execForceKill); \
	DECLARE_FUNCTION(execHeal); \
	DECLARE_FUNCTION(execGetHealthPercent); \
	DECLARE_FUNCTION(execIsReloading); \
	DECLARE_FUNCTION(execIsBuiltInPlayerInputEnabled); \
	DECLARE_FUNCTION(execSetBuiltInPlayerInputEnabled); \
	DECLARE_FUNCTION(execRestorePlayerAimPresentation); \
	DECLARE_FUNCTION(execSnapPlayerCharacterToAimForward); \
	DECLARE_FUNCTION(execGetPlayerAimCameraComponent); \
	DECLARE_FUNCTION(execClearPlayerAimCameraComponent); \
	DECLARE_FUNCTION(execSetPlayerAimCameraComponent); \
	DECLARE_FUNCTION(execGetPlayerAimAlpha); \
	DECLARE_FUNCTION(execGetPlayerLockOnIndicatorColor); \
	DECLARE_FUNCTION(execSetPlayerLockOnIndicatorColor); \
	DECLARE_FUNCTION(execGetPlayerLockOnIndicatorTexture); \
	DECLARE_FUNCTION(execSetPlayerLockOnIndicatorTexture); \
	DECLARE_FUNCTION(execGetPlayerLockOnAimOffset); \
	DECLARE_FUNCTION(execResetPlayerLockOnAimOffset); \
	DECLARE_FUNCTION(execPlayerAddLockOnAimInput); \
	DECLARE_FUNCTION(execGetPlayerLockOnAimLocation); \
	DECLARE_FUNCTION(execGetPlayerLockOnTarget); \
	DECLARE_FUNCTION(execIsPlayerLockedOn); \
	DECLARE_FUNCTION(execIsPlayerLockOnHeld); \
	DECLARE_FUNCTION(execRefreshPlayerLockOnTarget); \
	DECLARE_FUNCTION(execPlayerSwitchLockOnTarget); \
	DECLARE_FUNCTION(execPlayerLockOnToTarget); \
	DECLARE_FUNCTION(execPlayerSetLockOnHeld); \
	DECLARE_FUNCTION(execPlayerStopLockOn); \
	DECLARE_FUNCTION(execPlayerStartLockOn); \
	DECLARE_FUNCTION(execIsPlayerAiming); \
	DECLARE_FUNCTION(execPlayerStopAiming); \
	DECLARE_FUNCTION(execPlayerStartAiming); \
	DECLARE_FUNCTION(execPlayerSetAiming); \
	DECLARE_FUNCTION(execIsPlayerFireHeld); \
	DECLARE_FUNCTION(execGetPlayerWeaponAmmo); \
	DECLARE_FUNCTION(execGetPlayerWeaponSettings); \
	DECLARE_FUNCTION(execSelectPlayerRocketLauncher); \
	DECLARE_FUNCTION(execSelectPlayerPistol); \
	DECLARE_FUNCTION(execSelectPlayerAutomaticRifle); \
	DECLARE_FUNCTION(execSelectPlayerWeapon); \
	DECLARE_FUNCTION(execPlayerFireRocketLauncher); \
	DECLARE_FUNCTION(execPlayerFirePistol); \
	DECLARE_FUNCTION(execPlayerStopAutomaticRifleFire); \
	DECLARE_FUNCTION(execPlayerStartAutomaticRifleFire); \
	DECLARE_FUNCTION(execPlayerReload); \
	DECLARE_FUNCTION(execPlayerFireOnce); \
	DECLARE_FUNCTION(execPlayerStopFire); \
	DECLARE_FUNCTION(execPlayerStartFire); \
	DECLARE_FUNCTION(execIsPlayerControlledCombatant); \
	DECLARE_FUNCTION(execIsInCombat); \
	DECLARE_FUNCTION(execIsValidCombatTarget); \
	DECLARE_FUNCTION(execIsHostileToActor); \
	DECLARE_FUNCTION(execSetTeamId); \
	DECLARE_FUNCTION(execIsCombatRotationLockEnabled); \
	DECLARE_FUNCTION(execSetCombatRotationLockEnabled); \
	DECLARE_FUNCTION(execForceTargetRefresh); \
	DECLARE_FUNCTION(execClearCombatTarget); \
	DECLARE_FUNCTION(execSetCombatTarget); \
	DECLARE_FUNCTION(execStopAutoCombat); \
	DECLARE_FUNCTION(execStartAutoCombat);


#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeSoldierCombatComponent_h_121_CALLBACK_WRAPPERS
struct Z_Construct_UClass_URenegadeSoldierCombatComponent_Statics;
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_URenegadeSoldierCombatComponent(ETypeConstructPhase);

#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeSoldierCombatComponent_h_121_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_URenegadeSoldierCombatComponent_Statics; \
	friend RENEGADESOLDIERCOMBAT_API UClass* ::Z_Construct_UClass_URenegadeSoldierCombatComponent(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(URenegadeSoldierCombatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RenegadeSoldierCombat"), Z_Construct_UClass_URenegadeSoldierCombatComponent) \
	DECLARE_SERIALIZER(URenegadeSoldierCombatComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TeamId=NETFIELD_REP_START, \
		bPlayerControlledCombat, \
		bLockCombatRotationToCurrentTarget, \
		CurrentHealth, \
		bIsDead, \
		CurrentTarget, \
		CurrentMagazineAmmo, \
		ActivePlayerWeapon, \
		CurrentAutomaticRifleAmmo, \
		CurrentPistolAmmo, \
		CurrentRocketLauncherAmmo, \
		bIsPlayerAiming, \
		NETFIELD_REP_END=bIsPlayerAiming	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeSoldierCombatComponent_h_121_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URenegadeSoldierCombatComponent(URenegadeSoldierCombatComponent&&) = delete; \
	URenegadeSoldierCombatComponent(const URenegadeSoldierCombatComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URenegadeSoldierCombatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URenegadeSoldierCombatComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URenegadeSoldierCombatComponent) \
	NO_API virtual ~URenegadeSoldierCombatComponent();


#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeSoldierCombatComponent_h_118_PROLOG
#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeSoldierCombatComponent_h_121_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeSoldierCombatComponent_h_121_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeSoldierCombatComponent_h_121_CALLBACK_WRAPPERS \
	FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeSoldierCombatComponent_h_121_INCLASS_NO_PURE_DECLS \
	FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeSoldierCombatComponent_h_121_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URenegadeSoldierCombatComponent;

// ********** End Class URenegadeSoldierCombatComponent ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeSoldierCombatComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
