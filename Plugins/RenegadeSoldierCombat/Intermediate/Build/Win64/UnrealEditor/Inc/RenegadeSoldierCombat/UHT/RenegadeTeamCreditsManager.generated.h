// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RenegadeTeamCreditsManager.h"

#ifdef RENEGADESOLDIERCOMBAT_RenegadeTeamCreditsManager_generated_h
#error "RenegadeTeamCreditsManager.generated.h already included, missing '#pragma once' in RenegadeTeamCreditsManager.h"
#endif
#define RENEGADESOLDIERCOMBAT_RenegadeTeamCreditsManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRenegadeTeamCreditEntry ******************************************
struct Z_Construct_UScriptStruct_FRenegadeTeamCreditEntry_Statics;
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeTeamCreditEntry(ETypeConstructPhase);

#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeTeamCreditsManager_h_10_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRenegadeTeamCreditEntry_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FRenegadeTeamCreditEntry(ETypeConstructPhase::Inner); }


struct FRenegadeTeamCreditEntry;
// ********** End ScriptStruct FRenegadeTeamCreditEntry ********************************************

// ********** Begin Class ARenegadeTeamCreditsManager **********************************************
#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeTeamCreditsManager_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_TeamCredits); \
	DECLARE_FUNCTION(execResetAllTeamCredits); \
	DECLARE_FUNCTION(execSetTeamCredits); \
	DECLARE_FUNCTION(execTrySpendTeamCredits); \
	DECLARE_FUNCTION(execAddTeamCredits); \
	DECLARE_FUNCTION(execGetTeamCredits);


struct Z_Construct_UClass_ARenegadeTeamCreditsManager_Statics;
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_ARenegadeTeamCreditsManager(ETypeConstructPhase);

#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeTeamCreditsManager_h_28_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_ARenegadeTeamCreditsManager_Statics; \
	friend RENEGADESOLDIERCOMBAT_API UClass* ::Z_Construct_UClass_ARenegadeTeamCreditsManager(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(ARenegadeTeamCreditsManager, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RenegadeSoldierCombat"), Z_Construct_UClass_ARenegadeTeamCreditsManager) \
	DECLARE_SERIALIZER(ARenegadeTeamCreditsManager) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TeamCredits=NETFIELD_REP_START, \
		NETFIELD_REP_END=TeamCredits	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeTeamCreditsManager_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARenegadeTeamCreditsManager(ARenegadeTeamCreditsManager&&) = delete; \
	ARenegadeTeamCreditsManager(const ARenegadeTeamCreditsManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARenegadeTeamCreditsManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARenegadeTeamCreditsManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARenegadeTeamCreditsManager) \
	NO_API virtual ~ARenegadeTeamCreditsManager();


#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeTeamCreditsManager_h_25_PROLOG
#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeTeamCreditsManager_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeTeamCreditsManager_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeTeamCreditsManager_h_28_INCLASS_NO_PURE_DECLS \
	FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeTeamCreditsManager_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARenegadeTeamCreditsManager;

// ********** End Class ARenegadeTeamCreditsManager ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeTeamCreditsManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
