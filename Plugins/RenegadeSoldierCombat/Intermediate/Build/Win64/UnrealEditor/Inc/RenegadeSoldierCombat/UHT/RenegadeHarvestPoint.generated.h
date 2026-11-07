// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RenegadeHarvestPoint.h"

#ifdef RENEGADESOLDIERCOMBAT_RenegadeHarvestPoint_generated_h
#error "RenegadeHarvestPoint.generated.h already included, missing '#pragma once' in RenegadeHarvestPoint.h"
#endif
#define RENEGADESOLDIERCOMBAT_RenegadeHarvestPoint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;

// ********** Begin Class ARenegadeHarvestPoint ****************************************************
#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeHarvestPoint_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_ReservedHarvester); \
	DECLARE_FUNCTION(execNotifyHarvestingEnded); \
	DECLARE_FUNCTION(execNotifyHarvestingStarted); \
	DECLARE_FUNCTION(execNotifyHarvesterArrived); \
	DECLARE_FUNCTION(execReleaseReservation); \
	DECLARE_FUNCTION(execTryReserve); \
	DECLARE_FUNCTION(execCanBeUsedByHarvester); \
	DECLARE_FUNCTION(execIsCompatibleWithTeam); \
	DECLARE_FUNCTION(execGetHarvestLocation);


struct Z_Construct_UClass_ARenegadeHarvestPoint_Statics;
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_ARenegadeHarvestPoint(ETypeConstructPhase);

#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeHarvestPoint_h_21_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_ARenegadeHarvestPoint_Statics; \
	friend RENEGADESOLDIERCOMBAT_API UClass* ::Z_Construct_UClass_ARenegadeHarvestPoint(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(ARenegadeHarvestPoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RenegadeSoldierCombat"), Z_Construct_UClass_ARenegadeHarvestPoint) \
	DECLARE_SERIALIZER(ARenegadeHarvestPoint) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TeamId=NETFIELD_REP_START, \
		bHarvestPointEnabled, \
		ReservedHarvester, \
		NETFIELD_REP_END=ReservedHarvester	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeHarvestPoint_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARenegadeHarvestPoint(ARenegadeHarvestPoint&&) = delete; \
	ARenegadeHarvestPoint(const ARenegadeHarvestPoint&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARenegadeHarvestPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARenegadeHarvestPoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARenegadeHarvestPoint) \
	NO_API virtual ~ARenegadeHarvestPoint();


#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeHarvestPoint_h_18_PROLOG
#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeHarvestPoint_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeHarvestPoint_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeHarvestPoint_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeHarvestPoint_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARenegadeHarvestPoint;

// ********** End Class ARenegadeHarvestPoint ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeHarvestPoint_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
