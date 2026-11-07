// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RenegadeHarvesterWreck.h"

#ifdef RENEGADESOLDIERCOMBAT_RenegadeHarvesterWreck_generated_h
#error "RenegadeHarvesterWreck.generated.h already included, missing '#pragma once' in RenegadeHarvesterWreck.h"
#endif
#define RENEGADESOLDIERCOMBAT_RenegadeHarvesterWreck_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ARenegadeHarvesterWreck **************************************************
struct Z_Construct_UClass_ARenegadeHarvesterWreck_Statics;
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_ARenegadeHarvesterWreck(ETypeConstructPhase);

#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeHarvesterWreck_h_19_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_ARenegadeHarvesterWreck_Statics; \
	friend RENEGADESOLDIERCOMBAT_API UClass* ::Z_Construct_UClass_ARenegadeHarvesterWreck(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(ARenegadeHarvesterWreck, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RenegadeSoldierCombat"), Z_Construct_UClass_ARenegadeHarvesterWreck) \
	DECLARE_SERIALIZER(ARenegadeHarvesterWreck) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		WreckStaticMesh=NETFIELD_REP_START, \
		WreckSkeletalMesh, \
		WreckRelativeLocation, \
		WreckRelativeRotation, \
		WreckScale, \
		bEnableWreckCollision, \
		WreckCollisionProfileName, \
		SmokeCascade, \
		SmokeNiagara, \
		SmokeRelativeLocation, \
		CleanupSeconds, \
		NETFIELD_REP_END=CleanupSeconds	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeHarvesterWreck_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARenegadeHarvesterWreck(ARenegadeHarvesterWreck&&) = delete; \
	ARenegadeHarvesterWreck(const ARenegadeHarvesterWreck&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARenegadeHarvesterWreck); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARenegadeHarvesterWreck); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARenegadeHarvesterWreck) \
	NO_API virtual ~ARenegadeHarvesterWreck();


#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeHarvesterWreck_h_16_PROLOG
#define FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeHarvesterWreck_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeHarvesterWreck_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeHarvesterWreck_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARenegadeHarvesterWreck;

// ********** End Class ARenegadeHarvesterWreck ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeHarvesterWreck_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
