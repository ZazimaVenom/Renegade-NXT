// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RenegadeSplinePath.h"

#ifdef RENEGADESPLINEAI_RenegadeSplinePath_generated_h
#error "RenegadeSplinePath.generated.h already included, missing '#pragma once' in RenegadeSplinePath.h"
#endif
#define RENEGADESPLINEAI_RenegadeSplinePath_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USplineComponent;

// ********** Begin Class ARenegadeSplinePath ******************************************************
#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeSplinePath_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRouteLocationAtDistance); \
	DECLARE_FUNCTION(execGetClosestDistanceAlongRoute); \
	DECLARE_FUNCTION(execIsTeamAllowed); \
	DECLARE_FUNCTION(execIsClosedLoop); \
	DECLARE_FUNCTION(execGetRouteLength); \
	DECLARE_FUNCTION(execGetSplineComponent);


struct Z_Construct_UClass_ARenegadeSplinePath_Statics;
RENEGADESPLINEAI_API UClass* Z_Construct_UClass_ARenegadeSplinePath(ETypeConstructPhase);

#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeSplinePath_h_16_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_ARenegadeSplinePath_Statics; \
	friend RENEGADESPLINEAI_API UClass* ::Z_Construct_UClass_ARenegadeSplinePath(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(ARenegadeSplinePath, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RenegadeSplineAI"), Z_Construct_UClass_ARenegadeSplinePath) \
	DECLARE_SERIALIZER(ARenegadeSplinePath)


#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeSplinePath_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARenegadeSplinePath(ARenegadeSplinePath&&) = delete; \
	ARenegadeSplinePath(const ARenegadeSplinePath&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARenegadeSplinePath); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARenegadeSplinePath); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARenegadeSplinePath) \
	NO_API virtual ~ARenegadeSplinePath();


#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeSplinePath_h_13_PROLOG
#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeSplinePath_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeSplinePath_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeSplinePath_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeSplinePath_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARenegadeSplinePath;

// ********** End Class ARenegadeSplinePath ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeSplinePath_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
