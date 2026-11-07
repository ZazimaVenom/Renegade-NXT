// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RenegadeBuildingCombatTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRenegadeBuildingCombatTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UDamageType(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USoundBase(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USoundConcurrency(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh(ETypeConstructPhase);
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UEnum* Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeBuildingDefenseType(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UEnum* Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeBuildingTargetPolicy(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UEnum* Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeBuildingType(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UEnum* Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeDefenseTargetSelection(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UEnum* Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeNiagaraBeamParameterType(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UEnum* Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeObeliskParticlePreference(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeAdvancedGuardTowerSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeBuildingAudioSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeBuildingDefenseTargetingSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeBuildingEvaSoundSet(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeBuildingHealthSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeBuildingTargetSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeObeliskSettings(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum ERenegadeBuildingType *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeBuildingType_Statics
template<> RENEGADESOLDIERCOMBAT_NON_ATTRIBUTED_API UEnum* StaticEnum<ERenegadeBuildingType>()
{
	return Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeBuildingType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AdvancedGuardTower.DisplayName", "Advanced Guard Tower" },
		{ "AdvancedGuardTower.Name", "ERenegadeBuildingType::AdvancedGuardTower" },
		{ "Airstrip.DisplayName", "Airstrip" },
		{ "Airstrip.Name", "ERenegadeBuildingType::Airstrip" },
		{ "Barracks.DisplayName", "Barracks" },
		{ "Barracks.Name", "ERenegadeBuildingType::Barracks" },
		{ "BlueprintType", "true" },
		{ "Generic.DisplayName", "Generic Building" },
		{ "Generic.Name", "ERenegadeBuildingType::Generic" },
		{ "HandOfNod.DisplayName", "Hand of Nod" },
		{ "HandOfNod.Name", "ERenegadeBuildingType::HandOfNod" },
		{ "Helipad.DisplayName", "Helipad" },
		{ "Helipad.Name", "ERenegadeBuildingType::Helipad" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
		{ "Obelisk.DisplayName", "Obelisk of Light" },
		{ "Obelisk.Name", "ERenegadeBuildingType::Obelisk" },
		{ "PowerPlant.DisplayName", "Power Plant" },
		{ "PowerPlant.Name", "ERenegadeBuildingType::PowerPlant" },
		{ "Refinery.DisplayName", "Refinery" },
		{ "Refinery.Name", "ERenegadeBuildingType::Refinery" },
		{ "RepairPad.DisplayName", "Repair Pad" },
		{ "RepairPad.Name", "ERenegadeBuildingType::RepairPad" },
		{ "Silo.DisplayName", "Tiberium Silo" },
		{ "Silo.Name", "ERenegadeBuildingType::Silo" },
		{ "WeaponsFactory.DisplayName", "Weapons Factory" },
		{ "WeaponsFactory.Name", "ERenegadeBuildingType::WeaponsFactory" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERenegadeBuildingType::Generic", (int64)ERenegadeBuildingType::Generic },
		{ "ERenegadeBuildingType::Refinery", (int64)ERenegadeBuildingType::Refinery },
		{ "ERenegadeBuildingType::Barracks", (int64)ERenegadeBuildingType::Barracks },
		{ "ERenegadeBuildingType::Silo", (int64)ERenegadeBuildingType::Silo },
		{ "ERenegadeBuildingType::HandOfNod", (int64)ERenegadeBuildingType::HandOfNod },
		{ "ERenegadeBuildingType::WeaponsFactory", (int64)ERenegadeBuildingType::WeaponsFactory },
		{ "ERenegadeBuildingType::PowerPlant", (int64)ERenegadeBuildingType::PowerPlant },
		{ "ERenegadeBuildingType::Helipad", (int64)ERenegadeBuildingType::Helipad },
		{ "ERenegadeBuildingType::RepairPad", (int64)ERenegadeBuildingType::RepairPad },
		{ "ERenegadeBuildingType::Airstrip", (int64)ERenegadeBuildingType::Airstrip },
		{ "ERenegadeBuildingType::Obelisk", (int64)ERenegadeBuildingType::Obelisk },
		{ "ERenegadeBuildingType::AdvancedGuardTower", (int64)ERenegadeBuildingType::AdvancedGuardTower },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	"ERenegadeBuildingType",
	"ERenegadeBuildingType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ERenegadeBuildingType;
UEnum* Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeBuildingType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ERenegadeBuildingType.OuterSingleton)
		{
			ZRIE_ERenegadeBuildingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeBuildingType, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("ERenegadeBuildingType"));
		}
		return ZRIE_ERenegadeBuildingType.OuterSingleton;
	}
	if (!ZRIE_ERenegadeBuildingType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ERenegadeBuildingType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ERenegadeBuildingType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ERenegadeBuildingType *******************************************************

// ********** Begin Enum ERenegadeBuildingDefenseType **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeBuildingDefenseType_Statics
template<> RENEGADESOLDIERCOMBAT_NON_ATTRIBUTED_API UEnum* StaticEnum<ERenegadeBuildingDefenseType>()
{
	return Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeBuildingDefenseType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AdvancedGuardTower.DisplayName", "Advanced Guard Tower Rockets" },
		{ "AdvancedGuardTower.Name", "ERenegadeBuildingDefenseType::AdvancedGuardTower" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
		{ "None.DisplayName", "No Automatic Defence" },
		{ "None.Name", "ERenegadeBuildingDefenseType::None" },
		{ "Obelisk.DisplayName", "Obelisk Laser" },
		{ "Obelisk.Name", "ERenegadeBuildingDefenseType::Obelisk" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERenegadeBuildingDefenseType::None", (int64)ERenegadeBuildingDefenseType::None },
		{ "ERenegadeBuildingDefenseType::AdvancedGuardTower", (int64)ERenegadeBuildingDefenseType::AdvancedGuardTower },
		{ "ERenegadeBuildingDefenseType::Obelisk", (int64)ERenegadeBuildingDefenseType::Obelisk },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	"ERenegadeBuildingDefenseType",
	"ERenegadeBuildingDefenseType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ERenegadeBuildingDefenseType;
UEnum* Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeBuildingDefenseType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ERenegadeBuildingDefenseType.OuterSingleton)
		{
			ZRIE_ERenegadeBuildingDefenseType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeBuildingDefenseType, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("ERenegadeBuildingDefenseType"));
		}
		return ZRIE_ERenegadeBuildingDefenseType.OuterSingleton;
	}
	if (!ZRIE_ERenegadeBuildingDefenseType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ERenegadeBuildingDefenseType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ERenegadeBuildingDefenseType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ERenegadeBuildingDefenseType ************************************************

// ********** Begin Enum ERenegadeBuildingTargetPolicy *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeBuildingTargetPolicy_Statics
template<> RENEGADESOLDIERCOMBAT_NON_ATTRIBUTED_API UEnum* StaticEnum<ERenegadeBuildingTargetPolicy>()
{
	return Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeBuildingTargetPolicy(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ClosestValidTarget.DisplayName", "Closest Soldier or Building" },
		{ "ClosestValidTarget.Name", "ERenegadeBuildingTargetPolicy::ClosestValidTarget" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
		{ "Never.DisplayName", "Never Target Buildings" },
		{ "Never.Name", "ERenegadeBuildingTargetPolicy::Never" },
		{ "PreferBuildings.DisplayName", "Prefer Buildings" },
		{ "PreferBuildings.Name", "ERenegadeBuildingTargetPolicy::PreferBuildings" },
		{ "WhenNoSoldierTarget.DisplayName", "Buildings When No Soldier Target" },
		{ "WhenNoSoldierTarget.Name", "ERenegadeBuildingTargetPolicy::WhenNoSoldierTarget" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERenegadeBuildingTargetPolicy::Never", (int64)ERenegadeBuildingTargetPolicy::Never },
		{ "ERenegadeBuildingTargetPolicy::WhenNoSoldierTarget", (int64)ERenegadeBuildingTargetPolicy::WhenNoSoldierTarget },
		{ "ERenegadeBuildingTargetPolicy::ClosestValidTarget", (int64)ERenegadeBuildingTargetPolicy::ClosestValidTarget },
		{ "ERenegadeBuildingTargetPolicy::PreferBuildings", (int64)ERenegadeBuildingTargetPolicy::PreferBuildings },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	"ERenegadeBuildingTargetPolicy",
	"ERenegadeBuildingTargetPolicy",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ERenegadeBuildingTargetPolicy;
UEnum* Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeBuildingTargetPolicy(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ERenegadeBuildingTargetPolicy.OuterSingleton)
		{
			ZRIE_ERenegadeBuildingTargetPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeBuildingTargetPolicy, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("ERenegadeBuildingTargetPolicy"));
		}
		return ZRIE_ERenegadeBuildingTargetPolicy.OuterSingleton;
	}
	if (!ZRIE_ERenegadeBuildingTargetPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ERenegadeBuildingTargetPolicy.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ERenegadeBuildingTargetPolicy.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ERenegadeBuildingTargetPolicy ***********************************************

// ********** Begin Enum ERenegadeDefenseTargetSelection *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeDefenseTargetSelection_Statics
template<> RENEGADESOLDIERCOMBAT_NON_ATTRIBUTED_API UEnum* StaticEnum<ERenegadeDefenseTargetSelection>()
{
	return Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeDefenseTargetSelection(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Closest.DisplayName", "Closest Enemy" },
		{ "Closest.Name", "ERenegadeDefenseTargetSelection::Closest" },
		{ "LowestHealth.DisplayName", "Lowest Health Enemy" },
		{ "LowestHealth.Name", "ERenegadeDefenseTargetSelection::LowestHealth" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
		{ "Random.DisplayName", "Random Enemy" },
		{ "Random.Name", "ERenegadeDefenseTargetSelection::Random" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERenegadeDefenseTargetSelection::Closest", (int64)ERenegadeDefenseTargetSelection::Closest },
		{ "ERenegadeDefenseTargetSelection::LowestHealth", (int64)ERenegadeDefenseTargetSelection::LowestHealth },
		{ "ERenegadeDefenseTargetSelection::Random", (int64)ERenegadeDefenseTargetSelection::Random },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	"ERenegadeDefenseTargetSelection",
	"ERenegadeDefenseTargetSelection",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ERenegadeDefenseTargetSelection;
UEnum* Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeDefenseTargetSelection(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ERenegadeDefenseTargetSelection.OuterSingleton)
		{
			ZRIE_ERenegadeDefenseTargetSelection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeDefenseTargetSelection, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("ERenegadeDefenseTargetSelection"));
		}
		return ZRIE_ERenegadeDefenseTargetSelection.OuterSingleton;
	}
	if (!ZRIE_ERenegadeDefenseTargetSelection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ERenegadeDefenseTargetSelection.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ERenegadeDefenseTargetSelection.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ERenegadeDefenseTargetSelection *********************************************

// ********** Begin Enum ERenegadeNiagaraBeamParameterType *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeNiagaraBeamParameterType_Statics
template<> RENEGADESOLDIERCOMBAT_NON_ATTRIBUTED_API UEnum* StaticEnum<ERenegadeNiagaraBeamParameterType>()
{
	return Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeNiagaraBeamParameterType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
		{ "Position.DisplayName", "Niagara Position" },
		{ "Position.Name", "ERenegadeNiagaraBeamParameterType::Position" },
		{ "Vector3.DisplayName", "Vector 3" },
		{ "Vector3.Name", "ERenegadeNiagaraBeamParameterType::Vector3" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERenegadeNiagaraBeamParameterType::Position", (int64)ERenegadeNiagaraBeamParameterType::Position },
		{ "ERenegadeNiagaraBeamParameterType::Vector3", (int64)ERenegadeNiagaraBeamParameterType::Vector3 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	"ERenegadeNiagaraBeamParameterType",
	"ERenegadeNiagaraBeamParameterType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ERenegadeNiagaraBeamParameterType;
UEnum* Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeNiagaraBeamParameterType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ERenegadeNiagaraBeamParameterType.OuterSingleton)
		{
			ZRIE_ERenegadeNiagaraBeamParameterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeNiagaraBeamParameterType, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("ERenegadeNiagaraBeamParameterType"));
		}
		return ZRIE_ERenegadeNiagaraBeamParameterType.OuterSingleton;
	}
	if (!ZRIE_ERenegadeNiagaraBeamParameterType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ERenegadeNiagaraBeamParameterType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ERenegadeNiagaraBeamParameterType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ERenegadeNiagaraBeamParameterType *******************************************

// ********** Begin Enum ERenegadeObeliskParticlePreference ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeObeliskParticlePreference_Statics
template<> RENEGADESOLDIERCOMBAT_NON_ATTRIBUTED_API UEnum* StaticEnum<ERenegadeObeliskParticlePreference>()
{
	return Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeObeliskParticlePreference(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "CascadeThenNiagara.DisplayName", "Cascade, then Niagara fallback" },
		{ "CascadeThenNiagara.Name", "ERenegadeObeliskParticlePreference::CascadeThenNiagara" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
		{ "NiagaraThenCascade.DisplayName", "Niagara, then Cascade fallback" },
		{ "NiagaraThenCascade.Name", "ERenegadeObeliskParticlePreference::NiagaraThenCascade" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERenegadeObeliskParticlePreference::NiagaraThenCascade", (int64)ERenegadeObeliskParticlePreference::NiagaraThenCascade },
		{ "ERenegadeObeliskParticlePreference::CascadeThenNiagara", (int64)ERenegadeObeliskParticlePreference::CascadeThenNiagara },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	"ERenegadeObeliskParticlePreference",
	"ERenegadeObeliskParticlePreference",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ERenegadeObeliskParticlePreference;
UEnum* Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeObeliskParticlePreference(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ERenegadeObeliskParticlePreference.OuterSingleton)
		{
			ZRIE_ERenegadeObeliskParticlePreference.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeObeliskParticlePreference, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("ERenegadeObeliskParticlePreference"));
		}
		return ZRIE_ERenegadeObeliskParticlePreference.OuterSingleton;
	}
	if (!ZRIE_ERenegadeObeliskParticlePreference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ERenegadeObeliskParticlePreference.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ERenegadeObeliskParticlePreference.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ERenegadeObeliskParticlePreference ******************************************

// ********** Begin ScriptStruct FRenegadeBuildingHealthSettings ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRenegadeBuildingHealthSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRenegadeBuildingHealthSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRenegadeBuildingHealthSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumHealth_MetaData[] = {
		{ "Category", "Building Health" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLowHealthState_MetaData[] = {
		{ "Category", "Building Health|Low Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enables a replicated low-health state and Blueprint event for damaged-building presentation. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables a replicated low-health state and Blueprint event for damaged-building presentation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowHealthThresholdPercent_MetaData[] = {
		{ "Category", "Building Health|Low Health" },
		{ "ClampMax", "0.99" },
		{ "ClampMin", "0.01" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Health percentage at or below which the building enters low health. */" },
#endif
		{ "EditCondition", "bEnableLowHealthState" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Health percentage at or below which the building enters low health." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowHealthRecoveryHysteresisPercent_MetaData[] = {
		{ "Category", "Building Health|Low Health" },
		{ "ClampMax", "0.50" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Extra health percentage required before repair clears low health, preventing rapid state flicker near the threshold. */" },
#endif
		{ "EditCondition", "bEnableLowHealthState" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Extra health percentage required before repair clears low health, preventing rapid state flicker near the threshold." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IncomingDamageMultiplier_MetaData[] = {
		{ "Category", "Building Health" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeDamaged_MetaData[] = {
		{ "Category", "Building Health" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDestroyOwnerActorOnZeroHealth_MetaData[] = {
		{ "Category", "Building Destruction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Keeps the Blueprint actor alive by default so Blueprint destruction meshes, animations and rebuilding can be used. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Keeps the Blueprint actor alive by default so Blueprint destruction meshes, animations and rebuilding can be used." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableOwnerCollisionOnDestroyed_MetaData[] = {
		{ "Category", "Building Destruction" },
		{ "EditCondition", "!bDestroyOwnerActorOnZeroHealth" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHideOwnerOnDestroyed_MetaData[] = {
		{ "Category", "Building Destruction" },
		{ "EditCondition", "!bDestroyOwnerActorOnZeroHealth" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowRepairAfterDestroyed_MetaData[] = {
		{ "Category", "Building Destruction" },
		{ "EditCondition", "!bDestroyOwnerActorOnZeroHealth" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRenegadeBuildingHealthSettings constinit property declarations ***
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumHealth;
	static void NewProp_bEnableLowHealthState_SetBit(void* Obj)
	{
		((FRenegadeBuildingHealthSettings*)Obj)->bEnableLowHealthState = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLowHealthState;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LowHealthThresholdPercent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LowHealthRecoveryHysteresisPercent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IncomingDamageMultiplier;
	static void NewProp_bCanBeDamaged_SetBit(void* Obj)
	{
		((FRenegadeBuildingHealthSettings*)Obj)->bCanBeDamaged = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeDamaged;
	static void NewProp_bDestroyOwnerActorOnZeroHealth_SetBit(void* Obj)
	{
		((FRenegadeBuildingHealthSettings*)Obj)->bDestroyOwnerActorOnZeroHealth = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroyOwnerActorOnZeroHealth;
	static void NewProp_bDisableOwnerCollisionOnDestroyed_SetBit(void* Obj)
	{
		((FRenegadeBuildingHealthSettings*)Obj)->bDisableOwnerCollisionOnDestroyed = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableOwnerCollisionOnDestroyed;
	static void NewProp_bHideOwnerOnDestroyed_SetBit(void* Obj)
	{
		((FRenegadeBuildingHealthSettings*)Obj)->bHideOwnerOnDestroyed = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideOwnerOnDestroyed;
	static void NewProp_bAllowRepairAfterDestroyed_SetBit(void* Obj)
	{
		((FRenegadeBuildingHealthSettings*)Obj)->bAllowRepairAfterDestroyed = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowRepairAfterDestroyed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRenegadeBuildingHealthSettings constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenegadeBuildingHealthSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRenegadeBuildingHealthSettings Property Definitions **************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaximumHealth = { "MaximumHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeBuildingHealthSettings, MaximumHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumHealth_MetaData), NewProp_MaximumHealth_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableLowHealthState = { "bEnableLowHealthState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeBuildingHealthSettings), &UHT_STATICS::NewProp_bEnableLowHealthState_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableLowHealthState_MetaData), NewProp_bEnableLowHealthState_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LowHealthThresholdPercent = { "LowHealthThresholdPercent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeBuildingHealthSettings, LowHealthThresholdPercent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowHealthThresholdPercent_MetaData), NewProp_LowHealthThresholdPercent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LowHealthRecoveryHysteresisPercent = { "LowHealthRecoveryHysteresisPercent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeBuildingHealthSettings, LowHealthRecoveryHysteresisPercent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowHealthRecoveryHysteresisPercent_MetaData), NewProp_LowHealthRecoveryHysteresisPercent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_IncomingDamageMultiplier = { "IncomingDamageMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeBuildingHealthSettings, IncomingDamageMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IncomingDamageMultiplier_MetaData), NewProp_IncomingDamageMultiplier_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bCanBeDamaged = { "bCanBeDamaged", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeBuildingHealthSettings), &UHT_STATICS::NewProp_bCanBeDamaged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanBeDamaged_MetaData), NewProp_bCanBeDamaged_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDestroyOwnerActorOnZeroHealth = { "bDestroyOwnerActorOnZeroHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeBuildingHealthSettings), &UHT_STATICS::NewProp_bDestroyOwnerActorOnZeroHealth_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDestroyOwnerActorOnZeroHealth_MetaData), NewProp_bDestroyOwnerActorOnZeroHealth_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDisableOwnerCollisionOnDestroyed = { "bDisableOwnerCollisionOnDestroyed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeBuildingHealthSettings), &UHT_STATICS::NewProp_bDisableOwnerCollisionOnDestroyed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableOwnerCollisionOnDestroyed_MetaData), NewProp_bDisableOwnerCollisionOnDestroyed_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bHideOwnerOnDestroyed = { "bHideOwnerOnDestroyed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeBuildingHealthSettings), &UHT_STATICS::NewProp_bHideOwnerOnDestroyed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHideOwnerOnDestroyed_MetaData), NewProp_bHideOwnerOnDestroyed_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAllowRepairAfterDestroyed = { "bAllowRepairAfterDestroyed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeBuildingHealthSettings), &UHT_STATICS::NewProp_bAllowRepairAfterDestroyed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowRepairAfterDestroyed_MetaData), NewProp_bAllowRepairAfterDestroyed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaximumHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableLowHealthState,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LowHealthThresholdPercent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LowHealthRecoveryHysteresisPercent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IncomingDamageMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bCanBeDamaged,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDestroyOwnerActorOnZeroHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDisableOwnerCollisionOnDestroyed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bHideOwnerOnDestroyed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAllowRepairAfterDestroyed,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRenegadeBuildingHealthSettings Property Definitions ****************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	&NewStructOps,
	"RenegadeBuildingHealthSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRenegadeBuildingHealthSettings>(),
	alignof(FRenegadeBuildingHealthSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRenegadeBuildingHealthSettings;
UScriptStruct* Z_Construct_UScriptStruct_FRenegadeBuildingHealthSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRenegadeBuildingHealthSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRenegadeBuildingHealthSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenegadeBuildingHealthSettings, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("RenegadeBuildingHealthSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FRenegadeBuildingHealthSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRenegadeBuildingHealthSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRenegadeBuildingHealthSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRenegadeBuildingHealthSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRenegadeBuildingHealthSettings *************************************

// ********** Begin ScriptStruct FRenegadeBuildingTargetSettings ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRenegadeBuildingTargetSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRenegadeBuildingTargetSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRenegadeBuildingTargetSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRegisterAsCombatTarget_MetaData[] = {
		{ "Category", "Building Target" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfantryTargetPriority_MetaData[] = {
		{ "Category", "Building Target" },
		{ "ClampMin", "0.01" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Higher values make this building more attractive to enemy infantry when several buildings are valid. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Higher values make this building more attractive to enemy infantry when several buildings are valid." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallbackAimOffset_MetaData[] = {
		{ "Category", "Building Target" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** World-space fallback offset from the building bounds centre when no target Scene Component is assigned. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "World-space fallback offset from the building bounds centre when no target Scene Component is assigned." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRenegadeBuildingTargetSettings constinit property declarations ***
	static void NewProp_bRegisterAsCombatTarget_SetBit(void* Obj)
	{
		((FRenegadeBuildingTargetSettings*)Obj)->bRegisterAsCombatTarget = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRegisterAsCombatTarget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InfantryTargetPriority;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FallbackAimOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRenegadeBuildingTargetSettings constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenegadeBuildingTargetSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRenegadeBuildingTargetSettings Property Definitions **************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRegisterAsCombatTarget = { "bRegisterAsCombatTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeBuildingTargetSettings), &UHT_STATICS::NewProp_bRegisterAsCombatTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRegisterAsCombatTarget_MetaData), NewProp_bRegisterAsCombatTarget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InfantryTargetPriority = { "InfantryTargetPriority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeBuildingTargetSettings, InfantryTargetPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfantryTargetPriority_MetaData), NewProp_InfantryTargetPriority_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_FallbackAimOffset = { "FallbackAimOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeBuildingTargetSettings, FallbackAimOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallbackAimOffset_MetaData), NewProp_FallbackAimOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRegisterAsCombatTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InfantryTargetPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FallbackAimOffset,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRenegadeBuildingTargetSettings Property Definitions ****************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	&NewStructOps,
	"RenegadeBuildingTargetSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRenegadeBuildingTargetSettings>(),
	alignof(FRenegadeBuildingTargetSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRenegadeBuildingTargetSettings;
UScriptStruct* Z_Construct_UScriptStruct_FRenegadeBuildingTargetSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRenegadeBuildingTargetSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRenegadeBuildingTargetSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenegadeBuildingTargetSettings, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("RenegadeBuildingTargetSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FRenegadeBuildingTargetSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRenegadeBuildingTargetSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRenegadeBuildingTargetSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRenegadeBuildingTargetSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRenegadeBuildingTargetSettings *************************************

// ********** Begin ScriptStruct FRenegadeBuildingEvaSoundSet **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRenegadeBuildingEvaSoundSet_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRenegadeBuildingEvaSoundSet>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRenegadeBuildingEvaSoundSet); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Team-perspective EVA/CABAL variants for one building announcement.\n * The listening client selects its own team and whether this building is friendly or hostile.\n */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Team-perspective EVA/CABAL variants for one building announcement.\nThe listening client selects its own team and whether this building is friendly or hostile." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GDIFriendlyBuildingSound_MetaData[] = {
		{ "Category", "GDI EVA" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GDIEnemyBuildingSound_MetaData[] = {
		{ "Category", "GDI EVA" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodFriendlyBuildingSound_MetaData[] = {
		{ "Category", "Nod EVA" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodEnemyBuildingSound_MetaData[] = {
		{ "Category", "Nod EVA" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRenegadeBuildingEvaSoundSet constinit property declarations ******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GDIFriendlyBuildingSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GDIEnemyBuildingSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodFriendlyBuildingSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodEnemyBuildingSound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRenegadeBuildingEvaSoundSet constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenegadeBuildingEvaSoundSet>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRenegadeBuildingEvaSoundSet Property Definitions *****************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_GDIFriendlyBuildingSound = { "GDIFriendlyBuildingSound", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeBuildingEvaSoundSet, GDIFriendlyBuildingSound), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GDIFriendlyBuildingSound_MetaData), NewProp_GDIFriendlyBuildingSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_GDIEnemyBuildingSound = { "GDIEnemyBuildingSound", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeBuildingEvaSoundSet, GDIEnemyBuildingSound), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GDIEnemyBuildingSound_MetaData), NewProp_GDIEnemyBuildingSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_NodFriendlyBuildingSound = { "NodFriendlyBuildingSound", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeBuildingEvaSoundSet, NodFriendlyBuildingSound), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodFriendlyBuildingSound_MetaData), NewProp_NodFriendlyBuildingSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_NodEnemyBuildingSound = { "NodEnemyBuildingSound", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeBuildingEvaSoundSet, NodEnemyBuildingSound), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodEnemyBuildingSound_MetaData), NewProp_NodEnemyBuildingSound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GDIFriendlyBuildingSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GDIEnemyBuildingSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NodFriendlyBuildingSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NodEnemyBuildingSound,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRenegadeBuildingEvaSoundSet Property Definitions *******************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	&NewStructOps,
	"RenegadeBuildingEvaSoundSet",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRenegadeBuildingEvaSoundSet>(),
	alignof(FRenegadeBuildingEvaSoundSet),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRenegadeBuildingEvaSoundSet;
UScriptStruct* Z_Construct_UScriptStruct_FRenegadeBuildingEvaSoundSet(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRenegadeBuildingEvaSoundSet.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRenegadeBuildingEvaSoundSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenegadeBuildingEvaSoundSet, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("RenegadeBuildingEvaSoundSet"));
		}
		return Z_Registration_Info_UScriptStruct_FRenegadeBuildingEvaSoundSet.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRenegadeBuildingEvaSoundSet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRenegadeBuildingEvaSoundSet.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRenegadeBuildingEvaSoundSet.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRenegadeBuildingEvaSoundSet ****************************************

// ********** Begin ScriptStruct FRenegadeBuildingAudioSettings ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRenegadeBuildingAudioSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRenegadeBuildingAudioSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRenegadeBuildingAudioSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseTeamAwareEvaSounds_MetaData[] = {
		{ "Category", "Building EVA" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Selects GDI EVA or Nod EVA and friendly/enemy wording independently on every listening client. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Selects GDI EVA or Nod EVA and friendly/enemy wording independently on every listening client." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnderAttackEvaSounds_MetaData[] = {
		{ "Category", "Building EVA|Under Attack" },
		{ "EditCondition", "bUseTeamAwareEvaSounds" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnderAttackSound_MetaData[] = {
		{ "Category", "Building EVA|Under Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Backward-compatible fallback when no matching team-aware under-attack sound is assigned. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Backward-compatible fallback when no matching team-aware under-attack sound is assigned." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnderAttackCooldownSeconds_MetaData[] = {
		{ "Category", "Building EVA|Under Attack" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Per-building cooldown before this building asks to play another alert. A world-wide lock still prevents overlap between buildings. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Per-building cooldown before this building asks to play another alert. A world-wide lock still prevents overlap between buildings." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnderAttackVolumeMultiplier_MetaData[] = {
		{ "Category", "Building EVA|Under Attack" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnderAttackPitchMultiplier_MetaData[] = {
		{ "Category", "Building EVA|Under Attack" },
		{ "ClampMin", "0.01" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalUnderAttackQuietTimeSeconds_MetaData[] = {
		{ "Category", "Building EVA|Under Attack" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Additional quiet time after an under-attack announcement finishes. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional quiet time after an under-attack announcement finishes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowHealthEvaSounds_MetaData[] = {
		{ "Category", "Building EVA|Low Health" },
		{ "EditCondition", "bUseTeamAwareEvaSounds" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowHealthWarningSound_MetaData[] = {
		{ "Category", "Building EVA|Low Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Backward-compatible fallback for the imminent-destruction warning. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Backward-compatible fallback for the imminent-destruction warning." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowHealthWarningVolumeMultiplier_MetaData[] = {
		{ "Category", "Building EVA|Low Health" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowHealthWarningPitchMultiplier_MetaData[] = {
		{ "Category", "Building EVA|Low Health" },
		{ "ClampMin", "0.01" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalLowHealthQuietTimeSeconds_MetaData[] = {
		{ "Category", "Building EVA|Low Health" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestroyedEvaSounds_MetaData[] = {
		{ "Category", "Building EVA|Destroyed" },
		{ "EditCondition", "bUseTeamAwareEvaSounds" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestroyedSound_MetaData[] = {
		{ "Category", "Building EVA|Destroyed" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Backward-compatible fallback when no matching team-aware destroyed sound is assigned. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Backward-compatible fallback when no matching team-aware destroyed sound is assigned." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestroyedSoundVolumeMultiplier_MetaData[] = {
		{ "Category", "Building EVA|Destroyed" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestroyedSoundPitchMultiplier_MetaData[] = {
		{ "Category", "Building EVA|Destroyed" },
		{ "ClampMin", "0.01" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalDestroyedQuietTimeSeconds_MetaData[] = {
		{ "Category", "Building EVA|Destroyed" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnderAttackAttenuation_MetaData[] = {
		{ "Category", "Building EVA|Playback" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional positional attenuation shared by all building EVA announcements. Leave empty for normal announcer-style playback. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional positional attenuation shared by all building EVA announcements. Leave empty for normal announcer-style playback." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnderAttackConcurrency_MetaData[] = {
		{ "Category", "Building EVA|Playback" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional concurrency shared by all building EVA announcements. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional concurrency shared by all building EVA announcements." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRenegadeBuildingAudioSettings constinit property declarations ****
	static void NewProp_bUseTeamAwareEvaSounds_SetBit(void* Obj)
	{
		((FRenegadeBuildingAudioSettings*)Obj)->bUseTeamAwareEvaSounds = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTeamAwareEvaSounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UnderAttackEvaSounds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnderAttackSound;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UnderAttackCooldownSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UnderAttackVolumeMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UnderAttackPitchMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GlobalUnderAttackQuietTimeSeconds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LowHealthEvaSounds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LowHealthWarningSound;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LowHealthWarningVolumeMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LowHealthWarningPitchMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GlobalLowHealthQuietTimeSeconds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DestroyedEvaSounds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestroyedSound;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DestroyedSoundVolumeMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DestroyedSoundPitchMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GlobalDestroyedQuietTimeSeconds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnderAttackAttenuation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnderAttackConcurrency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRenegadeBuildingAudioSettings constinit property declarations ******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenegadeBuildingAudioSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRenegadeBuildingAudioSettings Property Definitions ***************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseTeamAwareEvaSounds = { "bUseTeamAwareEvaSounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeBuildingAudioSettings), &UHT_STATICS::NewProp_bUseTeamAwareEvaSounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseTeamAwareEvaSounds_MetaData), NewProp_bUseTeamAwareEvaSounds_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_UnderAttackEvaSounds = { "UnderAttackEvaSounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeBuildingAudioSettings, UnderAttackEvaSounds), Z_Construct_UScriptStruct_FRenegadeBuildingEvaSoundSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnderAttackEvaSounds_MetaData), NewProp_UnderAttackEvaSounds_MetaData) }; // 00ddd99bb5f14f4ec232fd8e3fe82aff626103c0
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_UnderAttackSound = { "UnderAttackSound", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeBuildingAudioSettings, UnderAttackSound), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnderAttackSound_MetaData), NewProp_UnderAttackSound_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_UnderAttackCooldownSeconds = { "UnderAttackCooldownSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeBuildingAudioSettings, UnderAttackCooldownSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnderAttackCooldownSeconds_MetaData), NewProp_UnderAttackCooldownSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_UnderAttackVolumeMultiplier = { "UnderAttackVolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeBuildingAudioSettings, UnderAttackVolumeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnderAttackVolumeMultiplier_MetaData), NewProp_UnderAttackVolumeMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_UnderAttackPitchMultiplier = { "UnderAttackPitchMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeBuildingAudioSettings, UnderAttackPitchMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnderAttackPitchMultiplier_MetaData), NewProp_UnderAttackPitchMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_GlobalUnderAttackQuietTimeSeconds = { "GlobalUnderAttackQuietTimeSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeBuildingAudioSettings, GlobalUnderAttackQuietTimeSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalUnderAttackQuietTimeSeconds_MetaData), NewProp_GlobalUnderAttackQuietTimeSeconds_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LowHealthEvaSounds = { "LowHealthEvaSounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeBuildingAudioSettings, LowHealthEvaSounds), Z_Construct_UScriptStruct_FRenegadeBuildingEvaSoundSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowHealthEvaSounds_MetaData), NewProp_LowHealthEvaSounds_MetaData) }; // 00ddd99bb5f14f4ec232fd8e3fe82aff626103c0
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_LowHealthWarningSound = { "LowHealthWarningSound", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeBuildingAudioSettings, LowHealthWarningSound), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowHealthWarningSound_MetaData), NewProp_LowHealthWarningSound_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LowHealthWarningVolumeMultiplier = { "LowHealthWarningVolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeBuildingAudioSettings, LowHealthWarningVolumeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowHealthWarningVolumeMultiplier_MetaData), NewProp_LowHealthWarningVolumeMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LowHealthWarningPitchMultiplier = { "LowHealthWarningPitchMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeBuildingAudioSettings, LowHealthWarningPitchMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowHealthWarningPitchMultiplier_MetaData), NewProp_LowHealthWarningPitchMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_GlobalLowHealthQuietTimeSeconds = { "GlobalLowHealthQuietTimeSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeBuildingAudioSettings, GlobalLowHealthQuietTimeSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalLowHealthQuietTimeSeconds_MetaData), NewProp_GlobalLowHealthQuietTimeSeconds_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_DestroyedEvaSounds = { "DestroyedEvaSounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeBuildingAudioSettings, DestroyedEvaSounds), Z_Construct_UScriptStruct_FRenegadeBuildingEvaSoundSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestroyedEvaSounds_MetaData), NewProp_DestroyedEvaSounds_MetaData) }; // 00ddd99bb5f14f4ec232fd8e3fe82aff626103c0
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DestroyedSound = { "DestroyedSound", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeBuildingAudioSettings, DestroyedSound), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestroyedSound_MetaData), NewProp_DestroyedSound_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DestroyedSoundVolumeMultiplier = { "DestroyedSoundVolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeBuildingAudioSettings, DestroyedSoundVolumeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestroyedSoundVolumeMultiplier_MetaData), NewProp_DestroyedSoundVolumeMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DestroyedSoundPitchMultiplier = { "DestroyedSoundPitchMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeBuildingAudioSettings, DestroyedSoundPitchMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestroyedSoundPitchMultiplier_MetaData), NewProp_DestroyedSoundPitchMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_GlobalDestroyedQuietTimeSeconds = { "GlobalDestroyedQuietTimeSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeBuildingAudioSettings, GlobalDestroyedQuietTimeSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalDestroyedQuietTimeSeconds_MetaData), NewProp_GlobalDestroyedQuietTimeSeconds_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_UnderAttackAttenuation = { "UnderAttackAttenuation", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeBuildingAudioSettings, UnderAttackAttenuation), Z_Construct_UClass_USoundAttenuation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnderAttackAttenuation_MetaData), NewProp_UnderAttackAttenuation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_UnderAttackConcurrency = { "UnderAttackConcurrency", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeBuildingAudioSettings, UnderAttackConcurrency), Z_Construct_UClass_USoundConcurrency, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnderAttackConcurrency_MetaData), NewProp_UnderAttackConcurrency_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseTeamAwareEvaSounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UnderAttackEvaSounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UnderAttackSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UnderAttackCooldownSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UnderAttackVolumeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UnderAttackPitchMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GlobalUnderAttackQuietTimeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LowHealthEvaSounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LowHealthWarningSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LowHealthWarningVolumeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LowHealthWarningPitchMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GlobalLowHealthQuietTimeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DestroyedEvaSounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DestroyedSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DestroyedSoundVolumeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DestroyedSoundPitchMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GlobalDestroyedQuietTimeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UnderAttackAttenuation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UnderAttackConcurrency,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRenegadeBuildingAudioSettings Property Definitions *****************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	&NewStructOps,
	"RenegadeBuildingAudioSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRenegadeBuildingAudioSettings>(),
	alignof(FRenegadeBuildingAudioSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRenegadeBuildingAudioSettings;
UScriptStruct* Z_Construct_UScriptStruct_FRenegadeBuildingAudioSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRenegadeBuildingAudioSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRenegadeBuildingAudioSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenegadeBuildingAudioSettings, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("RenegadeBuildingAudioSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FRenegadeBuildingAudioSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRenegadeBuildingAudioSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRenegadeBuildingAudioSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRenegadeBuildingAudioSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRenegadeBuildingAudioSettings **************************************

// ********** Begin ScriptStruct FRenegadeBuildingDefenseTargetingSettings *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRenegadeBuildingDefenseTargetingSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRenegadeBuildingDefenseTargetingSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRenegadeBuildingDefenseTargetingSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[] = {
		{ "Category", "Defence Targeting" },
		{ "ClampMin", "100.0" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumAttackRange_MetaData[] = {
		{ "Category", "Defence Targeting" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetRefreshSeconds_MetaData[] = {
		{ "Category", "Defence Targeting" },
		{ "ClampMin", "0.05" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequireLineOfSight_MetaData[] = {
		{ "Category", "Defence Targeting" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetSelection_MetaData[] = {
		{ "Category", "Defence Targeting" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetAimOffset_MetaData[] = {
		{ "Category", "Defence Targeting" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[] = {
		{ "Category", "Defence Targeting" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsePawnObjectTraceFallback_MetaData[] = {
		{ "Category", "Defence Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Adds a Pawn object trace so Character capsules can still be found when they do not block the authored trace channel. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a Pawn object trace so Character capsules can still be found when they do not block the authored trace channel." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnObjectType_MetaData[] = {
		{ "Category", "Defence Targeting" },
		{ "EditCondition", "bUsePawnObjectTraceFallback" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresTeamPower_MetaData[] = {
		{ "Category", "Defence Power" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional C&C-style dependency. If enabled, the defence pauses when its team's registered Power Plant is destroyed. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional C&C-style dependency. If enabled, the defence pauses when its team's registered Power Plant is destroyed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTreatMissingPowerPlantAsPowered_MetaData[] = {
		{ "Category", "Defence Power" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Keeps standalone test maps functional when no Power Plant component is registered for this team. */" },
#endif
		{ "EditCondition", "bRequiresTeamPower" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Keeps standalone test maps functional when no Power Plant component is registered for this team." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugAttackTrace_MetaData[] = {
		{ "Category", "Defence Debug" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugTraceDuration_MetaData[] = {
		{ "Category", "Defence Debug" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bDrawDebugAttackTrace" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugTraceThickness_MetaData[] = {
		{ "Category", "Defence Debug" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bDrawDebugAttackTrace" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRenegadeBuildingDefenseTargetingSettings constinit property declarations 
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumAttackRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetRefreshSeconds;
	static void NewProp_bRequireLineOfSight_SetBit(void* Obj)
	{
		((FRenegadeBuildingDefenseTargetingSettings*)Obj)->bRequireLineOfSight = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireLineOfSight;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetSelection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetSelection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetAimOffset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static void NewProp_bUsePawnObjectTraceFallback_SetBit(void* Obj)
	{
		((FRenegadeBuildingDefenseTargetingSettings*)Obj)->bUsePawnObjectTraceFallback = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePawnObjectTraceFallback;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PawnObjectType;
	static void NewProp_bRequiresTeamPower_SetBit(void* Obj)
	{
		((FRenegadeBuildingDefenseTargetingSettings*)Obj)->bRequiresTeamPower = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresTeamPower;
	static void NewProp_bTreatMissingPowerPlantAsPowered_SetBit(void* Obj)
	{
		((FRenegadeBuildingDefenseTargetingSettings*)Obj)->bTreatMissingPowerPlantAsPowered = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTreatMissingPowerPlantAsPowered;
	static void NewProp_bDrawDebugAttackTrace_SetBit(void* Obj)
	{
		((FRenegadeBuildingDefenseTargetingSettings*)Obj)->bDrawDebugAttackTrace = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugAttackTrace;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugTraceDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugTraceThickness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRenegadeBuildingDefenseTargetingSettings constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenegadeBuildingDefenseTargetingSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRenegadeBuildingDefenseTargetingSettings Property Definitions ****
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeBuildingDefenseTargetingSettings, AttackRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRange_MetaData), NewProp_AttackRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MinimumAttackRange = { "MinimumAttackRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeBuildingDefenseTargetingSettings, MinimumAttackRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumAttackRange_MetaData), NewProp_MinimumAttackRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_TargetRefreshSeconds = { "TargetRefreshSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeBuildingDefenseTargetingSettings, TargetRefreshSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRefreshSeconds_MetaData), NewProp_TargetRefreshSeconds_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRequireLineOfSight = { "bRequireLineOfSight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeBuildingDefenseTargetingSettings), &UHT_STATICS::NewProp_bRequireLineOfSight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequireLineOfSight_MetaData), NewProp_bRequireLineOfSight_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_TargetSelection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_TargetSelection = { "TargetSelection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeBuildingDefenseTargetingSettings, TargetSelection), Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeDefenseTargetSelection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetSelection_MetaData), NewProp_TargetSelection_MetaData) }; // 10f833de5c4639cf522495cf1b1b15fa8883ccd2
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TargetAimOffset = { "TargetAimOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeBuildingDefenseTargetingSettings, TargetAimOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetAimOffset_MetaData), NewProp_TargetAimOffset_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeBuildingDefenseTargetingSettings, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceChannel_MetaData), NewProp_TraceChannel_MetaData) }; // 3aff698625c18cc2ccaa87a587b2eac8c50cdec7
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUsePawnObjectTraceFallback = { "bUsePawnObjectTraceFallback", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeBuildingDefenseTargetingSettings), &UHT_STATICS::NewProp_bUsePawnObjectTraceFallback_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsePawnObjectTraceFallback_MetaData), NewProp_bUsePawnObjectTraceFallback_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_PawnObjectType = { "PawnObjectType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeBuildingDefenseTargetingSettings, PawnObjectType), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnObjectType_MetaData), NewProp_PawnObjectType_MetaData) }; // 3aff698625c18cc2ccaa87a587b2eac8c50cdec7
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRequiresTeamPower = { "bRequiresTeamPower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeBuildingDefenseTargetingSettings), &UHT_STATICS::NewProp_bRequiresTeamPower_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequiresTeamPower_MetaData), NewProp_bRequiresTeamPower_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bTreatMissingPowerPlantAsPowered = { "bTreatMissingPowerPlantAsPowered", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeBuildingDefenseTargetingSettings), &UHT_STATICS::NewProp_bTreatMissingPowerPlantAsPowered_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTreatMissingPowerPlantAsPowered_MetaData), NewProp_bTreatMissingPowerPlantAsPowered_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDrawDebugAttackTrace = { "bDrawDebugAttackTrace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeBuildingDefenseTargetingSettings), &UHT_STATICS::NewProp_bDrawDebugAttackTrace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebugAttackTrace_MetaData), NewProp_bDrawDebugAttackTrace_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DebugTraceDuration = { "DebugTraceDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeBuildingDefenseTargetingSettings, DebugTraceDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugTraceDuration_MetaData), NewProp_DebugTraceDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DebugTraceThickness = { "DebugTraceThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeBuildingDefenseTargetingSettings, DebugTraceThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugTraceThickness_MetaData), NewProp_DebugTraceThickness_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AttackRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinimumAttackRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetRefreshSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRequireLineOfSight,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetSelection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetAimOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUsePawnObjectTraceFallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PawnObjectType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRequiresTeamPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bTreatMissingPowerPlantAsPowered,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDrawDebugAttackTrace,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DebugTraceDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DebugTraceThickness,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRenegadeBuildingDefenseTargetingSettings Property Definitions ******
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	&NewStructOps,
	"RenegadeBuildingDefenseTargetingSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRenegadeBuildingDefenseTargetingSettings>(),
	alignof(FRenegadeBuildingDefenseTargetingSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRenegadeBuildingDefenseTargetingSettings;
UScriptStruct* Z_Construct_UScriptStruct_FRenegadeBuildingDefenseTargetingSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRenegadeBuildingDefenseTargetingSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRenegadeBuildingDefenseTargetingSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenegadeBuildingDefenseTargetingSettings, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("RenegadeBuildingDefenseTargetingSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FRenegadeBuildingDefenseTargetingSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRenegadeBuildingDefenseTargetingSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRenegadeBuildingDefenseTargetingSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRenegadeBuildingDefenseTargetingSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRenegadeBuildingDefenseTargetingSettings ***************************

// ********** Begin ScriptStruct FRenegadeAdvancedGuardTowerSettings *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRenegadeAdvancedGuardTowerSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRenegadeAdvancedGuardTowerSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRenegadeAdvancedGuardTowerSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireIntervalSeconds_MetaData[] = {
		{ "Category", "AGT" },
		{ "ClampMin", "0.05" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialFireDelaySeconds_MetaData[] = {
		{ "Category", "AGT" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamagePerRocket_MetaData[] = {
		{ "Category", "AGT|Damage" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Damage applied by each of the two traced rockets. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Damage applied by each of the two traced rockets." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageTypeClass_MetaData[] = {
		{ "Category", "AGT|Damage" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RocketSpreadDegrees_MetaData[] = {
		{ "Category", "AGT|Accuracy" },
		{ "ClampMax", "30.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RocketMesh_MetaData[] = {
		{ "Category", "AGT|Visual" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RocketMaterialOverride_MetaData[] = {
		{ "Category", "AGT|Visual" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RocketMeshScale_MetaData[] = {
		{ "Category", "AGT|Visual" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RocketMeshRotationOffset_MetaData[] = {
		{ "Category", "AGT|Visual" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RocketVisualSpeed_MetaData[] = {
		{ "Category", "AGT|Visual" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumRocketVisualLifetime_MetaData[] = {
		{ "Category", "AGT|Visual" },
		{ "ClampMin", "0.05" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRocketVisualCastsShadow_MetaData[] = {
		{ "Category", "AGT|Visual" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RocketImpactEffectActorClass_MetaData[] = {
		{ "Category", "AGT|Visual" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional Blueprint effect spawned where each visual rocket arrives. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional Blueprint effect spawned where each visual rocket arrives." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RocketFireSound_MetaData[] = {
		{ "Category", "AGT|Audio" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RocketFireVolumeMultiplier_MetaData[] = {
		{ "Category", "AGT|Audio" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRenegadeAdvancedGuardTowerSettings constinit property declarations 
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireIntervalSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialFireDelaySeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamagePerRocket;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageTypeClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RocketSpreadDegrees;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RocketMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RocketMaterialOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RocketMeshScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RocketMeshRotationOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RocketVisualSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumRocketVisualLifetime;
	static void NewProp_bRocketVisualCastsShadow_SetBit(void* Obj)
	{
		((FRenegadeAdvancedGuardTowerSettings*)Obj)->bRocketVisualCastsShadow = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRocketVisualCastsShadow;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RocketImpactEffectActorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RocketFireSound;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RocketFireVolumeMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRenegadeAdvancedGuardTowerSettings constinit property declarations *
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenegadeAdvancedGuardTowerSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRenegadeAdvancedGuardTowerSettings Property Definitions **********
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_FireIntervalSeconds = { "FireIntervalSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeAdvancedGuardTowerSettings, FireIntervalSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireIntervalSeconds_MetaData), NewProp_FireIntervalSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InitialFireDelaySeconds = { "InitialFireDelaySeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeAdvancedGuardTowerSettings, InitialFireDelaySeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialFireDelaySeconds_MetaData), NewProp_InitialFireDelaySeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DamagePerRocket = { "DamagePerRocket", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeAdvancedGuardTowerSettings, DamagePerRocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamagePerRocket_MetaData), NewProp_DamagePerRocket_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_DamageTypeClass = { "DamageTypeClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeAdvancedGuardTowerSettings, DamageTypeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageTypeClass_MetaData), NewProp_DamageTypeClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RocketSpreadDegrees = { "RocketSpreadDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeAdvancedGuardTowerSettings, RocketSpreadDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RocketSpreadDegrees_MetaData), NewProp_RocketSpreadDegrees_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RocketMesh = { "RocketMesh", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeAdvancedGuardTowerSettings, RocketMesh), Z_Construct_UClass_UStaticMesh, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RocketMesh_MetaData), NewProp_RocketMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RocketMaterialOverride = { "RocketMaterialOverride", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeAdvancedGuardTowerSettings, RocketMaterialOverride), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RocketMaterialOverride_MetaData), NewProp_RocketMaterialOverride_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RocketMeshScale = { "RocketMeshScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeAdvancedGuardTowerSettings, RocketMeshScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RocketMeshScale_MetaData), NewProp_RocketMeshScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RocketMeshRotationOffset = { "RocketMeshRotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeAdvancedGuardTowerSettings, RocketMeshRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RocketMeshRotationOffset_MetaData), NewProp_RocketMeshRotationOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RocketVisualSpeed = { "RocketVisualSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeAdvancedGuardTowerSettings, RocketVisualSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RocketVisualSpeed_MetaData), NewProp_RocketVisualSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaximumRocketVisualLifetime = { "MaximumRocketVisualLifetime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeAdvancedGuardTowerSettings, MaximumRocketVisualLifetime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumRocketVisualLifetime_MetaData), NewProp_MaximumRocketVisualLifetime_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRocketVisualCastsShadow = { "bRocketVisualCastsShadow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeAdvancedGuardTowerSettings), &UHT_STATICS::NewProp_bRocketVisualCastsShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRocketVisualCastsShadow_MetaData), NewProp_bRocketVisualCastsShadow_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_RocketImpactEffectActorClass = { "RocketImpactEffectActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeAdvancedGuardTowerSettings, RocketImpactEffectActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RocketImpactEffectActorClass_MetaData), NewProp_RocketImpactEffectActorClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RocketFireSound = { "RocketFireSound", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeAdvancedGuardTowerSettings, RocketFireSound), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RocketFireSound_MetaData), NewProp_RocketFireSound_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RocketFireVolumeMultiplier = { "RocketFireVolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeAdvancedGuardTowerSettings, RocketFireVolumeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RocketFireVolumeMultiplier_MetaData), NewProp_RocketFireVolumeMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FireIntervalSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InitialFireDelaySeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DamagePerRocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DamageTypeClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RocketSpreadDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RocketMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RocketMaterialOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RocketMeshScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RocketMeshRotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RocketVisualSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaximumRocketVisualLifetime,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRocketVisualCastsShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RocketImpactEffectActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RocketFireSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RocketFireVolumeMultiplier,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRenegadeAdvancedGuardTowerSettings Property Definitions ************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	&NewStructOps,
	"RenegadeAdvancedGuardTowerSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRenegadeAdvancedGuardTowerSettings>(),
	alignof(FRenegadeAdvancedGuardTowerSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRenegadeAdvancedGuardTowerSettings;
UScriptStruct* Z_Construct_UScriptStruct_FRenegadeAdvancedGuardTowerSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRenegadeAdvancedGuardTowerSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRenegadeAdvancedGuardTowerSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenegadeAdvancedGuardTowerSettings, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("RenegadeAdvancedGuardTowerSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FRenegadeAdvancedGuardTowerSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRenegadeAdvancedGuardTowerSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRenegadeAdvancedGuardTowerSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRenegadeAdvancedGuardTowerSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRenegadeAdvancedGuardTowerSettings *********************************

// ********** Begin ScriptStruct FRenegadeObeliskSettings ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRenegadeObeliskSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRenegadeObeliskSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRenegadeObeliskSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialFireDelaySeconds_MetaData[] = {
		{ "Category", "Obelisk" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChargeSeconds_MetaData[] = {
		{ "Category", "Obelisk" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireIntervalSeconds_MetaData[] = {
		{ "Category", "Obelisk" },
		{ "ClampMin", "0.05" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delay between the completion of one laser shot and the next charge. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delay between the completion of one laser shot and the next charge." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaserDamage_MetaData[] = {
		{ "Category", "Obelisk|Damage" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageTypeClass_MetaData[] = {
		{ "Category", "Obelisk|Damage" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleSystemPreference_MetaData[] = {
		{ "Category", "Obelisk|Visual" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Selects which particle technology is preferred when both are assigned.\n     * The other technology is used automatically if the preferred asset is unassigned or fails to spawn.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Selects which particle technology is preferred when both are assigned.\nThe other technology is used automatically if the preferred asset is unassigned or fails to spawn." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaserNiagaraSystem_MetaData[] = {
		{ "Category", "Obelisk|Visual|Niagara" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaserCascadeParticleSystem_MetaData[] = {
		{ "Category", "Obelisk|Visual|Cascade" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Classic Cascade particle-system fallback for older beam assets. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Classic Cascade particle-system fallback for older beam assets." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetCascadeBeamSourceAndTarget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Legacy serialized switch retained only for compatibility with v1.4.1 Blueprints.\n     * v1.4.2 always writes the authoritative trace start/end into Cascade automatically.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Legacy serialized switch retained only for compatibility with v1.4.1 Blueprints.\nv1.4.2 always writes the authoritative trace start/end into Cascade automatically." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CascadeBeamEmitterIndex_MetaData[] = {
		{ "Category", "Obelisk|Visual|Cascade" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cascade beam emitter that receives the authoritative source and target points. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cascade beam emitter that receives the authoritative source and target points." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CascadeBeamSourceIndex_MetaData[] = {
		{ "Category", "Obelisk|Visual|Cascade" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CascadeBeamTargetIndex_MetaData[] = {
		{ "Category", "Obelisk|Visual|Cascade" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CascadeStartVectorParameterName_MetaData[] = {
		{ "Category", "Obelisk|Visual|Cascade" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional Cascade vector instance parameter receiving the world-space start. Leave None when the asset only uses Beam TypeData. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional Cascade vector instance parameter receiving the world-space start. Leave None when the asset only uses Beam TypeData." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CascadeEndVectorParameterName_MetaData[] = {
		{ "Category", "Obelisk|Visual|Cascade" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional Cascade vector instance parameter receiving the world-space end. Leave None when the asset only uses Beam TypeData. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional Cascade vector instance parameter receiving the world-space end. Leave None when the asset only uses Beam TypeData." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaserStartParameterName_MetaData[] = {
		{ "Category", "Obelisk|Visual|Niagara" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** User parameter receiving the world-space laser start. Common examples: User.BeamStart or User.Start. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "User parameter receiving the world-space laser start. Common examples: User.BeamStart or User.Start." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaserEndParameterName_MetaData[] = {
		{ "Category", "Obelisk|Visual|Niagara" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** User parameter receiving the world-space laser end. Common examples: User.BeamEnd or User.End. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "User parameter receiving the world-space laser end. Common examples: User.BeamEnd or User.End." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeamParameterType_MetaData[] = {
		{ "Category", "Obelisk|Visual|Niagara" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaserVisualScale_MetaData[] = {
		{ "Category", "Obelisk|Visual|Scale" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Base visual scale applied to Niagara, Cascade, and the optional Blueprint laser actor. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base visual scale applied to Niagara, Cascade, and the optional Blueprint laser actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaserLengthScaleMultiplier_MetaData[] = {
		{ "Category", "Obelisk|Visual|Scale" },
		{ "ClampMin", "0.01" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Additional multiplier for beam length along the effect's local +X axis. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional multiplier for beam length along the effect's local +X axis." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaserThicknessScaleMultiplier_MetaData[] = {
		{ "Category", "Obelisk|Visual|Scale" },
		{ "ClampMin", "0.01" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Additional multiplier for beam width/height on local Y and Z. Raise this to make the laser thicker. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional multiplier for beam width/height on local Y and Z. Raise this to make the laser thicker." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRotateLaserSystemAlongTrace_MetaData[] = {
		{ "Category", "Obelisk|Visual|Alignment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rotates the selected Niagara or Cascade component's +X axis toward the trace end. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotates the selected Niagara or Cascade component's +X axis toward the trace end." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaserVisualRotationOffset_MetaData[] = {
		{ "Category", "Obelisk|Visual|Alignment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rotation correction for particle assets authored along an axis other than local +X. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotation correction for particle assets authored along an axis other than local +X." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoFitCascadeLaserToTrace_MetaData[] = {
		{ "Category", "Obelisk|Visual|Cascade" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Cascade fallback for effects that are not configured as native Beam TypeData.\n     * The particle component is automatically stretched from the muzzle to the authoritative trace end.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cascade fallback for effects that are not configured as native Beam TypeData.\nThe particle component is automatically stretched from the muzzle to the authoritative trace end." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bScaleLaserSystemAlongX_MetaData[] = {
		{ "Category", "Obelisk|Visual|Niagara" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional equivalent distance fitting for fixed-length Niagara effects. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional equivalent distance fitting for fixed-length Niagara effects." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuthoredLaserLength_MetaData[] = {
		{ "Category", "Obelisk|Visual|Scale" },
		{ "ClampMin", "1.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Length in Unreal units represented by X scale 1.0 in the authored particle effect. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Length in Unreal units represented by X scale 1.0 in the authored particle effect." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaserVisualLifetimeSeconds_MetaData[] = {
		{ "Category", "Obelisk|Visual|Lifetime" },
		{ "ClampMin", "0.01" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * How long the Obelisk laser visual remains alive after a shot.\n     * The plugin forcibly deactivates and destroys looping Niagara/Cascade components after this time.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How long the Obelisk laser visual remains alive after a shot.\nThe plugin forcibly deactivates and destroys looping Niagara/Cascade components after this time." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaserEffectActorClass_MetaData[] = {
		{ "Category", "Obelisk|Visual" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional Blueprint visual actor spawned at the laser start and oriented toward the end. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional Blueprint visual actor spawned at the laser start and oriented toward the end." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChargeSound_MetaData[] = {
		{ "Category", "Obelisk|Audio" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShootSound_MetaData[] = {
		{ "Category", "Obelisk|Audio" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChargeSoundVolumeMultiplier_MetaData[] = {
		{ "Category", "Obelisk|Audio" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShootSoundVolumeMultiplier_MetaData[] = {
		{ "Category", "Obelisk|Audio" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeBuildingCombatTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRenegadeObeliskSettings constinit property declarations **********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialFireDelaySeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChargeSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireIntervalSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LaserDamage;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageTypeClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ParticleSystemPreference_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ParticleSystemPreference;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LaserNiagaraSystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LaserCascadeParticleSystem;
	static void NewProp_bSetCascadeBeamSourceAndTarget_SetBit(void* Obj)
	{
		((FRenegadeObeliskSettings*)Obj)->bSetCascadeBeamSourceAndTarget = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetCascadeBeamSourceAndTarget;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CascadeBeamEmitterIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CascadeBeamSourceIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CascadeBeamTargetIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CascadeStartVectorParameterName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CascadeEndVectorParameterName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LaserStartParameterName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LaserEndParameterName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BeamParameterType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BeamParameterType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LaserVisualScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LaserLengthScaleMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LaserThicknessScaleMultiplier;
	static void NewProp_bRotateLaserSystemAlongTrace_SetBit(void* Obj)
	{
		((FRenegadeObeliskSettings*)Obj)->bRotateLaserSystemAlongTrace = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotateLaserSystemAlongTrace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LaserVisualRotationOffset;
	static void NewProp_bAutoFitCascadeLaserToTrace_SetBit(void* Obj)
	{
		((FRenegadeObeliskSettings*)Obj)->bAutoFitCascadeLaserToTrace = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoFitCascadeLaserToTrace;
	static void NewProp_bScaleLaserSystemAlongX_SetBit(void* Obj)
	{
		((FRenegadeObeliskSettings*)Obj)->bScaleLaserSystemAlongX = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleLaserSystemAlongX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AuthoredLaserLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LaserVisualLifetimeSeconds;
	static const UECodeGen_Private::FClassPropertyParams NewProp_LaserEffectActorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChargeSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShootSound;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChargeSoundVolumeMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShootSoundVolumeMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRenegadeObeliskSettings constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenegadeObeliskSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRenegadeObeliskSettings Property Definitions *********************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InitialFireDelaySeconds = { "InitialFireDelaySeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeObeliskSettings, InitialFireDelaySeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialFireDelaySeconds_MetaData), NewProp_InitialFireDelaySeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ChargeSeconds = { "ChargeSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeObeliskSettings, ChargeSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChargeSeconds_MetaData), NewProp_ChargeSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_FireIntervalSeconds = { "FireIntervalSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeObeliskSettings, FireIntervalSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireIntervalSeconds_MetaData), NewProp_FireIntervalSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LaserDamage = { "LaserDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeObeliskSettings, LaserDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaserDamage_MetaData), NewProp_LaserDamage_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_DamageTypeClass = { "DamageTypeClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeObeliskSettings, DamageTypeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageTypeClass_MetaData), NewProp_DamageTypeClass_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ParticleSystemPreference_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ParticleSystemPreference = { "ParticleSystemPreference", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeObeliskSettings, ParticleSystemPreference), Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeObeliskParticlePreference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleSystemPreference_MetaData), NewProp_ParticleSystemPreference_MetaData) }; // e071f576d30c50d12881162d589c6d84456762b6
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_LaserNiagaraSystem = { "LaserNiagaraSystem", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeObeliskSettings, LaserNiagaraSystem), Z_Construct_UClass_UNiagaraSystem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaserNiagaraSystem_MetaData), NewProp_LaserNiagaraSystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_LaserCascadeParticleSystem = { "LaserCascadeParticleSystem", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeObeliskSettings, LaserCascadeParticleSystem), Z_Construct_UClass_UParticleSystem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaserCascadeParticleSystem_MetaData), NewProp_LaserCascadeParticleSystem_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSetCascadeBeamSourceAndTarget = { "bSetCascadeBeamSourceAndTarget", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeObeliskSettings), &UHT_STATICS::NewProp_bSetCascadeBeamSourceAndTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetCascadeBeamSourceAndTarget_MetaData), NewProp_bSetCascadeBeamSourceAndTarget_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_CascadeBeamEmitterIndex = { "CascadeBeamEmitterIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeObeliskSettings, CascadeBeamEmitterIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CascadeBeamEmitterIndex_MetaData), NewProp_CascadeBeamEmitterIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_CascadeBeamSourceIndex = { "CascadeBeamSourceIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeObeliskSettings, CascadeBeamSourceIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CascadeBeamSourceIndex_MetaData), NewProp_CascadeBeamSourceIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_CascadeBeamTargetIndex = { "CascadeBeamTargetIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeObeliskSettings, CascadeBeamTargetIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CascadeBeamTargetIndex_MetaData), NewProp_CascadeBeamTargetIndex_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_CascadeStartVectorParameterName = { "CascadeStartVectorParameterName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeObeliskSettings, CascadeStartVectorParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CascadeStartVectorParameterName_MetaData), NewProp_CascadeStartVectorParameterName_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_CascadeEndVectorParameterName = { "CascadeEndVectorParameterName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeObeliskSettings, CascadeEndVectorParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CascadeEndVectorParameterName_MetaData), NewProp_CascadeEndVectorParameterName_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_LaserStartParameterName = { "LaserStartParameterName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeObeliskSettings, LaserStartParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaserStartParameterName_MetaData), NewProp_LaserStartParameterName_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_LaserEndParameterName = { "LaserEndParameterName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeObeliskSettings, LaserEndParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaserEndParameterName_MetaData), NewProp_LaserEndParameterName_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_BeamParameterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_BeamParameterType = { "BeamParameterType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeObeliskSettings, BeamParameterType), Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeNiagaraBeamParameterType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeamParameterType_MetaData), NewProp_BeamParameterType_MetaData) }; // f368d038c1903b67746243401b595ccb27e43868
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LaserVisualScale = { "LaserVisualScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeObeliskSettings, LaserVisualScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaserVisualScale_MetaData), NewProp_LaserVisualScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LaserLengthScaleMultiplier = { "LaserLengthScaleMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeObeliskSettings, LaserLengthScaleMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaserLengthScaleMultiplier_MetaData), NewProp_LaserLengthScaleMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LaserThicknessScaleMultiplier = { "LaserThicknessScaleMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeObeliskSettings, LaserThicknessScaleMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaserThicknessScaleMultiplier_MetaData), NewProp_LaserThicknessScaleMultiplier_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRotateLaserSystemAlongTrace = { "bRotateLaserSystemAlongTrace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeObeliskSettings), &UHT_STATICS::NewProp_bRotateLaserSystemAlongTrace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRotateLaserSystemAlongTrace_MetaData), NewProp_bRotateLaserSystemAlongTrace_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LaserVisualRotationOffset = { "LaserVisualRotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeObeliskSettings, LaserVisualRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaserVisualRotationOffset_MetaData), NewProp_LaserVisualRotationOffset_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAutoFitCascadeLaserToTrace = { "bAutoFitCascadeLaserToTrace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeObeliskSettings), &UHT_STATICS::NewProp_bAutoFitCascadeLaserToTrace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoFitCascadeLaserToTrace_MetaData), NewProp_bAutoFitCascadeLaserToTrace_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bScaleLaserSystemAlongX = { "bScaleLaserSystemAlongX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeObeliskSettings), &UHT_STATICS::NewProp_bScaleLaserSystemAlongX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bScaleLaserSystemAlongX_MetaData), NewProp_bScaleLaserSystemAlongX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_AuthoredLaserLength = { "AuthoredLaserLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeObeliskSettings, AuthoredLaserLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuthoredLaserLength_MetaData), NewProp_AuthoredLaserLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LaserVisualLifetimeSeconds = { "LaserVisualLifetimeSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeObeliskSettings, LaserVisualLifetimeSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaserVisualLifetimeSeconds_MetaData), NewProp_LaserVisualLifetimeSeconds_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_LaserEffectActorClass = { "LaserEffectActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeObeliskSettings, LaserEffectActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaserEffectActorClass_MetaData), NewProp_LaserEffectActorClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ChargeSound = { "ChargeSound", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeObeliskSettings, ChargeSound), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChargeSound_MetaData), NewProp_ChargeSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ShootSound = { "ShootSound", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeObeliskSettings, ShootSound), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShootSound_MetaData), NewProp_ShootSound_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ChargeSoundVolumeMultiplier = { "ChargeSoundVolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeObeliskSettings, ChargeSoundVolumeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChargeSoundVolumeMultiplier_MetaData), NewProp_ChargeSoundVolumeMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ShootSoundVolumeMultiplier = { "ShootSoundVolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeObeliskSettings, ShootSoundVolumeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShootSoundVolumeMultiplier_MetaData), NewProp_ShootSoundVolumeMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InitialFireDelaySeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ChargeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FireIntervalSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LaserDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DamageTypeClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticleSystemPreference_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticleSystemPreference,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LaserNiagaraSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LaserCascadeParticleSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSetCascadeBeamSourceAndTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CascadeBeamEmitterIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CascadeBeamSourceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CascadeBeamTargetIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CascadeStartVectorParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CascadeEndVectorParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LaserStartParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LaserEndParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BeamParameterType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BeamParameterType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LaserVisualScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LaserLengthScaleMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LaserThicknessScaleMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRotateLaserSystemAlongTrace,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LaserVisualRotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAutoFitCascadeLaserToTrace,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bScaleLaserSystemAlongX,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AuthoredLaserLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LaserVisualLifetimeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LaserEffectActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ChargeSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ShootSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ChargeSoundVolumeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ShootSoundVolumeMultiplier,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRenegadeObeliskSettings Property Definitions ***********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	&NewStructOps,
	"RenegadeObeliskSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRenegadeObeliskSettings>(),
	alignof(FRenegadeObeliskSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRenegadeObeliskSettings;
UScriptStruct* Z_Construct_UScriptStruct_FRenegadeObeliskSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRenegadeObeliskSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRenegadeObeliskSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenegadeObeliskSettings, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("RenegadeObeliskSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FRenegadeObeliskSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRenegadeObeliskSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRenegadeObeliskSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRenegadeObeliskSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRenegadeObeliskSettings ********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeBuildingCombatTypes_h__Script_RenegadeSoldierCombat_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeBuildingType, TEXT("ERenegadeBuildingType"), &ZRIE_ERenegadeBuildingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3092208788U) },
		{ Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeBuildingDefenseType, TEXT("ERenegadeBuildingDefenseType"), &ZRIE_ERenegadeBuildingDefenseType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1881281916U) },
		{ Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeBuildingTargetPolicy, TEXT("ERenegadeBuildingTargetPolicy"), &ZRIE_ERenegadeBuildingTargetPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1061842795U) },
		{ Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeDefenseTargetSelection, TEXT("ERenegadeDefenseTargetSelection"), &ZRIE_ERenegadeDefenseTargetSelection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 284701662U) },
		{ Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeNiagaraBeamParameterType, TEXT("ERenegadeNiagaraBeamParameterType"), &ZRIE_ERenegadeNiagaraBeamParameterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4083732536U) },
		{ Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeObeliskParticlePreference, TEXT("ERenegadeObeliskParticlePreference"), &ZRIE_ERenegadeObeliskParticlePreference, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3765564790U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FRenegadeBuildingHealthSettings, Z_Construct_UScriptStruct_FRenegadeBuildingHealthSettings_Statics::NewStructOps, TEXT("RenegadeBuildingHealthSettings"),&Z_Registration_Info_UScriptStruct_FRenegadeBuildingHealthSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenegadeBuildingHealthSettings), 2057948070U) },
		{ Z_Construct_UScriptStruct_FRenegadeBuildingTargetSettings, Z_Construct_UScriptStruct_FRenegadeBuildingTargetSettings_Statics::NewStructOps, TEXT("RenegadeBuildingTargetSettings"),&Z_Registration_Info_UScriptStruct_FRenegadeBuildingTargetSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenegadeBuildingTargetSettings), 1622903006U) },
		{ Z_Construct_UScriptStruct_FRenegadeBuildingEvaSoundSet, Z_Construct_UScriptStruct_FRenegadeBuildingEvaSoundSet_Statics::NewStructOps, TEXT("RenegadeBuildingEvaSoundSet"),&Z_Registration_Info_UScriptStruct_FRenegadeBuildingEvaSoundSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenegadeBuildingEvaSoundSet), 14539163U) },
		{ Z_Construct_UScriptStruct_FRenegadeBuildingAudioSettings, Z_Construct_UScriptStruct_FRenegadeBuildingAudioSettings_Statics::NewStructOps, TEXT("RenegadeBuildingAudioSettings"),&Z_Registration_Info_UScriptStruct_FRenegadeBuildingAudioSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenegadeBuildingAudioSettings), 654657603U) },
		{ Z_Construct_UScriptStruct_FRenegadeBuildingDefenseTargetingSettings, Z_Construct_UScriptStruct_FRenegadeBuildingDefenseTargetingSettings_Statics::NewStructOps, TEXT("RenegadeBuildingDefenseTargetingSettings"),&Z_Registration_Info_UScriptStruct_FRenegadeBuildingDefenseTargetingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenegadeBuildingDefenseTargetingSettings), 3574932244U) },
		{ Z_Construct_UScriptStruct_FRenegadeAdvancedGuardTowerSettings, Z_Construct_UScriptStruct_FRenegadeAdvancedGuardTowerSettings_Statics::NewStructOps, TEXT("RenegadeAdvancedGuardTowerSettings"),&Z_Registration_Info_UScriptStruct_FRenegadeAdvancedGuardTowerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenegadeAdvancedGuardTowerSettings), 1601920858U) },
		{ Z_Construct_UScriptStruct_FRenegadeObeliskSettings, Z_Construct_UScriptStruct_FRenegadeObeliskSettings_Statics::NewStructOps, TEXT("RenegadeObeliskSettings"),&Z_Registration_Info_UScriptStruct_FRenegadeObeliskSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenegadeObeliskSettings), 3580121220U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeBuildingCombatTypes_h__Script_RenegadeSoldierCombat_47fb9ab8d039408352601413d0509bc72154296f{
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
