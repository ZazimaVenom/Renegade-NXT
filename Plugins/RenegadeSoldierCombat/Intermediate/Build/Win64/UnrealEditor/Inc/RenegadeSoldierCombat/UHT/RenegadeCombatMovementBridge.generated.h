// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RenegadeCombatMovementBridge.h"

#ifdef RENEGADESOLDIERCOMBAT_RenegadeCombatMovementBridge_generated_h
#error "RenegadeCombatMovementBridge.generated.h already included, missing '#pragma once' in RenegadeCombatMovementBridge.h"
#endif
#define RENEGADESOLDIERCOMBAT_RenegadeCombatMovementBridge_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;

// ********** Begin Interface URenegadeCombatMovementBridge ****************************************
#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeCombatMovementBridge_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCombatMovementResumed); \
	DECLARE_FUNCTION(execCombatMovementInterrupted); \
	DECLARE_FUNCTION(execCanCombatTakeMovementControl);


#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeCombatMovementBridge_h_10_CALLBACK_WRAPPERS
struct Z_Construct_UClass_URenegadeCombatMovementBridge_Statics;
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_URenegadeCombatMovementBridge(ETypeConstructPhase);

#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeCombatMovementBridge_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URenegadeCombatMovementBridge(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URenegadeCombatMovementBridge(URenegadeCombatMovementBridge&&) = delete; \
	URenegadeCombatMovementBridge(const URenegadeCombatMovementBridge&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URenegadeCombatMovementBridge); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URenegadeCombatMovementBridge); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URenegadeCombatMovementBridge) \
	virtual ~URenegadeCombatMovementBridge() = default;


#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeCombatMovementBridge_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	friend struct ::Z_Construct_UClass_URenegadeCombatMovementBridge_Statics; \
	friend RENEGADESOLDIERCOMBAT_API UClass* ::Z_Construct_UClass_URenegadeCombatMovementBridge(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(URenegadeCombatMovementBridge, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/RenegadeSoldierCombat"), Z_Construct_UClass_URenegadeCombatMovementBridge) \
	DECLARE_SERIALIZER(URenegadeCombatMovementBridge)


#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeCombatMovementBridge_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeCombatMovementBridge_h_10_GENERATED_UINTERFACE_BODY() \
	FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeCombatMovementBridge_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeCombatMovementBridge_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IRenegadeCombatMovementBridge() {} \
public: \
	typedef URenegadeCombatMovementBridge UClassType; \
	typedef IRenegadeCombatMovementBridge ThisClass; \
	static bool Execute_CanCombatTakeMovementControl(const UObject* O); \
	static void Execute_CombatMovementInterrupted(UObject* O, AActor* CombatTarget); \
	static void Execute_CombatMovementResumed(UObject* O, FVector ResumeFromWorldLocation); \
	[[deprecated("Do not call _getUObject(), use Cast.")]] virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeCombatMovementBridge_h_7_PROLOG
#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeCombatMovementBridge_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeCombatMovementBridge_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeCombatMovementBridge_h_10_CALLBACK_WRAPPERS \
	FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeCombatMovementBridge_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URenegadeCombatMovementBridge;

// ********** End Interface URenegadeCombatMovementBridge ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeCombatMovementBridge_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
