// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RenegadeHarvesterCombatComponent.h"

#ifdef RENEGADESOLDIERCOMBAT_RenegadeHarvesterCombatComponent_generated_h
#error "RenegadeHarvesterCombatComponent.generated.h already included, missing '#pragma once' in RenegadeHarvesterCombatComponent.h"
#endif
#define RENEGADESOLDIERCOMBAT_RenegadeHarvesterCombatComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
class ARenegadeHarvestPoint;
class ARenegadeRefineryDockPoint;
class ARenegadeTeamCreditsManager;
class UDamageType;
class URenegadeBuildingCombatComponent;
class USceneComponent;
enum class ERenegadeHarvesterLifecycleState : uint8;
struct FVector_NetQuantize;

// ********** Begin Class URenegadeHarvesterCombatComponent ****************************************
#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeHarvesterCombatComponent_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastTurretFired_Implementation(AActor* Target, FVector_NetQuantize TraceStart, FVector_NetQuantize TraceEnd, bool bSpawnImpactEffect); \
	virtual void MulticastHarvesterDestroyed_Implementation(AActor* Destroyer, FVector_NetQuantize EffectLocation); \
	virtual void MulticastHarvesterCritical_Implementation(FVector_NetQuantize SoundLocation); \
	virtual void MulticastHarvesterUnderAttack_Implementation(AActor* Attacker, float Damage, FVector_NetQuantize SoundLocation); \
	DECLARE_FUNCTION(execMulticastTurretFired); \
	DECLARE_FUNCTION(execMulticastHarvesterDestroyed); \
	DECLARE_FUNCTION(execMulticastHarvesterCritical); \
	DECLARE_FUNCTION(execMulticastHarvesterUnderAttack); \
	DECLARE_FUNCTION(execOnRep_AssignedRefineryDockPoint); \
	DECLARE_FUNCTION(execOnRep_AssignedHarvestPoint); \
	DECLARE_FUNCTION(execOnRep_CurrentCargo); \
	DECLARE_FUNCTION(execOnRep_LifecycleState); \
	DECLARE_FUNCTION(execOnRep_TurretTarget); \
	DECLARE_FUNCTION(execOnRep_CriticalHealth); \
	DECLARE_FUNCTION(execOnRep_Destroyed); \
	DECLARE_FUNCTION(execOnRep_CurrentHealth); \
	DECLARE_FUNCTION(execOnRep_TeamId); \
	DECLARE_FUNCTION(execHandleOwnerAnyDamage); \
	DECLARE_FUNCTION(execGetTeamCreditsManager); \
	DECLARE_FUNCTION(execDepositCargoToTeamCredits); \
	DECLARE_FUNCTION(execSetCurrentCargo); \
	DECLARE_FUNCTION(execAddHarvestedCargo); \
	DECLARE_FUNCTION(execHarvesterUndockedFromRefinery); \
	DECLARE_FUNCTION(execEndRefineryUnloading); \
	DECLARE_FUNCTION(execStartRefineryUnloading); \
	DECLARE_FUNCTION(execHarvesterDockedAtRefinery); \
	DECLARE_FUNCTION(execStartRefineryDocking); \
	DECLARE_FUNCTION(execMarkReturningToRefinery); \
	DECLARE_FUNCTION(execEndHarvesting); \
	DECLARE_FUNCTION(execStartHarvesting); \
	DECLARE_FUNCTION(execHasUsableSplineRoute); \
	DECLARE_FUNCTION(execArrivedAtRefineryDockPoint); \
	DECLARE_FUNCTION(execGoToRefineryDockPoint); \
	DECLARE_FUNCTION(execFindNearestCompatibleRefineryDockPoint); \
	DECLARE_FUNCTION(execGetAssignedRefineryDockPoint); \
	DECLARE_FUNCTION(execSetAssignedRefineryDockPoint); \
	DECLARE_FUNCTION(execArrivedAtHarvestPoint); \
	DECLARE_FUNCTION(execGoToHarvestPoint); \
	DECLARE_FUNCTION(execBeginHarvestPointApproach); \
	DECLARE_FUNCTION(execFindNearestCompatibleHarvestPoint); \
	DECLARE_FUNCTION(execGetAssignedHarvestPoint); \
	DECLARE_FUNCTION(execSetAssignedHarvestPoint); \
	DECLARE_FUNCTION(execGetOwningRefinery); \
	DECLARE_FUNCTION(execSetOwningRefinery); \
	DECLARE_FUNCTION(execGetGroundAlignmentVisualComponent); \
	DECLARE_FUNCTION(execSetRuntimeGroundAlignmentVisualComponent); \
	DECLARE_FUNCTION(execRefreshHarvesterPresentation); \
	DECLARE_FUNCTION(execSetRuntimeTurretComponents); \
	DECLARE_FUNCTION(execForceTurretTargetRefresh); \
	DECLARE_FUNCTION(execGetGeneratedTurretSocketNames); \
	DECLARE_FUNCTION(execGetTurretMuzzleLocation); \
	DECLARE_FUNCTION(execGetTargetAimLocation); \
	DECLARE_FUNCTION(execForceDestroyHarvester); \
	DECLARE_FUNCTION(execRepairHarvester); \
	DECLARE_FUNCTION(execIsOperational); \
	DECLARE_FUNCTION(execGetHealthPercent); \
	DECLARE_FUNCTION(execIsHostileToActor); \
	DECLARE_FUNCTION(execSetTeamId);


#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeHarvesterCombatComponent_h_62_CALLBACK_WRAPPERS
struct Z_Construct_UClass_URenegadeHarvesterCombatComponent_Statics;
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_URenegadeHarvesterCombatComponent(ETypeConstructPhase);

#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeHarvesterCombatComponent_h_62_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_URenegadeHarvesterCombatComponent_Statics; \
	friend RENEGADESOLDIERCOMBAT_API UClass* ::Z_Construct_UClass_URenegadeHarvesterCombatComponent(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(URenegadeHarvesterCombatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RenegadeSoldierCombat"), Z_Construct_UClass_URenegadeHarvesterCombatComponent) \
	DECLARE_SERIALIZER(URenegadeHarvesterCombatComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TeamId=NETFIELD_REP_START, \
		AssignedHarvestPoint, \
		AssignedRefineryDockPoint, \
		CurrentHealth, \
		bIsDestroyed, \
		bIsCriticalHealth, \
		CurrentTurretTarget, \
		LifecycleState, \
		CurrentCargo, \
		OwningRefineryActor, \
		NETFIELD_REP_END=OwningRefineryActor	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeHarvesterCombatComponent_h_62_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URenegadeHarvesterCombatComponent(URenegadeHarvesterCombatComponent&&) = delete; \
	URenegadeHarvesterCombatComponent(const URenegadeHarvesterCombatComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URenegadeHarvesterCombatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URenegadeHarvesterCombatComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URenegadeHarvesterCombatComponent) \
	NO_API virtual ~URenegadeHarvesterCombatComponent();


#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeHarvesterCombatComponent_h_59_PROLOG
#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeHarvesterCombatComponent_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeHarvesterCombatComponent_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeHarvesterCombatComponent_h_62_CALLBACK_WRAPPERS \
	FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeHarvesterCombatComponent_h_62_INCLASS_NO_PURE_DECLS \
	FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeHarvesterCombatComponent_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URenegadeHarvesterCombatComponent;

// ********** End Class URenegadeHarvesterCombatComponent ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeHarvesterCombatComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
