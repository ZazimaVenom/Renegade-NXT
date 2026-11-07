// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RenegadeHarvesterCombatTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRenegadeHarvesterCombatTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UDamageType(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USoundBase(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USoundConcurrency(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh(ETypeConstructPhase);
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UEnum* Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeHarvesterLifecycleState(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeHarvesterAudioSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeHarvesterCycleSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeHarvesterDestructionSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeHarvesterEconomySettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeHarvesterEvaSoundSet(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeHarvesterGroundAlignmentSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeHarvesterHealthSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeHarvesterTargetSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeHarvesterTurretSettings(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum ERenegadeHarvesterLifecycleState ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeHarvesterLifecycleState_Statics
template<> RENEGADESOLDIERCOMBAT_NON_ATTRIBUTED_API UEnum* StaticEnum<ERenegadeHarvesterLifecycleState>()
{
	return Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeHarvesterLifecycleState(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ApproachingHarvestPoint.DisplayName", "Approaching Harvest Point" },
		{ "ApproachingHarvestPoint.Name", "ERenegadeHarvesterLifecycleState::ApproachingHarvestPoint" },
		{ "BlueprintType", "true" },
		{ "Destroyed.DisplayName", "Destroyed" },
		{ "Destroyed.Name", "ERenegadeHarvesterLifecycleState::Destroyed" },
		{ "Harvesting.DisplayName", "Harvesting" },
		{ "Harvesting.Name", "ERenegadeHarvesterLifecycleState::Harvesting" },
		{ "Idle.DisplayName", "Idle / Travelling" },
		{ "Idle.Name", "ERenegadeHarvesterLifecycleState::Idle" },
		{ "LeavingRefinery.DisplayName", "Leaving Refinery" },
		{ "LeavingRefinery.Name", "ERenegadeHarvesterLifecycleState::LeavingRefinery" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
		{ "RefineryDocked.DisplayName", "Docked At Refinery" },
		{ "RefineryDocked.Name", "ERenegadeHarvesterLifecycleState::RefineryDocked" },
		{ "RefineryDocking.DisplayName", "Docking To Refinery" },
		{ "RefineryDocking.Name", "ERenegadeHarvesterLifecycleState::RefineryDocking" },
		{ "RefineryUnloading.DisplayName", "Unloading At Refinery" },
		{ "RefineryUnloading.Name", "ERenegadeHarvesterLifecycleState::RefineryUnloading" },
		{ "ReturningToRefinery.DisplayName", "Returning To Refinery" },
		{ "ReturningToRefinery.Name", "ERenegadeHarvesterLifecycleState::ReturningToRefinery" },
		{ "WaitingToHarvest.DisplayName", "Waiting To Harvest" },
		{ "WaitingToHarvest.Name", "ERenegadeHarvesterLifecycleState::WaitingToHarvest" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERenegadeHarvesterLifecycleState::Idle", (int64)ERenegadeHarvesterLifecycleState::Idle },
		{ "ERenegadeHarvesterLifecycleState::Harvesting", (int64)ERenegadeHarvesterLifecycleState::Harvesting },
		{ "ERenegadeHarvesterLifecycleState::ReturningToRefinery", (int64)ERenegadeHarvesterLifecycleState::ReturningToRefinery },
		{ "ERenegadeHarvesterLifecycleState::RefineryDocking", (int64)ERenegadeHarvesterLifecycleState::RefineryDocking },
		{ "ERenegadeHarvesterLifecycleState::RefineryUnloading", (int64)ERenegadeHarvesterLifecycleState::RefineryUnloading },
		{ "ERenegadeHarvesterLifecycleState::LeavingRefinery", (int64)ERenegadeHarvesterLifecycleState::LeavingRefinery },
		{ "ERenegadeHarvesterLifecycleState::Destroyed", (int64)ERenegadeHarvesterLifecycleState::Destroyed },
		{ "ERenegadeHarvesterLifecycleState::ApproachingHarvestPoint", (int64)ERenegadeHarvesterLifecycleState::ApproachingHarvestPoint },
		{ "ERenegadeHarvesterLifecycleState::WaitingToHarvest", (int64)ERenegadeHarvesterLifecycleState::WaitingToHarvest },
		{ "ERenegadeHarvesterLifecycleState::RefineryDocked", (int64)ERenegadeHarvesterLifecycleState::RefineryDocked },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	"ERenegadeHarvesterLifecycleState",
	"ERenegadeHarvesterLifecycleState",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ERenegadeHarvesterLifecycleState;
UEnum* Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeHarvesterLifecycleState(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ERenegadeHarvesterLifecycleState.OuterSingleton)
		{
			ZRIE_ERenegadeHarvesterLifecycleState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeHarvesterLifecycleState, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("ERenegadeHarvesterLifecycleState"));
		}
		return ZRIE_ERenegadeHarvesterLifecycleState.OuterSingleton;
	}
	if (!ZRIE_ERenegadeHarvesterLifecycleState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ERenegadeHarvesterLifecycleState.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ERenegadeHarvesterLifecycleState.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ERenegadeHarvesterLifecycleState ********************************************

// ********** Begin ScriptStruct FRenegadeHarvesterHealthSettings **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRenegadeHarvesterHealthSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRenegadeHarvesterHealthSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRenegadeHarvesterHealthSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumHealth_MetaData[] = {
		{ "Category", "Harvester Health" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IncomingDamageMultiplier_MetaData[] = {
		{ "Category", "Harvester Health" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeDamaged_MetaData[] = {
		{ "Category", "Harvester Health" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CriticalHealthPercent_MetaData[] = {
		{ "Category", "Harvester Health|Critical" },
		{ "ClampMax", "0.99" },
		{ "ClampMin", "0.01" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRenegadeHarvesterHealthSettings constinit property declarations **
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IncomingDamageMultiplier;
	static void NewProp_bCanBeDamaged_SetBit(void* Obj)
	{
		((FRenegadeHarvesterHealthSettings*)Obj)->bCanBeDamaged = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeDamaged;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CriticalHealthPercent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRenegadeHarvesterHealthSettings constinit property declarations ****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenegadeHarvesterHealthSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRenegadeHarvesterHealthSettings Property Definitions *************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaximumHealth = { "MaximumHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterHealthSettings, MaximumHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumHealth_MetaData), NewProp_MaximumHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_IncomingDamageMultiplier = { "IncomingDamageMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterHealthSettings, IncomingDamageMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IncomingDamageMultiplier_MetaData), NewProp_IncomingDamageMultiplier_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bCanBeDamaged = { "bCanBeDamaged", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeHarvesterHealthSettings), &UHT_STATICS::NewProp_bCanBeDamaged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanBeDamaged_MetaData), NewProp_bCanBeDamaged_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CriticalHealthPercent = { "CriticalHealthPercent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterHealthSettings, CriticalHealthPercent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CriticalHealthPercent_MetaData), NewProp_CriticalHealthPercent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaximumHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IncomingDamageMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bCanBeDamaged,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CriticalHealthPercent,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRenegadeHarvesterHealthSettings Property Definitions ***************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	&NewStructOps,
	"RenegadeHarvesterHealthSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRenegadeHarvesterHealthSettings>(),
	alignof(FRenegadeHarvesterHealthSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRenegadeHarvesterHealthSettings;
UScriptStruct* Z_Construct_UScriptStruct_FRenegadeHarvesterHealthSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRenegadeHarvesterHealthSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRenegadeHarvesterHealthSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenegadeHarvesterHealthSettings, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("RenegadeHarvesterHealthSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FRenegadeHarvesterHealthSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRenegadeHarvesterHealthSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRenegadeHarvesterHealthSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRenegadeHarvesterHealthSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRenegadeHarvesterHealthSettings ************************************

// ********** Begin ScriptStruct FRenegadeHarvesterTargetSettings **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRenegadeHarvesterTargetSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRenegadeHarvesterTargetSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRenegadeHarvesterTargetSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRegisterAsCombatTarget_MetaData[] = {
		{ "Category", "Harvester Target" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfantryTargetPriority_MetaData[] = {
		{ "Category", "Harvester Target" },
		{ "ClampMin", "0.01" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Higher values make infantry more willing to attack this Harvester when several valid targets exist. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Higher values make infantry more willing to attack this Harvester when several valid targets exist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallbackAimOffset_MetaData[] = {
		{ "Category", "Harvester Target" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRenegadeHarvesterTargetSettings constinit property declarations **
	static void NewProp_bRegisterAsCombatTarget_SetBit(void* Obj)
	{
		((FRenegadeHarvesterTargetSettings*)Obj)->bRegisterAsCombatTarget = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRegisterAsCombatTarget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InfantryTargetPriority;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FallbackAimOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRenegadeHarvesterTargetSettings constinit property declarations ****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenegadeHarvesterTargetSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRenegadeHarvesterTargetSettings Property Definitions *************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRegisterAsCombatTarget = { "bRegisterAsCombatTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeHarvesterTargetSettings), &UHT_STATICS::NewProp_bRegisterAsCombatTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRegisterAsCombatTarget_MetaData), NewProp_bRegisterAsCombatTarget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InfantryTargetPriority = { "InfantryTargetPriority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterTargetSettings, InfantryTargetPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfantryTargetPriority_MetaData), NewProp_InfantryTargetPriority_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_FallbackAimOffset = { "FallbackAimOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterTargetSettings, FallbackAimOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallbackAimOffset_MetaData), NewProp_FallbackAimOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRegisterAsCombatTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InfantryTargetPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FallbackAimOffset,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRenegadeHarvesterTargetSettings Property Definitions ***************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	&NewStructOps,
	"RenegadeHarvesterTargetSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRenegadeHarvesterTargetSettings>(),
	alignof(FRenegadeHarvesterTargetSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRenegadeHarvesterTargetSettings;
UScriptStruct* Z_Construct_UScriptStruct_FRenegadeHarvesterTargetSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRenegadeHarvesterTargetSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRenegadeHarvesterTargetSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenegadeHarvesterTargetSettings, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("RenegadeHarvesterTargetSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FRenegadeHarvesterTargetSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRenegadeHarvesterTargetSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRenegadeHarvesterTargetSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRenegadeHarvesterTargetSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRenegadeHarvesterTargetSettings ************************************

// ********** Begin ScriptStruct FRenegadeHarvesterTurretSettings **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRenegadeHarvesterTurretSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRenegadeHarvesterTurretSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRenegadeHarvesterTurretSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDefensiveTurret_MetaData[] = {
		{ "Category", "Turret" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPrioritizeInfantry_MetaData[] = {
		{ "Category", "Turret|Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Harvester defence is infantry-first by design. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Harvester defence is infantry-first by design." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowTargetEnemyHarvesters_MetaData[] = {
		{ "Category", "Turret|Targeting" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchRadius_MetaData[] = {
		{ "Category", "Turret|Targeting" },
		{ "ClampMin", "100.0" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetRefreshSeconds_MetaData[] = {
		{ "Category", "Turret|Targeting" },
		{ "ClampMin", "0.05" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequireLineOfSight_MetaData[] = {
		{ "Category", "Turret|Targeting" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LostSightGraceSeconds_MetaData[] = {
		{ "Category", "Turret|Targeting" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YawRotationSpeedDegreesPerSecond_MetaData[] = {
		{ "Category", "Turret|Rotation" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchRotationSpeedDegreesPerSecond_MetaData[] = {
		{ "Category", "Turret|Rotation" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLimitYawRelativeToHarvester_MetaData[] = {
		{ "Category", "Turret|Rotation" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumYawOffsetDegrees_MetaData[] = {
		{ "Category", "Turret|Rotation" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bLimitYawRelativeToHarvester" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumPitchDegrees_MetaData[] = {
		{ "Category", "Turret|Rotation" },
		{ "ClampMax", "89.0" },
		{ "ClampMin", "-89.0" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumPitchDegrees_MetaData[] = {
		{ "Category", "Turret|Rotation" },
		{ "ClampMax", "89.0" },
		{ "ClampMin", "-89.0" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireAlignmentToleranceDegrees_MetaData[] = {
		{ "Category", "Turret|Rotation" },
		{ "ClampMax", "45.0" },
		{ "ClampMin", "0.1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Turret must be this close to the desired aim direction before a shot may fire. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turret must be this close to the desired aim direction before a shot may fire." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamagePerShot_MetaData[] = {
		{ "Category", "Turret|Weapon" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumRange_MetaData[] = {
		{ "Category", "Turret|Weapon" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoundsPerMinute_MetaData[] = {
		{ "Category", "Turret|Weapon" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpreadDegrees_MetaData[] = {
		{ "Category", "Turret|Weapon" },
		{ "ClampMax", "30.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[] = {
		{ "Category", "Turret|Weapon" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowFriendlyFire_MetaData[] = {
		{ "Category", "Turret|Weapon" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageTypeClass_MetaData[] = {
		{ "Category", "Turret|Weapon" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseBulletMesh_MetaData[] = {
		{ "Category", "Turret|Bullet Visual" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletMesh_MetaData[] = {
		{ "Category", "Turret|Bullet Visual" },
		{ "EditCondition", "bUseBulletMesh" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletMaterialOverride_MetaData[] = {
		{ "Category", "Turret|Bullet Visual" },
		{ "EditCondition", "bUseBulletMesh" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletMeshScale_MetaData[] = {
		{ "Category", "Turret|Bullet Visual" },
		{ "EditCondition", "bUseBulletMesh" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletMeshRotationOffset_MetaData[] = {
		{ "Category", "Turret|Bullet Visual" },
		{ "EditCondition", "bUseBulletMesh" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletVisualSpeed_MetaData[] = {
		{ "Category", "Turret|Bullet Visual" },
		{ "ClampMin", "1.0" },
		{ "EditCondition", "bUseBulletMesh" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletVisualPoolSize_MetaData[] = {
		{ "Category", "Turret|Bullet Visual" },
		{ "ClampMax", "128" },
		{ "ClampMin", "1" },
		{ "EditCondition", "bUseBulletMesh" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleCascade_MetaData[] = {
		{ "Category", "Turret|FX|Muzzle" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleNiagara_MetaData[] = {
		{ "Category", "Turret|FX|Muzzle" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactCascade_MetaData[] = {
		{ "Category", "Turret|FX|Impact" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactNiagara_MetaData[] = {
		{ "Category", "Turret|FX|Impact" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[] = {
		{ "Category", "Turret|Audio" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireSoundVolumeMultiplier_MetaData[] = {
		{ "Category", "Turret|Audio" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebug_MetaData[] = {
		{ "Category", "Turret|Debug" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRenegadeHarvesterTurretSettings constinit property declarations **
	static void NewProp_bEnableDefensiveTurret_SetBit(void* Obj)
	{
		((FRenegadeHarvesterTurretSettings*)Obj)->bEnableDefensiveTurret = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDefensiveTurret;
	static void NewProp_bPrioritizeInfantry_SetBit(void* Obj)
	{
		((FRenegadeHarvesterTurretSettings*)Obj)->bPrioritizeInfantry = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrioritizeInfantry;
	static void NewProp_bAllowTargetEnemyHarvesters_SetBit(void* Obj)
	{
		((FRenegadeHarvesterTurretSettings*)Obj)->bAllowTargetEnemyHarvesters = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowTargetEnemyHarvesters;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SearchRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetRefreshSeconds;
	static void NewProp_bRequireLineOfSight_SetBit(void* Obj)
	{
		((FRenegadeHarvesterTurretSettings*)Obj)->bRequireLineOfSight = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireLineOfSight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LostSightGraceSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YawRotationSpeedDegreesPerSecond;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchRotationSpeedDegreesPerSecond;
	static void NewProp_bLimitYawRelativeToHarvester_SetBit(void* Obj)
	{
		((FRenegadeHarvesterTurretSettings*)Obj)->bLimitYawRelativeToHarvester = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitYawRelativeToHarvester;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumYawOffsetDegrees;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumPitchDegrees;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumPitchDegrees;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireAlignmentToleranceDegrees;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamagePerShot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoundsPerMinute;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpreadDegrees;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static void NewProp_bAllowFriendlyFire_SetBit(void* Obj)
	{
		((FRenegadeHarvesterTurretSettings*)Obj)->bAllowFriendlyFire = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowFriendlyFire;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageTypeClass;
	static void NewProp_bUseBulletMesh_SetBit(void* Obj)
	{
		((FRenegadeHarvesterTurretSettings*)Obj)->bUseBulletMesh = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseBulletMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletMaterialOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BulletMeshScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BulletMeshRotationOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BulletVisualSpeed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BulletVisualPoolSize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MuzzleCascade;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MuzzleNiagara;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactCascade;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactNiagara;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireSound;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireSoundVolumeMultiplier;
	static void NewProp_bDrawDebug_SetBit(void* Obj)
	{
		((FRenegadeHarvesterTurretSettings*)Obj)->bDrawDebug = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRenegadeHarvesterTurretSettings constinit property declarations ****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenegadeHarvesterTurretSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRenegadeHarvesterTurretSettings Property Definitions *************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableDefensiveTurret = { "bEnableDefensiveTurret", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeHarvesterTurretSettings), &UHT_STATICS::NewProp_bEnableDefensiveTurret_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDefensiveTurret_MetaData), NewProp_bEnableDefensiveTurret_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bPrioritizeInfantry = { "bPrioritizeInfantry", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeHarvesterTurretSettings), &UHT_STATICS::NewProp_bPrioritizeInfantry_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPrioritizeInfantry_MetaData), NewProp_bPrioritizeInfantry_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAllowTargetEnemyHarvesters = { "bAllowTargetEnemyHarvesters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeHarvesterTurretSettings), &UHT_STATICS::NewProp_bAllowTargetEnemyHarvesters_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowTargetEnemyHarvesters_MetaData), NewProp_bAllowTargetEnemyHarvesters_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_SearchRadius = { "SearchRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterTurretSettings, SearchRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchRadius_MetaData), NewProp_SearchRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_TargetRefreshSeconds = { "TargetRefreshSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterTurretSettings, TargetRefreshSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRefreshSeconds_MetaData), NewProp_TargetRefreshSeconds_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRequireLineOfSight = { "bRequireLineOfSight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeHarvesterTurretSettings), &UHT_STATICS::NewProp_bRequireLineOfSight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequireLineOfSight_MetaData), NewProp_bRequireLineOfSight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LostSightGraceSeconds = { "LostSightGraceSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterTurretSettings, LostSightGraceSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LostSightGraceSeconds_MetaData), NewProp_LostSightGraceSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_YawRotationSpeedDegreesPerSecond = { "YawRotationSpeedDegreesPerSecond", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterTurretSettings, YawRotationSpeedDegreesPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YawRotationSpeedDegreesPerSecond_MetaData), NewProp_YawRotationSpeedDegreesPerSecond_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_PitchRotationSpeedDegreesPerSecond = { "PitchRotationSpeedDegreesPerSecond", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterTurretSettings, PitchRotationSpeedDegreesPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchRotationSpeedDegreesPerSecond_MetaData), NewProp_PitchRotationSpeedDegreesPerSecond_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bLimitYawRelativeToHarvester = { "bLimitYawRelativeToHarvester", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeHarvesterTurretSettings), &UHT_STATICS::NewProp_bLimitYawRelativeToHarvester_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLimitYawRelativeToHarvester_MetaData), NewProp_bLimitYawRelativeToHarvester_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaximumYawOffsetDegrees = { "MaximumYawOffsetDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterTurretSettings, MaximumYawOffsetDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumYawOffsetDegrees_MetaData), NewProp_MaximumYawOffsetDegrees_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MinimumPitchDegrees = { "MinimumPitchDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterTurretSettings, MinimumPitchDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumPitchDegrees_MetaData), NewProp_MinimumPitchDegrees_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaximumPitchDegrees = { "MaximumPitchDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterTurretSettings, MaximumPitchDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumPitchDegrees_MetaData), NewProp_MaximumPitchDegrees_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_FireAlignmentToleranceDegrees = { "FireAlignmentToleranceDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterTurretSettings, FireAlignmentToleranceDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireAlignmentToleranceDegrees_MetaData), NewProp_FireAlignmentToleranceDegrees_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DamagePerShot = { "DamagePerShot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterTurretSettings, DamagePerShot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamagePerShot_MetaData), NewProp_DamagePerShot_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaximumRange = { "MaximumRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterTurretSettings, MaximumRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumRange_MetaData), NewProp_MaximumRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RoundsPerMinute = { "RoundsPerMinute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterTurretSettings, RoundsPerMinute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoundsPerMinute_MetaData), NewProp_RoundsPerMinute_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_SpreadDegrees = { "SpreadDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterTurretSettings, SpreadDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpreadDegrees_MetaData), NewProp_SpreadDegrees_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterTurretSettings, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceChannel_MetaData), NewProp_TraceChannel_MetaData) }; // 3aff698625c18cc2ccaa87a587b2eac8c50cdec7
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAllowFriendlyFire = { "bAllowFriendlyFire", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeHarvesterTurretSettings), &UHT_STATICS::NewProp_bAllowFriendlyFire_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowFriendlyFire_MetaData), NewProp_bAllowFriendlyFire_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_DamageTypeClass = { "DamageTypeClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterTurretSettings, DamageTypeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageTypeClass_MetaData), NewProp_DamageTypeClass_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseBulletMesh = { "bUseBulletMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeHarvesterTurretSettings), &UHT_STATICS::NewProp_bUseBulletMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseBulletMesh_MetaData), NewProp_bUseBulletMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_BulletMesh = { "BulletMesh", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterTurretSettings, BulletMesh), Z_Construct_UClass_UStaticMesh, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletMesh_MetaData), NewProp_BulletMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_BulletMaterialOverride = { "BulletMaterialOverride", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterTurretSettings, BulletMaterialOverride), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletMaterialOverride_MetaData), NewProp_BulletMaterialOverride_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BulletMeshScale = { "BulletMeshScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterTurretSettings, BulletMeshScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletMeshScale_MetaData), NewProp_BulletMeshScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BulletMeshRotationOffset = { "BulletMeshRotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterTurretSettings, BulletMeshRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletMeshRotationOffset_MetaData), NewProp_BulletMeshRotationOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_BulletVisualSpeed = { "BulletVisualSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterTurretSettings, BulletVisualSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletVisualSpeed_MetaData), NewProp_BulletVisualSpeed_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_BulletVisualPoolSize = { "BulletVisualPoolSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterTurretSettings, BulletVisualPoolSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletVisualPoolSize_MetaData), NewProp_BulletVisualPoolSize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_MuzzleCascade = { "MuzzleCascade", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterTurretSettings, MuzzleCascade), Z_Construct_UClass_UParticleSystem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MuzzleCascade_MetaData), NewProp_MuzzleCascade_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_MuzzleNiagara = { "MuzzleNiagara", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterTurretSettings, MuzzleNiagara), Z_Construct_UClass_UNiagaraSystem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MuzzleNiagara_MetaData), NewProp_MuzzleNiagara_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ImpactCascade = { "ImpactCascade", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterTurretSettings, ImpactCascade), Z_Construct_UClass_UParticleSystem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactCascade_MetaData), NewProp_ImpactCascade_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ImpactNiagara = { "ImpactNiagara", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterTurretSettings, ImpactNiagara), Z_Construct_UClass_UNiagaraSystem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactNiagara_MetaData), NewProp_ImpactNiagara_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterTurretSettings, FireSound), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireSound_MetaData), NewProp_FireSound_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_FireSoundVolumeMultiplier = { "FireSoundVolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterTurretSettings, FireSoundVolumeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireSoundVolumeMultiplier_MetaData), NewProp_FireSoundVolumeMultiplier_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeHarvesterTurretSettings), &UHT_STATICS::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebug_MetaData), NewProp_bDrawDebug_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableDefensiveTurret,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bPrioritizeInfantry,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAllowTargetEnemyHarvesters,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SearchRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetRefreshSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRequireLineOfSight,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LostSightGraceSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_YawRotationSpeedDegreesPerSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PitchRotationSpeedDegreesPerSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bLimitYawRelativeToHarvester,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaximumYawOffsetDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinimumPitchDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaximumPitchDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FireAlignmentToleranceDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DamagePerShot,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaximumRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoundsPerMinute,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpreadDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAllowFriendlyFire,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DamageTypeClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseBulletMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BulletMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BulletMaterialOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BulletMeshScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BulletMeshRotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BulletVisualSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BulletVisualPoolSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MuzzleCascade,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MuzzleNiagara,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ImpactCascade,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ImpactNiagara,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FireSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FireSoundVolumeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDrawDebug,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRenegadeHarvesterTurretSettings Property Definitions ***************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	&NewStructOps,
	"RenegadeHarvesterTurretSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRenegadeHarvesterTurretSettings>(),
	alignof(FRenegadeHarvesterTurretSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRenegadeHarvesterTurretSettings;
UScriptStruct* Z_Construct_UScriptStruct_FRenegadeHarvesterTurretSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRenegadeHarvesterTurretSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRenegadeHarvesterTurretSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenegadeHarvesterTurretSettings, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("RenegadeHarvesterTurretSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FRenegadeHarvesterTurretSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRenegadeHarvesterTurretSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRenegadeHarvesterTurretSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRenegadeHarvesterTurretSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRenegadeHarvesterTurretSettings ************************************

// ********** Begin ScriptStruct FRenegadeHarvesterGroundAlignmentSettings *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRenegadeHarvesterGroundAlignmentSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRenegadeHarvesterGroundAlignmentSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRenegadeHarvesterGroundAlignmentSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableGroundAlignment_MetaData[] = {
		{ "Category", "Ground Alignment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Visually pitch/roll the Harvester body to follow uneven ground while leaving the Character capsule upright for navigation. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Visually pitch/roll the Harvester body to follow uneven ground while leaving the Character capsule upright for navigation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[] = {
		{ "Category", "Ground Alignment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Collision channel used by the four suspension-style terrain probes. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collision channel used by the four suspension-style terrain probes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrontProbeDistance_MetaData[] = {
		{ "Category", "Ground Alignment|Probe Layout" },
		{ "ClampMin", "10.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Distance forward from the Character origin used by the front-left/front-right ground probes. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance forward from the Character origin used by the front-left/front-right ground probes." },
#endif
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RearProbeDistance_MetaData[] = {
		{ "Category", "Ground Alignment|Probe Layout" },
		{ "ClampMin", "10.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Distance rearward from the Character origin used by the rear-left/rear-right ground probes. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance rearward from the Character origin used by the rear-left/rear-right ground probes." },
#endif
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HalfTrackWidth_MetaData[] = {
		{ "Category", "Ground Alignment|Probe Layout" },
		{ "ClampMin", "10.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Half-width from the vehicle centre line to each left/right probe. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Half-width from the vehicle centre line to each left/right probe." },
#endif
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceStartHeight_MetaData[] = {
		{ "Category", "Ground Alignment|Trace" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Height above each probe origin where the downward trace begins. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Height above each probe origin where the downward trace begins." },
#endif
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceDownDistance_MetaData[] = {
		{ "Category", "Ground Alignment|Trace" },
		{ "ClampMin", "10.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Distance below the vehicle origin that each ground trace may search. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance below the vehicle origin that each ground trace may search." },
#endif
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumPitchDegrees_MetaData[] = {
		{ "Category", "Ground Alignment|Rotation" },
		{ "ClampMax", "45.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum visual nose-up/nose-down angle applied to the Harvester body. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum visual nose-up/nose-down angle applied to the Harvester body." },
#endif
		{ "Units", "deg" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumRollDegrees_MetaData[] = {
		{ "Category", "Ground Alignment|Rotation" },
		{ "ClampMax", "45.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum visual side-to-side lean applied to the Harvester body. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum visual side-to-side lean applied to the Harvester body." },
#endif
		{ "Units", "deg" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationInterpSpeed_MetaData[] = {
		{ "Category", "Ground Alignment|Rotation" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Exponential interpolation speed used to smooth suspension-style pitch/roll changes. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Exponential interpolation speed used to smooth suspension-style pitch/roll changes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugGroundProbes_MetaData[] = {
		{ "Category", "Ground Alignment|Debug" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRenegadeHarvesterGroundAlignmentSettings constinit property declarations 
	static void NewProp_bEnableGroundAlignment_SetBit(void* Obj)
	{
		((FRenegadeHarvesterGroundAlignmentSettings*)Obj)->bEnableGroundAlignment = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableGroundAlignment;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrontProbeDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RearProbeDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HalfTrackWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceStartHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceDownDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumPitchDegrees;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumRollDegrees;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationInterpSpeed;
	static void NewProp_bDrawDebugGroundProbes_SetBit(void* Obj)
	{
		((FRenegadeHarvesterGroundAlignmentSettings*)Obj)->bDrawDebugGroundProbes = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugGroundProbes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRenegadeHarvesterGroundAlignmentSettings constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenegadeHarvesterGroundAlignmentSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRenegadeHarvesterGroundAlignmentSettings Property Definitions ****
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableGroundAlignment = { "bEnableGroundAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeHarvesterGroundAlignmentSettings), &UHT_STATICS::NewProp_bEnableGroundAlignment_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableGroundAlignment_MetaData), NewProp_bEnableGroundAlignment_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterGroundAlignmentSettings, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceChannel_MetaData), NewProp_TraceChannel_MetaData) }; // 3aff698625c18cc2ccaa87a587b2eac8c50cdec7
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_FrontProbeDistance = { "FrontProbeDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterGroundAlignmentSettings, FrontProbeDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrontProbeDistance_MetaData), NewProp_FrontProbeDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RearProbeDistance = { "RearProbeDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterGroundAlignmentSettings, RearProbeDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RearProbeDistance_MetaData), NewProp_RearProbeDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_HalfTrackWidth = { "HalfTrackWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterGroundAlignmentSettings, HalfTrackWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HalfTrackWidth_MetaData), NewProp_HalfTrackWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_TraceStartHeight = { "TraceStartHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterGroundAlignmentSettings, TraceStartHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceStartHeight_MetaData), NewProp_TraceStartHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_TraceDownDistance = { "TraceDownDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterGroundAlignmentSettings, TraceDownDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceDownDistance_MetaData), NewProp_TraceDownDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaximumPitchDegrees = { "MaximumPitchDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterGroundAlignmentSettings, MaximumPitchDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumPitchDegrees_MetaData), NewProp_MaximumPitchDegrees_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaximumRollDegrees = { "MaximumRollDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterGroundAlignmentSettings, MaximumRollDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumRollDegrees_MetaData), NewProp_MaximumRollDegrees_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RotationInterpSpeed = { "RotationInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterGroundAlignmentSettings, RotationInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationInterpSpeed_MetaData), NewProp_RotationInterpSpeed_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDrawDebugGroundProbes = { "bDrawDebugGroundProbes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeHarvesterGroundAlignmentSettings), &UHT_STATICS::NewProp_bDrawDebugGroundProbes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebugGroundProbes_MetaData), NewProp_bDrawDebugGroundProbes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableGroundAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FrontProbeDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RearProbeDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HalfTrackWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TraceStartHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TraceDownDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaximumPitchDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaximumRollDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RotationInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDrawDebugGroundProbes,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRenegadeHarvesterGroundAlignmentSettings Property Definitions ******
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	&NewStructOps,
	"RenegadeHarvesterGroundAlignmentSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRenegadeHarvesterGroundAlignmentSettings>(),
	alignof(FRenegadeHarvesterGroundAlignmentSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRenegadeHarvesterGroundAlignmentSettings;
UScriptStruct* Z_Construct_UScriptStruct_FRenegadeHarvesterGroundAlignmentSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRenegadeHarvesterGroundAlignmentSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRenegadeHarvesterGroundAlignmentSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenegadeHarvesterGroundAlignmentSettings, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("RenegadeHarvesterGroundAlignmentSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FRenegadeHarvesterGroundAlignmentSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRenegadeHarvesterGroundAlignmentSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRenegadeHarvesterGroundAlignmentSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRenegadeHarvesterGroundAlignmentSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRenegadeHarvesterGroundAlignmentSettings ***************************

// ********** Begin ScriptStruct FRenegadeHarvesterEconomySettings *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRenegadeHarvesterEconomySettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRenegadeHarvesterEconomySettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRenegadeHarvesterEconomySettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EconomyUpdateIntervalSeconds_MetaData[] = {
		{ "Category", "Economy" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.02" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fixed server economy update interval. Lower values update cargo/credits more frequently; 0.10 s is smooth without per-frame credit replication. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fixed server economy update interval. Lower values update cargo/credits more frequently; 0.10 s is smooth without per-frame credit replication." },
#endif
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CargoCapacity_MetaData[] = {
		{ "Category", "Economy" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutomaticallyGatherCargoWhileHarvesting_MetaData[] = {
		{ "Category", "Economy|Harvesting" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HarvestRateUnitsPerSecond_MetaData[] = {
		{ "Category", "Economy|Harvesting" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bAutomaticallyGatherCargoWhileHarvesting" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutomaticallyUnloadWhileDocked_MetaData[] = {
		{ "Category", "Economy|Unloading" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnloadRateUnitsPerSecond_MetaData[] = {
		{ "Category", "Economy|Unloading" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bAutomaticallyUnloadWhileDocked" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreditsPerCargoUnit_MetaData[] = {
		{ "Category", "Economy|Credits" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Team credits generated by one cargo unit. Fractional credit remainder is carried between unload ticks. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Team credits generated by one cargo unit. Fractional credit remainder is carried between unload ticks." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRenegadeHarvesterEconomySettings constinit property declarations *
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EconomyUpdateIntervalSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CargoCapacity;
	static void NewProp_bAutomaticallyGatherCargoWhileHarvesting_SetBit(void* Obj)
	{
		((FRenegadeHarvesterEconomySettings*)Obj)->bAutomaticallyGatherCargoWhileHarvesting = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomaticallyGatherCargoWhileHarvesting;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HarvestRateUnitsPerSecond;
	static void NewProp_bAutomaticallyUnloadWhileDocked_SetBit(void* Obj)
	{
		((FRenegadeHarvesterEconomySettings*)Obj)->bAutomaticallyUnloadWhileDocked = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomaticallyUnloadWhileDocked;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UnloadRateUnitsPerSecond;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CreditsPerCargoUnit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRenegadeHarvesterEconomySettings constinit property declarations ***
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenegadeHarvesterEconomySettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRenegadeHarvesterEconomySettings Property Definitions ************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_EconomyUpdateIntervalSeconds = { "EconomyUpdateIntervalSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterEconomySettings, EconomyUpdateIntervalSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EconomyUpdateIntervalSeconds_MetaData), NewProp_EconomyUpdateIntervalSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CargoCapacity = { "CargoCapacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterEconomySettings, CargoCapacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CargoCapacity_MetaData), NewProp_CargoCapacity_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAutomaticallyGatherCargoWhileHarvesting = { "bAutomaticallyGatherCargoWhileHarvesting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeHarvesterEconomySettings), &UHT_STATICS::NewProp_bAutomaticallyGatherCargoWhileHarvesting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutomaticallyGatherCargoWhileHarvesting_MetaData), NewProp_bAutomaticallyGatherCargoWhileHarvesting_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_HarvestRateUnitsPerSecond = { "HarvestRateUnitsPerSecond", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterEconomySettings, HarvestRateUnitsPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HarvestRateUnitsPerSecond_MetaData), NewProp_HarvestRateUnitsPerSecond_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAutomaticallyUnloadWhileDocked = { "bAutomaticallyUnloadWhileDocked", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeHarvesterEconomySettings), &UHT_STATICS::NewProp_bAutomaticallyUnloadWhileDocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutomaticallyUnloadWhileDocked_MetaData), NewProp_bAutomaticallyUnloadWhileDocked_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_UnloadRateUnitsPerSecond = { "UnloadRateUnitsPerSecond", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterEconomySettings, UnloadRateUnitsPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnloadRateUnitsPerSecond_MetaData), NewProp_UnloadRateUnitsPerSecond_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CreditsPerCargoUnit = { "CreditsPerCargoUnit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterEconomySettings, CreditsPerCargoUnit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreditsPerCargoUnit_MetaData), NewProp_CreditsPerCargoUnit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EconomyUpdateIntervalSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CargoCapacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAutomaticallyGatherCargoWhileHarvesting,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HarvestRateUnitsPerSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAutomaticallyUnloadWhileDocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UnloadRateUnitsPerSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CreditsPerCargoUnit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRenegadeHarvesterEconomySettings Property Definitions **************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	&NewStructOps,
	"RenegadeHarvesterEconomySettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRenegadeHarvesterEconomySettings>(),
	alignof(FRenegadeHarvesterEconomySettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRenegadeHarvesterEconomySettings;
UScriptStruct* Z_Construct_UScriptStruct_FRenegadeHarvesterEconomySettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRenegadeHarvesterEconomySettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRenegadeHarvesterEconomySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenegadeHarvesterEconomySettings, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("RenegadeHarvesterEconomySettings"));
		}
		return Z_Registration_Info_UScriptStruct_FRenegadeHarvesterEconomySettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRenegadeHarvesterEconomySettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRenegadeHarvesterEconomySettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRenegadeHarvesterEconomySettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRenegadeHarvesterEconomySettings ***********************************

// ********** Begin ScriptStruct FRenegadeHarvesterCycleSettings ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRenegadeHarvesterCycleSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRenegadeHarvesterCycleSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRenegadeHarvesterCycleSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAutomaticHarvestPointApproach_MetaData[] = {
		{ "Category", "Cycle|Harvest Point" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Automatically leave the spline and drive to the assigned Harvest Point when its approach radius is reached. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Automatically leave the spline and drive to the assigned Harvest Point when its approach radius is reached." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseHarvestPointDefinedDistances_MetaData[] = {
		{ "Category", "Cycle|Harvest Point" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, the placeable Harvest Point actor supplies approach/interaction radii. Disable to use the Harvester overrides below. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the placeable Harvest Point actor supplies approach/interaction radii. Disable to use the Harvester overrides below." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HarvestPointApproachDistance_MetaData[] = {
		{ "Category", "Cycle|Harvest Point" },
		{ "ClampMin", "100.0" },
		{ "EditCondition", "!bUseHarvestPointDefinedDistances" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HarvestPointAcceptanceDistance_MetaData[] = {
		{ "Category", "Cycle|Harvest Point" },
		{ "ClampMin", "25.0" },
		{ "EditCondition", "!bUseHarvestPointDefinedDistances" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HarvestArrivalDelaySeconds_MetaData[] = {
		{ "Category", "Cycle|Harvest Timing" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Wait after arriving at the field before harvesting begins. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wait after arriving at the field before harvesting begins." },
#endif
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HarvestDurationSeconds_MetaData[] = {
		{ "Category", "Cycle|Harvest Timing" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Total automatic harvesting time. Zero means harvest until cargo is full or End Harvesting is called manually. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Total automatic harvesting time. Zero means harvest until cargo is full or End Harvesting is called manually." },
#endif
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFinishHarvestWhenCargoFull_MetaData[] = {
		{ "Category", "Cycle|Harvest Timing" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostHarvestDepartureDelaySeconds_MetaData[] = {
		{ "Category", "Cycle|Harvest Timing" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delay after harvesting ends before the Spline AI movement claim is released for the return journey. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delay after harvesting ends before the Spline AI movement claim is released for the return journey." },
#endif
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAutomaticRefineryDocking_MetaData[] = {
		{ "Category", "Cycle|Refinery" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Automatically perform the final MoveTo from the return spline into the owning Refinery's HarvesterDock point. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Automatically perform the final MoveTo from the return spline into the owning Refinery's HarvesterDock point." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefineryDockApproachDistance_MetaData[] = {
		{ "Category", "Cycle|Refinery" },
		{ "ClampMin", "100.0" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefineryDockAcceptanceDistance_MetaData[] = {
		{ "Category", "Cycle|Refinery" },
		{ "ClampMin", "25.0" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnloadStartDelaySeconds_MetaData[] = {
		{ "Category", "Cycle|Refinery Timing" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Wait after physically reaching the dock before unloading starts. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wait after physically reaching the dock before unloading starts." },
#endif
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnloadDurationSeconds_MetaData[] = {
		{ "Category", "Cycle|Refinery Timing" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum automatic unload time. Zero means unload until cargo reaches zero. Remaining cargo is deposited when this timer expires. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum automatic unload time. Zero means unload until cargo reaches zero. Remaining cargo is deposited when this timer expires." },
#endif
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFinishUnloadWhenCargoEmpty_MetaData[] = {
		{ "Category", "Cycle|Refinery Timing" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostUnloadDepartureDelaySeconds_MetaData[] = {
		{ "Category", "Cycle|Refinery Timing" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Keeps the Harvester at the dock briefly after unloading before its spline is released again. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Keeps the Harvester at the dock briefly after unloading before its spline is released again." },
#endif
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDirectNavigationFallback_MetaData[] = {
		{ "Category", "Cycle|Direct Navigation Fallback" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When no usable RenegadeSplineFollower route is assigned, navigate directly between Harvest Point and Refinery Dock Point. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When no usable RenegadeSplineFollower route is assigned, navigate directly between Harvest Point and Refinery Dock Point." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectNavigationFallbackDelaySeconds_MetaData[] = {
		{ "Category", "Cycle|Direct Navigation Fallback" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Small grace period after BeginPlay before deciding no spline route exists, allowing spawn hooks to assign/start one. */" },
#endif
		{ "EditCondition", "bEnableDirectNavigationFallback" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Small grace period after BeginPlay before deciding no spline route exists, allowing spawn hooks to assign/start one." },
#endif
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementRetrySeconds_MetaData[] = {
		{ "Category", "Cycle|Movement" },
		{ "ClampMax", "5.0" },
		{ "ClampMin", "0.10" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reissues direct/final approach MoveTo at this interval if navigation is interrupted. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reissues direct/final approach MoveTo at this interval if navigation is interrupted." },
#endif
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSplineExternalMovementClaim_MetaData[] = {
		{ "Category", "Cycle|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cooperates with RenegadeSplineAI through its external movement claim API when that component is present. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cooperates with RenegadeSplineAI through its external movement claim API when that component is present." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineMovementClaimName_MetaData[] = {
		{ "Category", "Cycle|Movement" },
		{ "EditCondition", "bUseSplineExternalMovementClaim" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineResumeDelaySeconds_MetaData[] = {
		{ "Category", "Cycle|Movement" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bUseSplineExternalMovementClaim" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
		{ "Units", "s" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRenegadeHarvesterCycleSettings constinit property declarations ***
	static void NewProp_bEnableAutomaticHarvestPointApproach_SetBit(void* Obj)
	{
		((FRenegadeHarvesterCycleSettings*)Obj)->bEnableAutomaticHarvestPointApproach = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAutomaticHarvestPointApproach;
	static void NewProp_bUseHarvestPointDefinedDistances_SetBit(void* Obj)
	{
		((FRenegadeHarvesterCycleSettings*)Obj)->bUseHarvestPointDefinedDistances = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHarvestPointDefinedDistances;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HarvestPointApproachDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HarvestPointAcceptanceDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HarvestArrivalDelaySeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HarvestDurationSeconds;
	static void NewProp_bFinishHarvestWhenCargoFull_SetBit(void* Obj)
	{
		((FRenegadeHarvesterCycleSettings*)Obj)->bFinishHarvestWhenCargoFull = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFinishHarvestWhenCargoFull;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PostHarvestDepartureDelaySeconds;
	static void NewProp_bEnableAutomaticRefineryDocking_SetBit(void* Obj)
	{
		((FRenegadeHarvesterCycleSettings*)Obj)->bEnableAutomaticRefineryDocking = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAutomaticRefineryDocking;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RefineryDockApproachDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RefineryDockAcceptanceDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UnloadStartDelaySeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UnloadDurationSeconds;
	static void NewProp_bFinishUnloadWhenCargoEmpty_SetBit(void* Obj)
	{
		((FRenegadeHarvesterCycleSettings*)Obj)->bFinishUnloadWhenCargoEmpty = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFinishUnloadWhenCargoEmpty;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PostUnloadDepartureDelaySeconds;
	static void NewProp_bEnableDirectNavigationFallback_SetBit(void* Obj)
	{
		((FRenegadeHarvesterCycleSettings*)Obj)->bEnableDirectNavigationFallback = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDirectNavigationFallback;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DirectNavigationFallbackDelaySeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementRetrySeconds;
	static void NewProp_bUseSplineExternalMovementClaim_SetBit(void* Obj)
	{
		((FRenegadeHarvesterCycleSettings*)Obj)->bUseSplineExternalMovementClaim = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSplineExternalMovementClaim;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SplineMovementClaimName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SplineResumeDelaySeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRenegadeHarvesterCycleSettings constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenegadeHarvesterCycleSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRenegadeHarvesterCycleSettings Property Definitions **************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableAutomaticHarvestPointApproach = { "bEnableAutomaticHarvestPointApproach", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeHarvesterCycleSettings), &UHT_STATICS::NewProp_bEnableAutomaticHarvestPointApproach_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableAutomaticHarvestPointApproach_MetaData), NewProp_bEnableAutomaticHarvestPointApproach_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseHarvestPointDefinedDistances = { "bUseHarvestPointDefinedDistances", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeHarvesterCycleSettings), &UHT_STATICS::NewProp_bUseHarvestPointDefinedDistances_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseHarvestPointDefinedDistances_MetaData), NewProp_bUseHarvestPointDefinedDistances_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_HarvestPointApproachDistance = { "HarvestPointApproachDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterCycleSettings, HarvestPointApproachDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HarvestPointApproachDistance_MetaData), NewProp_HarvestPointApproachDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_HarvestPointAcceptanceDistance = { "HarvestPointAcceptanceDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterCycleSettings, HarvestPointAcceptanceDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HarvestPointAcceptanceDistance_MetaData), NewProp_HarvestPointAcceptanceDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_HarvestArrivalDelaySeconds = { "HarvestArrivalDelaySeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterCycleSettings, HarvestArrivalDelaySeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HarvestArrivalDelaySeconds_MetaData), NewProp_HarvestArrivalDelaySeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_HarvestDurationSeconds = { "HarvestDurationSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterCycleSettings, HarvestDurationSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HarvestDurationSeconds_MetaData), NewProp_HarvestDurationSeconds_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFinishHarvestWhenCargoFull = { "bFinishHarvestWhenCargoFull", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeHarvesterCycleSettings), &UHT_STATICS::NewProp_bFinishHarvestWhenCargoFull_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFinishHarvestWhenCargoFull_MetaData), NewProp_bFinishHarvestWhenCargoFull_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_PostHarvestDepartureDelaySeconds = { "PostHarvestDepartureDelaySeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterCycleSettings, PostHarvestDepartureDelaySeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostHarvestDepartureDelaySeconds_MetaData), NewProp_PostHarvestDepartureDelaySeconds_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableAutomaticRefineryDocking = { "bEnableAutomaticRefineryDocking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeHarvesterCycleSettings), &UHT_STATICS::NewProp_bEnableAutomaticRefineryDocking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableAutomaticRefineryDocking_MetaData), NewProp_bEnableAutomaticRefineryDocking_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RefineryDockApproachDistance = { "RefineryDockApproachDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterCycleSettings, RefineryDockApproachDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefineryDockApproachDistance_MetaData), NewProp_RefineryDockApproachDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RefineryDockAcceptanceDistance = { "RefineryDockAcceptanceDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterCycleSettings, RefineryDockAcceptanceDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefineryDockAcceptanceDistance_MetaData), NewProp_RefineryDockAcceptanceDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_UnloadStartDelaySeconds = { "UnloadStartDelaySeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterCycleSettings, UnloadStartDelaySeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnloadStartDelaySeconds_MetaData), NewProp_UnloadStartDelaySeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_UnloadDurationSeconds = { "UnloadDurationSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterCycleSettings, UnloadDurationSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnloadDurationSeconds_MetaData), NewProp_UnloadDurationSeconds_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFinishUnloadWhenCargoEmpty = { "bFinishUnloadWhenCargoEmpty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeHarvesterCycleSettings), &UHT_STATICS::NewProp_bFinishUnloadWhenCargoEmpty_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFinishUnloadWhenCargoEmpty_MetaData), NewProp_bFinishUnloadWhenCargoEmpty_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_PostUnloadDepartureDelaySeconds = { "PostUnloadDepartureDelaySeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterCycleSettings, PostUnloadDepartureDelaySeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostUnloadDepartureDelaySeconds_MetaData), NewProp_PostUnloadDepartureDelaySeconds_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableDirectNavigationFallback = { "bEnableDirectNavigationFallback", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeHarvesterCycleSettings), &UHT_STATICS::NewProp_bEnableDirectNavigationFallback_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDirectNavigationFallback_MetaData), NewProp_bEnableDirectNavigationFallback_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DirectNavigationFallbackDelaySeconds = { "DirectNavigationFallbackDelaySeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterCycleSettings, DirectNavigationFallbackDelaySeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectNavigationFallbackDelaySeconds_MetaData), NewProp_DirectNavigationFallbackDelaySeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MovementRetrySeconds = { "MovementRetrySeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterCycleSettings, MovementRetrySeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementRetrySeconds_MetaData), NewProp_MovementRetrySeconds_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseSplineExternalMovementClaim = { "bUseSplineExternalMovementClaim", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeHarvesterCycleSettings), &UHT_STATICS::NewProp_bUseSplineExternalMovementClaim_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSplineExternalMovementClaim_MetaData), NewProp_bUseSplineExternalMovementClaim_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_SplineMovementClaimName = { "SplineMovementClaimName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterCycleSettings, SplineMovementClaimName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineMovementClaimName_MetaData), NewProp_SplineMovementClaimName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_SplineResumeDelaySeconds = { "SplineResumeDelaySeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterCycleSettings, SplineResumeDelaySeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineResumeDelaySeconds_MetaData), NewProp_SplineResumeDelaySeconds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableAutomaticHarvestPointApproach,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseHarvestPointDefinedDistances,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HarvestPointApproachDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HarvestPointAcceptanceDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HarvestArrivalDelaySeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HarvestDurationSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bFinishHarvestWhenCargoFull,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PostHarvestDepartureDelaySeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableAutomaticRefineryDocking,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RefineryDockApproachDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RefineryDockAcceptanceDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UnloadStartDelaySeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UnloadDurationSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bFinishUnloadWhenCargoEmpty,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PostUnloadDepartureDelaySeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableDirectNavigationFallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DirectNavigationFallbackDelaySeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MovementRetrySeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseSplineExternalMovementClaim,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SplineMovementClaimName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SplineResumeDelaySeconds,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRenegadeHarvesterCycleSettings Property Definitions ****************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	&NewStructOps,
	"RenegadeHarvesterCycleSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRenegadeHarvesterCycleSettings>(),
	alignof(FRenegadeHarvesterCycleSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRenegadeHarvesterCycleSettings;
UScriptStruct* Z_Construct_UScriptStruct_FRenegadeHarvesterCycleSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRenegadeHarvesterCycleSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRenegadeHarvesterCycleSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenegadeHarvesterCycleSettings, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("RenegadeHarvesterCycleSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FRenegadeHarvesterCycleSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRenegadeHarvesterCycleSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRenegadeHarvesterCycleSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRenegadeHarvesterCycleSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRenegadeHarvesterCycleSettings *************************************

// ********** Begin ScriptStruct FRenegadeHarvesterEvaSoundSet *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRenegadeHarvesterEvaSoundSet_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRenegadeHarvesterEvaSoundSet>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRenegadeHarvesterEvaSoundSet); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GDIFriendlyHarvesterSound_MetaData[] = {
		{ "Category", "GDI EVA" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GDIEnemyHarvesterSound_MetaData[] = {
		{ "Category", "GDI EVA" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodFriendlyHarvesterSound_MetaData[] = {
		{ "Category", "Nod EVA" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodEnemyHarvesterSound_MetaData[] = {
		{ "Category", "Nod EVA" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRenegadeHarvesterEvaSoundSet constinit property declarations *****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GDIFriendlyHarvesterSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GDIEnemyHarvesterSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodFriendlyHarvesterSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodEnemyHarvesterSound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRenegadeHarvesterEvaSoundSet constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenegadeHarvesterEvaSoundSet>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRenegadeHarvesterEvaSoundSet Property Definitions ****************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_GDIFriendlyHarvesterSound = { "GDIFriendlyHarvesterSound", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterEvaSoundSet, GDIFriendlyHarvesterSound), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GDIFriendlyHarvesterSound_MetaData), NewProp_GDIFriendlyHarvesterSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_GDIEnemyHarvesterSound = { "GDIEnemyHarvesterSound", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterEvaSoundSet, GDIEnemyHarvesterSound), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GDIEnemyHarvesterSound_MetaData), NewProp_GDIEnemyHarvesterSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_NodFriendlyHarvesterSound = { "NodFriendlyHarvesterSound", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterEvaSoundSet, NodFriendlyHarvesterSound), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodFriendlyHarvesterSound_MetaData), NewProp_NodFriendlyHarvesterSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_NodEnemyHarvesterSound = { "NodEnemyHarvesterSound", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterEvaSoundSet, NodEnemyHarvesterSound), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodEnemyHarvesterSound_MetaData), NewProp_NodEnemyHarvesterSound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GDIFriendlyHarvesterSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GDIEnemyHarvesterSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NodFriendlyHarvesterSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NodEnemyHarvesterSound,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRenegadeHarvesterEvaSoundSet Property Definitions ******************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	&NewStructOps,
	"RenegadeHarvesterEvaSoundSet",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRenegadeHarvesterEvaSoundSet>(),
	alignof(FRenegadeHarvesterEvaSoundSet),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRenegadeHarvesterEvaSoundSet;
UScriptStruct* Z_Construct_UScriptStruct_FRenegadeHarvesterEvaSoundSet(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRenegadeHarvesterEvaSoundSet.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRenegadeHarvesterEvaSoundSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenegadeHarvesterEvaSoundSet, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("RenegadeHarvesterEvaSoundSet"));
		}
		return Z_Registration_Info_UScriptStruct_FRenegadeHarvesterEvaSoundSet.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRenegadeHarvesterEvaSoundSet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRenegadeHarvesterEvaSoundSet.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRenegadeHarvesterEvaSoundSet.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRenegadeHarvesterEvaSoundSet ***************************************

// ********** Begin ScriptStruct FRenegadeHarvesterAudioSettings ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRenegadeHarvesterAudioSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRenegadeHarvesterAudioSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRenegadeHarvesterAudioSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseTeamAwareEvaSounds_MetaData[] = {
		{ "Category", "Harvester EVA" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnderAttackEvaSounds_MetaData[] = {
		{ "Category", "Harvester EVA|Under Attack" },
		{ "EditCondition", "bUseTeamAwareEvaSounds" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnderAttackSound_MetaData[] = {
		{ "Category", "Harvester EVA|Under Attack" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnderAttackCooldownSeconds_MetaData[] = {
		{ "Category", "Harvester EVA|Under Attack" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnderAttackVolumeMultiplier_MetaData[] = {
		{ "Category", "Harvester EVA|Under Attack" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CriticalEvaSounds_MetaData[] = {
		{ "Category", "Harvester EVA|Critical" },
		{ "EditCondition", "bUseTeamAwareEvaSounds" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CriticalHealthSound_MetaData[] = {
		{ "Category", "Harvester EVA|Critical" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestroyedEvaSounds_MetaData[] = {
		{ "Category", "Harvester EVA|Destroyed" },
		{ "EditCondition", "bUseTeamAwareEvaSounds" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestroyedSound_MetaData[] = {
		{ "Category", "Harvester EVA|Destroyed" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestroyedSoundVolumeMultiplier_MetaData[] = {
		{ "Category", "Harvester EVA|Destroyed" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attenuation_MetaData[] = {
		{ "Category", "Harvester EVA|Playback" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Concurrency_MetaData[] = {
		{ "Category", "Harvester EVA|Playback" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRenegadeHarvesterAudioSettings constinit property declarations ***
	static void NewProp_bUseTeamAwareEvaSounds_SetBit(void* Obj)
	{
		((FRenegadeHarvesterAudioSettings*)Obj)->bUseTeamAwareEvaSounds = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTeamAwareEvaSounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UnderAttackEvaSounds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnderAttackSound;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UnderAttackCooldownSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UnderAttackVolumeMultiplier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CriticalEvaSounds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CriticalHealthSound;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DestroyedEvaSounds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestroyedSound;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DestroyedSoundVolumeMultiplier;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Attenuation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Concurrency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRenegadeHarvesterAudioSettings constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenegadeHarvesterAudioSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRenegadeHarvesterAudioSettings Property Definitions **************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseTeamAwareEvaSounds = { "bUseTeamAwareEvaSounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeHarvesterAudioSettings), &UHT_STATICS::NewProp_bUseTeamAwareEvaSounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseTeamAwareEvaSounds_MetaData), NewProp_bUseTeamAwareEvaSounds_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_UnderAttackEvaSounds = { "UnderAttackEvaSounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterAudioSettings, UnderAttackEvaSounds), Z_Construct_UScriptStruct_FRenegadeHarvesterEvaSoundSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnderAttackEvaSounds_MetaData), NewProp_UnderAttackEvaSounds_MetaData) }; // 3f710da7be56d5cab4a783d9fb28c267c0ae9408
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_UnderAttackSound = { "UnderAttackSound", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterAudioSettings, UnderAttackSound), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnderAttackSound_MetaData), NewProp_UnderAttackSound_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_UnderAttackCooldownSeconds = { "UnderAttackCooldownSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterAudioSettings, UnderAttackCooldownSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnderAttackCooldownSeconds_MetaData), NewProp_UnderAttackCooldownSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_UnderAttackVolumeMultiplier = { "UnderAttackVolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterAudioSettings, UnderAttackVolumeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnderAttackVolumeMultiplier_MetaData), NewProp_UnderAttackVolumeMultiplier_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CriticalEvaSounds = { "CriticalEvaSounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterAudioSettings, CriticalEvaSounds), Z_Construct_UScriptStruct_FRenegadeHarvesterEvaSoundSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CriticalEvaSounds_MetaData), NewProp_CriticalEvaSounds_MetaData) }; // 3f710da7be56d5cab4a783d9fb28c267c0ae9408
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CriticalHealthSound = { "CriticalHealthSound", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterAudioSettings, CriticalHealthSound), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CriticalHealthSound_MetaData), NewProp_CriticalHealthSound_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_DestroyedEvaSounds = { "DestroyedEvaSounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterAudioSettings, DestroyedEvaSounds), Z_Construct_UScriptStruct_FRenegadeHarvesterEvaSoundSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestroyedEvaSounds_MetaData), NewProp_DestroyedEvaSounds_MetaData) }; // 3f710da7be56d5cab4a783d9fb28c267c0ae9408
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DestroyedSound = { "DestroyedSound", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterAudioSettings, DestroyedSound), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestroyedSound_MetaData), NewProp_DestroyedSound_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DestroyedSoundVolumeMultiplier = { "DestroyedSoundVolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterAudioSettings, DestroyedSoundVolumeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestroyedSoundVolumeMultiplier_MetaData), NewProp_DestroyedSoundVolumeMultiplier_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Attenuation = { "Attenuation", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterAudioSettings, Attenuation), Z_Construct_UClass_USoundAttenuation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attenuation_MetaData), NewProp_Attenuation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Concurrency = { "Concurrency", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterAudioSettings, Concurrency), Z_Construct_UClass_USoundConcurrency, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Concurrency_MetaData), NewProp_Concurrency_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseTeamAwareEvaSounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UnderAttackEvaSounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UnderAttackSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UnderAttackCooldownSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UnderAttackVolumeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CriticalEvaSounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CriticalHealthSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DestroyedEvaSounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DestroyedSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DestroyedSoundVolumeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Attenuation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Concurrency,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRenegadeHarvesterAudioSettings Property Definitions ****************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	&NewStructOps,
	"RenegadeHarvesterAudioSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRenegadeHarvesterAudioSettings>(),
	alignof(FRenegadeHarvesterAudioSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRenegadeHarvesterAudioSettings;
UScriptStruct* Z_Construct_UScriptStruct_FRenegadeHarvesterAudioSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRenegadeHarvesterAudioSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRenegadeHarvesterAudioSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenegadeHarvesterAudioSettings, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("RenegadeHarvesterAudioSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FRenegadeHarvesterAudioSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRenegadeHarvesterAudioSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRenegadeHarvesterAudioSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRenegadeHarvesterAudioSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRenegadeHarvesterAudioSettings *************************************

// ********** Begin ScriptStruct FRenegadeHarvesterDestructionSettings *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRenegadeHarvesterDestructionSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRenegadeHarvesterDestructionSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRenegadeHarvesterDestructionSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionCascade_MetaData[] = {
		{ "Category", "Destruction|Explosion" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionNiagara_MetaData[] = {
		{ "Category", "Destruction|Explosion" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionSound_MetaData[] = {
		{ "Category", "Destruction|Explosion" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestroyedWreckStaticMesh_MetaData[] = {
		{ "Category", "Destruction|Wreck" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestroyedWreckSkeletalMesh_MetaData[] = {
		{ "Category", "Destruction|Wreck" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WreckRelativeLocation_MetaData[] = {
		{ "Category", "Destruction|Wreck" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WreckRelativeRotation_MetaData[] = {
		{ "Category", "Destruction|Wreck" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WreckScale_MetaData[] = {
		{ "Category", "Destruction|Wreck" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WreckCleanupSeconds_MetaData[] = {
		{ "Category", "Destruction|Wreck" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Seconds before the old destroyed Harvester wreck and its smoke are cleaned up. Zero keeps the wreck indefinitely. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Seconds before the old destroyed Harvester wreck and its smoke are cleaned up. Zero keeps the wreck indefinitely." },
#endif
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableWreckCollision_MetaData[] = {
		{ "Category", "Destruction|Wreck" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WreckCollisionProfileName_MetaData[] = {
		{ "Category", "Destruction|Wreck" },
		{ "EditCondition", "bEnableWreckCollision" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WreckSmokeCascade_MetaData[] = {
		{ "Category", "Destruction|Wreck|Smoke" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WreckSmokeNiagara_MetaData[] = {
		{ "Category", "Destruction|Wreck|Smoke" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WreckSmokeRelativeLocation_MetaData[] = {
		{ "Category", "Destruction|Wreck|Smoke" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRenegadeHarvesterDestructionSettings constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExplosionCascade;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExplosionNiagara;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExplosionSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestroyedWreckStaticMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestroyedWreckSkeletalMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WreckRelativeLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WreckRelativeRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WreckScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WreckCleanupSeconds;
	static void NewProp_bEnableWreckCollision_SetBit(void* Obj)
	{
		((FRenegadeHarvesterDestructionSettings*)Obj)->bEnableWreckCollision = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableWreckCollision;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WreckCollisionProfileName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WreckSmokeCascade;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WreckSmokeNiagara;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WreckSmokeRelativeLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRenegadeHarvesterDestructionSettings constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenegadeHarvesterDestructionSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRenegadeHarvesterDestructionSettings Property Definitions ********
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ExplosionCascade = { "ExplosionCascade", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterDestructionSettings, ExplosionCascade), Z_Construct_UClass_UParticleSystem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionCascade_MetaData), NewProp_ExplosionCascade_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ExplosionNiagara = { "ExplosionNiagara", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterDestructionSettings, ExplosionNiagara), Z_Construct_UClass_UNiagaraSystem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionNiagara_MetaData), NewProp_ExplosionNiagara_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ExplosionSound = { "ExplosionSound", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterDestructionSettings, ExplosionSound), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionSound_MetaData), NewProp_ExplosionSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DestroyedWreckStaticMesh = { "DestroyedWreckStaticMesh", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterDestructionSettings, DestroyedWreckStaticMesh), Z_Construct_UClass_UStaticMesh, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestroyedWreckStaticMesh_MetaData), NewProp_DestroyedWreckStaticMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DestroyedWreckSkeletalMesh = { "DestroyedWreckSkeletalMesh", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterDestructionSettings, DestroyedWreckSkeletalMesh), Z_Construct_UClass_USkeletalMesh, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestroyedWreckSkeletalMesh_MetaData), NewProp_DestroyedWreckSkeletalMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WreckRelativeLocation = { "WreckRelativeLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterDestructionSettings, WreckRelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WreckRelativeLocation_MetaData), NewProp_WreckRelativeLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WreckRelativeRotation = { "WreckRelativeRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterDestructionSettings, WreckRelativeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WreckRelativeRotation_MetaData), NewProp_WreckRelativeRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WreckScale = { "WreckScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterDestructionSettings, WreckScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WreckScale_MetaData), NewProp_WreckScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_WreckCleanupSeconds = { "WreckCleanupSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterDestructionSettings, WreckCleanupSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WreckCleanupSeconds_MetaData), NewProp_WreckCleanupSeconds_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableWreckCollision = { "bEnableWreckCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenegadeHarvesterDestructionSettings), &UHT_STATICS::NewProp_bEnableWreckCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableWreckCollision_MetaData), NewProp_bEnableWreckCollision_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_WreckCollisionProfileName = { "WreckCollisionProfileName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterDestructionSettings, WreckCollisionProfileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WreckCollisionProfileName_MetaData), NewProp_WreckCollisionProfileName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WreckSmokeCascade = { "WreckSmokeCascade", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterDestructionSettings, WreckSmokeCascade), Z_Construct_UClass_UParticleSystem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WreckSmokeCascade_MetaData), NewProp_WreckSmokeCascade_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WreckSmokeNiagara = { "WreckSmokeNiagara", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterDestructionSettings, WreckSmokeNiagara), Z_Construct_UClass_UNiagaraSystem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WreckSmokeNiagara_MetaData), NewProp_WreckSmokeNiagara_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WreckSmokeRelativeLocation = { "WreckSmokeRelativeLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeHarvesterDestructionSettings, WreckSmokeRelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WreckSmokeRelativeLocation_MetaData), NewProp_WreckSmokeRelativeLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExplosionCascade,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExplosionNiagara,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExplosionSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DestroyedWreckStaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DestroyedWreckSkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WreckRelativeLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WreckRelativeRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WreckScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WreckCleanupSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableWreckCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WreckCollisionProfileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WreckSmokeCascade,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WreckSmokeNiagara,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WreckSmokeRelativeLocation,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRenegadeHarvesterDestructionSettings Property Definitions **********
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	&NewStructOps,
	"RenegadeHarvesterDestructionSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRenegadeHarvesterDestructionSettings>(),
	alignof(FRenegadeHarvesterDestructionSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRenegadeHarvesterDestructionSettings;
UScriptStruct* Z_Construct_UScriptStruct_FRenegadeHarvesterDestructionSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRenegadeHarvesterDestructionSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRenegadeHarvesterDestructionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenegadeHarvesterDestructionSettings, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("RenegadeHarvesterDestructionSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FRenegadeHarvesterDestructionSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRenegadeHarvesterDestructionSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRenegadeHarvesterDestructionSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRenegadeHarvesterDestructionSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRenegadeHarvesterDestructionSettings *******************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeHarvesterCombatTypes_h__Script_RenegadeSoldierCombat_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeHarvesterLifecycleState, TEXT("ERenegadeHarvesterLifecycleState"), &ZRIE_ERenegadeHarvesterLifecycleState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 809285247U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FRenegadeHarvesterHealthSettings, Z_Construct_UScriptStruct_FRenegadeHarvesterHealthSettings_Statics::NewStructOps, TEXT("RenegadeHarvesterHealthSettings"),&Z_Registration_Info_UScriptStruct_FRenegadeHarvesterHealthSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenegadeHarvesterHealthSettings), 2725924992U) },
		{ Z_Construct_UScriptStruct_FRenegadeHarvesterTargetSettings, Z_Construct_UScriptStruct_FRenegadeHarvesterTargetSettings_Statics::NewStructOps, TEXT("RenegadeHarvesterTargetSettings"),&Z_Registration_Info_UScriptStruct_FRenegadeHarvesterTargetSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenegadeHarvesterTargetSettings), 3176095179U) },
		{ Z_Construct_UScriptStruct_FRenegadeHarvesterTurretSettings, Z_Construct_UScriptStruct_FRenegadeHarvesterTurretSettings_Statics::NewStructOps, TEXT("RenegadeHarvesterTurretSettings"),&Z_Registration_Info_UScriptStruct_FRenegadeHarvesterTurretSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenegadeHarvesterTurretSettings), 1324532029U) },
		{ Z_Construct_UScriptStruct_FRenegadeHarvesterGroundAlignmentSettings, Z_Construct_UScriptStruct_FRenegadeHarvesterGroundAlignmentSettings_Statics::NewStructOps, TEXT("RenegadeHarvesterGroundAlignmentSettings"),&Z_Registration_Info_UScriptStruct_FRenegadeHarvesterGroundAlignmentSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenegadeHarvesterGroundAlignmentSettings), 1092262813U) },
		{ Z_Construct_UScriptStruct_FRenegadeHarvesterEconomySettings, Z_Construct_UScriptStruct_FRenegadeHarvesterEconomySettings_Statics::NewStructOps, TEXT("RenegadeHarvesterEconomySettings"),&Z_Registration_Info_UScriptStruct_FRenegadeHarvesterEconomySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenegadeHarvesterEconomySettings), 2328356167U) },
		{ Z_Construct_UScriptStruct_FRenegadeHarvesterCycleSettings, Z_Construct_UScriptStruct_FRenegadeHarvesterCycleSettings_Statics::NewStructOps, TEXT("RenegadeHarvesterCycleSettings"),&Z_Registration_Info_UScriptStruct_FRenegadeHarvesterCycleSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenegadeHarvesterCycleSettings), 4065405801U) },
		{ Z_Construct_UScriptStruct_FRenegadeHarvesterEvaSoundSet, Z_Construct_UScriptStruct_FRenegadeHarvesterEvaSoundSet_Statics::NewStructOps, TEXT("RenegadeHarvesterEvaSoundSet"),&Z_Registration_Info_UScriptStruct_FRenegadeHarvesterEvaSoundSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenegadeHarvesterEvaSoundSet), 1064373671U) },
		{ Z_Construct_UScriptStruct_FRenegadeHarvesterAudioSettings, Z_Construct_UScriptStruct_FRenegadeHarvesterAudioSettings_Statics::NewStructOps, TEXT("RenegadeHarvesterAudioSettings"),&Z_Registration_Info_UScriptStruct_FRenegadeHarvesterAudioSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenegadeHarvesterAudioSettings), 1916791023U) },
		{ Z_Construct_UScriptStruct_FRenegadeHarvesterDestructionSettings, Z_Construct_UScriptStruct_FRenegadeHarvesterDestructionSettings_Statics::NewStructOps, TEXT("RenegadeHarvesterDestructionSettings"),&Z_Registration_Info_UScriptStruct_FRenegadeHarvesterDestructionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenegadeHarvesterDestructionSettings), 1182825351U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeHarvesterCombatTypes_h__Script_RenegadeSoldierCombat_afae39976258d8966df6e59515b478c7e0dce8b4{
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
