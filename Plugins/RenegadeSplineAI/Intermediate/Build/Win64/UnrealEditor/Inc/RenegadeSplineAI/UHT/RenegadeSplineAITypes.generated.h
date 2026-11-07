// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RenegadeSplineAITypes.h"

#ifdef RENEGADESPLINEAI_RenegadeSplineAITypes_generated_h
#error "RenegadeSplineAITypes.generated.h already included, missing '#pragma once' in RenegadeSplineAITypes.h"
#endif
#define RENEGADESPLINEAI_RenegadeSplineAITypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ARenegadeSplinePath;
enum class ERenegadeSplineFollowState : uint8;

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeSplineAITypes_h

// ********** Begin Enum ERenegadeSplineFollowState ************************************************
#define FOREACH_ENUM_ERENEGADESPLINEFOLLOWSTATE(op) \
	op(ERenegadeSplineFollowState::Disabled) \
	op(ERenegadeSplineFollowState::Idle) \
	op(ERenegadeSplineFollowState::Reacquiring) \
	op(ERenegadeSplineFollowState::Following) \
	op(ERenegadeSplineFollowState::CombatPaused) \
	op(ERenegadeSplineFollowState::Suspended) \
	op(ERenegadeSplineFollowState::Blocked) \
	op(ERenegadeSplineFollowState::Completed) \
	op(ERenegadeSplineFollowState::ExternalPaused) 

enum class ERenegadeSplineFollowState : uint8;
template<> struct TIsUEnumClass<ERenegadeSplineFollowState> { enum { Value = true }; };
template<> UE_NODEBUG RENEGADESPLINEAI_NON_ATTRIBUTED_API UEnum* StaticEnum<ERenegadeSplineFollowState>();
// ********** End Enum ERenegadeSplineFollowState **************************************************

// ********** Begin Enum ERenegadeSplineTravelDirection ********************************************
#define FOREACH_ENUM_ERENEGADESPLINETRAVELDIRECTION(op) \
	op(ERenegadeSplineTravelDirection::Forward) \
	op(ERenegadeSplineTravelDirection::Reverse) 

enum class ERenegadeSplineTravelDirection : uint8;
template<> struct TIsUEnumClass<ERenegadeSplineTravelDirection> { enum { Value = true }; };
template<> UE_NODEBUG RENEGADESPLINEAI_NON_ATTRIBUTED_API UEnum* StaticEnum<ERenegadeSplineTravelDirection>();
// ********** End Enum ERenegadeSplineTravelDirection **********************************************

// ********** Begin Enum ERenegadeSplineResumePolicy ***********************************************
#define FOREACH_ENUM_ERENEGADESPLINERESUMEPOLICY(op) \
	op(ERenegadeSplineResumePolicy::ClosestPoint) \
	op(ERenegadeSplineResumePolicy::PreserveProgress) 

enum class ERenegadeSplineResumePolicy : uint8;
template<> struct TIsUEnumClass<ERenegadeSplineResumePolicy> { enum { Value = true }; };
template<> UE_NODEBUG RENEGADESPLINEAI_NON_ATTRIBUTED_API UEnum* StaticEnum<ERenegadeSplineResumePolicy>();
// ********** End Enum ERenegadeSplineResumePolicy *************************************************

// ********** Begin Enum ERenegadeCharacterVehiclePreset *******************************************
#define FOREACH_ENUM_ERENEGADECHARACTERVEHICLEPRESET(op) \
	op(ERenegadeCharacterVehiclePreset::LightTracked) \
	op(ERenegadeCharacterVehiclePreset::HeavyTracked) \
	op(ERenegadeCharacterVehiclePreset::Harvester) \
	op(ERenegadeCharacterVehiclePreset::Custom) 

enum class ERenegadeCharacterVehiclePreset : uint8;
template<> struct TIsUEnumClass<ERenegadeCharacterVehiclePreset> { enum { Value = true }; };
template<> UE_NODEBUG RENEGADESPLINEAI_NON_ATTRIBUTED_API UEnum* StaticEnum<ERenegadeCharacterVehiclePreset>();
// ********** End Enum ERenegadeCharacterVehiclePreset *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
