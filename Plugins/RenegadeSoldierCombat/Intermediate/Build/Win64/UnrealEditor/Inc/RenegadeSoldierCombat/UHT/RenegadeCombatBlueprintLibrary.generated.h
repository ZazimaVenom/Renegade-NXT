// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RenegadeCombatBlueprintLibrary.h"

#ifdef RENEGADESOLDIERCOMBAT_RenegadeCombatBlueprintLibrary_generated_h
#error "RenegadeCombatBlueprintLibrary.generated.h already included, missing '#pragma once' in RenegadeCombatBlueprintLibrary.h"
#endif
#define RENEGADESOLDIERCOMBAT_RenegadeCombatBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ARenegadeTeamCreditsManager;
class UObject;
class URenegadeBuildingCombatComponent;
class URenegadeHarvesterCombatComponent;
class URenegadeSoldierCombatComponent;
struct FRenegadeWeaponSettings;

// ********** Begin Class URenegadeCombatBlueprintLibrary ******************************************
#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeCombatBlueprintLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMakeGrenadeLauncherPreset); \
	DECLARE_FUNCTION(execMakeRocketLauncherPreset); \
	DECLARE_FUNCTION(execMakePistolPreset); \
	DECLARE_FUNCTION(execMakeAutomaticRiflePreset); \
	DECLARE_FUNCTION(execSpendRenegadeTeamCredits); \
	DECLARE_FUNCTION(execAddRenegadeTeamCredits); \
	DECLARE_FUNCTION(execGetRenegadeTeamCredits); \
	DECLARE_FUNCTION(execGetRenegadeTeamCreditsManager); \
	DECLARE_FUNCTION(execSetRenegadeTeamId); \
	DECLARE_FUNCTION(execGetRenegadeTeamId); \
	DECLARE_FUNCTION(execAreRenegadeActorsHostile); \
	DECLARE_FUNCTION(execGetRenegadeHarvesterCombatComponent); \
	DECLARE_FUNCTION(execGetRenegadeBuildingCombatComponent); \
	DECLARE_FUNCTION(execGetRenegadeCombatComponent);


struct Z_Construct_UClass_URenegadeCombatBlueprintLibrary_Statics;
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_URenegadeCombatBlueprintLibrary(ETypeConstructPhase);

#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeCombatBlueprintLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_URenegadeCombatBlueprintLibrary_Statics; \
	friend RENEGADESOLDIERCOMBAT_API UClass* ::Z_Construct_UClass_URenegadeCombatBlueprintLibrary(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(URenegadeCombatBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RenegadeSoldierCombat"), Z_Construct_UClass_URenegadeCombatBlueprintLibrary) \
	DECLARE_SERIALIZER(URenegadeCombatBlueprintLibrary)


#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeCombatBlueprintLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URenegadeCombatBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URenegadeCombatBlueprintLibrary(URenegadeCombatBlueprintLibrary&&) = delete; \
	URenegadeCombatBlueprintLibrary(const URenegadeCombatBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URenegadeCombatBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URenegadeCombatBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URenegadeCombatBlueprintLibrary) \
	NO_API virtual ~URenegadeCombatBlueprintLibrary();


#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeCombatBlueprintLibrary_h_13_PROLOG
#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeCombatBlueprintLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeCombatBlueprintLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeCombatBlueprintLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeCombatBlueprintLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URenegadeCombatBlueprintLibrary;

// ********** End Class URenegadeCombatBlueprintLibrary ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeCombatBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
