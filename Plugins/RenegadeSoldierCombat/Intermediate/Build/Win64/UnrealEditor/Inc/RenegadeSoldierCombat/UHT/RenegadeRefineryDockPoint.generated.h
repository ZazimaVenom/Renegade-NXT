// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RenegadeRefineryDockPoint.h"

#ifdef RENEGADESOLDIERCOMBAT_RenegadeRefineryDockPoint_generated_h
#error "RenegadeRefineryDockPoint.generated.h already included, missing '#pragma once' in RenegadeRefineryDockPoint.h"
#endif
#define RENEGADESOLDIERCOMBAT_RenegadeRefineryDockPoint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;

// ********** Begin Class ARenegadeRefineryDockPoint ***********************************************
#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeRefineryDockPoint_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_ReservedHarvester); \
	DECLARE_FUNCTION(execNotifyHarvesterUndocked); \
	DECLARE_FUNCTION(execNotifyHarvesterDocked); \
	DECLARE_FUNCTION(execNotifyHarvesterApproachStarted); \
	DECLARE_FUNCTION(execSetOwningRefineryActor); \
	DECLARE_FUNCTION(execReleaseReservation); \
	DECLARE_FUNCTION(execTryReserve); \
	DECLARE_FUNCTION(execCanBeUsedByHarvester); \
	DECLARE_FUNCTION(execIsCompatibleWithTeam); \
	DECLARE_FUNCTION(execGetDockTransform);


struct Z_Construct_UClass_ARenegadeRefineryDockPoint_Statics;
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_ARenegadeRefineryDockPoint(ETypeConstructPhase);

#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeRefineryDockPoint_h_21_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_ARenegadeRefineryDockPoint_Statics; \
	friend RENEGADESOLDIERCOMBAT_API UClass* ::Z_Construct_UClass_ARenegadeRefineryDockPoint(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(ARenegadeRefineryDockPoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RenegadeSoldierCombat"), Z_Construct_UClass_ARenegadeRefineryDockPoint) \
	DECLARE_SERIALIZER(ARenegadeRefineryDockPoint) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TeamId=NETFIELD_REP_START, \
		bDockPointEnabled, \
		OwningRefineryActor, \
		ReservedHarvester, \
		NETFIELD_REP_END=ReservedHarvester	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeRefineryDockPoint_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARenegadeRefineryDockPoint(ARenegadeRefineryDockPoint&&) = delete; \
	ARenegadeRefineryDockPoint(const ARenegadeRefineryDockPoint&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARenegadeRefineryDockPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARenegadeRefineryDockPoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARenegadeRefineryDockPoint) \
	NO_API virtual ~ARenegadeRefineryDockPoint();


#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeRefineryDockPoint_h_18_PROLOG
#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeRefineryDockPoint_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeRefineryDockPoint_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeRefineryDockPoint_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeRefineryDockPoint_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARenegadeRefineryDockPoint;

// ********** End Class ARenegadeRefineryDockPoint *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeRefineryDockPoint_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
