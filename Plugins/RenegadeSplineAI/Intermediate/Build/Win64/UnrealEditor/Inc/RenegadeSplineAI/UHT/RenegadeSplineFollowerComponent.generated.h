// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RenegadeSplineFollowerComponent.h"

#ifdef RENEGADESPLINEAI_RenegadeSplineFollowerComponent_generated_h
#error "RenegadeSplineFollowerComponent.generated.h already included, missing '#pragma once' in RenegadeSplineFollowerComponent.h"
#endif
#define RENEGADESPLINEAI_RenegadeSplineFollowerComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ARenegadeSplinePath;
class URenegadeCharacterVehicleComponent;
enum class ERenegadeSplineFollowState : uint8;

// ********** Begin Class URenegadeSplineFollowerComponent *****************************************
#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeSplineFollowerComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_FollowState); \
	DECLARE_FUNCTION(execResumeAfterPauseDelay); \
	DECLARE_FUNCTION(execHandleCombatTargetDestroyed); \
	DECLARE_FUNCTION(execGetCharacterVehicleComponent); \
	DECLARE_FUNCTION(execGetCombatTarget); \
	DECLARE_FUNCTION(execGetNormalizedRouteProgress); \
	DECLARE_FUNCTION(execIsActivelyFollowing); \
	DECLARE_FUNCTION(execSetRouteDistance); \
	DECLARE_FUNCTION(execReacquireRouteFromCurrentLocation); \
	DECLARE_FUNCTION(execGetExternalMovementClaims); \
	DECLARE_FUNCTION(execHasExternalMovementClaims); \
	DECLARE_FUNCTION(execSetExternalMovementActive); \
	DECLARE_FUNCTION(execReleaseExternalMovementClaim); \
	DECLARE_FUNCTION(execAcquireExternalMovementClaim); \
	DECLARE_FUNCTION(execSetCombatActive); \
	DECLARE_FUNCTION(execResumeFollowing); \
	DECLARE_FUNCTION(execPauseForCombat); \
	DECLARE_FUNCTION(execStopFollowing); \
	DECLARE_FUNCTION(execStartFollowing);


struct Z_Construct_UClass_URenegadeSplineFollowerComponent_Statics;
RENEGADESPLINEAI_API UClass* Z_Construct_UClass_URenegadeSplineFollowerComponent(ETypeConstructPhase);

#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeSplineFollowerComponent_h_27_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_URenegadeSplineFollowerComponent_Statics; \
	friend RENEGADESPLINEAI_API UClass* ::Z_Construct_UClass_URenegadeSplineFollowerComponent(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(URenegadeSplineFollowerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RenegadeSplineAI"), Z_Construct_UClass_URenegadeSplineFollowerComponent) \
	DECLARE_SERIALIZER(URenegadeSplineFollowerComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		AssignedPath=NETFIELD_REP_START, \
		FollowState, \
		CurrentDistanceAlongSpline, \
		ExternalMovementClaimCount, \
		NETFIELD_REP_END=ExternalMovementClaimCount	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeSplineFollowerComponent_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URenegadeSplineFollowerComponent(URenegadeSplineFollowerComponent&&) = delete; \
	URenegadeSplineFollowerComponent(const URenegadeSplineFollowerComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URenegadeSplineFollowerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URenegadeSplineFollowerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URenegadeSplineFollowerComponent) \
	NO_API virtual ~URenegadeSplineFollowerComponent();


#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeSplineFollowerComponent_h_24_PROLOG
#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeSplineFollowerComponent_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeSplineFollowerComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeSplineFollowerComponent_h_27_INCLASS_NO_PURE_DECLS \
	FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeSplineFollowerComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URenegadeSplineFollowerComponent;

// ********** End Class URenegadeSplineFollowerComponent *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeSplineFollowerComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
