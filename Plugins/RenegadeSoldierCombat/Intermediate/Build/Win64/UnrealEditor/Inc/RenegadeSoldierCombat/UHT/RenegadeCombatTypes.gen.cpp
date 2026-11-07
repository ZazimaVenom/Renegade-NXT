// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RenegadeCombatTypes.h"
#include "InputCoreTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRenegadeCombatTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D(ETypeConstructPhase);
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel(ETypeConstructPhase);
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UDamageType(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USoundBase(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UTexture2D(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UEnum* Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeBuildingTargetPolicy(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UEnum* Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeCombatMoveType(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UEnum* Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeGrenadeDetonationMode(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UEnum* Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadePlayerWeaponSlot(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UEnum* Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeRespawnLocationSelection(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UEnum* Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeRespawnTransformMode(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UEnum* Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeWeaponClass(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeCombatMovementSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeCombatVisualSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeGrenadeLauncherSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeHealthRespawnSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadePlayerAimPresentationSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadePlayerCombatSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadePlayerInputSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadePlayerLockOnSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeRocketLauncherSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeTargetingSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeWeaponSettings(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum ERenegadeWeaponClass ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeWeaponClass_Statics
template<> RENEGADESOLDIERCOMBAT_NON_ATTRIBUTED_API UEnum* StaticEnum<ERenegadeWeaponClass>()
{
	return Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeWeaponClass(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AutomaticRifle.DisplayName", "Automatic Rifle" },
		{ "AutomaticRifle.Name", "ERenegadeWeaponClass::AutomaticRifle" },
		{ "BlueprintType", "true" },
		{ "Custom.DisplayName", "Custom" },
		{ "Custom.Name", "ERenegadeWeaponClass::Custom" },
		{ "GrenadeLauncher.Comment", "/** Appended after the legacy values so existing serialized Weapon Class values remain stable. */" },
		{ "GrenadeLauncher.DisplayName", "Grenade Launcher" },
		{ "GrenadeLauncher.Name", "ERenegadeWeaponClass::GrenadeLauncher" },
		{ "GrenadeLauncher.ToolTip", "Appended after the legacy values so existing serialized Weapon Class values remain stable." },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
		{ "Pistol.DisplayName", "Pistol" },
		{ "Pistol.Name", "ERenegadeWeaponClass::Pistol" },
		{ "RocketLauncher.DisplayName", "Rocket Launcher" },
		{ "RocketLauncher.Name", "ERenegadeWeaponClass::RocketLauncher" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERenegadeWeaponClass::AutomaticRifle", (int64)ERenegadeWeaponClass::AutomaticRifle },
		{ "ERenegadeWeaponClass::Pistol", (int64)ERenegadeWeaponClass::Pistol },
		{ "ERenegadeWeaponClass::RocketLauncher", (int64)ERenegadeWeaponClass::RocketLauncher },
		{ "ERenegadeWeaponClass::Custom", (int64)ERenegadeWeaponClass::Custom },
		{ "ERenegadeWeaponClass::GrenadeLauncher", (int64)ERenegadeWeaponClass::GrenadeLauncher },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	"ERenegadeWeaponClass",
	"ERenegadeWeaponClass",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ERenegadeWeaponClass;
UEnum* Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeWeaponClass(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ERenegadeWeaponClass.OuterSingleton)
		{
			ZRIE_ERenegadeWeaponClass.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeWeaponClass, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("ERenegadeWeaponClass"));
		}
		return ZRIE_ERenegadeWeaponClass.OuterSingleton;
	}
	if (!ZRIE_ERenegadeWeaponClass.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ERenegadeWeaponClass.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ERenegadeWeaponClass.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ERenegadeWeaponClass ********************************************************

// ********** Begin Enum ERenegadeGrenadeDetonationMode ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeGrenadeDetonationMode_Statics
template<> RENEGADESOLDIERCOMBAT_NON_ATTRIBUTED_API UEnum* StaticEnum<ERenegadeGrenadeDetonationMode>()
{
	return Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeGrenadeDetonationMode(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Renegade / Renegade X style grenade detonation behaviour. */" },
#endif
		{ "Impact.Comment", "/** Standard Grenadier primary fire: the projectile explodes on its first blocking impact. */" },
		{ "Impact.DisplayName", "Impact (Renegade Primary Fire)" },
		{ "Impact.Name", "ERenegadeGrenadeDetonationMode::Impact" },
		{ "Impact.ToolTip", "Standard Grenadier primary fire: the projectile explodes on its first blocking impact." },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
		{ "TimedBounce.Comment", "/** Renegade X style alternate behaviour: bounce until the exposed fuse expires. */" },
		{ "TimedBounce.DisplayName", "Timed Bounce (Renegade X Alt Fire)" },
		{ "TimedBounce.Name", "ERenegadeGrenadeDetonationMode::TimedBounce" },
		{ "TimedBounce.ToolTip", "Renegade X style alternate behaviour: bounce until the exposed fuse expires." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Renegade / Renegade X style grenade detonation behaviour." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERenegadeGrenadeDetonationMode::Impact", (int64)ERenegadeGrenadeDetonationMode::Impact },
		{ "ERenegadeGrenadeDetonationMode::TimedBounce", (int64)ERenegadeGrenadeDetonationMode::TimedBounce },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	"ERenegadeGrenadeDetonationMode",
	"ERenegadeGrenadeDetonationMode",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ERenegadeGrenadeDetonationMode;
UEnum* Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeGrenadeDetonationMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ERenegadeGrenadeDetonationMode.OuterSingleton)
		{
			ZRIE_ERenegadeGrenadeDetonationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeGrenadeDetonationMode, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("ERenegadeGrenadeDetonationMode"));
		}
		return ZRIE_ERenegadeGrenadeDetonationMode.OuterSingleton;
	}
	if (!ZRIE_ERenegadeGrenadeDetonationMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ERenegadeGrenadeDetonationMode.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ERenegadeGrenadeDetonationMode.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ERenegadeGrenadeDetonationMode **********************************************

// ********** Begin Enum ERenegadePlayerWeaponSlot *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadePlayerWeaponSlot_Statics
template<> RENEGADESOLDIERCOMBAT_NON_ATTRIBUTED_API UEnum* StaticEnum<ERenegadePlayerWeaponSlot>()
{
	return Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadePlayerWeaponSlot(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AutomaticRifle.DisplayName", "Automatic Rifle" },
		{ "AutomaticRifle.Name", "ERenegadePlayerWeaponSlot::AutomaticRifle" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
		{ "Pistol.DisplayName", "Pistol" },
		{ "Pistol.Name", "ERenegadePlayerWeaponSlot::Pistol" },
		{ "RocketLauncher.DisplayName", "Rocket Launcher" },
		{ "RocketLauncher.Name", "ERenegadePlayerWeaponSlot::RocketLauncher" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERenegadePlayerWeaponSlot::AutomaticRifle", (int64)ERenegadePlayerWeaponSlot::AutomaticRifle },
		{ "ERenegadePlayerWeaponSlot::Pistol", (int64)ERenegadePlayerWeaponSlot::Pistol },
		{ "ERenegadePlayerWeaponSlot::RocketLauncher", (int64)ERenegadePlayerWeaponSlot::RocketLauncher },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	"ERenegadePlayerWeaponSlot",
	"ERenegadePlayerWeaponSlot",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ERenegadePlayerWeaponSlot;
UEnum* Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadePlayerWeaponSlot(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ERenegadePlayerWeaponSlot.OuterSingleton)
		{
			ZRIE_ERenegadePlayerWeaponSlot.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadePlayerWeaponSlot, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("ERenegadePlayerWeaponSlot"));
		}
		return ZRIE_ERenegadePlayerWeaponSlot.OuterSingleton;
	}
	if (!ZRIE_ERenegadePlayerWeaponSlot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ERenegadePlayerWeaponSlot.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ERenegadePlayerWeaponSlot.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ERenegadePlayerWeaponSlot ***************************************************

// ********** Begin Enum ERenegadeCombatMoveType ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeCombatMoveType_Statics
template<> RENEGADESOLDIERCOMBAT_NON_ATTRIBUTED_API UEnum* StaticEnum<ERenegadeCombatMoveType>()
{
	return Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeCombatMoveType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Advance.Name", "ERenegadeCombatMoveType::Advance" },
		{ "BlueprintType", "true" },
		{ "Hold.Name", "ERenegadeCombatMoveType::Hold" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
		{ "Retreat.Name", "ERenegadeCombatMoveType::Retreat" },
		{ "SearchLastKnownPosition.Name", "ERenegadeCombatMoveType::SearchLastKnownPosition" },
		{ "StrafeLeft.Name", "ERenegadeCombatMoveType::StrafeLeft" },
		{ "StrafeRight.Name", "ERenegadeCombatMoveType::StrafeRight" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERenegadeCombatMoveType::Hold", (int64)ERenegadeCombatMoveType::Hold },
		{ "ERenegadeCombatMoveType::Advance", (int64)ERenegadeCombatMoveType::Advance },
		{ "ERenegadeCombatMoveType::Retreat", (int64)ERenegadeCombatMoveType::Retreat },
		{ "ERenegadeCombatMoveType::StrafeLeft", (int64)ERenegadeCombatMoveType::StrafeLeft },
		{ "ERenegadeCombatMoveType::StrafeRight", (int64)ERenegadeCombatMoveType::StrafeRight },
		{ "ERenegadeCombatMoveType::SearchLastKnownPosition", (int64)ERenegadeCombatMoveType::SearchLastKnownPosition },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	"ERenegadeCombatMoveType",
	"ERenegadeCombatMoveType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ERenegadeCombatMoveType;
UEnum* Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeCombatMoveType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ERenegadeCombatMoveType.OuterSingleton)
		{
			ZRIE_ERenegadeCombatMoveType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeCombatMoveType, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("ERenegadeCombatMoveType"));
		}
		return ZRIE_ERenegadeCombatMoveType.OuterSingleton;
	}
	if (!ZRIE_ERenegadeCombatMoveType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ERenegadeCombatMoveType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ERenegadeCombatMoveType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ERenegadeCombatMoveType *****************************************************

// ********** Begin Enum ERenegadeRespawnTransformMode *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeRespawnTransformMode_Statics
template<> RENEGADESOLDIERCOMBAT_NON_ATTRIBUTED_API UEnum* StaticEnum<ERenegadeRespawnTransformMode>()
{
	return Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeRespawnTransformMode(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "CustomTransform.DisplayName", "Custom Transform" },
		{ "CustomTransform.Name", "ERenegadeRespawnTransformMode::CustomTransform" },
		{ "CustomTransformList.DisplayName", "Custom Transform List" },
		{ "CustomTransformList.Name", "ERenegadeRespawnTransformMode::CustomTransformList" },
		{ "MatchingTeamSpawnPoint.DisplayName", "Random Matching Team Spawn Point" },
		{ "MatchingTeamSpawnPoint.Name", "ERenegadeRespawnTransformMode::MatchingTeamSpawnPoint" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
		{ "OriginalTransform.DisplayName", "Original Actor Transform" },
		{ "OriginalTransform.Name", "ERenegadeRespawnTransformMode::OriginalTransform" },
		{ "RuntimeOverride.DisplayName", "Runtime Transform Override" },
		{ "RuntimeOverride.Name", "ERenegadeRespawnTransformMode::RuntimeOverride" },
		{ "TaggedActor.DisplayName", "Actor With Respawn Tag" },
		{ "TaggedActor.Name", "ERenegadeRespawnTransformMode::TaggedActor" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERenegadeRespawnTransformMode::OriginalTransform", (int64)ERenegadeRespawnTransformMode::OriginalTransform },
		{ "ERenegadeRespawnTransformMode::MatchingTeamSpawnPoint", (int64)ERenegadeRespawnTransformMode::MatchingTeamSpawnPoint },
		{ "ERenegadeRespawnTransformMode::CustomTransform", (int64)ERenegadeRespawnTransformMode::CustomTransform },
		{ "ERenegadeRespawnTransformMode::CustomTransformList", (int64)ERenegadeRespawnTransformMode::CustomTransformList },
		{ "ERenegadeRespawnTransformMode::TaggedActor", (int64)ERenegadeRespawnTransformMode::TaggedActor },
		{ "ERenegadeRespawnTransformMode::RuntimeOverride", (int64)ERenegadeRespawnTransformMode::RuntimeOverride },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	"ERenegadeRespawnTransformMode",
	"ERenegadeRespawnTransformMode",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ERenegadeRespawnTransformMode;
UEnum* Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeRespawnTransformMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ERenegadeRespawnTransformMode.OuterSingleton)
		{
			ZRIE_ERenegadeRespawnTransformMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeRespawnTransformMode, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("ERenegadeRespawnTransformMode"));
		}
		return ZRIE_ERenegadeRespawnTransformMode.OuterSingleton;
	}
	if (!ZRIE_ERenegadeRespawnTransformMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ERenegadeRespawnTransformMode.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ERenegadeRespawnTransformMode.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ERenegadeRespawnTransformMode ***********************************************

// ********** Begin Enum ERenegadeRespawnLocationSelection *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeRespawnLocationSelection_Statics
template<> RENEGADESOLDIERCOMBAT_NON_ATTRIBUTED_API UEnum* StaticEnum<ERenegadeRespawnLocationSelection>()
{
	return Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeRespawnLocationSelection(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "First.DisplayName", "First Location" },
		{ "First.Name", "ERenegadeRespawnLocationSelection::First" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
		{ "Random.DisplayName", "Random Location" },
		{ "Random.Name", "ERenegadeRespawnLocationSelection::Random" },
		{ "Sequential.DisplayName", "Sequential Locations" },
		{ "Sequential.Name", "ERenegadeRespawnLocationSelection::Sequential" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERenegadeRespawnLocationSelection::First", (int64)ERenegadeRespawnLocationSelection::First },
		{ "ERenegadeRespawnLocationSelection::Random", (int64)ERenegadeRespawnLocationSelection::Random },
		{ "ERenegadeRespawnLocationSelection::Sequential", (int64)ERenegadeRespawnLocationSelection::Sequential },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	"ERenegadeRespawnLocationSelection",
	"ERenegadeRespawnLocationSelection",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ERenegadeRespawnLocationSelection;
UEnum* Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeRespawnLocationSelection(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ERenegadeRespawnLocationSelection.OuterSingleton)
		{
			ZRIE_ERenegadeRespawnLocationSelection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeRespawnLocationSelection, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("ERenegadeRespawnLocationSelection"));
		}
		return ZRIE_ERenegadeRespawnLocationSelection.OuterSingleton;
	}
	if (!ZRIE_ERenegadeRespawnLocationSelection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ERenegadeRespawnLocationSelection.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ERenegadeRespawnLocationSelection.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ERenegadeRespawnLocationSelection *******************************************

// ********** Begin ScriptStruct FRenegadeRocketLauncherSettings ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRenegadeRocketLauncherSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRenegadeRocketLauncherSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRenegadeRocketLauncherSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideStandardMagazineAndCadence_MetaData[] = {
		{ "Category", "Rocket Launcher|Cadence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Uses dedicated one-round launcher cadence values instead of the generic magazine and fire-rate fields. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Uses dedicated one-round launcher cadence values instead of the generic magazine and fire-rate fields." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MagazineSize_MetaData[] = {
		{ "Category", "Rocket Launcher|Cadence" },
		{ "ClampMin", "1" },
		{ "EditCondition", "bOverrideStandardMagazineAndCadence" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadSeconds_MetaData[] = {
		{ "Category", "Rocket Launcher|Cadence" },
		{ "ClampMin", "0.01" },
		{ "EditCondition", "bOverrideStandardMagazineAndCadence" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoundsPerMinute_MetaData[] = {
		{ "Category", "Rocket Launcher|Cadence" },
		{ "ClampMin", "1.0" },
		{ "EditCondition", "bOverrideStandardMagazineAndCadence" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumAIFiringDistance_MetaData[] = {
		{ "Category", "Rocket Launcher|AI" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** AI will retreat rather than launch explosive rockets inside this distance. Player/manual firing is not blocked. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AI will retreat rather than launch explosive rockets inside this distance. Player/manual firing is not blocked." },
#endif
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPredictTargetMovement_MetaData[] = {
		{ "Category", "Rocket Launcher|AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Leads moving targets using the estimated straight-line rocket flight time. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Leads moving targets using the estimated straight-line rocket flight time." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumTargetLeadSeconds_MetaData[] = {
		{ "Category", "Rocket Launcher|AI" },
		{ "ClampMax", "3.0" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bPredictTargetMovement" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileSpeed_MetaData[] = {
		{ "Category", "Rocket Launcher|Flight" },
		{ "ClampMin", "100.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Authoritative and cosmetic straight-line travel speed in centimetres per second. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Authoritative and cosmetic straight-line travel speed in centimetres per second." },
#endif
		{ "Units", "cm/s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumFlightSeconds_MetaData[] = {
		{ "Category", "Rocket Launcher|Flight" },
		{ "ClampMin", "0.05" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Safety cap for extremely long visual/server flight times. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Safety cap for extremely long visual/server flight times." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionInnerRadius_MetaData[] = {
		{ "Category", "Rocket Launcher|Explosion" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** DamagePerShot is the maximum explosion damage inside this radius. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DamagePerShot is the maximum explosion damage inside this radius." },
#endif
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionOuterRadius_MetaData[] = {
		{ "Category", "Rocket Launcher|Explosion" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumExplosionDamageMultiplier_MetaData[] = {
		{ "Category", "Rocket Launcher|Explosion" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectHitDamageMultiplier_MetaData[] = {
		{ "Category", "Rocket Launcher|Explosion" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Additional multiplier for the actor directly struck by the rocket trace. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional multiplier for the actor directly struck by the rocket trace." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseExplosionOcclusion_MetaData[] = {
		{ "Category", "Rocket Launcher|Explosion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Prevents explosion damage through walls and solid cover. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prevents explosion damage through walls and solid cover." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionOcclusionTraceChannel_MetaData[] = {
		{ "Category", "Rocket Launcher|Explosion" },
		{ "EditCondition", "bUseExplosionOcclusion" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowSelfDamage_MetaData[] = {
		{ "Category", "Rocket Launcher|Explosion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Allows the launcher owner to receive its own splash damage. Team damage still follows Weapon > Allow Friendly Fire. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows the launcher owner to receive its own splash damage. Team damage still follows Weapon > Allow Friendly Fire." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RocketMesh_MetaData[] = {
		{ "Category", "Rocket Launcher|Visual" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RocketMaterialOverride_MetaData[] = {
		{ "Category", "Rocket Launcher|Visual" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RocketMeshScale_MetaData[] = {
		{ "Category", "Rocket Launcher|Visual" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RocketMeshRotationOffset_MetaData[] = {
		{ "Category", "Rocket Launcher|Visual" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Added after orienting local X toward the travel direction. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Added after orienting local X toward the travel direction." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RocketVisualMuzzleForwardOffset_MetaData[] = {
		{ "Category", "Rocket Launcher|Visual" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RocketVisualImpactStopShortDistance_MetaData[] = {
		{ "Category", "Rocket Launcher|Visual" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RocketVisualPoolSize_MetaData[] = {
		{ "Category", "Rocket Launcher|Visual|Performance" },
		{ "ClampMax", "12" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRocketVisualCastsShadow_MetaData[] = {
		{ "Category", "Rocket Launcher|Visual|Performance" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RocketFlightEffectActorClass_MetaData[] = {
		{ "Category", "Rocket Launcher|Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional local cosmetic Blueprint actor moved with the rocket, suitable for Niagara smoke/trail systems. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional local cosmetic Blueprint actor moved with the rocket, suitable for Niagara smoke/trail systems." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RocketMuzzleEffectActorClass_MetaData[] = {
		{ "Category", "Rocket Launcher|Effects" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RocketMuzzleEffectLifeSeconds_MetaData[] = {
		{ "Category", "Rocket Launcher|Effects" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RocketImpactEffectActorClass_MetaData[] = {
		{ "Category", "Rocket Launcher|Effects" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RocketImpactEffectLifeSeconds_MetaData[] = {
		{ "Category", "Rocket Launcher|Effects" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RocketFireSound_MetaData[] = {
		{ "Category", "Rocket Launcher|Audio" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RocketFireVolumeMultiplier_MetaData[] = {
		{ "Category", "Rocket Launcher|Audio" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RocketImpactSound_MetaData[] = {
		{ "Category", "Rocket Launcher|Audio" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RocketImpactVolumeMultiplier_MetaData[] = {
		{ "Category", "Rocket Launcher|Audio" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugRocket_MetaData[] = {
		{ "Category", "Rocket Launcher|Debug" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugDrawDuration_MetaData[] = {
		{ "Category", "Rocket Launcher|Debug" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bDrawDebugRocket" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRenegadeRocketLauncherSettings constinit property declarations ***
	static void NewProp_bOverrideStandardMagazineAndCadence_SetBit(void* Obj)
	{
		((FRenegadeRocketLauncherSettings*)Obj)->bOverrideStandardMagazineAndCadence = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideStandardMagazineAndCadence;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MagazineSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReloadSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoundsPerMinute;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumAIFiringDistance;
	static void NewProp_bPredictTargetMovement_SetBit(void* Obj)
	{
		((FRenegadeRocketLauncherSettings*)Obj)->bPredictTargetMovement = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPredictTargetMovement;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumTargetLeadSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectileSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumFlightSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExplosionInnerRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExplosionOuterRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumExplosionDamageMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DirectHitDamageMultiplier;
	static void NewProp_bUseExplosionOcclusion_SetBit(void* Obj)
	{
		((FRenegadeRocketLauncherSettings*)Obj)->bUseExplosionOcclusion = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseExplosionOcclusion;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExplosionOcclusionTraceChannel;
	static void NewProp_bAllowSelfDamage_SetBit(void* Obj)
	{
		((FRenegadeRocketLauncherSettings*)Obj)->bAllowSelfDamage = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowSelfDamage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RocketMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RocketMaterialOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RocketMeshScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RocketMeshRotationOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RocketVisualMuzzleForwardOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RocketVisualImpactStopShortDistance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RocketVisualPoolSize;
	static void NewProp_bRocketVisualCastsShadow_SetBit(void* Obj)
	{
		((FRenegadeRocketLauncherSettings*)Obj)->bRocketVisualCastsShadow = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRocketVisualCastsShadow;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RocketFlightEffectActorClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RocketMuzzleEffectActorClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RocketMuzzleEffectLifeSeconds;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RocketImpactEffectActorClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RocketImpactEffectLifeSeconds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RocketFireSound;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RocketFireVolumeMultiplier;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RocketImpactSound;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RocketImpactVolumeMultiplier;
	static void NewProp_bDrawDebugRocket_SetBit(void* Obj)
	{
		((FRenegadeRocketLauncherSettings*)Obj)->bDrawDebugRocket = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugRocket;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugDrawDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRenegadeRocketLauncherSettings constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenegadeRocketLauncherSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRenegadeRocketLauncherSettings Property Definitions **************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bOverrideStandardMagazineAndCadence = { "bOverrideStandardMagazineAndCadence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeRocketLauncherSettings), &UHT_STATICS::NewProp_bOverrideStandardMagazineAndCadence_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideStandardMagazineAndCadence_MetaData), NewProp_bOverrideStandardMagazineAndCadence_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MagazineSize = { "MagazineSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeRocketLauncherSettings, MagazineSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MagazineSize_MetaData), NewProp_MagazineSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReloadSeconds = { "ReloadSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeRocketLauncherSettings, ReloadSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadSeconds_MetaData), NewProp_ReloadSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RoundsPerMinute = { "RoundsPerMinute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeRocketLauncherSettings, RoundsPerMinute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoundsPerMinute_MetaData), NewProp_RoundsPerMinute_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MinimumAIFiringDistance = { "MinimumAIFiringDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeRocketLauncherSettings, MinimumAIFiringDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumAIFiringDistance_MetaData), NewProp_MinimumAIFiringDistance_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bPredictTargetMovement = { "bPredictTargetMovement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeRocketLauncherSettings), &UHT_STATICS::NewProp_bPredictTargetMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPredictTargetMovement_MetaData), NewProp_bPredictTargetMovement_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaximumTargetLeadSeconds = { "MaximumTargetLeadSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeRocketLauncherSettings, MaximumTargetLeadSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumTargetLeadSeconds_MetaData), NewProp_MaximumTargetLeadSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ProjectileSpeed = { "ProjectileSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeRocketLauncherSettings, ProjectileSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileSpeed_MetaData), NewProp_ProjectileSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaximumFlightSeconds = { "MaximumFlightSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeRocketLauncherSettings, MaximumFlightSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumFlightSeconds_MetaData), NewProp_MaximumFlightSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ExplosionInnerRadius = { "ExplosionInnerRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeRocketLauncherSettings, ExplosionInnerRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionInnerRadius_MetaData), NewProp_ExplosionInnerRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ExplosionOuterRadius = { "ExplosionOuterRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeRocketLauncherSettings, ExplosionOuterRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionOuterRadius_MetaData), NewProp_ExplosionOuterRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MinimumExplosionDamageMultiplier = { "MinimumExplosionDamageMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeRocketLauncherSettings, MinimumExplosionDamageMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumExplosionDamageMultiplier_MetaData), NewProp_MinimumExplosionDamageMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DirectHitDamageMultiplier = { "DirectHitDamageMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeRocketLauncherSettings, DirectHitDamageMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectHitDamageMultiplier_MetaData), NewProp_DirectHitDamageMultiplier_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseExplosionOcclusion = { "bUseExplosionOcclusion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeRocketLauncherSettings), &UHT_STATICS::NewProp_bUseExplosionOcclusion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseExplosionOcclusion_MetaData), NewProp_bUseExplosionOcclusion_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ExplosionOcclusionTraceChannel = { "ExplosionOcclusionTraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeRocketLauncherSettings, ExplosionOcclusionTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionOcclusionTraceChannel_MetaData), NewProp_ExplosionOcclusionTraceChannel_MetaData) }; // 3aff698625c18cc2ccaa87a587b2eac8c50cdec7
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAllowSelfDamage = { "bAllowSelfDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeRocketLauncherSettings), &UHT_STATICS::NewProp_bAllowSelfDamage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowSelfDamage_MetaData), NewProp_bAllowSelfDamage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RocketMesh = { "RocketMesh", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeRocketLauncherSettings, RocketMesh), Z_Construct_UClass_UStaticMesh, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RocketMesh_MetaData), NewProp_RocketMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RocketMaterialOverride = { "RocketMaterialOverride", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeRocketLauncherSettings, RocketMaterialOverride), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RocketMaterialOverride_MetaData), NewProp_RocketMaterialOverride_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RocketMeshScale = { "RocketMeshScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeRocketLauncherSettings, RocketMeshScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RocketMeshScale_MetaData), NewProp_RocketMeshScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RocketMeshRotationOffset = { "RocketMeshRotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeRocketLauncherSettings, RocketMeshRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RocketMeshRotationOffset_MetaData), NewProp_RocketMeshRotationOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RocketVisualMuzzleForwardOffset = { "RocketVisualMuzzleForwardOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeRocketLauncherSettings, RocketVisualMuzzleForwardOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RocketVisualMuzzleForwardOffset_MetaData), NewProp_RocketVisualMuzzleForwardOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RocketVisualImpactStopShortDistance = { "RocketVisualImpactStopShortDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeRocketLauncherSettings, RocketVisualImpactStopShortDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RocketVisualImpactStopShortDistance_MetaData), NewProp_RocketVisualImpactStopShortDistance_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_RocketVisualPoolSize = { "RocketVisualPoolSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeRocketLauncherSettings, RocketVisualPoolSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RocketVisualPoolSize_MetaData), NewProp_RocketVisualPoolSize_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRocketVisualCastsShadow = { "bRocketVisualCastsShadow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeRocketLauncherSettings), &UHT_STATICS::NewProp_bRocketVisualCastsShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRocketVisualCastsShadow_MetaData), NewProp_bRocketVisualCastsShadow_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_RocketFlightEffectActorClass = { "RocketFlightEffectActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeRocketLauncherSettings, RocketFlightEffectActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RocketFlightEffectActorClass_MetaData), NewProp_RocketFlightEffectActorClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_RocketMuzzleEffectActorClass = { "RocketMuzzleEffectActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeRocketLauncherSettings, RocketMuzzleEffectActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RocketMuzzleEffectActorClass_MetaData), NewProp_RocketMuzzleEffectActorClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RocketMuzzleEffectLifeSeconds = { "RocketMuzzleEffectLifeSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeRocketLauncherSettings, RocketMuzzleEffectLifeSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RocketMuzzleEffectLifeSeconds_MetaData), NewProp_RocketMuzzleEffectLifeSeconds_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_RocketImpactEffectActorClass = { "RocketImpactEffectActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeRocketLauncherSettings, RocketImpactEffectActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RocketImpactEffectActorClass_MetaData), NewProp_RocketImpactEffectActorClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RocketImpactEffectLifeSeconds = { "RocketImpactEffectLifeSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeRocketLauncherSettings, RocketImpactEffectLifeSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RocketImpactEffectLifeSeconds_MetaData), NewProp_RocketImpactEffectLifeSeconds_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RocketFireSound = { "RocketFireSound", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeRocketLauncherSettings, RocketFireSound), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RocketFireSound_MetaData), NewProp_RocketFireSound_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RocketFireVolumeMultiplier = { "RocketFireVolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeRocketLauncherSettings, RocketFireVolumeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RocketFireVolumeMultiplier_MetaData), NewProp_RocketFireVolumeMultiplier_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RocketImpactSound = { "RocketImpactSound", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeRocketLauncherSettings, RocketImpactSound), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RocketImpactSound_MetaData), NewProp_RocketImpactSound_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RocketImpactVolumeMultiplier = { "RocketImpactVolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeRocketLauncherSettings, RocketImpactVolumeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RocketImpactVolumeMultiplier_MetaData), NewProp_RocketImpactVolumeMultiplier_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDrawDebugRocket = { "bDrawDebugRocket", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeRocketLauncherSettings), &UHT_STATICS::NewProp_bDrawDebugRocket_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebugRocket_MetaData), NewProp_bDrawDebugRocket_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DebugDrawDuration = { "DebugDrawDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeRocketLauncherSettings, DebugDrawDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugDrawDuration_MetaData), NewProp_DebugDrawDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bOverrideStandardMagazineAndCadence,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MagazineSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReloadSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoundsPerMinute,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinimumAIFiringDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bPredictTargetMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaximumTargetLeadSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ProjectileSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaximumFlightSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExplosionInnerRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExplosionOuterRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinimumExplosionDamageMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DirectHitDamageMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseExplosionOcclusion,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExplosionOcclusionTraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAllowSelfDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RocketMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RocketMaterialOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RocketMeshScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RocketMeshRotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RocketVisualMuzzleForwardOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RocketVisualImpactStopShortDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RocketVisualPoolSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRocketVisualCastsShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RocketFlightEffectActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RocketMuzzleEffectActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RocketMuzzleEffectLifeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RocketImpactEffectActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RocketImpactEffectLifeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RocketFireSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RocketFireVolumeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RocketImpactSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RocketImpactVolumeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDrawDebugRocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DebugDrawDuration,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRenegadeRocketLauncherSettings Property Definitions ****************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	&NewStructOps,
	"RenegadeRocketLauncherSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRenegadeRocketLauncherSettings>(),
	alignof(FRenegadeRocketLauncherSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRenegadeRocketLauncherSettings;
UScriptStruct* Z_Construct_UScriptStruct_FRenegadeRocketLauncherSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRenegadeRocketLauncherSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRenegadeRocketLauncherSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenegadeRocketLauncherSettings, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("RenegadeRocketLauncherSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FRenegadeRocketLauncherSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRenegadeRocketLauncherSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRenegadeRocketLauncherSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRenegadeRocketLauncherSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRenegadeRocketLauncherSettings *************************************

// ********** Begin ScriptStruct FRenegadeGrenadeLauncherSettings **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRenegadeGrenadeLauncherSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRenegadeGrenadeLauncherSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRenegadeGrenadeLauncherSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Fully exposed Renegade-style automatic grenade-launcher behaviour.\n * Defaults model the classic Grenadier role: 8-round cylinder, 0.75 s cadence,\n * gravity-driven 40 mm style arc, impact detonation, radial splash, and a 3.2 s reload.\n */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fully exposed Renegade-style automatic grenade-launcher behaviour.\nDefaults model the classic Grenadier role: 8-round cylinder, 0.75 s cadence,\ngravity-driven 40 mm style arc, impact detonation, radial splash, and a 3.2 s reload." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideStandardMagazineAndCadence_MetaData[] = {
		{ "Category", "Grenade Launcher|Cadence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Uses dedicated Grenadier magazine/reload/fire-rate values instead of the generic weapon cadence fields. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Uses dedicated Grenadier magazine/reload/fire-rate values instead of the generic weapon cadence fields." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MagazineSize_MetaData[] = {
		{ "Category", "Grenade Launcher|Cadence" },
		{ "ClampMin", "1" },
		{ "EditCondition", "bOverrideStandardMagazineAndCadence" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadSeconds_MetaData[] = {
		{ "Category", "Grenade Launcher|Cadence" },
		{ "ClampMin", "0.01" },
		{ "EditCondition", "bOverrideStandardMagazineAndCadence" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoundsPerMinute_MetaData[] = {
		{ "Category", "Grenade Launcher|Cadence" },
		{ "ClampMin", "1.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** 80 RPM equals one grenade every 0.75 seconds. */" },
#endif
		{ "EditCondition", "bOverrideStandardMagazineAndCadence" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "80 RPM equals one grenade every 0.75 seconds." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumAIFiringDistance_MetaData[] = {
		{ "Category", "Grenade Launcher|AI" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** AI keeps outside this radius before firing an explosive round. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AI keeps outside this radius before firing an explosive round." },
#endif
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPredictTargetMovement_MetaData[] = {
		{ "Category", "Grenade Launcher|AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Iteratively leads moving targets using the solved ballistic flight time. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Iteratively leads moving targets using the solved ballistic flight time." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumTargetLeadSeconds_MetaData[] = {
		{ "Category", "Grenade Launcher|AI" },
		{ "ClampMax", "5.0" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bPredictTargetMovement" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLeadIterations_MetaData[] = {
		{ "Category", "Grenade Launcher|AI" },
		{ "ClampMax", "4" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number of ballistic lead refinements. Two is normally enough and remains inexpensive. */" },
#endif
		{ "EditCondition", "bPredictTargetMovement" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of ballistic lead refinements. Two is normally enough and remains inexpensive." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileSpeed_MetaData[] = {
		{ "Category", "Grenade Launcher|Ballistics" },
		{ "ClampMin", "100.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Launch speed in centimetres per second. Renegade X uses a fast but visibly arcing grenade. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Launch speed in centimetres per second. Renegade X uses a fast but visibly arcing grenade." },
#endif
		{ "Units", "cm/s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GravityScale_MetaData[] = {
		{ "Category", "Grenade Launcher|Ballistics" },
		{ "ClampMax", "5.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Multiplies the active world's Z gravity. 1.0 follows the map's normal gravity. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multiplies the active world's Z gravity. 1.0 follows the map's normal gravity." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseHighArc_MetaData[] = {
		{ "Category", "Grenade Launcher|Ballistics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Chooses the steeper of the two physically valid ballistic solutions when one exists. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Chooses the steeper of the two physically valid ballistic solutions when one exists." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumFlightSeconds_MetaData[] = {
		{ "Category", "Grenade Launcher|Ballistics" },
		{ "ClampMin", "0.05" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Safety lifetime. Impact grenades explode when this expires; timed grenades use the smaller fuse/lifetime value. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Safety lifetime. Impact grenades explode when this expires; timed grenades use the smaller fuse/lifetime value." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionRadius_MetaData[] = {
		{ "Category", "Grenade Launcher|Ballistics" },
		{ "ClampMin", "0.1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sphere-sweep radius used by the authoritative projectile so fast grenades do not tunnel through thin geometry. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sphere-sweep radius used by the authoritative projectile so fast grenades do not tunnel through thin geometry." },
#endif
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumSimulationStepSeconds_MetaData[] = {
		{ "Category", "Grenade Launcher|Ballistics|Performance" },
		{ "ClampMax", "0.1" },
		{ "ClampMin", "0.005" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum physics sub-step for server collision simulation. Lower values improve high-speed collision precision. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum physics sub-step for server collision simulation. Lower values improve high-speed collision precision." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetonationMode_MetaData[] = {
		{ "Category", "Grenade Launcher|Detonation" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimedFuseSeconds_MetaData[] = {
		{ "Category", "Grenade Launcher|Detonation" },
		{ "ClampMin", "0.05" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fuse used by Timed Bounce mode. The grenade still respects Maximum Flight Seconds. */" },
#endif
		{ "EditCondition", "DetonationMode == ERenegadeGrenadeDetonationMode::TimedBounce" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fuse used by Timed Bounce mode. The grenade still respects Maximum Flight Seconds." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BounceRestitution_MetaData[] = {
		{ "Category", "Grenade Launcher|Detonation|Bounce" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fraction of normal impact speed retained after a timed-grenade bounce. */" },
#endif
		{ "EditCondition", "DetonationMode == ERenegadeGrenadeDetonationMode::TimedBounce" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fraction of normal impact speed retained after a timed-grenade bounce." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BounceFriction_MetaData[] = {
		{ "Category", "Grenade Launcher|Detonation|Bounce" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fraction of tangential velocity removed at each timed-grenade bounce. */" },
#endif
		{ "EditCondition", "DetonationMode == ERenegadeGrenadeDetonationMode::TimedBounce" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fraction of tangential velocity removed at each timed-grenade bounce." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumBounceSpeed_MetaData[] = {
		{ "Category", "Grenade Launcher|Detonation|Bounce" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Below this speed a timed grenade settles instead of endlessly micro-bouncing. */" },
#endif
		{ "EditCondition", "DetonationMode == ERenegadeGrenadeDetonationMode::TimedBounce" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Below this speed a timed grenade settles instead of endlessly micro-bouncing." },
#endif
		{ "Units", "cm/s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumBounces_MetaData[] = {
		{ "Category", "Grenade Launcher|Detonation|Bounce" },
		{ "ClampMax", "32" },
		{ "ClampMin", "1" },
		{ "EditCondition", "DetonationMode == ERenegadeGrenadeDetonationMode::TimedBounce" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionInnerRadius_MetaData[] = {
		{ "Category", "Grenade Launcher|Explosion" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** DamagePerShot is the maximum radial explosion damage inside this radius. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DamagePerShot is the maximum radial explosion damage inside this radius." },
#endif
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionOuterRadius_MetaData[] = {
		{ "Category", "Grenade Launcher|Explosion" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumExplosionDamageMultiplier_MetaData[] = {
		{ "Category", "Grenade Launcher|Explosion" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectHitDamageMultiplier_MetaData[] = {
		{ "Category", "Grenade Launcher|Explosion" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Multiplier applied to the actor directly struck by an impact grenade. 1.1875 turns the 80 damage preset into the classic 95 direct+splash total. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multiplier applied to the actor directly struck by an impact grenade. 1.1875 turns the 80 damage preset into the classic 95 direct+splash total." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseExplosionOcclusion_MetaData[] = {
		{ "Category", "Grenade Launcher|Explosion" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionOcclusionTraceChannel_MetaData[] = {
		{ "Category", "Grenade Launcher|Explosion" },
		{ "EditCondition", "bUseExplosionOcclusion" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowSelfDamage_MetaData[] = {
		{ "Category", "Grenade Launcher|Explosion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Renegade-style explosive self-damage. The AI safe-distance setting normally keeps Grenadiers outside their own splash. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Renegade-style explosive self-damage. The AI safe-distance setting normally keeps Grenadiers outside their own splash." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrenadeMesh_MetaData[] = {
		{ "Category", "Grenade Launcher|Visual" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrenadeMaterialOverride_MetaData[] = {
		{ "Category", "Grenade Launcher|Visual" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrenadeMeshScale_MetaData[] = {
		{ "Category", "Grenade Launcher|Visual" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrenadeMeshRotationOffset_MetaData[] = {
		{ "Category", "Grenade Launcher|Visual" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Added after orienting local X toward projectile velocity. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Added after orienting local X toward projectile velocity." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOrientGrenadeMeshToVelocity_MetaData[] = {
		{ "Category", "Grenade Launcher|Visual" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrenadeMeshSpinDegreesPerSecond_MetaData[] = {
		{ "Category", "Grenade Launcher|Visual" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cosmetic local-axis spin applied in degrees per second. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cosmetic local-axis spin applied in degrees per second." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrenadeVisualPoolSize_MetaData[] = {
		{ "Category", "Grenade Launcher|Visual|Performance" },
		{ "ClampMax", "24" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGrenadeVisualCastsShadow_MetaData[] = {
		{ "Category", "Grenade Launcher|Visual|Performance" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrenadeFlightEffectActorClass_MetaData[] = {
		{ "Category", "Grenade Launcher|Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional local cosmetic Blueprint actor moved with the grenade, suitable for Niagara trails. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional local cosmetic Blueprint actor moved with the grenade, suitable for Niagara trails." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrenadeMuzzleEffectActorClass_MetaData[] = {
		{ "Category", "Grenade Launcher|Effects" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrenadeMuzzleEffectLifeSeconds_MetaData[] = {
		{ "Category", "Grenade Launcher|Effects" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrenadeImpactEffectActorClass_MetaData[] = {
		{ "Category", "Grenade Launcher|Effects" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrenadeImpactEffectLifeSeconds_MetaData[] = {
		{ "Category", "Grenade Launcher|Effects" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrenadeBounceEffectActorClass_MetaData[] = {
		{ "Category", "Grenade Launcher|Effects|Bounce" },
		{ "EditCondition", "DetonationMode == ERenegadeGrenadeDetonationMode::TimedBounce" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrenadeBounceEffectLifeSeconds_MetaData[] = {
		{ "Category", "Grenade Launcher|Effects|Bounce" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "DetonationMode == ERenegadeGrenadeDetonationMode::TimedBounce" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrenadeFireSound_MetaData[] = {
		{ "Category", "Grenade Launcher|Audio" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrenadeFireVolumeMultiplier_MetaData[] = {
		{ "Category", "Grenade Launcher|Audio" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrenadeImpactSound_MetaData[] = {
		{ "Category", "Grenade Launcher|Audio" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrenadeImpactVolumeMultiplier_MetaData[] = {
		{ "Category", "Grenade Launcher|Audio" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrenadeBounceSound_MetaData[] = {
		{ "Category", "Grenade Launcher|Audio|Bounce" },
		{ "EditCondition", "DetonationMode == ERenegadeGrenadeDetonationMode::TimedBounce" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrenadeBounceVolumeMultiplier_MetaData[] = {
		{ "Category", "Grenade Launcher|Audio|Bounce" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "DetonationMode == ERenegadeGrenadeDetonationMode::TimedBounce" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugGrenade_MetaData[] = {
		{ "Category", "Grenade Launcher|Debug" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugDrawDuration_MetaData[] = {
		{ "Category", "Grenade Launcher|Debug" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bDrawDebugGrenade" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRenegadeGrenadeLauncherSettings constinit property declarations **
	static void NewProp_bOverrideStandardMagazineAndCadence_SetBit(void* Obj)
	{
		((FRenegadeGrenadeLauncherSettings*)Obj)->bOverrideStandardMagazineAndCadence = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideStandardMagazineAndCadence;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MagazineSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReloadSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoundsPerMinute;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumAIFiringDistance;
	static void NewProp_bPredictTargetMovement_SetBit(void* Obj)
	{
		((FRenegadeGrenadeLauncherSettings*)Obj)->bPredictTargetMovement = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPredictTargetMovement;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumTargetLeadSeconds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetLeadIterations;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectileSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GravityScale;
	static void NewProp_bUseHighArc_SetBit(void* Obj)
	{
		((FRenegadeGrenadeLauncherSettings*)Obj)->bUseHighArc = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHighArc;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumFlightSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumSimulationStepSeconds;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DetonationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DetonationMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimedFuseSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BounceRestitution;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BounceFriction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumBounceSpeed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaximumBounces;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExplosionInnerRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExplosionOuterRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumExplosionDamageMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DirectHitDamageMultiplier;
	static void NewProp_bUseExplosionOcclusion_SetBit(void* Obj)
	{
		((FRenegadeGrenadeLauncherSettings*)Obj)->bUseExplosionOcclusion = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseExplosionOcclusion;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExplosionOcclusionTraceChannel;
	static void NewProp_bAllowSelfDamage_SetBit(void* Obj)
	{
		((FRenegadeGrenadeLauncherSettings*)Obj)->bAllowSelfDamage = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowSelfDamage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrenadeMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrenadeMaterialOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrenadeMeshScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrenadeMeshRotationOffset;
	static void NewProp_bOrientGrenadeMeshToVelocity_SetBit(void* Obj)
	{
		((FRenegadeGrenadeLauncherSettings*)Obj)->bOrientGrenadeMeshToVelocity = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOrientGrenadeMeshToVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrenadeMeshSpinDegreesPerSecond;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GrenadeVisualPoolSize;
	static void NewProp_bGrenadeVisualCastsShadow_SetBit(void* Obj)
	{
		((FRenegadeGrenadeLauncherSettings*)Obj)->bGrenadeVisualCastsShadow = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGrenadeVisualCastsShadow;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GrenadeFlightEffectActorClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GrenadeMuzzleEffectActorClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GrenadeMuzzleEffectLifeSeconds;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GrenadeImpactEffectActorClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GrenadeImpactEffectLifeSeconds;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GrenadeBounceEffectActorClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GrenadeBounceEffectLifeSeconds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrenadeFireSound;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GrenadeFireVolumeMultiplier;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrenadeImpactSound;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GrenadeImpactVolumeMultiplier;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrenadeBounceSound;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GrenadeBounceVolumeMultiplier;
	static void NewProp_bDrawDebugGrenade_SetBit(void* Obj)
	{
		((FRenegadeGrenadeLauncherSettings*)Obj)->bDrawDebugGrenade = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugGrenade;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugDrawDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRenegadeGrenadeLauncherSettings constinit property declarations ****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenegadeGrenadeLauncherSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRenegadeGrenadeLauncherSettings Property Definitions *************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bOverrideStandardMagazineAndCadence = { "bOverrideStandardMagazineAndCadence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeGrenadeLauncherSettings), &UHT_STATICS::NewProp_bOverrideStandardMagazineAndCadence_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideStandardMagazineAndCadence_MetaData), NewProp_bOverrideStandardMagazineAndCadence_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MagazineSize = { "MagazineSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeGrenadeLauncherSettings, MagazineSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MagazineSize_MetaData), NewProp_MagazineSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReloadSeconds = { "ReloadSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeGrenadeLauncherSettings, ReloadSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadSeconds_MetaData), NewProp_ReloadSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RoundsPerMinute = { "RoundsPerMinute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeGrenadeLauncherSettings, RoundsPerMinute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoundsPerMinute_MetaData), NewProp_RoundsPerMinute_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MinimumAIFiringDistance = { "MinimumAIFiringDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeGrenadeLauncherSettings, MinimumAIFiringDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumAIFiringDistance_MetaData), NewProp_MinimumAIFiringDistance_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bPredictTargetMovement = { "bPredictTargetMovement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeGrenadeLauncherSettings), &UHT_STATICS::NewProp_bPredictTargetMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPredictTargetMovement_MetaData), NewProp_bPredictTargetMovement_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaximumTargetLeadSeconds = { "MaximumTargetLeadSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeGrenadeLauncherSettings, MaximumTargetLeadSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumTargetLeadSeconds_MetaData), NewProp_MaximumTargetLeadSeconds_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_TargetLeadIterations = { "TargetLeadIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeGrenadeLauncherSettings, TargetLeadIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLeadIterations_MetaData), NewProp_TargetLeadIterations_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ProjectileSpeed = { "ProjectileSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeGrenadeLauncherSettings, ProjectileSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileSpeed_MetaData), NewProp_ProjectileSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_GravityScale = { "GravityScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeGrenadeLauncherSettings, GravityScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GravityScale_MetaData), NewProp_GravityScale_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseHighArc = { "bUseHighArc", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeGrenadeLauncherSettings), &UHT_STATICS::NewProp_bUseHighArc_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseHighArc_MetaData), NewProp_bUseHighArc_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaximumFlightSeconds = { "MaximumFlightSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeGrenadeLauncherSettings, MaximumFlightSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumFlightSeconds_MetaData), NewProp_MaximumFlightSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CollisionRadius = { "CollisionRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeGrenadeLauncherSettings, CollisionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionRadius_MetaData), NewProp_CollisionRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaximumSimulationStepSeconds = { "MaximumSimulationStepSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeGrenadeLauncherSettings, MaximumSimulationStepSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumSimulationStepSeconds_MetaData), NewProp_MaximumSimulationStepSeconds_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_DetonationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_DetonationMode = { "DetonationMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeGrenadeLauncherSettings, DetonationMode), Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeGrenadeDetonationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetonationMode_MetaData), NewProp_DetonationMode_MetaData) }; // 995e0b0844d6821efc720d50737ac7e67bed78f2
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_TimedFuseSeconds = { "TimedFuseSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeGrenadeLauncherSettings, TimedFuseSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimedFuseSeconds_MetaData), NewProp_TimedFuseSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_BounceRestitution = { "BounceRestitution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeGrenadeLauncherSettings, BounceRestitution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BounceRestitution_MetaData), NewProp_BounceRestitution_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_BounceFriction = { "BounceFriction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeGrenadeLauncherSettings, BounceFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BounceFriction_MetaData), NewProp_BounceFriction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MinimumBounceSpeed = { "MinimumBounceSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeGrenadeLauncherSettings, MinimumBounceSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumBounceSpeed_MetaData), NewProp_MinimumBounceSpeed_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MaximumBounces = { "MaximumBounces", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeGrenadeLauncherSettings, MaximumBounces), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumBounces_MetaData), NewProp_MaximumBounces_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ExplosionInnerRadius = { "ExplosionInnerRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeGrenadeLauncherSettings, ExplosionInnerRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionInnerRadius_MetaData), NewProp_ExplosionInnerRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ExplosionOuterRadius = { "ExplosionOuterRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeGrenadeLauncherSettings, ExplosionOuterRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionOuterRadius_MetaData), NewProp_ExplosionOuterRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MinimumExplosionDamageMultiplier = { "MinimumExplosionDamageMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeGrenadeLauncherSettings, MinimumExplosionDamageMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumExplosionDamageMultiplier_MetaData), NewProp_MinimumExplosionDamageMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DirectHitDamageMultiplier = { "DirectHitDamageMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeGrenadeLauncherSettings, DirectHitDamageMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectHitDamageMultiplier_MetaData), NewProp_DirectHitDamageMultiplier_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseExplosionOcclusion = { "bUseExplosionOcclusion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeGrenadeLauncherSettings), &UHT_STATICS::NewProp_bUseExplosionOcclusion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseExplosionOcclusion_MetaData), NewProp_bUseExplosionOcclusion_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ExplosionOcclusionTraceChannel = { "ExplosionOcclusionTraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeGrenadeLauncherSettings, ExplosionOcclusionTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionOcclusionTraceChannel_MetaData), NewProp_ExplosionOcclusionTraceChannel_MetaData) }; // 3aff698625c18cc2ccaa87a587b2eac8c50cdec7
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAllowSelfDamage = { "bAllowSelfDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeGrenadeLauncherSettings), &UHT_STATICS::NewProp_bAllowSelfDamage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowSelfDamage_MetaData), NewProp_bAllowSelfDamage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_GrenadeMesh = { "GrenadeMesh", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeGrenadeLauncherSettings, GrenadeMesh), Z_Construct_UClass_UStaticMesh, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrenadeMesh_MetaData), NewProp_GrenadeMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_GrenadeMaterialOverride = { "GrenadeMaterialOverride", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeGrenadeLauncherSettings, GrenadeMaterialOverride), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrenadeMaterialOverride_MetaData), NewProp_GrenadeMaterialOverride_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GrenadeMeshScale = { "GrenadeMeshScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeGrenadeLauncherSettings, GrenadeMeshScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrenadeMeshScale_MetaData), NewProp_GrenadeMeshScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GrenadeMeshRotationOffset = { "GrenadeMeshRotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeGrenadeLauncherSettings, GrenadeMeshRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrenadeMeshRotationOffset_MetaData), NewProp_GrenadeMeshRotationOffset_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bOrientGrenadeMeshToVelocity = { "bOrientGrenadeMeshToVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeGrenadeLauncherSettings), &UHT_STATICS::NewProp_bOrientGrenadeMeshToVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOrientGrenadeMeshToVelocity_MetaData), NewProp_bOrientGrenadeMeshToVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GrenadeMeshSpinDegreesPerSecond = { "GrenadeMeshSpinDegreesPerSecond", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeGrenadeLauncherSettings, GrenadeMeshSpinDegreesPerSecond), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrenadeMeshSpinDegreesPerSecond_MetaData), NewProp_GrenadeMeshSpinDegreesPerSecond_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_GrenadeVisualPoolSize = { "GrenadeVisualPoolSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeGrenadeLauncherSettings, GrenadeVisualPoolSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrenadeVisualPoolSize_MetaData), NewProp_GrenadeVisualPoolSize_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bGrenadeVisualCastsShadow = { "bGrenadeVisualCastsShadow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeGrenadeLauncherSettings), &UHT_STATICS::NewProp_bGrenadeVisualCastsShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGrenadeVisualCastsShadow_MetaData), NewProp_bGrenadeVisualCastsShadow_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_GrenadeFlightEffectActorClass = { "GrenadeFlightEffectActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeGrenadeLauncherSettings, GrenadeFlightEffectActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrenadeFlightEffectActorClass_MetaData), NewProp_GrenadeFlightEffectActorClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_GrenadeMuzzleEffectActorClass = { "GrenadeMuzzleEffectActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeGrenadeLauncherSettings, GrenadeMuzzleEffectActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrenadeMuzzleEffectActorClass_MetaData), NewProp_GrenadeMuzzleEffectActorClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_GrenadeMuzzleEffectLifeSeconds = { "GrenadeMuzzleEffectLifeSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeGrenadeLauncherSettings, GrenadeMuzzleEffectLifeSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrenadeMuzzleEffectLifeSeconds_MetaData), NewProp_GrenadeMuzzleEffectLifeSeconds_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_GrenadeImpactEffectActorClass = { "GrenadeImpactEffectActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeGrenadeLauncherSettings, GrenadeImpactEffectActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrenadeImpactEffectActorClass_MetaData), NewProp_GrenadeImpactEffectActorClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_GrenadeImpactEffectLifeSeconds = { "GrenadeImpactEffectLifeSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeGrenadeLauncherSettings, GrenadeImpactEffectLifeSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrenadeImpactEffectLifeSeconds_MetaData), NewProp_GrenadeImpactEffectLifeSeconds_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_GrenadeBounceEffectActorClass = { "GrenadeBounceEffectActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeGrenadeLauncherSettings, GrenadeBounceEffectActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrenadeBounceEffectActorClass_MetaData), NewProp_GrenadeBounceEffectActorClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_GrenadeBounceEffectLifeSeconds = { "GrenadeBounceEffectLifeSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeGrenadeLauncherSettings, GrenadeBounceEffectLifeSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrenadeBounceEffectLifeSeconds_MetaData), NewProp_GrenadeBounceEffectLifeSeconds_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_GrenadeFireSound = { "GrenadeFireSound", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeGrenadeLauncherSettings, GrenadeFireSound), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrenadeFireSound_MetaData), NewProp_GrenadeFireSound_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_GrenadeFireVolumeMultiplier = { "GrenadeFireVolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeGrenadeLauncherSettings, GrenadeFireVolumeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrenadeFireVolumeMultiplier_MetaData), NewProp_GrenadeFireVolumeMultiplier_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_GrenadeImpactSound = { "GrenadeImpactSound", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeGrenadeLauncherSettings, GrenadeImpactSound), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrenadeImpactSound_MetaData), NewProp_GrenadeImpactSound_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_GrenadeImpactVolumeMultiplier = { "GrenadeImpactVolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeGrenadeLauncherSettings, GrenadeImpactVolumeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrenadeImpactVolumeMultiplier_MetaData), NewProp_GrenadeImpactVolumeMultiplier_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_GrenadeBounceSound = { "GrenadeBounceSound", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeGrenadeLauncherSettings, GrenadeBounceSound), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrenadeBounceSound_MetaData), NewProp_GrenadeBounceSound_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_GrenadeBounceVolumeMultiplier = { "GrenadeBounceVolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeGrenadeLauncherSettings, GrenadeBounceVolumeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrenadeBounceVolumeMultiplier_MetaData), NewProp_GrenadeBounceVolumeMultiplier_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDrawDebugGrenade = { "bDrawDebugGrenade", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeGrenadeLauncherSettings), &UHT_STATICS::NewProp_bDrawDebugGrenade_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebugGrenade_MetaData), NewProp_bDrawDebugGrenade_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DebugDrawDuration = { "DebugDrawDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeGrenadeLauncherSettings, DebugDrawDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugDrawDuration_MetaData), NewProp_DebugDrawDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bOverrideStandardMagazineAndCadence,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MagazineSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReloadSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoundsPerMinute,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinimumAIFiringDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bPredictTargetMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaximumTargetLeadSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetLeadIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ProjectileSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GravityScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseHighArc,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaximumFlightSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CollisionRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaximumSimulationStepSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DetonationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DetonationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TimedFuseSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BounceRestitution,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BounceFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinimumBounceSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaximumBounces,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExplosionInnerRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExplosionOuterRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinimumExplosionDamageMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DirectHitDamageMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseExplosionOcclusion,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExplosionOcclusionTraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAllowSelfDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GrenadeMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GrenadeMaterialOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GrenadeMeshScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GrenadeMeshRotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bOrientGrenadeMeshToVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GrenadeMeshSpinDegreesPerSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GrenadeVisualPoolSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bGrenadeVisualCastsShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GrenadeFlightEffectActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GrenadeMuzzleEffectActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GrenadeMuzzleEffectLifeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GrenadeImpactEffectActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GrenadeImpactEffectLifeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GrenadeBounceEffectActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GrenadeBounceEffectLifeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GrenadeFireSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GrenadeFireVolumeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GrenadeImpactSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GrenadeImpactVolumeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GrenadeBounceSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GrenadeBounceVolumeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDrawDebugGrenade,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DebugDrawDuration,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRenegadeGrenadeLauncherSettings Property Definitions ***************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	&NewStructOps,
	"RenegadeGrenadeLauncherSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRenegadeGrenadeLauncherSettings>(),
	alignof(FRenegadeGrenadeLauncherSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRenegadeGrenadeLauncherSettings;
UScriptStruct* Z_Construct_UScriptStruct_FRenegadeGrenadeLauncherSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRenegadeGrenadeLauncherSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRenegadeGrenadeLauncherSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenegadeGrenadeLauncherSettings, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("RenegadeGrenadeLauncherSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FRenegadeGrenadeLauncherSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRenegadeGrenadeLauncherSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRenegadeGrenadeLauncherSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRenegadeGrenadeLauncherSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRenegadeGrenadeLauncherSettings ************************************

// ********** Begin ScriptStruct FRenegadeWeaponSettings *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRenegadeWeaponSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRenegadeWeaponSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRenegadeWeaponSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponClass_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamagePerShot_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumRange_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoundsPerMinute_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumBurstShots_MetaData[] = {
		{ "Category", "Weapon|Burst" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumBurstShots_MetaData[] = {
		{ "Category", "Weapon|Burst" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumBurstPause_MetaData[] = {
		{ "Category", "Weapon|Burst" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumBurstPause_MetaData[] = {
		{ "Category", "Weapon|Burst" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HipFireSpreadDegrees_MetaData[] = {
		{ "Category", "Weapon|Accuracy" },
		{ "ClampMax", "45.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovingSpreadPenaltyDegrees_MetaData[] = {
		{ "Category", "Weapon|Accuracy" },
		{ "ClampMax", "45.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CriticalHitMultiplier_MetaData[] = {
		{ "Category", "Weapon|Damage" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CriticalBones_MetaData[] = {
		{ "Category", "Weapon|Damage" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumLongRangeDamageMultiplier_MetaData[] = {
		{ "Category", "Weapon|Damage" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageFalloffStartFraction_MetaData[] = {
		{ "Category", "Weapon|Damage" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMagazine_MetaData[] = {
		{ "Category", "Weapon|Magazine" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MagazineSize_MetaData[] = {
		{ "Category", "Weapon|Magazine" },
		{ "ClampMin", "1" },
		{ "EditCondition", "bUseMagazine" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadSeconds_MetaData[] = {
		{ "Category", "Weapon|Magazine" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bUseMagazine" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleSocketName_MetaData[] = {
		{ "Category", "Weapon|Sockets" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimBoneName_MetaData[] = {
		{ "Category", "Weapon|Sockets" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[] = {
		{ "Category", "Weapon|Trace" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCombatTargetObjectTraceFallback_MetaData[] = {
		{ "Category", "Weapon|Trace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Also checks the configured combat-target object type and chooses whichever valid hit is closest. This allows Character hits even when their mesh/capsule does not block the weapon trace channel. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Also checks the configured combat-target object type and chooses whichever valid hit is closest. This allows Character hits even when their mesh/capsule does not block the weapon trace channel." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatTargetObjectType_MetaData[] = {
		{ "Category", "Weapon|Trace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Object type used by the combat-target fallback trace. Character capsules normally use Pawn. */" },
#endif
		{ "EditCondition", "bUseCombatTargetObjectTraceFallback" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Object type used by the combat-target fallback trace. Character capsules normally use Pawn." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowFriendlyFire_MetaData[] = {
		{ "Category", "Weapon|Trace" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageTypeClass_MetaData[] = {
		{ "Category", "Weapon|Damage" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RocketLauncher_MetaData[] = {
		{ "Category", "Weapon|Rocket Launcher" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dedicated projectile, explosion, cadence, visual and audio configuration used when Weapon Class is Rocket Launcher. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dedicated projectile, explosion, cadence, visual and audio configuration used when Weapon Class is Rocket Launcher." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrenadeLauncher_MetaData[] = {
		{ "Category", "Weapon|Grenade Launcher" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dedicated ballistic projectile, explosion, cadence, visual and audio configuration used when Weapon Class is Grenade Launcher. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dedicated ballistic projectile, explosion, cadence, visual and audio configuration used when Weapon Class is Grenade Launcher." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRenegadeWeaponSettings constinit property declarations ***********
	static const UECodeGen_Private::FBytePropertyParams NewProp_WeaponClass_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WeaponClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamagePerShot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoundsPerMinute;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinimumBurstShots;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaximumBurstShots;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumBurstPause;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumBurstPause;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HipFireSpreadDegrees;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovingSpreadPenaltyDegrees;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CriticalHitMultiplier;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CriticalBones_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CriticalBones;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumLongRangeDamageMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageFalloffStartFraction;
	static void NewProp_bUseMagazine_SetBit(void* Obj)
	{
		((FRenegadeWeaponSettings*)Obj)->bUseMagazine = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMagazine;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MagazineSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReloadSeconds;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MuzzleSocketName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AimBoneName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static void NewProp_bUseCombatTargetObjectTraceFallback_SetBit(void* Obj)
	{
		((FRenegadeWeaponSettings*)Obj)->bUseCombatTargetObjectTraceFallback = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCombatTargetObjectTraceFallback;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CombatTargetObjectType;
	static void NewProp_bAllowFriendlyFire_SetBit(void* Obj)
	{
		((FRenegadeWeaponSettings*)Obj)->bAllowFriendlyFire = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowFriendlyFire;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageTypeClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RocketLauncher;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrenadeLauncher;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRenegadeWeaponSettings constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenegadeWeaponSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRenegadeWeaponSettings Property Definitions **********************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_WeaponClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_WeaponClass = { "WeaponClass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeWeaponSettings, WeaponClass), Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeWeaponClass, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponClass_MetaData), NewProp_WeaponClass_MetaData) }; // 594bc5bd80a0ebbf38f4d8221393b9c1f8e86c8a
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DamagePerShot = { "DamagePerShot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeWeaponSettings, DamagePerShot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamagePerShot_MetaData), NewProp_DamagePerShot_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaximumRange = { "MaximumRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeWeaponSettings, MaximumRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumRange_MetaData), NewProp_MaximumRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RoundsPerMinute = { "RoundsPerMinute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeWeaponSettings, RoundsPerMinute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoundsPerMinute_MetaData), NewProp_RoundsPerMinute_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MinimumBurstShots = { "MinimumBurstShots", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeWeaponSettings, MinimumBurstShots), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumBurstShots_MetaData), NewProp_MinimumBurstShots_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MaximumBurstShots = { "MaximumBurstShots", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeWeaponSettings, MaximumBurstShots), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumBurstShots_MetaData), NewProp_MaximumBurstShots_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MinimumBurstPause = { "MinimumBurstPause", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeWeaponSettings, MinimumBurstPause), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumBurstPause_MetaData), NewProp_MinimumBurstPause_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaximumBurstPause = { "MaximumBurstPause", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeWeaponSettings, MaximumBurstPause), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumBurstPause_MetaData), NewProp_MaximumBurstPause_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_HipFireSpreadDegrees = { "HipFireSpreadDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeWeaponSettings, HipFireSpreadDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HipFireSpreadDegrees_MetaData), NewProp_HipFireSpreadDegrees_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MovingSpreadPenaltyDegrees = { "MovingSpreadPenaltyDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeWeaponSettings, MovingSpreadPenaltyDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovingSpreadPenaltyDegrees_MetaData), NewProp_MovingSpreadPenaltyDegrees_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CriticalHitMultiplier = { "CriticalHitMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeWeaponSettings, CriticalHitMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CriticalHitMultiplier_MetaData), NewProp_CriticalHitMultiplier_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_CriticalBones_Inner = { "CriticalBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_CriticalBones = { "CriticalBones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeWeaponSettings, CriticalBones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CriticalBones_MetaData), NewProp_CriticalBones_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MinimumLongRangeDamageMultiplier = { "MinimumLongRangeDamageMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeWeaponSettings, MinimumLongRangeDamageMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumLongRangeDamageMultiplier_MetaData), NewProp_MinimumLongRangeDamageMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DamageFalloffStartFraction = { "DamageFalloffStartFraction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeWeaponSettings, DamageFalloffStartFraction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageFalloffStartFraction_MetaData), NewProp_DamageFalloffStartFraction_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseMagazine = { "bUseMagazine", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeWeaponSettings), &UHT_STATICS::NewProp_bUseMagazine_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMagazine_MetaData), NewProp_bUseMagazine_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MagazineSize = { "MagazineSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeWeaponSettings, MagazineSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MagazineSize_MetaData), NewProp_MagazineSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReloadSeconds = { "ReloadSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeWeaponSettings, ReloadSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadSeconds_MetaData), NewProp_ReloadSeconds_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_MuzzleSocketName = { "MuzzleSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeWeaponSettings, MuzzleSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MuzzleSocketName_MetaData), NewProp_MuzzleSocketName_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_AimBoneName = { "AimBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeWeaponSettings, AimBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimBoneName_MetaData), NewProp_AimBoneName_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeWeaponSettings, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceChannel_MetaData), NewProp_TraceChannel_MetaData) }; // 3aff698625c18cc2ccaa87a587b2eac8c50cdec7
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseCombatTargetObjectTraceFallback = { "bUseCombatTargetObjectTraceFallback", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeWeaponSettings), &UHT_STATICS::NewProp_bUseCombatTargetObjectTraceFallback_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCombatTargetObjectTraceFallback_MetaData), NewProp_bUseCombatTargetObjectTraceFallback_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_CombatTargetObjectType = { "CombatTargetObjectType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeWeaponSettings, CombatTargetObjectType), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatTargetObjectType_MetaData), NewProp_CombatTargetObjectType_MetaData) }; // 3aff698625c18cc2ccaa87a587b2eac8c50cdec7
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAllowFriendlyFire = { "bAllowFriendlyFire", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeWeaponSettings), &UHT_STATICS::NewProp_bAllowFriendlyFire_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowFriendlyFire_MetaData), NewProp_bAllowFriendlyFire_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_DamageTypeClass = { "DamageTypeClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeWeaponSettings, DamageTypeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageTypeClass_MetaData), NewProp_DamageTypeClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RocketLauncher = { "RocketLauncher", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeWeaponSettings, RocketLauncher), Z_Construct_UScriptStruct_FRenegadeRocketLauncherSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RocketLauncher_MetaData), NewProp_RocketLauncher_MetaData) }; // ab4601422132ff9d708f9936ed754a7cf44fbbce
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GrenadeLauncher = { "GrenadeLauncher", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeWeaponSettings, GrenadeLauncher), Z_Construct_UScriptStruct_FRenegadeGrenadeLauncherSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrenadeLauncher_MetaData), NewProp_GrenadeLauncher_MetaData) }; // dc350dbacb87ab6cc74f9990ecc673125279b402
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WeaponClass_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WeaponClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DamagePerShot,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaximumRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoundsPerMinute,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinimumBurstShots,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaximumBurstShots,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinimumBurstPause,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaximumBurstPause,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HipFireSpreadDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MovingSpreadPenaltyDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CriticalHitMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CriticalBones_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CriticalBones,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinimumLongRangeDamageMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DamageFalloffStartFraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseMagazine,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MagazineSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReloadSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MuzzleSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AimBoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseCombatTargetObjectTraceFallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CombatTargetObjectType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAllowFriendlyFire,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DamageTypeClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RocketLauncher,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GrenadeLauncher,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRenegadeWeaponSettings Property Definitions ************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	&NewStructOps,
	"RenegadeWeaponSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRenegadeWeaponSettings>(),
	alignof(FRenegadeWeaponSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRenegadeWeaponSettings;
UScriptStruct* Z_Construct_UScriptStruct_FRenegadeWeaponSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRenegadeWeaponSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRenegadeWeaponSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenegadeWeaponSettings, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("RenegadeWeaponSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FRenegadeWeaponSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRenegadeWeaponSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRenegadeWeaponSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRenegadeWeaponSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRenegadeWeaponSettings *********************************************

// ********** Begin ScriptStruct FRenegadeTargetingSettings ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRenegadeTargetingSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRenegadeTargetingSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRenegadeTargetingSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchRadius_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ClampMin", "100.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetRefreshSeconds_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ClampMin", "0.05" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LostSightGraceSeconds_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequireLineOfSight_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRetaliateWhenDamaged_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoseTargetRadiusMultiplier_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimHeightOffset_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ClampMax", "500.0" },
		{ "ClampMin", "-500.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Signed vertical offset from the configured Aim Bone. Use negative values to move the lock-on point down toward the chest or torso." },
#endif
		{ "UIMax", "250.0" },
		{ "UIMin", "-250.0" },
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerLockOnIndicatorTexture_MetaData[] = {
		{ "Category", "Targeting|Player Lock-On Visual" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** PNG/Texture2D displayed over the hostile soldier selected by the local player lock-on system. */" },
#endif
		{ "DisplayName", "Lock-On Indicator PNG / Texture" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PNG/Texture2D displayed over the hostile soldier selected by the local player lock-on system." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerLockOnIndicatorColor_MetaData[] = {
		{ "Category", "Targeting|Player Lock-On Visual" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** RGBA tint multiplied with the lock-on texture. The alpha channel remains combined with the PNG transparency. */" },
#endif
		{ "DisplayName", "Lock-On Indicator Color" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
		{ "sRGB", "true" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RGBA tint multiplied with the lock-on texture. The alpha channel remains combined with the PNG transparency." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildingTargetPolicy_MetaData[] = {
		{ "Category", "Targeting|Buildings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Controls whether autonomous infantry may acquire hostile building components as combat targets. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controls whether autonomous infantry may acquire hostile building components as combat targets." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildingTargetDistanceScoreMultiplier_MetaData[] = {
		{ "Category", "Targeting|Buildings" },
		{ "ClampMin", "0.01" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Multiplies building distance score. Values below 1 make buildings more attractive; values above 1 favour soldiers. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multiplies building distance score. Values below 1 make buildings more attractive; values above 1 favour soldiers." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTargetHostileHarvesters_MetaData[] = {
		{ "Category", "Targeting|Harvesters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Allows autonomous infantry to acquire hostile Harvesters registered by RenegadeHarvesterCombatComponent. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows autonomous infantry to acquire hostile Harvesters registered by RenegadeHarvesterCombatComponent." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreferSoldiersOverHarvesters_MetaData[] = {
		{ "Category", "Targeting|Harvesters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When true, a valid hostile infantry target always wins over a Harvester. Harvesters are still attacked when no soldier target is available. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When true, a valid hostile infantry target always wins over a Harvester. Harvesters are still attacked when no soldier target is available." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HarvesterTargetDistanceScoreMultiplier_MetaData[] = {
		{ "Category", "Targeting|Harvesters" },
		{ "ClampMin", "0.01" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Multiplies Harvester distance score. Values below 1 make Harvesters more attractive to infantry. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multiplies Harvester distance score. Values below 1 make Harvesters more attractive to infantry." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRenegadeTargetingSettings constinit property declarations ********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SearchRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetRefreshSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LostSightGraceSeconds;
	static void NewProp_bRequireLineOfSight_SetBit(void* Obj)
	{
		((FRenegadeTargetingSettings*)Obj)->bRequireLineOfSight = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireLineOfSight;
	static void NewProp_bRetaliateWhenDamaged_SetBit(void* Obj)
	{
		((FRenegadeTargetingSettings*)Obj)->bRetaliateWhenDamaged = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRetaliateWhenDamaged;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LoseTargetRadiusMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimHeightOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerLockOnIndicatorTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerLockOnIndicatorColor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BuildingTargetPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BuildingTargetPolicy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BuildingTargetDistanceScoreMultiplier;
	static void NewProp_bTargetHostileHarvesters_SetBit(void* Obj)
	{
		((FRenegadeTargetingSettings*)Obj)->bTargetHostileHarvesters = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTargetHostileHarvesters;
	static void NewProp_bPreferSoldiersOverHarvesters_SetBit(void* Obj)
	{
		((FRenegadeTargetingSettings*)Obj)->bPreferSoldiersOverHarvesters = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreferSoldiersOverHarvesters;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HarvesterTargetDistanceScoreMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRenegadeTargetingSettings constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenegadeTargetingSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRenegadeTargetingSettings Property Definitions *******************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_SearchRadius = { "SearchRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeTargetingSettings, SearchRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchRadius_MetaData), NewProp_SearchRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_TargetRefreshSeconds = { "TargetRefreshSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeTargetingSettings, TargetRefreshSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRefreshSeconds_MetaData), NewProp_TargetRefreshSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LostSightGraceSeconds = { "LostSightGraceSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeTargetingSettings, LostSightGraceSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LostSightGraceSeconds_MetaData), NewProp_LostSightGraceSeconds_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRequireLineOfSight = { "bRequireLineOfSight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeTargetingSettings), &UHT_STATICS::NewProp_bRequireLineOfSight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequireLineOfSight_MetaData), NewProp_bRequireLineOfSight_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRetaliateWhenDamaged = { "bRetaliateWhenDamaged", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeTargetingSettings), &UHT_STATICS::NewProp_bRetaliateWhenDamaged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRetaliateWhenDamaged_MetaData), NewProp_bRetaliateWhenDamaged_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LoseTargetRadiusMultiplier = { "LoseTargetRadiusMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeTargetingSettings, LoseTargetRadiusMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoseTargetRadiusMultiplier_MetaData), NewProp_LoseTargetRadiusMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_AimHeightOffset = { "AimHeightOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeTargetingSettings, AimHeightOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimHeightOffset_MetaData), NewProp_AimHeightOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PlayerLockOnIndicatorTexture = { "PlayerLockOnIndicatorTexture", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeTargetingSettings, PlayerLockOnIndicatorTexture), Z_Construct_UClass_UTexture2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerLockOnIndicatorTexture_MetaData), NewProp_PlayerLockOnIndicatorTexture_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PlayerLockOnIndicatorColor = { "PlayerLockOnIndicatorColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeTargetingSettings, PlayerLockOnIndicatorColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerLockOnIndicatorColor_MetaData), NewProp_PlayerLockOnIndicatorColor_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_BuildingTargetPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_BuildingTargetPolicy = { "BuildingTargetPolicy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeTargetingSettings, BuildingTargetPolicy), Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeBuildingTargetPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildingTargetPolicy_MetaData), NewProp_BuildingTargetPolicy_MetaData) }; // 3f4a6f6bbc08b327f762e02f063cc8907da1ea50
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_BuildingTargetDistanceScoreMultiplier = { "BuildingTargetDistanceScoreMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeTargetingSettings, BuildingTargetDistanceScoreMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildingTargetDistanceScoreMultiplier_MetaData), NewProp_BuildingTargetDistanceScoreMultiplier_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bTargetHostileHarvesters = { "bTargetHostileHarvesters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeTargetingSettings), &UHT_STATICS::NewProp_bTargetHostileHarvesters_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTargetHostileHarvesters_MetaData), NewProp_bTargetHostileHarvesters_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bPreferSoldiersOverHarvesters = { "bPreferSoldiersOverHarvesters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeTargetingSettings), &UHT_STATICS::NewProp_bPreferSoldiersOverHarvesters_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreferSoldiersOverHarvesters_MetaData), NewProp_bPreferSoldiersOverHarvesters_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_HarvesterTargetDistanceScoreMultiplier = { "HarvesterTargetDistanceScoreMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeTargetingSettings, HarvesterTargetDistanceScoreMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HarvesterTargetDistanceScoreMultiplier_MetaData), NewProp_HarvesterTargetDistanceScoreMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SearchRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetRefreshSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LostSightGraceSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRequireLineOfSight,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRetaliateWhenDamaged,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LoseTargetRadiusMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AimHeightOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayerLockOnIndicatorTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayerLockOnIndicatorColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BuildingTargetPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BuildingTargetPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BuildingTargetDistanceScoreMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bTargetHostileHarvesters,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bPreferSoldiersOverHarvesters,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HarvesterTargetDistanceScoreMultiplier,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRenegadeTargetingSettings Property Definitions *********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	&NewStructOps,
	"RenegadeTargetingSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRenegadeTargetingSettings>(),
	alignof(FRenegadeTargetingSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRenegadeTargetingSettings;
UScriptStruct* Z_Construct_UScriptStruct_FRenegadeTargetingSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRenegadeTargetingSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRenegadeTargetingSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenegadeTargetingSettings, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("RenegadeTargetingSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FRenegadeTargetingSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRenegadeTargetingSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRenegadeTargetingSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRenegadeTargetingSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRenegadeTargetingSettings ******************************************

// ********** Begin ScriptStruct FRenegadeCombatMovementSettings ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRenegadeCombatMovementSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRenegadeCombatMovementSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRenegadeCombatMovementSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCombatMovement_MetaData[] = {
		{ "Category", "Combat Movement" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementUpdateSeconds_MetaData[] = {
		{ "Category", "Combat Movement" },
		{ "ClampMin", "0.10" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreferredMinimumRange_MetaData[] = {
		{ "Category", "Combat Movement" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreferredMaximumRange_MetaData[] = {
		{ "Category", "Combat Movement" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdvanceStepDistance_MetaData[] = {
		{ "Category", "Combat Movement" },
		{ "ClampMin", "50.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RetreatStepDistance_MetaData[] = {
		{ "Category", "Combat Movement" },
		{ "ClampMin", "50.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrafeStepDistance_MetaData[] = {
		{ "Category", "Combat Movement" },
		{ "ClampMin", "50.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavigationProjectionExtent_MetaData[] = {
		{ "Category", "Combat Movement" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAcceptanceRadius_MetaData[] = {
		{ "Category", "Combat Movement" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatWalkSpeedMultiplier_MetaData[] = {
		{ "Category", "Combat Movement" },
		{ "ClampMax", "3.0" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrafeDirectionChangeChance_MetaData[] = {
		{ "Category", "Combat Movement" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsePathfinding_MetaData[] = {
		{ "Category", "Combat Movement" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRenegadeCombatMovementSettings constinit property declarations ***
	static void NewProp_bEnableCombatMovement_SetBit(void* Obj)
	{
		((FRenegadeCombatMovementSettings*)Obj)->bEnableCombatMovement = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCombatMovement;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementUpdateSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreferredMinimumRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreferredMaximumRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdvanceStepDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RetreatStepDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StrafeStepDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NavigationProjectionExtent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveAcceptanceRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CombatWalkSpeedMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StrafeDirectionChangeChance;
	static void NewProp_bUsePathfinding_SetBit(void* Obj)
	{
		((FRenegadeCombatMovementSettings*)Obj)->bUsePathfinding = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePathfinding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRenegadeCombatMovementSettings constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenegadeCombatMovementSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRenegadeCombatMovementSettings Property Definitions **************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableCombatMovement = { "bEnableCombatMovement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeCombatMovementSettings), &UHT_STATICS::NewProp_bEnableCombatMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableCombatMovement_MetaData), NewProp_bEnableCombatMovement_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MovementUpdateSeconds = { "MovementUpdateSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatMovementSettings, MovementUpdateSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementUpdateSeconds_MetaData), NewProp_MovementUpdateSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_PreferredMinimumRange = { "PreferredMinimumRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatMovementSettings, PreferredMinimumRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreferredMinimumRange_MetaData), NewProp_PreferredMinimumRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_PreferredMaximumRange = { "PreferredMaximumRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatMovementSettings, PreferredMaximumRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreferredMaximumRange_MetaData), NewProp_PreferredMaximumRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_AdvanceStepDistance = { "AdvanceStepDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatMovementSettings, AdvanceStepDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdvanceStepDistance_MetaData), NewProp_AdvanceStepDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RetreatStepDistance = { "RetreatStepDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatMovementSettings, RetreatStepDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RetreatStepDistance_MetaData), NewProp_RetreatStepDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_StrafeStepDistance = { "StrafeStepDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatMovementSettings, StrafeStepDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrafeStepDistance_MetaData), NewProp_StrafeStepDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_NavigationProjectionExtent = { "NavigationProjectionExtent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatMovementSettings, NavigationProjectionExtent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavigationProjectionExtent_MetaData), NewProp_NavigationProjectionExtent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MoveAcceptanceRadius = { "MoveAcceptanceRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatMovementSettings, MoveAcceptanceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAcceptanceRadius_MetaData), NewProp_MoveAcceptanceRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CombatWalkSpeedMultiplier = { "CombatWalkSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatMovementSettings, CombatWalkSpeedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatWalkSpeedMultiplier_MetaData), NewProp_CombatWalkSpeedMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_StrafeDirectionChangeChance = { "StrafeDirectionChangeChance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatMovementSettings, StrafeDirectionChangeChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrafeDirectionChangeChance_MetaData), NewProp_StrafeDirectionChangeChance_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUsePathfinding = { "bUsePathfinding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeCombatMovementSettings), &UHT_STATICS::NewProp_bUsePathfinding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsePathfinding_MetaData), NewProp_bUsePathfinding_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableCombatMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MovementUpdateSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreferredMinimumRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreferredMaximumRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AdvanceStepDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RetreatStepDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StrafeStepDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NavigationProjectionExtent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MoveAcceptanceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CombatWalkSpeedMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StrafeDirectionChangeChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUsePathfinding,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRenegadeCombatMovementSettings Property Definitions ****************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	&NewStructOps,
	"RenegadeCombatMovementSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRenegadeCombatMovementSettings>(),
	alignof(FRenegadeCombatMovementSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRenegadeCombatMovementSettings;
UScriptStruct* Z_Construct_UScriptStruct_FRenegadeCombatMovementSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRenegadeCombatMovementSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRenegadeCombatMovementSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenegadeCombatMovementSettings, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("RenegadeCombatMovementSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FRenegadeCombatMovementSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRenegadeCombatMovementSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRenegadeCombatMovementSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRenegadeCombatMovementSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRenegadeCombatMovementSettings *************************************

// ********** Begin ScriptStruct FRenegadePlayerCombatSettings *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRenegadePlayerCombatSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRenegadePlayerCombatSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRenegadePlayerCombatSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseControllerViewForAim_MetaData[] = {
		{ "Category", "Player Aiming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Uses the owning Player Controller view/camera ray to aim manual shots. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Uses the owning Player Controller view/camera ray to aim manual shots." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumClientViewOriginError_MetaData[] = {
		{ "Category", "Player Aiming|Networking" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum accepted distance between the client camera origin and the authoritative pawn view origin. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum accepted distance between the client camera origin and the authoritative pawn view origin." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumClientAimAngleError_MetaData[] = {
		{ "Category", "Player Aiming|Networking" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum accepted angular difference between the submitted client aim and replicated controller aim. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum accepted angular difference between the submitted client aim and replicated controller aim." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyWeaponSpread_MetaData[] = {
		{ "Category", "Player Aiming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Applies the weapon's hip-fire and movement spread to player shots. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applies the weapon's hip-fire and movement spread to player shots." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimedSpreadMultiplier_MetaData[] = {
		{ "Category", "Player Aiming" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Multiplies final player spread while Aim is active. 0 is perfectly accurate and 1 keeps full hip-fire spread. */" },
#endif
		{ "EditCondition", "bApplyWeaponSpread" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multiplies final player spread while Aim is active. 0 is perfectly accurate and 1 keeps full hip-fire spread." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreventMuzzleObstructionShooting_MetaData[] = {
		{ "Category", "Player Aiming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Performs a second trace from the muzzle to the camera aim point so the player cannot shoot through nearby cover. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Performs a second trace from the muzzle to the camera aim point so the player cannot shoot through nearby cover." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutomaticRifleFiresWhileHeld_MetaData[] = {
		{ "Category", "Player Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Automatic rifle repeatedly requests shots while the fire input is held. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Automatic rifle repeatedly requests shots while the fire input is held." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoReloadWhenEmpty_MetaData[] = {
		{ "Category", "Player Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Automatically starts a reload when a player weapon reaches zero magazine ammunition. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Automatically starts a reload when a player weapon reaches zero magazine ammunition." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRefillAllWeaponsOnRespawn_MetaData[] = {
		{ "Category", "Player Respawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Refills both player weapons when the same actor respawns. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Refills both player weapons when the same actor respawns." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerFireRateTolerance_MetaData[] = {
		{ "Category", "Player Input|Networking" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.80" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Server cadence tolerance. Values below 1 permit a small amount of network jitter without allowing faster fire. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Server cadence tolerance. Values below 1 permit a small amount of network jitter without allowing faster fire." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRenegadePlayerCombatSettings constinit property declarations *****
	static void NewProp_bUseControllerViewForAim_SetBit(void* Obj)
	{
		((FRenegadePlayerCombatSettings*)Obj)->bUseControllerViewForAim = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseControllerViewForAim;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumClientViewOriginError;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumClientAimAngleError;
	static void NewProp_bApplyWeaponSpread_SetBit(void* Obj)
	{
		((FRenegadePlayerCombatSettings*)Obj)->bApplyWeaponSpread = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyWeaponSpread;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimedSpreadMultiplier;
	static void NewProp_bPreventMuzzleObstructionShooting_SetBit(void* Obj)
	{
		((FRenegadePlayerCombatSettings*)Obj)->bPreventMuzzleObstructionShooting = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreventMuzzleObstructionShooting;
	static void NewProp_bAutomaticRifleFiresWhileHeld_SetBit(void* Obj)
	{
		((FRenegadePlayerCombatSettings*)Obj)->bAutomaticRifleFiresWhileHeld = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomaticRifleFiresWhileHeld;
	static void NewProp_bAutoReloadWhenEmpty_SetBit(void* Obj)
	{
		((FRenegadePlayerCombatSettings*)Obj)->bAutoReloadWhenEmpty = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoReloadWhenEmpty;
	static void NewProp_bRefillAllWeaponsOnRespawn_SetBit(void* Obj)
	{
		((FRenegadePlayerCombatSettings*)Obj)->bRefillAllWeaponsOnRespawn = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRefillAllWeaponsOnRespawn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ServerFireRateTolerance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRenegadePlayerCombatSettings constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenegadePlayerCombatSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRenegadePlayerCombatSettings Property Definitions ****************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseControllerViewForAim = { "bUseControllerViewForAim", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadePlayerCombatSettings), &UHT_STATICS::NewProp_bUseControllerViewForAim_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseControllerViewForAim_MetaData), NewProp_bUseControllerViewForAim_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaximumClientViewOriginError = { "MaximumClientViewOriginError", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerCombatSettings, MaximumClientViewOriginError), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumClientViewOriginError_MetaData), NewProp_MaximumClientViewOriginError_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaximumClientAimAngleError = { "MaximumClientAimAngleError", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerCombatSettings, MaximumClientAimAngleError), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumClientAimAngleError_MetaData), NewProp_MaximumClientAimAngleError_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bApplyWeaponSpread = { "bApplyWeaponSpread", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadePlayerCombatSettings), &UHT_STATICS::NewProp_bApplyWeaponSpread_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyWeaponSpread_MetaData), NewProp_bApplyWeaponSpread_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_AimedSpreadMultiplier = { "AimedSpreadMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerCombatSettings, AimedSpreadMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimedSpreadMultiplier_MetaData), NewProp_AimedSpreadMultiplier_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bPreventMuzzleObstructionShooting = { "bPreventMuzzleObstructionShooting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadePlayerCombatSettings), &UHT_STATICS::NewProp_bPreventMuzzleObstructionShooting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreventMuzzleObstructionShooting_MetaData), NewProp_bPreventMuzzleObstructionShooting_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAutomaticRifleFiresWhileHeld = { "bAutomaticRifleFiresWhileHeld", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadePlayerCombatSettings), &UHT_STATICS::NewProp_bAutomaticRifleFiresWhileHeld_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutomaticRifleFiresWhileHeld_MetaData), NewProp_bAutomaticRifleFiresWhileHeld_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAutoReloadWhenEmpty = { "bAutoReloadWhenEmpty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadePlayerCombatSettings), &UHT_STATICS::NewProp_bAutoReloadWhenEmpty_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoReloadWhenEmpty_MetaData), NewProp_bAutoReloadWhenEmpty_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRefillAllWeaponsOnRespawn = { "bRefillAllWeaponsOnRespawn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadePlayerCombatSettings), &UHT_STATICS::NewProp_bRefillAllWeaponsOnRespawn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRefillAllWeaponsOnRespawn_MetaData), NewProp_bRefillAllWeaponsOnRespawn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ServerFireRateTolerance = { "ServerFireRateTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerCombatSettings, ServerFireRateTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerFireRateTolerance_MetaData), NewProp_ServerFireRateTolerance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseControllerViewForAim,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaximumClientViewOriginError,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaximumClientAimAngleError,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bApplyWeaponSpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AimedSpreadMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bPreventMuzzleObstructionShooting,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAutomaticRifleFiresWhileHeld,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAutoReloadWhenEmpty,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRefillAllWeaponsOnRespawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ServerFireRateTolerance,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRenegadePlayerCombatSettings Property Definitions ******************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	&NewStructOps,
	"RenegadePlayerCombatSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRenegadePlayerCombatSettings>(),
	alignof(FRenegadePlayerCombatSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRenegadePlayerCombatSettings;
UScriptStruct* Z_Construct_UScriptStruct_FRenegadePlayerCombatSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRenegadePlayerCombatSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRenegadePlayerCombatSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenegadePlayerCombatSettings, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("RenegadePlayerCombatSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FRenegadePlayerCombatSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRenegadePlayerCombatSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRenegadePlayerCombatSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRenegadePlayerCombatSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRenegadePlayerCombatSettings ***************************************

// ********** Begin ScriptStruct FRenegadePlayerAimPresentationSettings ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRenegadePlayerAimPresentationSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRenegadePlayerAimPresentationSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRenegadePlayerAimPresentationSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Local and network-safe presentation applied while a player-controlled combatant is aiming.\n * Camera zoom is cosmetic/local. Character yaw remains authoritative through normal Character replication.\n */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Local and network-safe presentation applied while a player-controlled combatant is aiming.\nCamera zoom is cosmetic/local. Character yaw remains authoritative through normal Character replication." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAimPresentation_MetaData[] = {
		{ "Category", "Aim Presentation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Master switch for camera-facing rotation and camera zoom while the player aim state is active. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Master switch for camera-facing rotation and camera zoom while the player aim state is active." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRotateCharacterToCameraForward_MetaData[] = {
		{ "Category", "Aim Presentation|Rotation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Keeps the Character body yaw aligned with the owning camera/controller forward direction while aiming. */" },
#endif
		{ "EditCondition", "bEnableAimPresentation" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Keeps the Character body yaw aligned with the owning camera/controller forward direction while aiming." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSnapCharacterToCameraYawOnAimStart_MetaData[] = {
		{ "Category", "Aim Presentation|Rotation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Instantly aligns body yaw when aim begins before smooth maintenance takes over. */" },
#endif
		{ "EditCondition", "bEnableAimPresentation && bRotateCharacterToCameraForward" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instantly aligns body yaw when aim begins before smooth maintenance takes over." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterRotationSpeedDegreesPerSecond_MetaData[] = {
		{ "Category", "Aim Presentation|Rotation" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum body yaw rotation speed while aiming. Set to 0 for instant alignment every frame. */" },
#endif
		{ "EditCondition", "bEnableAimPresentation && bRotateCharacterToCameraForward" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum body yaw rotation speed while aiming. Set to 0 for instant alignment every frame." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableOrientRotationToMovementWhileAiming_MetaData[] = {
		{ "Category", "Aim Presentation|Rotation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Prevents movement direction from turning the Character away from the camera while aiming. */" },
#endif
		{ "EditCondition", "bEnableAimPresentation && bRotateCharacterToCameraForward" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prevents movement direction from turning the Character away from the camera while aiming." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseControllerDesiredRotationWhileAiming_MetaData[] = {
		{ "Category", "Aim Presentation|Rotation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Lets Character Movement use Controller rotation while aiming. */" },
#endif
		{ "EditCondition", "bEnableAimPresentation && bRotateCharacterToCameraForward" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lets Character Movement use Controller rotation while aiming." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseControllerRotationYawWhileAiming_MetaData[] = {
		{ "Category", "Aim Presentation|Rotation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Lets the Character consume Controller yaw while aiming. Original Blueprint settings are restored on release. */" },
#endif
		{ "EditCondition", "bEnableAimPresentation && bRotateCharacterToCameraForward" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lets the Character consume Controller yaw while aiming. Original Blueprint settings are restored on release." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bZoomCameraWhileAiming_MetaData[] = {
		{ "Category", "Aim Presentation|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Smoothly changes the local player's camera field of view while aiming. */" },
#endif
		{ "EditCondition", "bEnableAimPresentation" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Smoothly changes the local player's camera field of view while aiming." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimedFieldOfView_MetaData[] = {
		{ "Category", "Aim Presentation|Camera" },
		{ "ClampMax", "170.0" },
		{ "ClampMin", "5.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Horizontal field of view used while aiming. Lower values zoom farther in. */" },
#endif
		{ "EditCondition", "bEnableAimPresentation && bZoomCameraWhileAiming" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Horizontal field of view used while aiming. Lower values zoom farther in." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomInInterpSpeed_MetaData[] = {
		{ "Category", "Aim Presentation|Camera" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** FOV interpolation speed when entering aim. Set to 0 for instant zoom. */" },
#endif
		{ "EditCondition", "bEnableAimPresentation && bZoomCameraWhileAiming" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FOV interpolation speed when entering aim. Set to 0 for instant zoom." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomOutInterpSpeed_MetaData[] = {
		{ "Category", "Aim Presentation|Camera" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** FOV interpolation speed when leaving aim. Set to 0 for instant restoration. */" },
#endif
		{ "EditCondition", "bEnableAimPresentation && bZoomCameraWhileAiming" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FOV interpolation speed when leaving aim. Set to 0 for instant restoration." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoFindActiveCameraComponent_MetaData[] = {
		{ "Category", "Aim Presentation|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Finds the active Camera Component automatically when no camera component is explicitly assigned. */" },
#endif
		{ "EditCondition", "bEnableAimPresentation && bZoomCameraWhileAiming" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finds the active Camera Component automatically when no camera component is explicitly assigned." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsePlayerCameraManagerFallback_MetaData[] = {
		{ "Category", "Aim Presentation|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Uses PlayerCameraManager FOV locking when the player pawn has no usable Camera Component. */" },
#endif
		{ "EditCondition", "bEnableAimPresentation && bZoomCameraWhileAiming" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Uses PlayerCameraManager FOV locking when the player pawn has no usable Camera Component." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRenegadePlayerAimPresentationSettings constinit property declarations 
	static void NewProp_bEnableAimPresentation_SetBit(void* Obj)
	{
		((FRenegadePlayerAimPresentationSettings*)Obj)->bEnableAimPresentation = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAimPresentation;
	static void NewProp_bRotateCharacterToCameraForward_SetBit(void* Obj)
	{
		((FRenegadePlayerAimPresentationSettings*)Obj)->bRotateCharacterToCameraForward = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotateCharacterToCameraForward;
	static void NewProp_bSnapCharacterToCameraYawOnAimStart_SetBit(void* Obj)
	{
		((FRenegadePlayerAimPresentationSettings*)Obj)->bSnapCharacterToCameraYawOnAimStart = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapCharacterToCameraYawOnAimStart;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CharacterRotationSpeedDegreesPerSecond;
	static void NewProp_bDisableOrientRotationToMovementWhileAiming_SetBit(void* Obj)
	{
		((FRenegadePlayerAimPresentationSettings*)Obj)->bDisableOrientRotationToMovementWhileAiming = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableOrientRotationToMovementWhileAiming;
	static void NewProp_bUseControllerDesiredRotationWhileAiming_SetBit(void* Obj)
	{
		((FRenegadePlayerAimPresentationSettings*)Obj)->bUseControllerDesiredRotationWhileAiming = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseControllerDesiredRotationWhileAiming;
	static void NewProp_bUseControllerRotationYawWhileAiming_SetBit(void* Obj)
	{
		((FRenegadePlayerAimPresentationSettings*)Obj)->bUseControllerRotationYawWhileAiming = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseControllerRotationYawWhileAiming;
	static void NewProp_bZoomCameraWhileAiming_SetBit(void* Obj)
	{
		((FRenegadePlayerAimPresentationSettings*)Obj)->bZoomCameraWhileAiming = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bZoomCameraWhileAiming;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimedFieldOfView;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomInInterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomOutInterpSpeed;
	static void NewProp_bAutoFindActiveCameraComponent_SetBit(void* Obj)
	{
		((FRenegadePlayerAimPresentationSettings*)Obj)->bAutoFindActiveCameraComponent = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoFindActiveCameraComponent;
	static void NewProp_bUsePlayerCameraManagerFallback_SetBit(void* Obj)
	{
		((FRenegadePlayerAimPresentationSettings*)Obj)->bUsePlayerCameraManagerFallback = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePlayerCameraManagerFallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRenegadePlayerAimPresentationSettings constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenegadePlayerAimPresentationSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRenegadePlayerAimPresentationSettings Property Definitions *******
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableAimPresentation = { "bEnableAimPresentation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadePlayerAimPresentationSettings), &UHT_STATICS::NewProp_bEnableAimPresentation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableAimPresentation_MetaData), NewProp_bEnableAimPresentation_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRotateCharacterToCameraForward = { "bRotateCharacterToCameraForward", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadePlayerAimPresentationSettings), &UHT_STATICS::NewProp_bRotateCharacterToCameraForward_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRotateCharacterToCameraForward_MetaData), NewProp_bRotateCharacterToCameraForward_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSnapCharacterToCameraYawOnAimStart = { "bSnapCharacterToCameraYawOnAimStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadePlayerAimPresentationSettings), &UHT_STATICS::NewProp_bSnapCharacterToCameraYawOnAimStart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSnapCharacterToCameraYawOnAimStart_MetaData), NewProp_bSnapCharacterToCameraYawOnAimStart_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CharacterRotationSpeedDegreesPerSecond = { "CharacterRotationSpeedDegreesPerSecond", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerAimPresentationSettings, CharacterRotationSpeedDegreesPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterRotationSpeedDegreesPerSecond_MetaData), NewProp_CharacterRotationSpeedDegreesPerSecond_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDisableOrientRotationToMovementWhileAiming = { "bDisableOrientRotationToMovementWhileAiming", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadePlayerAimPresentationSettings), &UHT_STATICS::NewProp_bDisableOrientRotationToMovementWhileAiming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableOrientRotationToMovementWhileAiming_MetaData), NewProp_bDisableOrientRotationToMovementWhileAiming_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseControllerDesiredRotationWhileAiming = { "bUseControllerDesiredRotationWhileAiming", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadePlayerAimPresentationSettings), &UHT_STATICS::NewProp_bUseControllerDesiredRotationWhileAiming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseControllerDesiredRotationWhileAiming_MetaData), NewProp_bUseControllerDesiredRotationWhileAiming_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseControllerRotationYawWhileAiming = { "bUseControllerRotationYawWhileAiming", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadePlayerAimPresentationSettings), &UHT_STATICS::NewProp_bUseControllerRotationYawWhileAiming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseControllerRotationYawWhileAiming_MetaData), NewProp_bUseControllerRotationYawWhileAiming_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bZoomCameraWhileAiming = { "bZoomCameraWhileAiming", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadePlayerAimPresentationSettings), &UHT_STATICS::NewProp_bZoomCameraWhileAiming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bZoomCameraWhileAiming_MetaData), NewProp_bZoomCameraWhileAiming_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_AimedFieldOfView = { "AimedFieldOfView", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerAimPresentationSettings, AimedFieldOfView), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimedFieldOfView_MetaData), NewProp_AimedFieldOfView_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ZoomInInterpSpeed = { "ZoomInInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerAimPresentationSettings, ZoomInInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomInInterpSpeed_MetaData), NewProp_ZoomInInterpSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ZoomOutInterpSpeed = { "ZoomOutInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerAimPresentationSettings, ZoomOutInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomOutInterpSpeed_MetaData), NewProp_ZoomOutInterpSpeed_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAutoFindActiveCameraComponent = { "bAutoFindActiveCameraComponent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadePlayerAimPresentationSettings), &UHT_STATICS::NewProp_bAutoFindActiveCameraComponent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoFindActiveCameraComponent_MetaData), NewProp_bAutoFindActiveCameraComponent_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUsePlayerCameraManagerFallback = { "bUsePlayerCameraManagerFallback", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadePlayerAimPresentationSettings), &UHT_STATICS::NewProp_bUsePlayerCameraManagerFallback_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsePlayerCameraManagerFallback_MetaData), NewProp_bUsePlayerCameraManagerFallback_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableAimPresentation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRotateCharacterToCameraForward,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSnapCharacterToCameraYawOnAimStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CharacterRotationSpeedDegreesPerSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDisableOrientRotationToMovementWhileAiming,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseControllerDesiredRotationWhileAiming,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseControllerRotationYawWhileAiming,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bZoomCameraWhileAiming,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AimedFieldOfView,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ZoomInInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ZoomOutInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAutoFindActiveCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUsePlayerCameraManagerFallback,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRenegadePlayerAimPresentationSettings Property Definitions *********
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	&NewStructOps,
	"RenegadePlayerAimPresentationSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRenegadePlayerAimPresentationSettings>(),
	alignof(FRenegadePlayerAimPresentationSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRenegadePlayerAimPresentationSettings;
UScriptStruct* Z_Construct_UScriptStruct_FRenegadePlayerAimPresentationSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRenegadePlayerAimPresentationSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRenegadePlayerAimPresentationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenegadePlayerAimPresentationSettings, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("RenegadePlayerAimPresentationSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FRenegadePlayerAimPresentationSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRenegadePlayerAimPresentationSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRenegadePlayerAimPresentationSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRenegadePlayerAimPresentationSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRenegadePlayerAimPresentationSettings ******************************

// ********** Begin ScriptStruct FRenegadePlayerLockOnSettings *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRenegadePlayerLockOnSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRenegadePlayerLockOnSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRenegadePlayerLockOnSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Local third-person lock-on targeting for player-controlled combatants.\n * The selected target is cosmetic/local; authoritative shots still use the existing validated player trace path.\n */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Local third-person lock-on targeting for player-controlled combatants.\nThe selected target is cosmetic/local; authoritative shots still use the existing validated player trace path." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLockOn_MetaData[] = {
		{ "Category", "Player Lock-On" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Master switch for player lock-on targeting. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Master switch for player lock-on targeting." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAimInputAsLockOn_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Deprecated v1.5.0 serialization field. Lock-on always uses its dedicated inputs from v1.5.1 onward. */" },
#endif
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Normal aim and lock-on now use separate controls." },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deprecated v1.5.0 serialization field. Lock-on always uses its dedicated inputs from v1.5.1 onward." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyboardMouseLockOnKey_MetaData[] = {
		{ "Category", "Player Lock-On|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dedicated keyboard lock-on input. Holding it also enters aim when Automatically Aim While Locking is enabled. */" },
#endif
		{ "EditCondition", "bEnableLockOn" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dedicated keyboard lock-on input. Holding it also enters aim when Automatically Aim While Locking is enabled." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamepadLockOnKey_MetaData[] = {
		{ "Category", "Player Lock-On|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dedicated gamepad lock-on input. Defaults to Left Shoulder / LB, directly above Left Trigger. */" },
#endif
		{ "EditCondition", "bEnableLockOn" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dedicated gamepad lock-on input. Defaults to Left Shoulder / LB, directly above Left Trigger." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutomaticallyAimWhileLocking_MetaData[] = {
		{ "Category", "Player Lock-On|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Automatically enters the existing player aim state while a target lock is held. */" },
#endif
		{ "EditCondition", "bEnableLockOn" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Automatically enters the existing player aim state while a target lock is held." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumAcquisitionDistance_MetaData[] = {
		{ "Category", "Player Lock-On|Acquisition" },
		{ "ClampMin", "100.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum initial acquisition distance. */" },
#endif
		{ "EditCondition", "bEnableLockOn" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum initial acquisition distance." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcquisitionHalfAngleDegrees_MetaData[] = {
		{ "Category", "Player Lock-On|Acquisition" },
		{ "ClampMax", "179.0" },
		{ "ClampMin", "1.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum view-space angle from the camera forward direction for initial acquisition. */" },
#endif
		{ "EditCondition", "bEnableLockOn" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum view-space angle from the camera forward direction for initial acquisition." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BreakDistanceMultiplier_MetaData[] = {
		{ "Category", "Player Lock-On|Maintenance" },
		{ "ClampMin", "1.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current targets may remain locked slightly farther away than the initial acquisition distance. */" },
#endif
		{ "EditCondition", "bEnableLockOn" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current targets may remain locked slightly farther away than the initial acquisition distance." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BreakHalfAngleDegrees_MetaData[] = {
		{ "Category", "Player Lock-On|Maintenance" },
		{ "ClampMax", "179.0" },
		{ "ClampMin", "1.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current targets are released if they move this far outside the camera forward direction. */" },
#endif
		{ "EditCondition", "bEnableLockOn" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current targets are released if they move this far outside the camera forward direction." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequireLineOfSightToAcquire_MetaData[] = {
		{ "Category", "Player Lock-On|Line of Sight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Requires a clear visibility trace before initially locking a soldier. */" },
#endif
		{ "EditCondition", "bEnableLockOn" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Requires a clear visibility trace before initially locking a soldier." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBreakLockWhenOccluded_MetaData[] = {
		{ "Category", "Player Lock-On|Line of Sight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Releases a locked target after continuous obstruction exceeds the grace time. */" },
#endif
		{ "EditCondition", "bEnableLockOn" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Releases a locked target after continuous obstruction exceeds the grace time." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionGraceSeconds_MetaData[] = {
		{ "Category", "Player Lock-On|Line of Sight" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Short obstruction grace period prevents cover edges from causing unstable lock flicker. */" },
#endif
		{ "EditCondition", "bEnableLockOn && bBreakLockWhenOccluded" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Short obstruction grace period prevents cover edges from causing unstable lock flicker." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineOfSightTraceChannel_MetaData[] = {
		{ "Category", "Player Lock-On|Line of Sight" },
		{ "EditCondition", "bEnableLockOn" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraRotationInterpSpeed_MetaData[] = {
		{ "Category", "Player Lock-On|Camera" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera/controller interpolation speed toward the locked soldier. Set to 0 for instant tracking. */" },
#endif
		{ "EditCondition", "bEnableLockOn" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera/controller interpolation speed toward the locked soldier. Set to 0 for instant tracking." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTrackTargetPitch_MetaData[] = {
		{ "Category", "Player Lock-On|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tracks vertical camera pitch as well as yaw. */" },
#endif
		{ "EditCondition", "bEnableLockOn" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tracks vertical camera pitch as well as yaw." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLeadSeconds_MetaData[] = {
		{ "Category", "Player Lock-On|Camera" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Adds movement prediction to the lock point. Hitscan weapons usually need only a very small value. */" },
#endif
		{ "EditCondition", "bEnableLockOn" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds movement prediction to the lock point. Hitscan weapons usually need only a very small value." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetAimOffset_MetaData[] = {
		{ "Category", "Player Lock-On|Camera" },
		{ "EditCondition", "bEnableLockOn" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fine adjustment added after Targeting > Aim Height Offset. Use a negative Z value to lower the player-only lock point." },
#endif
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAimOffsetControl_MetaData[] = {
		{ "Category", "Player Lock-On|Aim Offset Control" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Lets mouse or right-stick look input move the lock point around the selected soldier instead of fighting camera tracking. */" },
#endif
		{ "EditCondition", "bEnableLockOn" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lets mouse or right-stick look input move the lock point around the selected soldier instead of fighting camera tracking." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConsumeLookInputWhileLocked_MetaData[] = {
		{ "Category", "Player Lock-On|Aim Offset Control" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When enabled, built-in look input is consumed by the lock point while locked instead of rotating freely away from the target. */" },
#endif
		{ "EditCondition", "bEnableLockOn && bEnableAimOffsetControl" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When enabled, built-in look input is consumed by the lock point while locked instead of rotating freely away from the target." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutomaticallyReadConfiguredLookAxes_MetaData[] = {
		{ "Category", "Player Lock-On|Aim Offset Control" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Automatically polls the configured mouse/right-stick axes while locked, even when the plugin's Built-In Look Input is disabled. Disable this only when feeding Player Add Lock On Aim Input manually. */" },
#endif
		{ "EditCondition", "bEnableLockOn && bEnableAimOffsetControl" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Automatically polls the configured mouse/right-stick axes while locked, even when the plugin's Built-In Look Input is disabled. Disable this only when feeding Player Add Lock On Aim Input manually." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimOffsetCentimetersPerLookDegree_MetaData[] = {
		{ "Category", "Player Lock-On|Aim Offset Control" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bEnableLockOn && bEnableAimOffsetControl" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Uses the existing mouse sensitivity, gamepad yaw/pitch speeds, dead zone, inversion and aiming sensitivity multiplier before applying this conversion." },
#endif
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimOffsetHorizontalSensitivityMultiplier_MetaData[] = {
		{ "Category", "Player Lock-On|Aim Offset Control" },
		{ "ClampMax", "5.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Additional horizontal response multiplier after the normal camera sensitivity settings. */" },
#endif
		{ "EditCondition", "bEnableLockOn && bEnableAimOffsetControl" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional horizontal response multiplier after the normal camera sensitivity settings." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimOffsetVerticalSensitivityMultiplier_MetaData[] = {
		{ "Category", "Player Lock-On|Aim Offset Control" },
		{ "ClampMax", "5.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Additional vertical response multiplier after the normal camera sensitivity settings. */" },
#endif
		{ "EditCondition", "bEnableLockOn && bEnableAimOffsetControl" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional vertical response multiplier after the normal camera sensitivity settings." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumHorizontalAimOffset_MetaData[] = {
		{ "Category", "Player Lock-On|Aim Offset Control|Limits" },
		{ "ClampMax", "250.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum left/right displacement from the base target point. */" },
#endif
		{ "EditCondition", "bEnableLockOn && bEnableAimOffsetControl" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum left/right displacement from the base target point." },
#endif
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumUpwardAimOffset_MetaData[] = {
		{ "Category", "Player Lock-On|Aim Offset Control|Limits" },
		{ "ClampMax", "250.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum upward displacement from the base target point. */" },
#endif
		{ "EditCondition", "bEnableLockOn && bEnableAimOffsetControl" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum upward displacement from the base target point." },
#endif
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumDownwardAimOffset_MetaData[] = {
		{ "Category", "Player Lock-On|Aim Offset Control|Limits" },
		{ "ClampMax", "250.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum downward displacement from the base target point. */" },
#endif
		{ "EditCondition", "bEnableLockOn && bEnableAimOffsetControl" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum downward displacement from the base target point." },
#endif
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimOffsetInterpSpeed_MetaData[] = {
		{ "Category", "Player Lock-On|Aim Offset Control|Smoothing" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Smoothing speed used while the player actively moves the lock point. Set to 0 for immediate response. */" },
#endif
		{ "EditCondition", "bEnableLockOn && bEnableAimOffsetControl" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Smoothing speed used while the player actively moves the lock point. Set to 0 for immediate response." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoRecenterAimOffset_MetaData[] = {
		{ "Category", "Player Lock-On|Aim Offset Control|Recentering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the movable lock point toward the authored Target Aim Offset after input stops. */" },
#endif
		{ "EditCondition", "bEnableLockOn && bEnableAimOffsetControl" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the movable lock point toward the authored Target Aim Offset after input stops." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimOffsetRecenterDelaySeconds_MetaData[] = {
		{ "Category", "Player Lock-On|Aim Offset Control|Recentering" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bEnableLockOn && bEnableAimOffsetControl && bAutoRecenterAimOffset" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimOffsetRecenterInterpSpeed_MetaData[] = {
		{ "Category", "Player Lock-On|Aim Offset Control|Recentering" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bEnableLockOn && bEnableAimOffsetControl && bAutoRecenterAimOffset" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResetAimOffsetWhenTargetChanges_MetaData[] = {
		{ "Category", "Player Lock-On|Aim Offset Control" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Clears the movable offset whenever a different soldier becomes the active lock target. */" },
#endif
		{ "EditCondition", "bEnableLockOn && bEnableAimOffsetControl" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clears the movable offset whenever a different soldier becomes the active lock target." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAimPlayerShotsAtLockedTarget_MetaData[] = {
		{ "Category", "Player Lock-On|Shooting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Player shot direction is corrected to the locked soldier while the lock remains valid. */" },
#endif
		{ "EditCondition", "bEnableLockOn" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Player shot direction is corrected to the locked soldier while the lock remains valid." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumShotAssistAngleDegrees_MetaData[] = {
		{ "Category", "Player Lock-On|Shooting" },
		{ "ClampMax", "90.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum angle over which lock-on may correct the submitted player shot direction. */" },
#endif
		{ "EditCondition", "bEnableLockOn && bAimPlayerShotsAtLockedTarget" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum angle over which lock-on may correct the submitted player shot direction." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableTargetSwitching_MetaData[] = {
		{ "Category", "Player Lock-On|Switching" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enables manual target cycling. */" },
#endif
		{ "EditCondition", "bEnableLockOn" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables manual target cycling." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyboardMouseSwitchLeftKey_MetaData[] = {
		{ "Category", "Player Lock-On|Switching" },
		{ "EditCondition", "bEnableLockOn && bEnableTargetSwitching" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyboardMouseSwitchRightKey_MetaData[] = {
		{ "Category", "Player Lock-On|Switching" },
		{ "EditCondition", "bEnableLockOn && bEnableTargetSwitching" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamepadSwitchLeftKey_MetaData[] = {
		{ "Category", "Player Lock-On|Switching" },
		{ "EditCondition", "bEnableLockOn && bEnableTargetSwitching" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamepadSwitchRightKey_MetaData[] = {
		{ "Category", "Player Lock-On|Switching" },
		{ "EditCondition", "bEnableLockOn && bEnableTargetSwitching" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRightStickFlickSwitching_MetaData[] = {
		{ "Category", "Player Lock-On|Switching" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A right-stick horizontal flick can cycle targets without requiring another gamepad button. */" },
#endif
		{ "EditCondition", "bEnableLockOn && bEnableTargetSwitching" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A right-stick horizontal flick can cycle targets without requiring another gamepad button." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightStickSwitchThreshold_MetaData[] = {
		{ "Category", "Player Lock-On|Switching" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.1" },
		{ "EditCondition", "bEnableLockOn && bEnableTargetSwitching && bEnableRightStickFlickSwitching" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetSwitchCooldownSeconds_MetaData[] = {
		{ "Category", "Player Lock-On|Switching" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bEnableLockOn && bEnableTargetSwitching" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockOnIndicatorTexture_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Deprecated v1.5.1 location retained only so existing Blueprint assignments migrate to Targeting > Player Lock-On Visual. */" },
#endif
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Targeting.PlayerLockOnIndicatorTexture instead." },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deprecated v1.5.1 location retained only so existing Blueprint assignments migrate to Targeting > Player Lock-On Visual." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockOnIndicatorWorldOffset_MetaData[] = {
		{ "Category", "Player Lock-On|Indicator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** World-space offset from the target combat aim point. */" },
#endif
		{ "EditCondition", "bEnableLockOn" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "World-space offset from the target combat aim point." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockOnIndicatorScale_MetaData[] = {
		{ "Category", "Player Lock-On|Indicator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Base world scale of the indicator billboard. */" },
#endif
		{ "EditCondition", "bEnableLockOn" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base world scale of the indicator billboard." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseScreenSizeScaling_MetaData[] = {
		{ "Category", "Player Lock-On|Indicator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Keeps the indicator approximately consistent in screen size over distance. */" },
#endif
		{ "EditCondition", "bEnableLockOn" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Keeps the indicator approximately consistent in screen size over distance." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndicatorScreenSize_MetaData[] = {
		{ "Category", "Player Lock-On|Indicator" },
		{ "ClampMin", "0.0001" },
		{ "EditCondition", "bEnableLockOn && bUseScreenSizeScaling" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndicatorPulseAmount_MetaData[] = {
		{ "Category", "Player Lock-On|Indicator" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Subtle scale pulse amplitude. 0 disables pulsing. */" },
#endif
		{ "EditCondition", "bEnableLockOn" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Subtle scale pulse amplitude. 0 disables pulsing." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndicatorPulseSpeed_MetaData[] = {
		{ "Category", "Player Lock-On|Indicator" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bEnableLockOn" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawLockOnDebug_MetaData[] = {
		{ "Category", "Player Lock-On|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Draws acquisition candidates, the active target line, and the line-of-sight result. */" },
#endif
		{ "EditCondition", "bEnableLockOn" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Draws acquisition candidates, the active target line, and the line-of-sight result." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRenegadePlayerLockOnSettings constinit property declarations *****
	static void NewProp_bEnableLockOn_SetBit(void* Obj)
	{
		((FRenegadePlayerLockOnSettings*)Obj)->bEnableLockOn = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLockOn;
	static void NewProp_bUseAimInputAsLockOn_SetBit(void* Obj)
	{
		((FRenegadePlayerLockOnSettings*)Obj)->bUseAimInputAsLockOn = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAimInputAsLockOn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyboardMouseLockOnKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GamepadLockOnKey;
	static void NewProp_bAutomaticallyAimWhileLocking_SetBit(void* Obj)
	{
		((FRenegadePlayerLockOnSettings*)Obj)->bAutomaticallyAimWhileLocking = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomaticallyAimWhileLocking;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumAcquisitionDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AcquisitionHalfAngleDegrees;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BreakDistanceMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BreakHalfAngleDegrees;
	static void NewProp_bRequireLineOfSightToAcquire_SetBit(void* Obj)
	{
		((FRenegadePlayerLockOnSettings*)Obj)->bRequireLineOfSightToAcquire = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireLineOfSightToAcquire;
	static void NewProp_bBreakLockWhenOccluded_SetBit(void* Obj)
	{
		((FRenegadePlayerLockOnSettings*)Obj)->bBreakLockWhenOccluded = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBreakLockWhenOccluded;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OcclusionGraceSeconds;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LineOfSightTraceChannel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraRotationInterpSpeed;
	static void NewProp_bTrackTargetPitch_SetBit(void* Obj)
	{
		((FRenegadePlayerLockOnSettings*)Obj)->bTrackTargetPitch = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTrackTargetPitch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetLeadSeconds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetAimOffset;
	static void NewProp_bEnableAimOffsetControl_SetBit(void* Obj)
	{
		((FRenegadePlayerLockOnSettings*)Obj)->bEnableAimOffsetControl = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAimOffsetControl;
	static void NewProp_bConsumeLookInputWhileLocked_SetBit(void* Obj)
	{
		((FRenegadePlayerLockOnSettings*)Obj)->bConsumeLookInputWhileLocked = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConsumeLookInputWhileLocked;
	static void NewProp_bAutomaticallyReadConfiguredLookAxes_SetBit(void* Obj)
	{
		((FRenegadePlayerLockOnSettings*)Obj)->bAutomaticallyReadConfiguredLookAxes = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomaticallyReadConfiguredLookAxes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimOffsetCentimetersPerLookDegree;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimOffsetHorizontalSensitivityMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimOffsetVerticalSensitivityMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumHorizontalAimOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumUpwardAimOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumDownwardAimOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimOffsetInterpSpeed;
	static void NewProp_bAutoRecenterAimOffset_SetBit(void* Obj)
	{
		((FRenegadePlayerLockOnSettings*)Obj)->bAutoRecenterAimOffset = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoRecenterAimOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimOffsetRecenterDelaySeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimOffsetRecenterInterpSpeed;
	static void NewProp_bResetAimOffsetWhenTargetChanges_SetBit(void* Obj)
	{
		((FRenegadePlayerLockOnSettings*)Obj)->bResetAimOffsetWhenTargetChanges = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetAimOffsetWhenTargetChanges;
	static void NewProp_bAimPlayerShotsAtLockedTarget_SetBit(void* Obj)
	{
		((FRenegadePlayerLockOnSettings*)Obj)->bAimPlayerShotsAtLockedTarget = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAimPlayerShotsAtLockedTarget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumShotAssistAngleDegrees;
	static void NewProp_bEnableTargetSwitching_SetBit(void* Obj)
	{
		((FRenegadePlayerLockOnSettings*)Obj)->bEnableTargetSwitching = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTargetSwitching;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyboardMouseSwitchLeftKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyboardMouseSwitchRightKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GamepadSwitchLeftKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GamepadSwitchRightKey;
	static void NewProp_bEnableRightStickFlickSwitching_SetBit(void* Obj)
	{
		((FRenegadePlayerLockOnSettings*)Obj)->bEnableRightStickFlickSwitching = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRightStickFlickSwitching;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RightStickSwitchThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetSwitchCooldownSeconds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LockOnIndicatorTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LockOnIndicatorWorldOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LockOnIndicatorScale;
	static void NewProp_bUseScreenSizeScaling_SetBit(void* Obj)
	{
		((FRenegadePlayerLockOnSettings*)Obj)->bUseScreenSizeScaling = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseScreenSizeScaling;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IndicatorScreenSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IndicatorPulseAmount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IndicatorPulseSpeed;
	static void NewProp_bDrawLockOnDebug_SetBit(void* Obj)
	{
		((FRenegadePlayerLockOnSettings*)Obj)->bDrawLockOnDebug = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawLockOnDebug;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRenegadePlayerLockOnSettings constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenegadePlayerLockOnSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRenegadePlayerLockOnSettings Property Definitions ****************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableLockOn = { "bEnableLockOn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadePlayerLockOnSettings), &UHT_STATICS::NewProp_bEnableLockOn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableLockOn_MetaData), NewProp_bEnableLockOn_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseAimInputAsLockOn = { "bUseAimInputAsLockOn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadePlayerLockOnSettings), &UHT_STATICS::NewProp_bUseAimInputAsLockOn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAimInputAsLockOn_MetaData), NewProp_bUseAimInputAsLockOn_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_KeyboardMouseLockOnKey = { "KeyboardMouseLockOnKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerLockOnSettings, KeyboardMouseLockOnKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyboardMouseLockOnKey_MetaData), NewProp_KeyboardMouseLockOnKey_MetaData) }; // 64b3e4afc222613fc56ee34bd705dda53a3378d0
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GamepadLockOnKey = { "GamepadLockOnKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerLockOnSettings, GamepadLockOnKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamepadLockOnKey_MetaData), NewProp_GamepadLockOnKey_MetaData) }; // 64b3e4afc222613fc56ee34bd705dda53a3378d0
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAutomaticallyAimWhileLocking = { "bAutomaticallyAimWhileLocking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadePlayerLockOnSettings), &UHT_STATICS::NewProp_bAutomaticallyAimWhileLocking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutomaticallyAimWhileLocking_MetaData), NewProp_bAutomaticallyAimWhileLocking_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaximumAcquisitionDistance = { "MaximumAcquisitionDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerLockOnSettings, MaximumAcquisitionDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumAcquisitionDistance_MetaData), NewProp_MaximumAcquisitionDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_AcquisitionHalfAngleDegrees = { "AcquisitionHalfAngleDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerLockOnSettings, AcquisitionHalfAngleDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcquisitionHalfAngleDegrees_MetaData), NewProp_AcquisitionHalfAngleDegrees_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_BreakDistanceMultiplier = { "BreakDistanceMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerLockOnSettings, BreakDistanceMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BreakDistanceMultiplier_MetaData), NewProp_BreakDistanceMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_BreakHalfAngleDegrees = { "BreakHalfAngleDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerLockOnSettings, BreakHalfAngleDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BreakHalfAngleDegrees_MetaData), NewProp_BreakHalfAngleDegrees_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRequireLineOfSightToAcquire = { "bRequireLineOfSightToAcquire", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadePlayerLockOnSettings), &UHT_STATICS::NewProp_bRequireLineOfSightToAcquire_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequireLineOfSightToAcquire_MetaData), NewProp_bRequireLineOfSightToAcquire_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bBreakLockWhenOccluded = { "bBreakLockWhenOccluded", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadePlayerLockOnSettings), &UHT_STATICS::NewProp_bBreakLockWhenOccluded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBreakLockWhenOccluded_MetaData), NewProp_bBreakLockWhenOccluded_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_OcclusionGraceSeconds = { "OcclusionGraceSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerLockOnSettings, OcclusionGraceSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OcclusionGraceSeconds_MetaData), NewProp_OcclusionGraceSeconds_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_LineOfSightTraceChannel = { "LineOfSightTraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerLockOnSettings, LineOfSightTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineOfSightTraceChannel_MetaData), NewProp_LineOfSightTraceChannel_MetaData) }; // 3aff698625c18cc2ccaa87a587b2eac8c50cdec7
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CameraRotationInterpSpeed = { "CameraRotationInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerLockOnSettings, CameraRotationInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRotationInterpSpeed_MetaData), NewProp_CameraRotationInterpSpeed_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bTrackTargetPitch = { "bTrackTargetPitch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadePlayerLockOnSettings), &UHT_STATICS::NewProp_bTrackTargetPitch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTrackTargetPitch_MetaData), NewProp_bTrackTargetPitch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_TargetLeadSeconds = { "TargetLeadSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerLockOnSettings, TargetLeadSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLeadSeconds_MetaData), NewProp_TargetLeadSeconds_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TargetAimOffset = { "TargetAimOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerLockOnSettings, TargetAimOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetAimOffset_MetaData), NewProp_TargetAimOffset_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableAimOffsetControl = { "bEnableAimOffsetControl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadePlayerLockOnSettings), &UHT_STATICS::NewProp_bEnableAimOffsetControl_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableAimOffsetControl_MetaData), NewProp_bEnableAimOffsetControl_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bConsumeLookInputWhileLocked = { "bConsumeLookInputWhileLocked", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadePlayerLockOnSettings), &UHT_STATICS::NewProp_bConsumeLookInputWhileLocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConsumeLookInputWhileLocked_MetaData), NewProp_bConsumeLookInputWhileLocked_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAutomaticallyReadConfiguredLookAxes = { "bAutomaticallyReadConfiguredLookAxes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadePlayerLockOnSettings), &UHT_STATICS::NewProp_bAutomaticallyReadConfiguredLookAxes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutomaticallyReadConfiguredLookAxes_MetaData), NewProp_bAutomaticallyReadConfiguredLookAxes_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_AimOffsetCentimetersPerLookDegree = { "AimOffsetCentimetersPerLookDegree", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerLockOnSettings, AimOffsetCentimetersPerLookDegree), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimOffsetCentimetersPerLookDegree_MetaData), NewProp_AimOffsetCentimetersPerLookDegree_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_AimOffsetHorizontalSensitivityMultiplier = { "AimOffsetHorizontalSensitivityMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerLockOnSettings, AimOffsetHorizontalSensitivityMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimOffsetHorizontalSensitivityMultiplier_MetaData), NewProp_AimOffsetHorizontalSensitivityMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_AimOffsetVerticalSensitivityMultiplier = { "AimOffsetVerticalSensitivityMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerLockOnSettings, AimOffsetVerticalSensitivityMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimOffsetVerticalSensitivityMultiplier_MetaData), NewProp_AimOffsetVerticalSensitivityMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaximumHorizontalAimOffset = { "MaximumHorizontalAimOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerLockOnSettings, MaximumHorizontalAimOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumHorizontalAimOffset_MetaData), NewProp_MaximumHorizontalAimOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaximumUpwardAimOffset = { "MaximumUpwardAimOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerLockOnSettings, MaximumUpwardAimOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumUpwardAimOffset_MetaData), NewProp_MaximumUpwardAimOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaximumDownwardAimOffset = { "MaximumDownwardAimOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerLockOnSettings, MaximumDownwardAimOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumDownwardAimOffset_MetaData), NewProp_MaximumDownwardAimOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_AimOffsetInterpSpeed = { "AimOffsetInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerLockOnSettings, AimOffsetInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimOffsetInterpSpeed_MetaData), NewProp_AimOffsetInterpSpeed_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAutoRecenterAimOffset = { "bAutoRecenterAimOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadePlayerLockOnSettings), &UHT_STATICS::NewProp_bAutoRecenterAimOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoRecenterAimOffset_MetaData), NewProp_bAutoRecenterAimOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_AimOffsetRecenterDelaySeconds = { "AimOffsetRecenterDelaySeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerLockOnSettings, AimOffsetRecenterDelaySeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimOffsetRecenterDelaySeconds_MetaData), NewProp_AimOffsetRecenterDelaySeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_AimOffsetRecenterInterpSpeed = { "AimOffsetRecenterInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerLockOnSettings, AimOffsetRecenterInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimOffsetRecenterInterpSpeed_MetaData), NewProp_AimOffsetRecenterInterpSpeed_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bResetAimOffsetWhenTargetChanges = { "bResetAimOffsetWhenTargetChanges", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadePlayerLockOnSettings), &UHT_STATICS::NewProp_bResetAimOffsetWhenTargetChanges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResetAimOffsetWhenTargetChanges_MetaData), NewProp_bResetAimOffsetWhenTargetChanges_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAimPlayerShotsAtLockedTarget = { "bAimPlayerShotsAtLockedTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadePlayerLockOnSettings), &UHT_STATICS::NewProp_bAimPlayerShotsAtLockedTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAimPlayerShotsAtLockedTarget_MetaData), NewProp_bAimPlayerShotsAtLockedTarget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaximumShotAssistAngleDegrees = { "MaximumShotAssistAngleDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerLockOnSettings, MaximumShotAssistAngleDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumShotAssistAngleDegrees_MetaData), NewProp_MaximumShotAssistAngleDegrees_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableTargetSwitching = { "bEnableTargetSwitching", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadePlayerLockOnSettings), &UHT_STATICS::NewProp_bEnableTargetSwitching_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableTargetSwitching_MetaData), NewProp_bEnableTargetSwitching_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_KeyboardMouseSwitchLeftKey = { "KeyboardMouseSwitchLeftKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerLockOnSettings, KeyboardMouseSwitchLeftKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyboardMouseSwitchLeftKey_MetaData), NewProp_KeyboardMouseSwitchLeftKey_MetaData) }; // 64b3e4afc222613fc56ee34bd705dda53a3378d0
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_KeyboardMouseSwitchRightKey = { "KeyboardMouseSwitchRightKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerLockOnSettings, KeyboardMouseSwitchRightKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyboardMouseSwitchRightKey_MetaData), NewProp_KeyboardMouseSwitchRightKey_MetaData) }; // 64b3e4afc222613fc56ee34bd705dda53a3378d0
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GamepadSwitchLeftKey = { "GamepadSwitchLeftKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerLockOnSettings, GamepadSwitchLeftKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamepadSwitchLeftKey_MetaData), NewProp_GamepadSwitchLeftKey_MetaData) }; // 64b3e4afc222613fc56ee34bd705dda53a3378d0
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GamepadSwitchRightKey = { "GamepadSwitchRightKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerLockOnSettings, GamepadSwitchRightKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamepadSwitchRightKey_MetaData), NewProp_GamepadSwitchRightKey_MetaData) }; // 64b3e4afc222613fc56ee34bd705dda53a3378d0
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableRightStickFlickSwitching = { "bEnableRightStickFlickSwitching", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadePlayerLockOnSettings), &UHT_STATICS::NewProp_bEnableRightStickFlickSwitching_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableRightStickFlickSwitching_MetaData), NewProp_bEnableRightStickFlickSwitching_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RightStickSwitchThreshold = { "RightStickSwitchThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerLockOnSettings, RightStickSwitchThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightStickSwitchThreshold_MetaData), NewProp_RightStickSwitchThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_TargetSwitchCooldownSeconds = { "TargetSwitchCooldownSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerLockOnSettings, TargetSwitchCooldownSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetSwitchCooldownSeconds_MetaData), NewProp_TargetSwitchCooldownSeconds_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_LockOnIndicatorTexture = { "LockOnIndicatorTexture", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerLockOnSettings, LockOnIndicatorTexture), Z_Construct_UClass_UTexture2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockOnIndicatorTexture_MetaData), NewProp_LockOnIndicatorTexture_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LockOnIndicatorWorldOffset = { "LockOnIndicatorWorldOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerLockOnSettings, LockOnIndicatorWorldOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockOnIndicatorWorldOffset_MetaData), NewProp_LockOnIndicatorWorldOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LockOnIndicatorScale = { "LockOnIndicatorScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerLockOnSettings, LockOnIndicatorScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockOnIndicatorScale_MetaData), NewProp_LockOnIndicatorScale_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseScreenSizeScaling = { "bUseScreenSizeScaling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadePlayerLockOnSettings), &UHT_STATICS::NewProp_bUseScreenSizeScaling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseScreenSizeScaling_MetaData), NewProp_bUseScreenSizeScaling_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_IndicatorScreenSize = { "IndicatorScreenSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerLockOnSettings, IndicatorScreenSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndicatorScreenSize_MetaData), NewProp_IndicatorScreenSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_IndicatorPulseAmount = { "IndicatorPulseAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerLockOnSettings, IndicatorPulseAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndicatorPulseAmount_MetaData), NewProp_IndicatorPulseAmount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_IndicatorPulseSpeed = { "IndicatorPulseSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerLockOnSettings, IndicatorPulseSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndicatorPulseSpeed_MetaData), NewProp_IndicatorPulseSpeed_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDrawLockOnDebug = { "bDrawLockOnDebug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadePlayerLockOnSettings), &UHT_STATICS::NewProp_bDrawLockOnDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawLockOnDebug_MetaData), NewProp_bDrawLockOnDebug_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableLockOn,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseAimInputAsLockOn,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_KeyboardMouseLockOnKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GamepadLockOnKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAutomaticallyAimWhileLocking,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaximumAcquisitionDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AcquisitionHalfAngleDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BreakDistanceMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BreakHalfAngleDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRequireLineOfSightToAcquire,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bBreakLockWhenOccluded,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OcclusionGraceSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LineOfSightTraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CameraRotationInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bTrackTargetPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetLeadSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetAimOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableAimOffsetControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bConsumeLookInputWhileLocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAutomaticallyReadConfiguredLookAxes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AimOffsetCentimetersPerLookDegree,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AimOffsetHorizontalSensitivityMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AimOffsetVerticalSensitivityMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaximumHorizontalAimOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaximumUpwardAimOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaximumDownwardAimOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AimOffsetInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAutoRecenterAimOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AimOffsetRecenterDelaySeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AimOffsetRecenterInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bResetAimOffsetWhenTargetChanges,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAimPlayerShotsAtLockedTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaximumShotAssistAngleDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableTargetSwitching,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_KeyboardMouseSwitchLeftKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_KeyboardMouseSwitchRightKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GamepadSwitchLeftKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GamepadSwitchRightKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableRightStickFlickSwitching,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RightStickSwitchThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetSwitchCooldownSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LockOnIndicatorTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LockOnIndicatorWorldOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LockOnIndicatorScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseScreenSizeScaling,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IndicatorScreenSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IndicatorPulseAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IndicatorPulseSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDrawLockOnDebug,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRenegadePlayerLockOnSettings Property Definitions ******************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	&NewStructOps,
	"RenegadePlayerLockOnSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRenegadePlayerLockOnSettings>(),
	alignof(FRenegadePlayerLockOnSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRenegadePlayerLockOnSettings;
UScriptStruct* Z_Construct_UScriptStruct_FRenegadePlayerLockOnSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRenegadePlayerLockOnSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRenegadePlayerLockOnSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenegadePlayerLockOnSettings, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("RenegadePlayerLockOnSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FRenegadePlayerLockOnSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRenegadePlayerLockOnSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRenegadePlayerLockOnSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRenegadePlayerLockOnSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRenegadePlayerLockOnSettings ***************************************

// ********** Begin ScriptStruct FRenegadePlayerInputSettings **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRenegadePlayerInputSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRenegadePlayerInputSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRenegadePlayerInputSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Optional self-contained keyboard/mouse and gamepad bindings for player combat.\n * These bindings poll the owning local Player Controller, so no project Input Action assets are required.\n */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional self-contained keyboard/mouse and gamepad bindings for player combat.\nThese bindings poll the owning local Player Controller, so no project Input Action assets are required." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableBuiltInInput_MetaData[] = {
		{ "Category", "Built-In Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enables the plugin's built-in input polling. Disable this when an existing Enhanced Input Blueprint drives the public input nodes. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables the plugin's built-in input polling. Disable this when an existing Enhanced Input Blueprint drives the public input nodes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableBuiltInLookInput_MetaData[] = {
		{ "Category", "Built-In Input|Look" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Applies mouse and right-stick look directly to the owning Player Controller. */" },
#endif
		{ "EditCondition", "bEnableBuiltInInput" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applies mouse and right-stick look directly to the owning Player Controller." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyLookWhileAiming_MetaData[] = {
		{ "Category", "Built-In Input|Look" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When true, look input is only applied while the Aim button is active. */" },
#endif
		{ "EditCondition", "bEnableBuiltInInput && bEnableBuiltInLookInput" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When true, look input is only applied while the Aim button is active." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimingLookSensitivityMultiplier_MetaData[] = {
		{ "Category", "Built-In Input|Look" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Multiplies mouse and right-stick look sensitivity while Aim is active. */" },
#endif
		{ "EditCondition", "bEnableBuiltInInput && bEnableBuiltInLookInput" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multiplies mouse and right-stick look sensitivity while Aim is active." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreInputWhileMouseCursorVisible_MetaData[] = {
		{ "Category", "Built-In Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Prevents weapon input while the Player Controller is displaying a mouse cursor for menus. */" },
#endif
		{ "EditCondition", "bEnableBuiltInInput" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prevents weapon input while the Player Controller is displaying a mouse cursor for menus." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowInputWhenPaused_MetaData[] = {
		{ "Category", "Built-In Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Allows the input polling path to run while the world is paused. Disabled by default. */" },
#endif
		{ "EditCondition", "bEnableBuiltInInput" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows the input polling path to run while the world is paused. Disabled by default." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bToggleAim_MetaData[] = {
		{ "Category", "Built-In Input|Aim" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Aim is held by default. Enable this to toggle aim on each Aim-button press. */" },
#endif
		{ "EditCondition", "bEnableBuiltInInput" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Aim is held by default. Enable this to toggle aim on each Aim-button press." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequireAimToFire_MetaData[] = {
		{ "Category", "Built-In Input|Aim" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Requires Aim to be active before the Fire button can start a shot. */" },
#endif
		{ "EditCondition", "bEnableBuiltInInput" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Requires Aim to be active before the Fire button can start a shot." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyboardMouseFireKey_MetaData[] = {
		{ "Category", "Built-In Input|Keyboard and Mouse" },
		{ "EditCondition", "bEnableBuiltInInput" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyboardMouseAimKey_MetaData[] = {
		{ "Category", "Built-In Input|Keyboard and Mouse" },
		{ "EditCondition", "bEnableBuiltInInput" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyboardMouseReloadKey_MetaData[] = {
		{ "Category", "Built-In Input|Keyboard and Mouse" },
		{ "EditCondition", "bEnableBuiltInInput" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyboardMouseSelectRifleKey_MetaData[] = {
		{ "Category", "Built-In Input|Keyboard and Mouse" },
		{ "EditCondition", "bEnableBuiltInInput" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyboardMouseSelectPistolKey_MetaData[] = {
		{ "Category", "Built-In Input|Keyboard and Mouse" },
		{ "EditCondition", "bEnableBuiltInInput" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyboardMouseSelectRocketLauncherKey_MetaData[] = {
		{ "Category", "Built-In Input|Keyboard and Mouse" },
		{ "EditCondition", "bEnableBuiltInInput" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseLookXAxis_MetaData[] = {
		{ "Category", "Built-In Input|Keyboard and Mouse|Look" },
		{ "EditCondition", "bEnableBuiltInInput && bEnableBuiltInLookInput" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseLookYAxis_MetaData[] = {
		{ "Category", "Built-In Input|Keyboard and Mouse|Look" },
		{ "EditCondition", "bEnableBuiltInInput && bEnableBuiltInLookInput" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseYawSensitivity_MetaData[] = {
		{ "Category", "Built-In Input|Keyboard and Mouse|Look" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bEnableBuiltInInput && bEnableBuiltInLookInput" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MousePitchSensitivity_MetaData[] = {
		{ "Category", "Built-In Input|Keyboard and Mouse|Look" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bEnableBuiltInInput && bEnableBuiltInLookInput" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertMouseY_MetaData[] = {
		{ "Category", "Built-In Input|Keyboard and Mouse|Look" },
		{ "EditCondition", "bEnableBuiltInInput && bEnableBuiltInLookInput" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamepadFireKey_MetaData[] = {
		{ "Category", "Built-In Input|Gamepad" },
		{ "EditCondition", "bEnableBuiltInInput" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamepadAimKey_MetaData[] = {
		{ "Category", "Built-In Input|Gamepad" },
		{ "EditCondition", "bEnableBuiltInInput" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamepadReloadKey_MetaData[] = {
		{ "Category", "Built-In Input|Gamepad" },
		{ "EditCondition", "bEnableBuiltInInput" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamepadSelectRifleKey_MetaData[] = {
		{ "Category", "Built-In Input|Gamepad" },
		{ "EditCondition", "bEnableBuiltInInput" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamepadSelectPistolKey_MetaData[] = {
		{ "Category", "Built-In Input|Gamepad" },
		{ "EditCondition", "bEnableBuiltInInput" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamepadSelectRocketLauncherKey_MetaData[] = {
		{ "Category", "Built-In Input|Gamepad" },
		{ "EditCondition", "bEnableBuiltInInput" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamepadButtonThreshold_MetaData[] = {
		{ "Category", "Built-In Input|Gamepad" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.01" },
		{ "EditCondition", "bEnableBuiltInInput" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamepadLookXAxis_MetaData[] = {
		{ "Category", "Built-In Input|Gamepad|Look" },
		{ "EditCondition", "bEnableBuiltInInput && bEnableBuiltInLookInput" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamepadLookYAxis_MetaData[] = {
		{ "Category", "Built-In Input|Gamepad|Look" },
		{ "EditCondition", "bEnableBuiltInInput && bEnableBuiltInLookInput" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamepadYawSpeedDegreesPerSecond_MetaData[] = {
		{ "Category", "Built-In Input|Gamepad|Look" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum right-stick yaw speed in degrees per second. */" },
#endif
		{ "EditCondition", "bEnableBuiltInInput && bEnableBuiltInLookInput" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum right-stick yaw speed in degrees per second." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamepadPitchSpeedDegreesPerSecond_MetaData[] = {
		{ "Category", "Built-In Input|Gamepad|Look" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum right-stick pitch speed in degrees per second. */" },
#endif
		{ "EditCondition", "bEnableBuiltInInput && bEnableBuiltInLookInput" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum right-stick pitch speed in degrees per second." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamepadLookDeadZone_MetaData[] = {
		{ "Category", "Built-In Input|Gamepad|Look" },
		{ "ClampMax", "0.95" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bEnableBuiltInInput && bEnableBuiltInLookInput" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertGamepadY_MetaData[] = {
		{ "Category", "Built-In Input|Gamepad|Look" },
		{ "EditCondition", "bEnableBuiltInInput && bEnableBuiltInLookInput" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRenegadePlayerInputSettings constinit property declarations ******
	static void NewProp_bEnableBuiltInInput_SetBit(void* Obj)
	{
		((FRenegadePlayerInputSettings*)Obj)->bEnableBuiltInInput = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableBuiltInInput;
	static void NewProp_bEnableBuiltInLookInput_SetBit(void* Obj)
	{
		((FRenegadePlayerInputSettings*)Obj)->bEnableBuiltInLookInput = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableBuiltInLookInput;
	static void NewProp_bOnlyLookWhileAiming_SetBit(void* Obj)
	{
		((FRenegadePlayerInputSettings*)Obj)->bOnlyLookWhileAiming = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyLookWhileAiming;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimingLookSensitivityMultiplier;
	static void NewProp_bIgnoreInputWhileMouseCursorVisible_SetBit(void* Obj)
	{
		((FRenegadePlayerInputSettings*)Obj)->bIgnoreInputWhileMouseCursorVisible = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreInputWhileMouseCursorVisible;
	static void NewProp_bAllowInputWhenPaused_SetBit(void* Obj)
	{
		((FRenegadePlayerInputSettings*)Obj)->bAllowInputWhenPaused = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowInputWhenPaused;
	static void NewProp_bToggleAim_SetBit(void* Obj)
	{
		((FRenegadePlayerInputSettings*)Obj)->bToggleAim = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bToggleAim;
	static void NewProp_bRequireAimToFire_SetBit(void* Obj)
	{
		((FRenegadePlayerInputSettings*)Obj)->bRequireAimToFire = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireAimToFire;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyboardMouseFireKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyboardMouseAimKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyboardMouseReloadKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyboardMouseSelectRifleKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyboardMouseSelectPistolKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyboardMouseSelectRocketLauncherKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MouseLookXAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MouseLookYAxis;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseYawSensitivity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MousePitchSensitivity;
	static void NewProp_bInvertMouseY_SetBit(void* Obj)
	{
		((FRenegadePlayerInputSettings*)Obj)->bInvertMouseY = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertMouseY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GamepadFireKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GamepadAimKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GamepadReloadKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GamepadSelectRifleKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GamepadSelectPistolKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GamepadSelectRocketLauncherKey;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GamepadButtonThreshold;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GamepadLookXAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GamepadLookYAxis;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GamepadYawSpeedDegreesPerSecond;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GamepadPitchSpeedDegreesPerSecond;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GamepadLookDeadZone;
	static void NewProp_bInvertGamepadY_SetBit(void* Obj)
	{
		((FRenegadePlayerInputSettings*)Obj)->bInvertGamepadY = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertGamepadY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRenegadePlayerInputSettings constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenegadePlayerInputSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRenegadePlayerInputSettings Property Definitions *****************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableBuiltInInput = { "bEnableBuiltInInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadePlayerInputSettings), &UHT_STATICS::NewProp_bEnableBuiltInInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableBuiltInInput_MetaData), NewProp_bEnableBuiltInInput_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableBuiltInLookInput = { "bEnableBuiltInLookInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadePlayerInputSettings), &UHT_STATICS::NewProp_bEnableBuiltInLookInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableBuiltInLookInput_MetaData), NewProp_bEnableBuiltInLookInput_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bOnlyLookWhileAiming = { "bOnlyLookWhileAiming", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadePlayerInputSettings), &UHT_STATICS::NewProp_bOnlyLookWhileAiming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyLookWhileAiming_MetaData), NewProp_bOnlyLookWhileAiming_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_AimingLookSensitivityMultiplier = { "AimingLookSensitivityMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerInputSettings, AimingLookSensitivityMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimingLookSensitivityMultiplier_MetaData), NewProp_AimingLookSensitivityMultiplier_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIgnoreInputWhileMouseCursorVisible = { "bIgnoreInputWhileMouseCursorVisible", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadePlayerInputSettings), &UHT_STATICS::NewProp_bIgnoreInputWhileMouseCursorVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreInputWhileMouseCursorVisible_MetaData), NewProp_bIgnoreInputWhileMouseCursorVisible_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAllowInputWhenPaused = { "bAllowInputWhenPaused", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadePlayerInputSettings), &UHT_STATICS::NewProp_bAllowInputWhenPaused_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowInputWhenPaused_MetaData), NewProp_bAllowInputWhenPaused_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bToggleAim = { "bToggleAim", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadePlayerInputSettings), &UHT_STATICS::NewProp_bToggleAim_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bToggleAim_MetaData), NewProp_bToggleAim_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRequireAimToFire = { "bRequireAimToFire", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadePlayerInputSettings), &UHT_STATICS::NewProp_bRequireAimToFire_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequireAimToFire_MetaData), NewProp_bRequireAimToFire_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_KeyboardMouseFireKey = { "KeyboardMouseFireKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerInputSettings, KeyboardMouseFireKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyboardMouseFireKey_MetaData), NewProp_KeyboardMouseFireKey_MetaData) }; // 64b3e4afc222613fc56ee34bd705dda53a3378d0
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_KeyboardMouseAimKey = { "KeyboardMouseAimKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerInputSettings, KeyboardMouseAimKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyboardMouseAimKey_MetaData), NewProp_KeyboardMouseAimKey_MetaData) }; // 64b3e4afc222613fc56ee34bd705dda53a3378d0
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_KeyboardMouseReloadKey = { "KeyboardMouseReloadKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerInputSettings, KeyboardMouseReloadKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyboardMouseReloadKey_MetaData), NewProp_KeyboardMouseReloadKey_MetaData) }; // 64b3e4afc222613fc56ee34bd705dda53a3378d0
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_KeyboardMouseSelectRifleKey = { "KeyboardMouseSelectRifleKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerInputSettings, KeyboardMouseSelectRifleKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyboardMouseSelectRifleKey_MetaData), NewProp_KeyboardMouseSelectRifleKey_MetaData) }; // 64b3e4afc222613fc56ee34bd705dda53a3378d0
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_KeyboardMouseSelectPistolKey = { "KeyboardMouseSelectPistolKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerInputSettings, KeyboardMouseSelectPistolKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyboardMouseSelectPistolKey_MetaData), NewProp_KeyboardMouseSelectPistolKey_MetaData) }; // 64b3e4afc222613fc56ee34bd705dda53a3378d0
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_KeyboardMouseSelectRocketLauncherKey = { "KeyboardMouseSelectRocketLauncherKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerInputSettings, KeyboardMouseSelectRocketLauncherKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyboardMouseSelectRocketLauncherKey_MetaData), NewProp_KeyboardMouseSelectRocketLauncherKey_MetaData) }; // 64b3e4afc222613fc56ee34bd705dda53a3378d0
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_MouseLookXAxis = { "MouseLookXAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerInputSettings, MouseLookXAxis), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseLookXAxis_MetaData), NewProp_MouseLookXAxis_MetaData) }; // 64b3e4afc222613fc56ee34bd705dda53a3378d0
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_MouseLookYAxis = { "MouseLookYAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerInputSettings, MouseLookYAxis), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseLookYAxis_MetaData), NewProp_MouseLookYAxis_MetaData) }; // 64b3e4afc222613fc56ee34bd705dda53a3378d0
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MouseYawSensitivity = { "MouseYawSensitivity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerInputSettings, MouseYawSensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseYawSensitivity_MetaData), NewProp_MouseYawSensitivity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MousePitchSensitivity = { "MousePitchSensitivity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerInputSettings, MousePitchSensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MousePitchSensitivity_MetaData), NewProp_MousePitchSensitivity_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bInvertMouseY = { "bInvertMouseY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadePlayerInputSettings), &UHT_STATICS::NewProp_bInvertMouseY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertMouseY_MetaData), NewProp_bInvertMouseY_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GamepadFireKey = { "GamepadFireKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerInputSettings, GamepadFireKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamepadFireKey_MetaData), NewProp_GamepadFireKey_MetaData) }; // 64b3e4afc222613fc56ee34bd705dda53a3378d0
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GamepadAimKey = { "GamepadAimKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerInputSettings, GamepadAimKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamepadAimKey_MetaData), NewProp_GamepadAimKey_MetaData) }; // 64b3e4afc222613fc56ee34bd705dda53a3378d0
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GamepadReloadKey = { "GamepadReloadKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerInputSettings, GamepadReloadKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamepadReloadKey_MetaData), NewProp_GamepadReloadKey_MetaData) }; // 64b3e4afc222613fc56ee34bd705dda53a3378d0
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GamepadSelectRifleKey = { "GamepadSelectRifleKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerInputSettings, GamepadSelectRifleKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamepadSelectRifleKey_MetaData), NewProp_GamepadSelectRifleKey_MetaData) }; // 64b3e4afc222613fc56ee34bd705dda53a3378d0
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GamepadSelectPistolKey = { "GamepadSelectPistolKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerInputSettings, GamepadSelectPistolKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamepadSelectPistolKey_MetaData), NewProp_GamepadSelectPistolKey_MetaData) }; // 64b3e4afc222613fc56ee34bd705dda53a3378d0
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GamepadSelectRocketLauncherKey = { "GamepadSelectRocketLauncherKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerInputSettings, GamepadSelectRocketLauncherKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamepadSelectRocketLauncherKey_MetaData), NewProp_GamepadSelectRocketLauncherKey_MetaData) }; // 64b3e4afc222613fc56ee34bd705dda53a3378d0
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_GamepadButtonThreshold = { "GamepadButtonThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerInputSettings, GamepadButtonThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamepadButtonThreshold_MetaData), NewProp_GamepadButtonThreshold_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GamepadLookXAxis = { "GamepadLookXAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerInputSettings, GamepadLookXAxis), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamepadLookXAxis_MetaData), NewProp_GamepadLookXAxis_MetaData) }; // 64b3e4afc222613fc56ee34bd705dda53a3378d0
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GamepadLookYAxis = { "GamepadLookYAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerInputSettings, GamepadLookYAxis), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamepadLookYAxis_MetaData), NewProp_GamepadLookYAxis_MetaData) }; // 64b3e4afc222613fc56ee34bd705dda53a3378d0
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_GamepadYawSpeedDegreesPerSecond = { "GamepadYawSpeedDegreesPerSecond", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerInputSettings, GamepadYawSpeedDegreesPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamepadYawSpeedDegreesPerSecond_MetaData), NewProp_GamepadYawSpeedDegreesPerSecond_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_GamepadPitchSpeedDegreesPerSecond = { "GamepadPitchSpeedDegreesPerSecond", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerInputSettings, GamepadPitchSpeedDegreesPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamepadPitchSpeedDegreesPerSecond_MetaData), NewProp_GamepadPitchSpeedDegreesPerSecond_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_GamepadLookDeadZone = { "GamepadLookDeadZone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadePlayerInputSettings, GamepadLookDeadZone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamepadLookDeadZone_MetaData), NewProp_GamepadLookDeadZone_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bInvertGamepadY = { "bInvertGamepadY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadePlayerInputSettings), &UHT_STATICS::NewProp_bInvertGamepadY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertGamepadY_MetaData), NewProp_bInvertGamepadY_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableBuiltInInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableBuiltInLookInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bOnlyLookWhileAiming,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AimingLookSensitivityMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIgnoreInputWhileMouseCursorVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAllowInputWhenPaused,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bToggleAim,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRequireAimToFire,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_KeyboardMouseFireKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_KeyboardMouseAimKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_KeyboardMouseReloadKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_KeyboardMouseSelectRifleKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_KeyboardMouseSelectPistolKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_KeyboardMouseSelectRocketLauncherKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MouseLookXAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MouseLookYAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MouseYawSensitivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MousePitchSensitivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bInvertMouseY,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GamepadFireKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GamepadAimKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GamepadReloadKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GamepadSelectRifleKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GamepadSelectPistolKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GamepadSelectRocketLauncherKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GamepadButtonThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GamepadLookXAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GamepadLookYAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GamepadYawSpeedDegreesPerSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GamepadPitchSpeedDegreesPerSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GamepadLookDeadZone,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bInvertGamepadY,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRenegadePlayerInputSettings Property Definitions *******************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	&NewStructOps,
	"RenegadePlayerInputSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRenegadePlayerInputSettings>(),
	alignof(FRenegadePlayerInputSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRenegadePlayerInputSettings;
UScriptStruct* Z_Construct_UScriptStruct_FRenegadePlayerInputSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRenegadePlayerInputSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRenegadePlayerInputSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenegadePlayerInputSettings, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("RenegadePlayerInputSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FRenegadePlayerInputSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRenegadePlayerInputSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRenegadePlayerInputSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRenegadePlayerInputSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRenegadePlayerInputSettings ****************************************

// ********** Begin ScriptStruct FRenegadeCombatVisualSettings *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRenegadeCombatVisualSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRenegadeCombatVisualSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRenegadeCombatVisualSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableBulletMeshVisual_MetaData[] = {
		{ "Category", "Bullet Visual" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enables the lightweight pooled static-mesh bullet visual. Damage remains instant hitscan. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables the lightweight pooled static-mesh bullet visual. Damage remains instant hitscan." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletMesh_MetaData[] = {
		{ "Category", "Bullet Visual" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Static mesh used for the visible bullet/tracer. Leave empty to suppress automatic mesh spawning. */" },
#endif
		{ "EditCondition", "bEnableBulletMeshVisual" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Static mesh used for the visible bullet/tracer. Leave empty to suppress automatic mesh spawning." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletMaterialOverride_MetaData[] = {
		{ "Category", "Bullet Visual" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional material override for material slot zero of the bullet mesh. */" },
#endif
		{ "EditCondition", "bEnableBulletMeshVisual" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional material override for material slot zero of the bullet mesh." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletMeshScale_MetaData[] = {
		{ "Category", "Bullet Visual" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** World scale applied to the bullet mesh. */" },
#endif
		{ "EditCondition", "bEnableBulletMeshVisual" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "World scale applied to the bullet mesh." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletMeshRotationOffset_MetaData[] = {
		{ "Category", "Bullet Visual" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Added after orienting the mesh's local X axis toward travel direction. Useful when the mesh points along Y or Z. */" },
#endif
		{ "EditCondition", "bEnableBulletMeshVisual" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Added after orienting the mesh's local X axis toward travel direction. Useful when the mesh points along Y or Z." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletVisualSpeed_MetaData[] = {
		{ "Category", "Bullet Visual" },
		{ "ClampMin", "100.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cosmetic travel speed in centimetres per second. The authoritative weapon remains hitscan. */" },
#endif
		{ "EditCondition", "bEnableBulletMeshVisual" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cosmetic travel speed in centimetres per second. The authoritative weapon remains hitscan." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumBulletVisualSeconds_MetaData[] = {
		{ "Category", "Bullet Visual" },
		{ "ClampMin", "0.001" },
		{ "EditCondition", "bEnableBulletMeshVisual" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumBulletVisualSeconds_MetaData[] = {
		{ "Category", "Bullet Visual" },
		{ "ClampMin", "0.001" },
		{ "EditCondition", "bEnableBulletMeshVisual" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletVisualMuzzleForwardOffset_MetaData[] = {
		{ "Category", "Bullet Visual|Spawn" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Moves the visual forward along its travel direction to prevent it appearing inside the gun mesh. */" },
#endif
		{ "EditCondition", "bEnableBulletMeshVisual" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Moves the visual forward along its travel direction to prevent it appearing inside the gun mesh." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletVisualImpactStopShortDistance_MetaData[] = {
		{ "Category", "Bullet Visual" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Stops the visual slightly before the impact surface to prevent mesh clipping. */" },
#endif
		{ "EditCondition", "bEnableBulletMeshVisual" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stops the visual slightly before the impact surface to prevent mesh clipping." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletVisualPoolSize_MetaData[] = {
		{ "Category", "Bullet Visual|Performance" },
		{ "ClampMax", "32" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum simultaneously allocated bullet mesh components per soldier. Components are reused instead of constantly spawned. */" },
#endif
		{ "EditCondition", "bEnableBulletMeshVisual" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum simultaneously allocated bullet mesh components per soldier. Components are reused instead of constantly spawned." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBulletVisualCastsShadow_MetaData[] = {
		{ "Category", "Bullet Visual|Performance" },
		{ "EditCondition", "bEnableBulletMeshVisual" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugShotLine_MetaData[] = {
		{ "Category", "Shot Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Draws the exact authoritative weapon trace whenever a shot is executed. Useful for verifying player aim and collision setup. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Draws the exact authoritative weapon trace whenever a shot is executed. Useful for verifying player aim and collision setup." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugShotLineDuration_MetaData[] = {
		{ "Category", "Shot Debug" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How long the shot debug line remains visible. Zero draws for one frame. */" },
#endif
		{ "EditCondition", "bDrawDebugShotLine" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How long the shot debug line remains visible. Zero draws for one frame." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugShotLineThickness_MetaData[] = {
		{ "Category", "Shot Debug" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bDrawDebugShotLine" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugShotImpactPoint_MetaData[] = {
		{ "Category", "Shot Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Draws a small point at a blocking hit location. */" },
#endif
		{ "EditCondition", "bDrawDebugShotLine" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Draws a small point at a blocking hit location." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugShotDamageColor_MetaData[] = {
		{ "Category", "Shot Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Colour used when the trace resolves and damages a combat target. */" },
#endif
		{ "EditCondition", "bDrawDebugShotLine" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Colour used when the trace resolves and damages a combat target." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugShotBlockedColor_MetaData[] = {
		{ "Category", "Shot Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Colour used when the trace hits geometry or a non-damageable actor. */" },
#endif
		{ "EditCondition", "bDrawDebugShotLine" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Colour used when the trace hits geometry or a non-damageable actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugShotMissColor_MetaData[] = {
		{ "Category", "Shot Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Colour used when the trace reaches maximum range without a blocking hit. */" },
#endif
		{ "EditCondition", "bDrawDebugShotLine" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Colour used when the trace reaches maximum range without a blocking hit." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableGroundBloodSplatter_MetaData[] = {
		{ "Category", "Ground Blood" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enables automatic blood placement beneath a successfully damaged hostile actor. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables automatic blood placement beneath a successfully damaged hostile actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundBloodDecalMaterials_MetaData[] = {
		{ "Category", "Ground Blood" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** One material is selected randomly for each blood decal. These must use the Deferred Decal material domain. */" },
#endif
		{ "EditCondition", "bEnableGroundBloodSplatter" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "One material is selected randomly for each blood decal. These must use the Deferred Decal material domain." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundBloodEffectActorClass_MetaData[] = {
		{ "Category", "Ground Blood" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional local-only Blueprint actor for blood assets that are not decal materials, such as a Niagara/decal effect actor. */" },
#endif
		{ "EditCondition", "bEnableGroundBloodSplatter" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional local-only Blueprint actor for blood assets that are not decal materials, such as a Niagara/decal effect actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundBloodSpawnChance_MetaData[] = {
		{ "Category", "Ground Blood" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bEnableGroundBloodSplatter" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundBloodTraceUpDistance_MetaData[] = {
		{ "Category", "Ground Blood" },
		{ "ClampMin", "1.0" },
		{ "EditCondition", "bEnableGroundBloodSplatter" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundBloodTraceDownDistance_MetaData[] = {
		{ "Category", "Ground Blood" },
		{ "ClampMin", "1.0" },
		{ "EditCondition", "bEnableGroundBloodSplatter" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundBloodTraceChannel_MetaData[] = {
		{ "Category", "Ground Blood" },
		{ "EditCondition", "bEnableGroundBloodSplatter" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundBloodSizeRange_MetaData[] = {
		{ "Category", "Ground Blood" },
		{ "ClampMin", "1.0" },
		{ "EditCondition", "bEnableGroundBloodSplatter" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundBloodDecalDepth_MetaData[] = {
		{ "Category", "Ground Blood" },
		{ "ClampMin", "1.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decal projection depth (the X value of Decal Size). */" },
#endif
		{ "EditCondition", "bEnableGroundBloodSplatter" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decal projection depth (the X value of Decal Size)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundBloodSurfaceOffset_MetaData[] = {
		{ "Category", "Ground Blood" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bEnableGroundBloodSplatter" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundBloodLifeSeconds_MetaData[] = {
		{ "Category", "Ground Blood|Lifetime" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Zero keeps decals alive indefinitely. A positive value automatically removes them. */" },
#endif
		{ "EditCondition", "bEnableGroundBloodSplatter" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Zero keeps decals alive indefinitely. A positive value automatically removes them." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundBloodFadeSeconds_MetaData[] = {
		{ "Category", "Ground Blood|Lifetime" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bEnableGroundBloodSplatter" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumSecondsBetweenGroundBlood_MetaData[] = {
		{ "Category", "Ground Blood|Performance" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Per-soldier throttle that protects large battles from producing excessive decals. */" },
#endif
		{ "EditCondition", "bEnableGroundBloodSplatter" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Per-soldier throttle that protects large battles from producing excessive decals." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDelayGroundBloodUntilBulletArrives_MetaData[] = {
		{ "Category", "Ground Blood" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When enabled, blood appears when the visible bullet reaches the trace end instead of immediately when the hitscan fires. */" },
#endif
		{ "EditCondition", "bEnableGroundBloodSplatter" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When enabled, blood appears when the visible bullet reaches the trace end instead of immediately when the hitscan fires." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRenegadeCombatVisualSettings constinit property declarations *****
	static void NewProp_bEnableBulletMeshVisual_SetBit(void* Obj)
	{
		((FRenegadeCombatVisualSettings*)Obj)->bEnableBulletMeshVisual = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableBulletMeshVisual;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletMaterialOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BulletMeshScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BulletMeshRotationOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BulletVisualSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumBulletVisualSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumBulletVisualSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BulletVisualMuzzleForwardOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BulletVisualImpactStopShortDistance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BulletVisualPoolSize;
	static void NewProp_bBulletVisualCastsShadow_SetBit(void* Obj)
	{
		((FRenegadeCombatVisualSettings*)Obj)->bBulletVisualCastsShadow = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBulletVisualCastsShadow;
	static void NewProp_bDrawDebugShotLine_SetBit(void* Obj)
	{
		((FRenegadeCombatVisualSettings*)Obj)->bDrawDebugShotLine = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugShotLine;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugShotLineDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugShotLineThickness;
	static void NewProp_bDrawDebugShotImpactPoint_SetBit(void* Obj)
	{
		((FRenegadeCombatVisualSettings*)Obj)->bDrawDebugShotImpactPoint = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugShotImpactPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugShotDamageColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugShotBlockedColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugShotMissColor;
	static void NewProp_bEnableGroundBloodSplatter_SetBit(void* Obj)
	{
		((FRenegadeCombatVisualSettings*)Obj)->bEnableGroundBloodSplatter = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableGroundBloodSplatter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GroundBloodDecalMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GroundBloodDecalMaterials;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GroundBloodEffectActorClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundBloodSpawnChance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundBloodTraceUpDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundBloodTraceDownDistance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GroundBloodTraceChannel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroundBloodSizeRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundBloodDecalDepth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundBloodSurfaceOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundBloodLifeSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundBloodFadeSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumSecondsBetweenGroundBlood;
	static void NewProp_bDelayGroundBloodUntilBulletArrives_SetBit(void* Obj)
	{
		((FRenegadeCombatVisualSettings*)Obj)->bDelayGroundBloodUntilBulletArrives = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDelayGroundBloodUntilBulletArrives;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRenegadeCombatVisualSettings constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenegadeCombatVisualSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRenegadeCombatVisualSettings Property Definitions ****************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableBulletMeshVisual = { "bEnableBulletMeshVisual", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeCombatVisualSettings), &UHT_STATICS::NewProp_bEnableBulletMeshVisual_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableBulletMeshVisual_MetaData), NewProp_bEnableBulletMeshVisual_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_BulletMesh = { "BulletMesh", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, BulletMesh), Z_Construct_UClass_UStaticMesh, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletMesh_MetaData), NewProp_BulletMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_BulletMaterialOverride = { "BulletMaterialOverride", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, BulletMaterialOverride), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletMaterialOverride_MetaData), NewProp_BulletMaterialOverride_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BulletMeshScale = { "BulletMeshScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, BulletMeshScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletMeshScale_MetaData), NewProp_BulletMeshScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BulletMeshRotationOffset = { "BulletMeshRotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, BulletMeshRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletMeshRotationOffset_MetaData), NewProp_BulletMeshRotationOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_BulletVisualSpeed = { "BulletVisualSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, BulletVisualSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletVisualSpeed_MetaData), NewProp_BulletVisualSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MinimumBulletVisualSeconds = { "MinimumBulletVisualSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, MinimumBulletVisualSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumBulletVisualSeconds_MetaData), NewProp_MinimumBulletVisualSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaximumBulletVisualSeconds = { "MaximumBulletVisualSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, MaximumBulletVisualSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumBulletVisualSeconds_MetaData), NewProp_MaximumBulletVisualSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_BulletVisualMuzzleForwardOffset = { "BulletVisualMuzzleForwardOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, BulletVisualMuzzleForwardOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletVisualMuzzleForwardOffset_MetaData), NewProp_BulletVisualMuzzleForwardOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_BulletVisualImpactStopShortDistance = { "BulletVisualImpactStopShortDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, BulletVisualImpactStopShortDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletVisualImpactStopShortDistance_MetaData), NewProp_BulletVisualImpactStopShortDistance_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_BulletVisualPoolSize = { "BulletVisualPoolSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, BulletVisualPoolSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletVisualPoolSize_MetaData), NewProp_BulletVisualPoolSize_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bBulletVisualCastsShadow = { "bBulletVisualCastsShadow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeCombatVisualSettings), &UHT_STATICS::NewProp_bBulletVisualCastsShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBulletVisualCastsShadow_MetaData), NewProp_bBulletVisualCastsShadow_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDrawDebugShotLine = { "bDrawDebugShotLine", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeCombatVisualSettings), &UHT_STATICS::NewProp_bDrawDebugShotLine_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebugShotLine_MetaData), NewProp_bDrawDebugShotLine_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DebugShotLineDuration = { "DebugShotLineDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, DebugShotLineDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugShotLineDuration_MetaData), NewProp_DebugShotLineDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DebugShotLineThickness = { "DebugShotLineThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, DebugShotLineThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugShotLineThickness_MetaData), NewProp_DebugShotLineThickness_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDrawDebugShotImpactPoint = { "bDrawDebugShotImpactPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeCombatVisualSettings), &UHT_STATICS::NewProp_bDrawDebugShotImpactPoint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebugShotImpactPoint_MetaData), NewProp_bDrawDebugShotImpactPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_DebugShotDamageColor = { "DebugShotDamageColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, DebugShotDamageColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugShotDamageColor_MetaData), NewProp_DebugShotDamageColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_DebugShotBlockedColor = { "DebugShotBlockedColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, DebugShotBlockedColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugShotBlockedColor_MetaData), NewProp_DebugShotBlockedColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_DebugShotMissColor = { "DebugShotMissColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, DebugShotMissColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugShotMissColor_MetaData), NewProp_DebugShotMissColor_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableGroundBloodSplatter = { "bEnableGroundBloodSplatter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeCombatVisualSettings), &UHT_STATICS::NewProp_bEnableGroundBloodSplatter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableGroundBloodSplatter_MetaData), NewProp_bEnableGroundBloodSplatter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_GroundBloodDecalMaterials_Inner = { "GroundBloodDecalMaterials", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_GroundBloodDecalMaterials = { "GroundBloodDecalMaterials", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, GroundBloodDecalMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundBloodDecalMaterials_MetaData), NewProp_GroundBloodDecalMaterials_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_GroundBloodEffectActorClass = { "GroundBloodEffectActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, GroundBloodEffectActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundBloodEffectActorClass_MetaData), NewProp_GroundBloodEffectActorClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_GroundBloodSpawnChance = { "GroundBloodSpawnChance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, GroundBloodSpawnChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundBloodSpawnChance_MetaData), NewProp_GroundBloodSpawnChance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_GroundBloodTraceUpDistance = { "GroundBloodTraceUpDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, GroundBloodTraceUpDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundBloodTraceUpDistance_MetaData), NewProp_GroundBloodTraceUpDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_GroundBloodTraceDownDistance = { "GroundBloodTraceDownDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, GroundBloodTraceDownDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundBloodTraceDownDistance_MetaData), NewProp_GroundBloodTraceDownDistance_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_GroundBloodTraceChannel = { "GroundBloodTraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, GroundBloodTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundBloodTraceChannel_MetaData), NewProp_GroundBloodTraceChannel_MetaData) }; // 3aff698625c18cc2ccaa87a587b2eac8c50cdec7
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GroundBloodSizeRange = { "GroundBloodSizeRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, GroundBloodSizeRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundBloodSizeRange_MetaData), NewProp_GroundBloodSizeRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_GroundBloodDecalDepth = { "GroundBloodDecalDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, GroundBloodDecalDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundBloodDecalDepth_MetaData), NewProp_GroundBloodDecalDepth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_GroundBloodSurfaceOffset = { "GroundBloodSurfaceOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, GroundBloodSurfaceOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundBloodSurfaceOffset_MetaData), NewProp_GroundBloodSurfaceOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_GroundBloodLifeSeconds = { "GroundBloodLifeSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, GroundBloodLifeSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundBloodLifeSeconds_MetaData), NewProp_GroundBloodLifeSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_GroundBloodFadeSeconds = { "GroundBloodFadeSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, GroundBloodFadeSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundBloodFadeSeconds_MetaData), NewProp_GroundBloodFadeSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MinimumSecondsBetweenGroundBlood = { "MinimumSecondsBetweenGroundBlood", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeCombatVisualSettings, MinimumSecondsBetweenGroundBlood), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumSecondsBetweenGroundBlood_MetaData), NewProp_MinimumSecondsBetweenGroundBlood_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDelayGroundBloodUntilBulletArrives = { "bDelayGroundBloodUntilBulletArrives", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeCombatVisualSettings), &UHT_STATICS::NewProp_bDelayGroundBloodUntilBulletArrives_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDelayGroundBloodUntilBulletArrives_MetaData), NewProp_bDelayGroundBloodUntilBulletArrives_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableBulletMeshVisual,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BulletMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BulletMaterialOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BulletMeshScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BulletMeshRotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BulletVisualSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinimumBulletVisualSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaximumBulletVisualSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BulletVisualMuzzleForwardOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BulletVisualImpactStopShortDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BulletVisualPoolSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bBulletVisualCastsShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDrawDebugShotLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DebugShotLineDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DebugShotLineThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDrawDebugShotImpactPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DebugShotDamageColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DebugShotBlockedColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DebugShotMissColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableGroundBloodSplatter,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GroundBloodDecalMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GroundBloodDecalMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GroundBloodEffectActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GroundBloodSpawnChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GroundBloodTraceUpDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GroundBloodTraceDownDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GroundBloodTraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GroundBloodSizeRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GroundBloodDecalDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GroundBloodSurfaceOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GroundBloodLifeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GroundBloodFadeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinimumSecondsBetweenGroundBlood,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDelayGroundBloodUntilBulletArrives,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRenegadeCombatVisualSettings Property Definitions ******************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	&NewStructOps,
	"RenegadeCombatVisualSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRenegadeCombatVisualSettings>(),
	alignof(FRenegadeCombatVisualSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRenegadeCombatVisualSettings;
UScriptStruct* Z_Construct_UScriptStruct_FRenegadeCombatVisualSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRenegadeCombatVisualSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRenegadeCombatVisualSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenegadeCombatVisualSettings, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("RenegadeCombatVisualSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FRenegadeCombatVisualSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRenegadeCombatVisualSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRenegadeCombatVisualSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRenegadeCombatVisualSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRenegadeCombatVisualSettings ***************************************

// ********** Begin ScriptStruct FRenegadeHealthRespawnSettings ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRenegadeHealthRespawnSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRenegadeHealthRespawnSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRenegadeHealthRespawnSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanRespawn_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RespawnDelaySeconds_MetaData[] = {
		{ "Category", "Respawn" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bCanRespawn" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RespawnInvulnerabilitySeconds_MetaData[] = {
		{ "Category", "Respawn" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bCanRespawn" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RespawnTransformMode_MetaData[] = {
		{ "Category", "Respawn" },
		{ "EditCondition", "bCanRespawn" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomRespawnTransform_MetaData[] = {
		{ "Category", "Respawn" },
		{ "EditCondition", "bCanRespawn" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomRespawnTransforms_MetaData[] = {
		{ "Category", "Respawn|Custom Locations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional list of authored respawn transforms used by Custom Transform List mode. */" },
#endif
		{ "EditCondition", "bCanRespawn" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional list of authored respawn transforms used by Custom Transform List mode." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomRespawnSelection_MetaData[] = {
		{ "Category", "Respawn|Custom Locations" },
		{ "EditCondition", "bCanRespawn" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RespawnActorTag_MetaData[] = {
		{ "Category", "Respawn|Tagged Locations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Finds enabled level actors carrying this Actor Tag when Tagged Actor mode is selected. */" },
#endif
		{ "EditCondition", "bCanRespawn" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finds enabled level actors carrying this Actor Tag when Tagged Actor mode is selected." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaggedActorSelection_MetaData[] = {
		{ "Category", "Respawn|Tagged Locations" },
		{ "EditCondition", "bCanRespawn" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RespawnVerticalOffset_MetaData[] = {
		{ "Category", "Respawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Added in world Z after resolving any respawn transform. */" },
#endif
		{ "EditCondition", "bCanRespawn" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Added in world Z after resolving any respawn transform." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyRespawnRotationToController_MetaData[] = {
		{ "Category", "Respawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rotates a Player Controller to match the selected respawn transform. */" },
#endif
		{ "EditCondition", "bCanRespawn" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotates a Player Controller to match the selected respawn transform." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAutomaticRagdoll_MetaData[] = {
		{ "Category", "Ragdoll" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RagdollMeshComponentTag_MetaData[] = {
		{ "Category", "Ragdoll" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional component tag used to select the exact Skeletal Mesh Component that should ragdoll. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional component tag used to select the exact Skeletal Mesh Component that should ragdoll." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoFindRagdollMeshWithPhysicsAsset_MetaData[] = {
		{ "Category", "Ragdoll" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If the Character Mesh has no usable Physics Asset, search the actor for another skeletal mesh that has one. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the Character Mesh has no usable Physics Asset, search the actor for another skeletal mesh that has one." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceFullPhysicsBlendOnRagdoll_MetaData[] = {
		{ "Category", "Ragdoll" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Forces the simulated bodies to fully drive the rendered pose while dead. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Forces the simulated bodies to fully drive the rendered pose while dead." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResolveLeaderPoseMeshForRagdoll_MetaData[] = {
		{ "Category", "Ragdoll|Stability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Prevents modular-character stretching by resolving a tagged/selected Leader Pose follower\n     * to the leader skeletal mesh that owns the real bone transform buffer.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prevents modular-character stretching by resolving a tagged/selected Leader Pose follower\nto the leader skeletal mesh that owns the real bone transform buffer." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseRagdollRootBone_MetaData[] = {
		{ "Category", "Ragdoll|Stability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Uses Set All Bodies Below Simulate Physics instead of blindly enabling every body.\n     * This is the recommended stable humanoid ragdoll path and avoids simulating helper/root bodies.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Uses Set All Bodies Below Simulate Physics instead of blindly enabling every body.\nThis is the recommended stable humanoid ragdoll path and avoids simulating helper/root bodies." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RagdollRootBone_MetaData[] = {
		{ "Category", "Ragdoll|Stability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** First bone whose body and descendants should enter ragdoll. Renegade NXT soldiers currently use spine. */" },
#endif
		{ "EditCondition", "bUseRagdollRootBone" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First bone whose body and descendants should enter ragdoll. Renegade NXT soldiers currently use spine." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeRagdollRootBone_MetaData[] = {
		{ "Category", "Ragdoll|Stability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Include the Ragdoll Root Bone itself when starting physics. */" },
#endif
		{ "EditCondition", "bUseRagdollRootBone" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Include the Ragdoll Root Bone itself when starting physics." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableSecondaryAnimationDuringRagdoll_MetaData[] = {
		{ "Category", "Ragdoll|Stability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Disable cloth, AnimDynamics, rigid-body AnimGraph nodes and post-process animation while ragdolled. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Disable cloth, AnimDynamics, rigid-body AnimGraph nodes and post-process animation while ragdolled." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLogRagdollSetupWarnings_MetaData[] = {
		{ "Category", "Ragdoll" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Print a clear Output Log warning when ragdoll cannot start. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Print a clear Output Log warning when ragdoll cannot start." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RagdollCollisionProfileName_MetaData[] = {
		{ "Category", "Ragdoll" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RagdollImpulseStrength_MetaData[] = {
		{ "Category", "Ragdoll" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRagdollImpulseIsVelocityChange_MetaData[] = {
		{ "Category", "Ragdoll" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableCapsuleCollisionOnDeath_MetaData[] = {
		{ "Category", "Ragdoll" },
		{ "ModuleRelativePath", "Public/RenegadeCombatTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRenegadeHealthRespawnSettings constinit property declarations ****
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumHealth;
	static void NewProp_bCanRespawn_SetBit(void* Obj)
	{
		((FRenegadeHealthRespawnSettings*)Obj)->bCanRespawn = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanRespawn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RespawnDelaySeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RespawnInvulnerabilitySeconds;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RespawnTransformMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RespawnTransformMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomRespawnTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomRespawnTransforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomRespawnTransforms;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CustomRespawnSelection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CustomRespawnSelection;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RespawnActorTag;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TaggedActorSelection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TaggedActorSelection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RespawnVerticalOffset;
	static void NewProp_bApplyRespawnRotationToController_SetBit(void* Obj)
	{
		((FRenegadeHealthRespawnSettings*)Obj)->bApplyRespawnRotationToController = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyRespawnRotationToController;
	static void NewProp_bEnableAutomaticRagdoll_SetBit(void* Obj)
	{
		((FRenegadeHealthRespawnSettings*)Obj)->bEnableAutomaticRagdoll = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAutomaticRagdoll;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RagdollMeshComponentTag;
	static void NewProp_bAutoFindRagdollMeshWithPhysicsAsset_SetBit(void* Obj)
	{
		((FRenegadeHealthRespawnSettings*)Obj)->bAutoFindRagdollMeshWithPhysicsAsset = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoFindRagdollMeshWithPhysicsAsset;
	static void NewProp_bForceFullPhysicsBlendOnRagdoll_SetBit(void* Obj)
	{
		((FRenegadeHealthRespawnSettings*)Obj)->bForceFullPhysicsBlendOnRagdoll = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceFullPhysicsBlendOnRagdoll;
	static void NewProp_bResolveLeaderPoseMeshForRagdoll_SetBit(void* Obj)
	{
		((FRenegadeHealthRespawnSettings*)Obj)->bResolveLeaderPoseMeshForRagdoll = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResolveLeaderPoseMeshForRagdoll;
	static void NewProp_bUseRagdollRootBone_SetBit(void* Obj)
	{
		((FRenegadeHealthRespawnSettings*)Obj)->bUseRagdollRootBone = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRagdollRootBone;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RagdollRootBone;
	static void NewProp_bIncludeRagdollRootBone_SetBit(void* Obj)
	{
		((FRenegadeHealthRespawnSettings*)Obj)->bIncludeRagdollRootBone = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeRagdollRootBone;
	static void NewProp_bDisableSecondaryAnimationDuringRagdoll_SetBit(void* Obj)
	{
		((FRenegadeHealthRespawnSettings*)Obj)->bDisableSecondaryAnimationDuringRagdoll = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableSecondaryAnimationDuringRagdoll;
	static void NewProp_bLogRagdollSetupWarnings_SetBit(void* Obj)
	{
		((FRenegadeHealthRespawnSettings*)Obj)->bLogRagdollSetupWarnings = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogRagdollSetupWarnings;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RagdollCollisionProfileName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RagdollImpulseStrength;
	static void NewProp_bRagdollImpulseIsVelocityChange_SetBit(void* Obj)
	{
		((FRenegadeHealthRespawnSettings*)Obj)->bRagdollImpulseIsVelocityChange = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRagdollImpulseIsVelocityChange;
	static void NewProp_bDisableCapsuleCollisionOnDeath_SetBit(void* Obj)
	{
		((FRenegadeHealthRespawnSettings*)Obj)->bDisableCapsuleCollisionOnDeath = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableCapsuleCollisionOnDeath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRenegadeHealthRespawnSettings constinit property declarations ******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenegadeHealthRespawnSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRenegadeHealthRespawnSettings Property Definitions ***************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaximumHealth = { "MaximumHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHealthRespawnSettings, MaximumHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumHealth_MetaData), NewProp_MaximumHealth_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bCanRespawn = { "bCanRespawn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeHealthRespawnSettings), &UHT_STATICS::NewProp_bCanRespawn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanRespawn_MetaData), NewProp_bCanRespawn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RespawnDelaySeconds = { "RespawnDelaySeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHealthRespawnSettings, RespawnDelaySeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RespawnDelaySeconds_MetaData), NewProp_RespawnDelaySeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RespawnInvulnerabilitySeconds = { "RespawnInvulnerabilitySeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHealthRespawnSettings, RespawnInvulnerabilitySeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RespawnInvulnerabilitySeconds_MetaData), NewProp_RespawnInvulnerabilitySeconds_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_RespawnTransformMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_RespawnTransformMode = { "RespawnTransformMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHealthRespawnSettings, RespawnTransformMode), Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeRespawnTransformMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RespawnTransformMode_MetaData), NewProp_RespawnTransformMode_MetaData) }; // fc208f9666eee50ae292f1e8ea8f7110eb0c307d
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CustomRespawnTransform = { "CustomRespawnTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHealthRespawnSettings, CustomRespawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomRespawnTransform_MetaData), NewProp_CustomRespawnTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CustomRespawnTransforms_Inner = { "CustomRespawnTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_CustomRespawnTransforms = { "CustomRespawnTransforms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHealthRespawnSettings, CustomRespawnTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomRespawnTransforms_MetaData), NewProp_CustomRespawnTransforms_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_CustomRespawnSelection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_CustomRespawnSelection = { "CustomRespawnSelection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHealthRespawnSettings, CustomRespawnSelection), Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeRespawnLocationSelection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomRespawnSelection_MetaData), NewProp_CustomRespawnSelection_MetaData) }; // 9bacda9031df4f83442d24bff6c1c6b31e01b0d0
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_RespawnActorTag = { "RespawnActorTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHealthRespawnSettings, RespawnActorTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RespawnActorTag_MetaData), NewProp_RespawnActorTag_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_TaggedActorSelection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_TaggedActorSelection = { "TaggedActorSelection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHealthRespawnSettings, TaggedActorSelection), Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeRespawnLocationSelection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaggedActorSelection_MetaData), NewProp_TaggedActorSelection_MetaData) }; // 9bacda9031df4f83442d24bff6c1c6b31e01b0d0
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RespawnVerticalOffset = { "RespawnVerticalOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHealthRespawnSettings, RespawnVerticalOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RespawnVerticalOffset_MetaData), NewProp_RespawnVerticalOffset_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bApplyRespawnRotationToController = { "bApplyRespawnRotationToController", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeHealthRespawnSettings), &UHT_STATICS::NewProp_bApplyRespawnRotationToController_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyRespawnRotationToController_MetaData), NewProp_bApplyRespawnRotationToController_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableAutomaticRagdoll = { "bEnableAutomaticRagdoll", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeHealthRespawnSettings), &UHT_STATICS::NewProp_bEnableAutomaticRagdoll_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableAutomaticRagdoll_MetaData), NewProp_bEnableAutomaticRagdoll_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_RagdollMeshComponentTag = { "RagdollMeshComponentTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHealthRespawnSettings, RagdollMeshComponentTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RagdollMeshComponentTag_MetaData), NewProp_RagdollMeshComponentTag_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAutoFindRagdollMeshWithPhysicsAsset = { "bAutoFindRagdollMeshWithPhysicsAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeHealthRespawnSettings), &UHT_STATICS::NewProp_bAutoFindRagdollMeshWithPhysicsAsset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoFindRagdollMeshWithPhysicsAsset_MetaData), NewProp_bAutoFindRagdollMeshWithPhysicsAsset_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bForceFullPhysicsBlendOnRagdoll = { "bForceFullPhysicsBlendOnRagdoll", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeHealthRespawnSettings), &UHT_STATICS::NewProp_bForceFullPhysicsBlendOnRagdoll_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceFullPhysicsBlendOnRagdoll_MetaData), NewProp_bForceFullPhysicsBlendOnRagdoll_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bResolveLeaderPoseMeshForRagdoll = { "bResolveLeaderPoseMeshForRagdoll", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeHealthRespawnSettings), &UHT_STATICS::NewProp_bResolveLeaderPoseMeshForRagdoll_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResolveLeaderPoseMeshForRagdoll_MetaData), NewProp_bResolveLeaderPoseMeshForRagdoll_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseRagdollRootBone = { "bUseRagdollRootBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeHealthRespawnSettings), &UHT_STATICS::NewProp_bUseRagdollRootBone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseRagdollRootBone_MetaData), NewProp_bUseRagdollRootBone_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_RagdollRootBone = { "RagdollRootBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHealthRespawnSettings, RagdollRootBone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RagdollRootBone_MetaData), NewProp_RagdollRootBone_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIncludeRagdollRootBone = { "bIncludeRagdollRootBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeHealthRespawnSettings), &UHT_STATICS::NewProp_bIncludeRagdollRootBone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeRagdollRootBone_MetaData), NewProp_bIncludeRagdollRootBone_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDisableSecondaryAnimationDuringRagdoll = { "bDisableSecondaryAnimationDuringRagdoll", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeHealthRespawnSettings), &UHT_STATICS::NewProp_bDisableSecondaryAnimationDuringRagdoll_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableSecondaryAnimationDuringRagdoll_MetaData), NewProp_bDisableSecondaryAnimationDuringRagdoll_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bLogRagdollSetupWarnings = { "bLogRagdollSetupWarnings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeHealthRespawnSettings), &UHT_STATICS::NewProp_bLogRagdollSetupWarnings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLogRagdollSetupWarnings_MetaData), NewProp_bLogRagdollSetupWarnings_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_RagdollCollisionProfileName = { "RagdollCollisionProfileName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHealthRespawnSettings, RagdollCollisionProfileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RagdollCollisionProfileName_MetaData), NewProp_RagdollCollisionProfileName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RagdollImpulseStrength = { "RagdollImpulseStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHealthRespawnSettings, RagdollImpulseStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RagdollImpulseStrength_MetaData), NewProp_RagdollImpulseStrength_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRagdollImpulseIsVelocityChange = { "bRagdollImpulseIsVelocityChange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeHealthRespawnSettings), &UHT_STATICS::NewProp_bRagdollImpulseIsVelocityChange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRagdollImpulseIsVelocityChange_MetaData), NewProp_bRagdollImpulseIsVelocityChange_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDisableCapsuleCollisionOnDeath = { "bDisableCapsuleCollisionOnDeath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeHealthRespawnSettings), &UHT_STATICS::NewProp_bDisableCapsuleCollisionOnDeath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableCapsuleCollisionOnDeath_MetaData), NewProp_bDisableCapsuleCollisionOnDeath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaximumHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bCanRespawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RespawnDelaySeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RespawnInvulnerabilitySeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RespawnTransformMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RespawnTransformMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CustomRespawnTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CustomRespawnTransforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CustomRespawnTransforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CustomRespawnSelection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CustomRespawnSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RespawnActorTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TaggedActorSelection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TaggedActorSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RespawnVerticalOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bApplyRespawnRotationToController,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableAutomaticRagdoll,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RagdollMeshComponentTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAutoFindRagdollMeshWithPhysicsAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bForceFullPhysicsBlendOnRagdoll,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bResolveLeaderPoseMeshForRagdoll,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseRagdollRootBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RagdollRootBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIncludeRagdollRootBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDisableSecondaryAnimationDuringRagdoll,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bLogRagdollSetupWarnings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RagdollCollisionProfileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RagdollImpulseStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRagdollImpulseIsVelocityChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDisableCapsuleCollisionOnDeath,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRenegadeHealthRespawnSettings Property Definitions *****************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	&NewStructOps,
	"RenegadeHealthRespawnSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRenegadeHealthRespawnSettings>(),
	alignof(FRenegadeHealthRespawnSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRenegadeHealthRespawnSettings;
UScriptStruct* Z_Construct_UScriptStruct_FRenegadeHealthRespawnSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRenegadeHealthRespawnSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRenegadeHealthRespawnSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenegadeHealthRespawnSettings, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("RenegadeHealthRespawnSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FRenegadeHealthRespawnSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRenegadeHealthRespawnSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRenegadeHealthRespawnSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRenegadeHealthRespawnSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRenegadeHealthRespawnSettings **************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeCombatTypes_h__Script_RenegadeSoldierCombat_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeWeaponClass, TEXT("ERenegadeWeaponClass"), &ZRIE_ERenegadeWeaponClass, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1498138045U) },
		{ Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeGrenadeDetonationMode, TEXT("ERenegadeGrenadeDetonationMode"), &ZRIE_ERenegadeGrenadeDetonationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2573077256U) },
		{ Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadePlayerWeaponSlot, TEXT("ERenegadePlayerWeaponSlot"), &ZRIE_ERenegadePlayerWeaponSlot, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1027368276U) },
		{ Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeCombatMoveType, TEXT("ERenegadeCombatMoveType"), &ZRIE_ERenegadeCombatMoveType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1476638583U) },
		{ Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeRespawnTransformMode, TEXT("ERenegadeRespawnTransformMode"), &ZRIE_ERenegadeRespawnTransformMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4229992342U) },
		{ Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeRespawnLocationSelection, TEXT("ERenegadeRespawnLocationSelection"), &ZRIE_ERenegadeRespawnLocationSelection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2611796624U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FRenegadeRocketLauncherSettings, Z_Construct_UScriptStruct_FRenegadeRocketLauncherSettings_Statics::NewStructOps, TEXT("RenegadeRocketLauncherSettings"),&Z_Registration_Info_UScriptStruct_FRenegadeRocketLauncherSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenegadeRocketLauncherSettings), 2873491778U) },
		{ Z_Construct_UScriptStruct_FRenegadeGrenadeLauncherSettings, Z_Construct_UScriptStruct_FRenegadeGrenadeLauncherSettings_Statics::NewStructOps, TEXT("RenegadeGrenadeLauncherSettings"),&Z_Registration_Info_UScriptStruct_FRenegadeGrenadeLauncherSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenegadeGrenadeLauncherSettings), 3694464442U) },
		{ Z_Construct_UScriptStruct_FRenegadeWeaponSettings, Z_Construct_UScriptStruct_FRenegadeWeaponSettings_Statics::NewStructOps, TEXT("RenegadeWeaponSettings"),&Z_Registration_Info_UScriptStruct_FRenegadeWeaponSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenegadeWeaponSettings), 2582322555U) },
		{ Z_Construct_UScriptStruct_FRenegadeTargetingSettings, Z_Construct_UScriptStruct_FRenegadeTargetingSettings_Statics::NewStructOps, TEXT("RenegadeTargetingSettings"),&Z_Registration_Info_UScriptStruct_FRenegadeTargetingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenegadeTargetingSettings), 2966032415U) },
		{ Z_Construct_UScriptStruct_FRenegadeCombatMovementSettings, Z_Construct_UScriptStruct_FRenegadeCombatMovementSettings_Statics::NewStructOps, TEXT("RenegadeCombatMovementSettings"),&Z_Registration_Info_UScriptStruct_FRenegadeCombatMovementSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenegadeCombatMovementSettings), 3050183974U) },
		{ Z_Construct_UScriptStruct_FRenegadePlayerCombatSettings, Z_Construct_UScriptStruct_FRenegadePlayerCombatSettings_Statics::NewStructOps, TEXT("RenegadePlayerCombatSettings"),&Z_Registration_Info_UScriptStruct_FRenegadePlayerCombatSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenegadePlayerCombatSettings), 3336172806U) },
		{ Z_Construct_UScriptStruct_FRenegadePlayerAimPresentationSettings, Z_Construct_UScriptStruct_FRenegadePlayerAimPresentationSettings_Statics::NewStructOps, TEXT("RenegadePlayerAimPresentationSettings"),&Z_Registration_Info_UScriptStruct_FRenegadePlayerAimPresentationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenegadePlayerAimPresentationSettings), 2735215814U) },
		{ Z_Construct_UScriptStruct_FRenegadePlayerLockOnSettings, Z_Construct_UScriptStruct_FRenegadePlayerLockOnSettings_Statics::NewStructOps, TEXT("RenegadePlayerLockOnSettings"),&Z_Registration_Info_UScriptStruct_FRenegadePlayerLockOnSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenegadePlayerLockOnSettings), 3819754068U) },
		{ Z_Construct_UScriptStruct_FRenegadePlayerInputSettings, Z_Construct_UScriptStruct_FRenegadePlayerInputSettings_Statics::NewStructOps, TEXT("RenegadePlayerInputSettings"),&Z_Registration_Info_UScriptStruct_FRenegadePlayerInputSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenegadePlayerInputSettings), 4236524894U) },
		{ Z_Construct_UScriptStruct_FRenegadeCombatVisualSettings, Z_Construct_UScriptStruct_FRenegadeCombatVisualSettings_Statics::NewStructOps, TEXT("RenegadeCombatVisualSettings"),&Z_Registration_Info_UScriptStruct_FRenegadeCombatVisualSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenegadeCombatVisualSettings), 793923901U) },
		{ Z_Construct_UScriptStruct_FRenegadeHealthRespawnSettings, Z_Construct_UScriptStruct_FRenegadeHealthRespawnSettings_Statics::NewStructOps, TEXT("RenegadeHealthRespawnSettings"),&Z_Registration_Info_UScriptStruct_FRenegadeHealthRespawnSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenegadeHealthRespawnSettings), 1785623175U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeCombatTypes_h__Script_RenegadeSoldierCombat_451456bc109520bd1158a885cf7d505465484669{
	TEXT("/Script/RenegadeSoldierCombat"),
	nullptr, 0,
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
