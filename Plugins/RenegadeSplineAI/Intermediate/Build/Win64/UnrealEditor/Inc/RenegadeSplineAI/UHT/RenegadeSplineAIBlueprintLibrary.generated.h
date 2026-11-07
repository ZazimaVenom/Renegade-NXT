// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RenegadeSplineAIBlueprintLibrary.h"

#ifdef RENEGADESPLINEAI_RenegadeSplineAIBlueprintLibrary_generated_h
#error "RenegadeSplineAIBlueprintLibrary.generated.h already included, missing '#pragma once' in RenegadeSplineAIBlueprintLibrary.h"
#endif
#define RENEGADESPLINEAI_RenegadeSplineAIBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ARenegadeSplinePath;
class UObject;
class URenegadeCharacterVehicleComponent;
class URenegadeSplineFollowerComponent;

// ********** Begin Class URenegadeSplineAIBlueprintLibrary ****************************************
#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeSplineAIBlueprintLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSplineExternalMovementActiveForActor); \
	DECLARE_FUNCTION(execSetSplineCombatActiveForActor); \
	DECLARE_FUNCTION(execGetCharacterVehicleComponent); \
	DECLARE_FUNCTION(execGetSplineFollowerComponent); \
	DECLARE_FUNCTION(execFindNearestCompatiblePath);


struct Z_Construct_UClass_URenegadeSplineAIBlueprintLibrary_Statics;
RENEGADESPLINEAI_API UClass* Z_Construct_UClass_URenegadeSplineAIBlueprintLibrary(ETypeConstructPhase);

#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeSplineAIBlueprintLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_URenegadeSplineAIBlueprintLibrary_Statics; \
	friend RENEGADESPLINEAI_API UClass* ::Z_Construct_UClass_URenegadeSplineAIBlueprintLibrary(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(URenegadeSplineAIBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RenegadeSplineAI"), Z_Construct_UClass_URenegadeSplineAIBlueprintLibrary) \
	DECLARE_SERIALIZER(URenegadeSplineAIBlueprintLibrary)


#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeSplineAIBlueprintLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URenegadeSplineAIBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URenegadeSplineAIBlueprintLibrary(URenegadeSplineAIBlueprintLibrary&&) = delete; \
	URenegadeSplineAIBlueprintLibrary(const URenegadeSplineAIBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URenegadeSplineAIBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URenegadeSplineAIBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URenegadeSplineAIBlueprintLibrary) \
	NO_API virtual ~URenegadeSplineAIBlueprintLibrary();


#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeSplineAIBlueprintLibrary_h_11_PROLOG
#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeSplineAIBlueprintLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeSplineAIBlueprintLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeSplineAIBlueprintLibrary_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeSplineAIBlueprintLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URenegadeSplineAIBlueprintLibrary;

// ********** End Class URenegadeSplineAIBlueprintLibrary ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeSplineAIBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
