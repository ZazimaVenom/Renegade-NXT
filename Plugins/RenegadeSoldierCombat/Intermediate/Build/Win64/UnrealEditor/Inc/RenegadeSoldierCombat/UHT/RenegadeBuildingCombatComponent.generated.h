// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RenegadeBuildingCombatComponent.h"

#ifdef RENEGADESOLDIERCOMBAT_RenegadeBuildingCombatComponent_generated_h
#error "RenegadeBuildingCombatComponent.generated.h already included, missing '#pragma once' in RenegadeBuildingCombatComponent.h"
#endif
#define RENEGADESOLDIERCOMBAT_RenegadeBuildingCombatComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
class ARenegadeHarvestPoint;
class ARenegadeRefineryDockPoint;
class UDamageType;
class USceneComponent;
enum class ERenegadeBuildingDefenseType : uint8;
struct FVector_NetQuantize;

// ********** Begin Class URenegadeBuildingCombatComponent *****************************************
#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeBuildingCombatComponent_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastObeliskFired_Implementation(FVector_NetQuantize LaserStart, FVector_NetQuantize LaserEnd); \
	virtual void MulticastObeliskChargeStarted_Implementation(FVector_NetQuantize ChargeLocation); \
	virtual void MulticastAGTRocketsFired_Implementation(bool bUseLeft, FVector_NetQuantize LeftStart, FVector_NetQuantize LeftEnd, bool bUseRight, FVector_NetQuantize RightStart, FVector_NetQuantize RightEnd, FVector_NetQuantize SoundLocation); \
	virtual void MulticastBuildingDestroyed_Implementation(AActor* Destroyer, FVector_NetQuantize EffectLocation); \
	virtual void MulticastBuildingLowHealthWarning_Implementation(FVector_NetQuantize SoundLocation); \
	virtual void MulticastBuildingUnderAttack_Implementation(AActor* Attacker, float Damage, FVector_NetQuantize SoundLocation); \
	DECLARE_FUNCTION(execMulticastObeliskFired); \
	DECLARE_FUNCTION(execMulticastObeliskChargeStarted); \
	DECLARE_FUNCTION(execMulticastAGTRocketsFired); \
	DECLARE_FUNCTION(execMulticastBuildingDestroyed); \
	DECLARE_FUNCTION(execMulticastBuildingLowHealthWarning); \
	DECLARE_FUNCTION(execMulticastBuildingUnderAttack); \
	DECLARE_FUNCTION(execHandleSpawnedHarvesterActorDestroyed); \
	DECLARE_FUNCTION(execOnRep_ActiveHarvester); \
	DECLARE_FUNCTION(execOnRep_TeamPowerOnline); \
	DECLARE_FUNCTION(execOnRep_ObeliskCharging); \
	DECLARE_FUNCTION(execOnRep_DefenseTarget); \
	DECLARE_FUNCTION(execOnRep_Destroyed); \
	DECLARE_FUNCTION(execOnRep_LowHealth); \
	DECLARE_FUNCTION(execOnRep_CurrentHealth); \
	DECLARE_FUNCTION(execOnRep_TeamId); \
	DECLARE_FUNCTION(execHandleOwnerAnyDamage); \
	DECLARE_FUNCTION(execPreviewObeliskLaser); \
	DECLARE_FUNCTION(execPreviewAGTRocketVisuals); \
	DECLARE_FUNCTION(execSetRuntimeObeliskLaserStart); \
	DECLARE_FUNCTION(execSetRuntimeAGTRocketMuzzles); \
	DECLARE_FUNCTION(execSetRuntimeTargetPointComponent); \
	DECLARE_FUNCTION(execResolveHarvesterRefineryDockPoint); \
	DECLARE_FUNCTION(execResolveHarvesterHarvestPoint); \
	DECLARE_FUNCTION(execGetHarvesterDockTransform); \
	DECLARE_FUNCTION(execGetHarvesterSpawnTransform); \
	DECLARE_FUNCTION(execNotifyHarvesterDestroyed); \
	DECLARE_FUNCTION(execScheduleHarvesterRespawn); \
	DECLARE_FUNCTION(execSpawnHarvesterNow); \
	DECLARE_FUNCTION(execClearDefenseTarget); \
	DECLARE_FUNCTION(execSetDefenseTarget); \
	DECLARE_FUNCTION(execForceDefenseTargetRefresh); \
	DECLARE_FUNCTION(execStopBuildingDefense); \
	DECLARE_FUNCTION(execStartBuildingDefense); \
	DECLARE_FUNCTION(execRestoreBuilding); \
	DECLARE_FUNCTION(execForceDestroyBuilding); \
	DECLARE_FUNCTION(execSetBuildingHealth); \
	DECLARE_FUNCTION(execRepairBuilding); \
	DECLARE_FUNCTION(execIsValidDefenseTarget); \
	DECLARE_FUNCTION(execGetTargetAimLocation); \
	DECLARE_FUNCTION(execIsHostileToActor); \
	DECLARE_FUNCTION(execIsBuildingOperational); \
	DECLARE_FUNCTION(execIsBuildingLowHealth); \
	DECLARE_FUNCTION(execGetHealthPercent); \
	DECLARE_FUNCTION(execSetTeamId);


#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeBuildingCombatComponent_h_57_CALLBACK_WRAPPERS
struct Z_Construct_UClass_URenegadeBuildingCombatComponent_Statics;
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_URenegadeBuildingCombatComponent(ETypeConstructPhase);

#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeBuildingCombatComponent_h_57_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_URenegadeBuildingCombatComponent_Statics; \
	friend RENEGADESOLDIERCOMBAT_API UClass* ::Z_Construct_UClass_URenegadeBuildingCombatComponent(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(URenegadeBuildingCombatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RenegadeSoldierCombat"), Z_Construct_UClass_URenegadeBuildingCombatComponent) \
	DECLARE_SERIALIZER(URenegadeBuildingCombatComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TeamId=NETFIELD_REP_START, \
		CurrentHealth, \
		bIsLowHealth, \
		bIsDestroyed, \
		CurrentDefenseTarget, \
		bObeliskCharging, \
		bTeamPowerOnline, \
		ActiveHarvester, \
		NETFIELD_REP_END=ActiveHarvester	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeBuildingCombatComponent_h_57_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URenegadeBuildingCombatComponent(URenegadeBuildingCombatComponent&&) = delete; \
	URenegadeBuildingCombatComponent(const URenegadeBuildingCombatComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URenegadeBuildingCombatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URenegadeBuildingCombatComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URenegadeBuildingCombatComponent) \
	NO_API virtual ~URenegadeBuildingCombatComponent();


#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeBuildingCombatComponent_h_54_PROLOG
#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeBuildingCombatComponent_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeBuildingCombatComponent_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeBuildingCombatComponent_h_57_CALLBACK_WRAPPERS \
	FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeBuildingCombatComponent_h_57_INCLASS_NO_PURE_DECLS \
	FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeBuildingCombatComponent_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URenegadeBuildingCombatComponent;

// ********** End Class URenegadeBuildingCombatComponent *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeBuildingCombatComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
