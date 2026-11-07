// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RenegadeCharacterVehicleComponent.h"

#ifdef RENEGADESPLINEAI_RenegadeCharacterVehicleComponent_generated_h
#error "RenegadeCharacterVehicleComponent.generated.h already included, missing '#pragma once' in RenegadeCharacterVehicleComponent.h"
#endif
#define RENEGADESPLINEAI_RenegadeCharacterVehicleComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URenegadeCharacterVehicleComponent ***************************************
#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeCharacterVehicleComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsCharacterVehicleReady); \
	DECLARE_FUNCTION(execClearSteeringTarget); \
	DECLARE_FUNCTION(execSetSteeringTarget); \
	DECLARE_FUNCTION(execSetDriveEnabled); \
	DECLARE_FUNCTION(execApplyVehiclePreset);


struct Z_Construct_UClass_URenegadeCharacterVehicleComponent_Statics;
RENEGADESPLINEAI_API UClass* Z_Construct_UClass_URenegadeCharacterVehicleComponent(ETypeConstructPhase);

#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeCharacterVehicleComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_URenegadeCharacterVehicleComponent_Statics; \
	friend RENEGADESPLINEAI_API UClass* ::Z_Construct_UClass_URenegadeCharacterVehicleComponent(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(URenegadeCharacterVehicleComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RenegadeSplineAI"), Z_Construct_UClass_URenegadeCharacterVehicleComponent) \
	DECLARE_SERIALIZER(URenegadeCharacterVehicleComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bDriveEnabled=NETFIELD_REP_START, \
		CurrentThrottle, \
		CurrentSteering, \
		CurrentSpeedKPH, \
		bIsPivotTurning, \
		NETFIELD_REP_END=bIsPivotTurning	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeCharacterVehicleComponent_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URenegadeCharacterVehicleComponent(URenegadeCharacterVehicleComponent&&) = delete; \
	URenegadeCharacterVehicleComponent(const URenegadeCharacterVehicleComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URenegadeCharacterVehicleComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URenegadeCharacterVehicleComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URenegadeCharacterVehicleComponent) \
	NO_API virtual ~URenegadeCharacterVehicleComponent();


#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeCharacterVehicleComponent_h_19_PROLOG
#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeCharacterVehicleComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeCharacterVehicleComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeCharacterVehicleComponent_h_22_INCLASS_NO_PURE_DECLS \
	FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeCharacterVehicleComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URenegadeCharacterVehicleComponent;

// ********** End Class URenegadeCharacterVehicleComponent *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeCharacterVehicleComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
