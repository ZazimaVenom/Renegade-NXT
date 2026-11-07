// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RenegadeHarvesterCombatComponent.h"
#include "Engine/EngineTypes.h"
#include "Engine/NetSerialization.h"
#include "RenegadeHarvesterCombatTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRenegadeHarvesterCombatComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UActorComponent(ETypeConstructPhase);
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference(ETypeConstructPhase);
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AController(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UDamageType(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USceneComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UEnum* Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeHarvesterLifecycleState(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeHarvesterAudioSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterCargoChangedSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_URenegadeHarvesterCombatComponent(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterCreditsDeliveredSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeHarvesterCycleSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterDestroyedSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeHarvesterDestructionSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterDockPointSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeHarvesterEconomySettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeHarvesterGroundAlignmentSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterHarvestPointSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterHealthChangedSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeHarvesterHealthSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterLifecycleChangedSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterSimpleLifecycleSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterTargetChangedSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeHarvesterTargetSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterTurretFiredSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeHarvesterTurretSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterUnderAttackSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_URenegadeBuildingCombatComponent(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_ARenegadeHarvestPoint(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_URenegadeHarvesterCombatComponent(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_ARenegadeHarvesterWreck(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_ARenegadeRefineryDockPoint(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_ARenegadeTeamCreditsManager(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Delegate FRenegadeHarvesterHealthChangedSignature ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterHealthChangedSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadeHarvesterHealthChangedSignature_Parms
	{
		float PreviousHealth;
		float NewHealth;
		AActor* DamageCauser;
		AController* InstigatedBy;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeHarvesterHealthChangedSignature constinit property declarations 
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviousHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealth;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeHarvesterHealthChangedSignature constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeHarvesterHealthChangedSignature Property Definitions *********
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_PreviousHealth = { "PreviousHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeHarvesterHealthChangedSignature_Parms, PreviousHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeHarvesterHealthChangedSignature_Parms, NewHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeHarvesterHealthChangedSignature_Parms, DamageCauser), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeHarvesterHealthChangedSignature_Parms, InstigatedBy), Z_Construct_UClass_AController, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviousHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DamageCauser,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InstigatedBy,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeHarvesterHealthChangedSignature Property Definitions ***********
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeHarvesterHealthChangedSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeHarvesterHealthChangedSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeHarvesterHealthChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterHealthChangedSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeHarvesterHealthChangedSignature ********************************

// ********** Begin Delegate FRenegadeHarvesterUnderAttackSignature ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterUnderAttackSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadeHarvesterUnderAttackSignature_Parms
	{
		AActor* Attacker;
		float Damage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeHarvesterUnderAttackSignature constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Attacker;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeHarvesterUnderAttackSignature constinit property declarations **
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeHarvesterUnderAttackSignature Property Definitions ***********
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Attacker = { "Attacker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeHarvesterUnderAttackSignature_Parms, Attacker), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeHarvesterUnderAttackSignature_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Attacker,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Damage,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeHarvesterUnderAttackSignature Property Definitions *************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeHarvesterUnderAttackSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeHarvesterUnderAttackSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeHarvesterUnderAttackSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterUnderAttackSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeHarvesterUnderAttackSignature **********************************

// ********** Begin Delegate FRenegadeHarvesterDestroyedSignature **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterDestroyedSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadeHarvesterDestroyedSignature_Parms
	{
		AActor* Destroyer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeHarvesterDestroyedSignature constinit property declarations **
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Destroyer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeHarvesterDestroyedSignature constinit property declarations ****
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeHarvesterDestroyedSignature Property Definitions *************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Destroyer = { "Destroyer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeHarvesterDestroyedSignature_Parms, Destroyer), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Destroyer,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeHarvesterDestroyedSignature Property Definitions ***************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeHarvesterDestroyedSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeHarvesterDestroyedSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeHarvesterDestroyedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterDestroyedSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeHarvesterDestroyedSignature ************************************

// ********** Begin Delegate FRenegadeHarvesterTargetChangedSignature ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterTargetChangedSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadeHarvesterTargetChangedSignature_Parms
	{
		AActor* PreviousTarget;
		AActor* NewTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeHarvesterTargetChangedSignature constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviousTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeHarvesterTargetChangedSignature constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeHarvesterTargetChangedSignature Property Definitions *********
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PreviousTarget = { "PreviousTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeHarvesterTargetChangedSignature_Parms, PreviousTarget), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_NewTarget = { "NewTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeHarvesterTargetChangedSignature_Parms, NewTarget), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviousTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewTarget,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeHarvesterTargetChangedSignature Property Definitions ***********
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeHarvesterTargetChangedSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeHarvesterTargetChangedSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeHarvesterTargetChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterTargetChangedSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeHarvesterTargetChangedSignature ********************************

// ********** Begin Delegate FRenegadeHarvesterTurretFiredSignature ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterTurretFiredSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadeHarvesterTurretFiredSignature_Parms
	{
		AActor* Target;
		FVector TraceStart;
		FVector TraceEnd;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeHarvesterTurretFiredSignature constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceEnd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeHarvesterTurretFiredSignature constinit property declarations **
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeHarvesterTurretFiredSignature Property Definitions ***********
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeHarvesterTurretFiredSignature_Parms, Target), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TraceStart = { "TraceStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeHarvesterTurretFiredSignature_Parms, TraceStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TraceEnd = { "TraceEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeHarvesterTurretFiredSignature_Parms, TraceEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TraceStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TraceEnd,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeHarvesterTurretFiredSignature Property Definitions *************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeHarvesterTurretFiredSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeHarvesterTurretFiredSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeHarvesterTurretFiredSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterTurretFiredSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeHarvesterTurretFiredSignature **********************************

// ********** Begin Delegate FRenegadeHarvesterLifecycleChangedSignature ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterLifecycleChangedSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadeHarvesterLifecycleChangedSignature_Parms
	{
		ERenegadeHarvesterLifecycleState PreviousState;
		ERenegadeHarvesterLifecycleState NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeHarvesterLifecycleChangedSignature constinit property declarations 
	static const UECodeGen_Private::FBytePropertyParams NewProp_PreviousState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PreviousState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeHarvesterLifecycleChangedSignature constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeHarvesterLifecycleChangedSignature Property Definitions ******
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_PreviousState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_PreviousState = { "PreviousState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeHarvesterLifecycleChangedSignature_Parms, PreviousState), Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeHarvesterLifecycleState, METADATA_PARAMS(0, nullptr) }; // 303cb67f7589c2bedbdf72eb3531f9491cd3b307
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeHarvesterLifecycleChangedSignature_Parms, NewState), Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeHarvesterLifecycleState, METADATA_PARAMS(0, nullptr) }; // 303cb67f7589c2bedbdf72eb3531f9491cd3b307
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviousState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviousState,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeHarvesterLifecycleChangedSignature Property Definitions ********
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeHarvesterLifecycleChangedSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeHarvesterLifecycleChangedSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeHarvesterLifecycleChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterLifecycleChangedSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeHarvesterLifecycleChangedSignature *****************************

// ********** Begin Delegate FRenegadeHarvesterCargoChangedSignature *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterCargoChangedSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadeHarvesterCargoChangedSignature_Parms
	{
		float PreviousCargo;
		float NewCargo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeHarvesterCargoChangedSignature constinit property declarations 
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviousCargo;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewCargo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeHarvesterCargoChangedSignature constinit property declarations *
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeHarvesterCargoChangedSignature Property Definitions **********
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_PreviousCargo = { "PreviousCargo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeHarvesterCargoChangedSignature_Parms, PreviousCargo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_NewCargo = { "NewCargo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeHarvesterCargoChangedSignature_Parms, NewCargo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviousCargo,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewCargo,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeHarvesterCargoChangedSignature Property Definitions ************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeHarvesterCargoChangedSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeHarvesterCargoChangedSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeHarvesterCargoChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterCargoChangedSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeHarvesterCargoChangedSignature *********************************

// ********** Begin Delegate FRenegadeHarvesterCreditsDeliveredSignature ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterCreditsDeliveredSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadeHarvesterCreditsDeliveredSignature_Parms
	{
		int32 CreditsAdded;
		int32 NewTeamCredits;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeHarvesterCreditsDeliveredSignature constinit property declarations 
	static const UECodeGen_Private::FIntPropertyParams NewProp_CreditsAdded;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewTeamCredits;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeHarvesterCreditsDeliveredSignature constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeHarvesterCreditsDeliveredSignature Property Definitions ******
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_CreditsAdded = { "CreditsAdded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeHarvesterCreditsDeliveredSignature_Parms, CreditsAdded), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_NewTeamCredits = { "NewTeamCredits", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeHarvesterCreditsDeliveredSignature_Parms, NewTeamCredits), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CreditsAdded,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewTeamCredits,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeHarvesterCreditsDeliveredSignature Property Definitions ********
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeHarvesterCreditsDeliveredSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeHarvesterCreditsDeliveredSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeHarvesterCreditsDeliveredSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterCreditsDeliveredSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeHarvesterCreditsDeliveredSignature *****************************

// ********** Begin Delegate FRenegadeHarvesterSimpleLifecycleSignature ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterSimpleLifecycleSignature__DelegateSignature_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeHarvesterSimpleLifecycleSignature constinit property declarations 
// ********** End Delegate FRenegadeHarvesterSimpleLifecycleSignature constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeHarvesterSimpleLifecycleSignature__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterSimpleLifecycleSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeHarvesterSimpleLifecycleSignature ******************************

// ********** Begin Delegate FRenegadeHarvesterHarvestPointSignature *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterHarvestPointSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadeHarvesterHarvestPointSignature_Parms
	{
		ARenegadeHarvestPoint* HarvestPoint;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeHarvesterHarvestPointSignature constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HarvestPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeHarvesterHarvestPointSignature constinit property declarations *
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeHarvesterHarvestPointSignature Property Definitions **********
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_HarvestPoint = { "HarvestPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeHarvesterHarvestPointSignature_Parms, HarvestPoint), Z_Construct_UClass_ARenegadeHarvestPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HarvestPoint,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeHarvesterHarvestPointSignature Property Definitions ************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeHarvesterHarvestPointSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeHarvesterHarvestPointSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeHarvesterHarvestPointSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterHarvestPointSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeHarvesterHarvestPointSignature *********************************

// ********** Begin Delegate FRenegadeHarvesterDockPointSignature **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterDockPointSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadeHarvesterDockPointSignature_Parms
	{
		ARenegadeRefineryDockPoint* DockPoint;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeHarvesterDockPointSignature constinit property declarations **
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DockPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeHarvesterDockPointSignature constinit property declarations ****
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeHarvesterDockPointSignature Property Definitions *************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DockPoint = { "DockPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeHarvesterDockPointSignature_Parms, DockPoint), Z_Construct_UClass_ARenegadeRefineryDockPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DockPoint,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeHarvesterDockPointSignature Property Definitions ***************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeHarvesterDockPointSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeHarvesterDockPointSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeHarvesterDockPointSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterDockPointSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeHarvesterDockPointSignature ************************************

// ********** Begin Class URenegadeHarvesterCombatComponent Function AddHarvestedCargo *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_AddHarvestedCargo_Statics
struct UHT_STATICS
{
	struct RenegadeHarvesterCombatComponent_eventAddHarvestedCargo_Parms
	{
		float Amount;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Economy" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddHarvestedCargo constinit property declarations *********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddHarvestedCargo constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddHarvestedCargo Property Definitions ********************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvesterCombatComponent_eventAddHarvestedCargo_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvesterCombatComponent_eventAddHarvestedCargo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AddHarvestedCargo Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "AddHarvestedCargo", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeHarvesterCombatComponent_eventAddHarvestedCargo_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeHarvesterCombatComponent_eventAddHarvestedCargo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_AddHarvestedCargo(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execAddHarvestedCargo)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->AddHarvestedCargo(Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function AddHarvestedCargo ***************

// ********** Begin Class URenegadeHarvesterCombatComponent Function ArrivedAtHarvestPoint *********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_ArrivedAtHarvestPoint_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Cycle|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Explicitly mark this Harvester as physically arrived at its assigned Harvest Point. This advances into the arrival delay and automatic harvesting lifecycle. */" },
#endif
		{ "DisplayName", "Arrived At Harvest Point" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Explicitly mark this Harvester as physically arrived at its assigned Harvest Point. This advances into the arrival delay and automatic harvesting lifecycle." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ArrivedAtHarvestPoint constinit property declarations *****************
// ********** End Function ArrivedAtHarvestPoint constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "ArrivedAtHarvestPoint", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_ArrivedAtHarvestPoint(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execArrivedAtHarvestPoint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ArrivedAtHarvestPoint();
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function ArrivedAtHarvestPoint ***********

// ********** Begin Class URenegadeHarvesterCombatComponent Function ArrivedAtRefineryDockPoint ****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_ArrivedAtRefineryDockPoint_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Cycle|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Explicitly mark this Harvester as physically arrived at its assigned Refinery Dock Point. This advances into docked/unloading lifecycle timing. */" },
#endif
		{ "DisplayName", "Arrived At Refinery Dock Point" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Explicitly mark this Harvester as physically arrived at its assigned Refinery Dock Point. This advances into docked/unloading lifecycle timing." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ArrivedAtRefineryDockPoint constinit property declarations ************
// ********** End Function ArrivedAtRefineryDockPoint constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "ArrivedAtRefineryDockPoint", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_ArrivedAtRefineryDockPoint(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execArrivedAtRefineryDockPoint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ArrivedAtRefineryDockPoint();
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function ArrivedAtRefineryDockPoint ******

// ********** Begin Class URenegadeHarvesterCombatComponent Function BeginHarvestPointApproach *****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_BeginHarvestPointApproach_Statics
struct UHT_STATICS
{
	struct RenegadeHarvesterCombatComponent_eventBeginHarvestPointApproach_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Cycle|Harvest Point" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function BeginHarvestPointApproach constinit property declarations *************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeHarvesterCombatComponent_eventBeginHarvestPointApproach_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BeginHarvestPointApproach constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BeginHarvestPointApproach Property Definitions ************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeHarvesterCombatComponent_eventBeginHarvestPointApproach_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function BeginHarvestPointApproach Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "BeginHarvestPointApproach", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeHarvesterCombatComponent_eventBeginHarvestPointApproach_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeHarvesterCombatComponent_eventBeginHarvestPointApproach_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_BeginHarvestPointApproach(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execBeginHarvestPointApproach)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BeginHarvestPointApproach();
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function BeginHarvestPointApproach *******

// ********** Begin Class URenegadeHarvesterCombatComponent Function DepositCargoToTeamCredits *****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_DepositCargoToTeamCredits_Statics
struct UHT_STATICS
{
	struct RenegadeHarvesterCombatComponent_eventDepositCargoToTeamCredits_Parms
	{
		float CargoUnits;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Economy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Converts cargo into the global replicated team-credit resource. Pass a negative value to deposit all cargo. */" },
#endif
		{ "CPP_Default_CargoUnits", "-1.000000" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts cargo into the global replicated team-credit resource. Pass a negative value to deposit all cargo." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function DepositCargoToTeamCredits constinit property declarations *************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CargoUnits;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DepositCargoToTeamCredits constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DepositCargoToTeamCredits Property Definitions ************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CargoUnits = { "CargoUnits", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvesterCombatComponent_eventDepositCargoToTeamCredits_Parms, CargoUnits), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvesterCombatComponent_eventDepositCargoToTeamCredits_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CargoUnits,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function DepositCargoToTeamCredits Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "DepositCargoToTeamCredits", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeHarvesterCombatComponent_eventDepositCargoToTeamCredits_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeHarvesterCombatComponent_eventDepositCargoToTeamCredits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_DepositCargoToTeamCredits(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execDepositCargoToTeamCredits)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_CargoUnits);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->DepositCargoToTeamCredits(Z_Param_CargoUnits);
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function DepositCargoToTeamCredits *******

// ********** Begin Class URenegadeHarvesterCombatComponent Function EndHarvesting *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_EndHarvesting_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Lifecycle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Call when collection finishes and the Harvester starts the return trip. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Call when collection finishes and the Harvester starts the return trip." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function EndHarvesting constinit property declarations *************************
// ********** End Function EndHarvesting constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "EndHarvesting", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_EndHarvesting(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execEndHarvesting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndHarvesting();
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function EndHarvesting *******************

// ********** Begin Class URenegadeHarvesterCombatComponent Function EndRefineryUnloading **********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_EndRefineryUnloading_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Lifecycle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Ends unloading, deposits any remaining cargo, and enters the leaving-refinery state. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ends unloading, deposits any remaining cargo, and enters the leaving-refinery state." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function EndRefineryUnloading constinit property declarations ******************
// ********** End Function EndRefineryUnloading constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "EndRefineryUnloading", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_EndRefineryUnloading(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execEndRefineryUnloading)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndRefineryUnloading();
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function EndRefineryUnloading ************

// ********** Begin Class URenegadeHarvesterCombatComponent Function FindNearestCompatibleHarvestPoint 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_FindNearestCompatibleHarvestPoint_Statics
struct UHT_STATICS
{
	struct RenegadeHarvesterCombatComponent_eventFindNearestCompatibleHarvestPoint_Parms
	{
		ARenegadeHarvestPoint* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Cycle|Harvest Point" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function FindNearestCompatibleHarvestPoint constinit property declarations *****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindNearestCompatibleHarvestPoint constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindNearestCompatibleHarvestPoint Property Definitions ****************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvesterCombatComponent_eventFindNearestCompatibleHarvestPoint_Parms, ReturnValue), Z_Construct_UClass_ARenegadeHarvestPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function FindNearestCompatibleHarvestPoint Property Definitions ******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "FindNearestCompatibleHarvestPoint", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeHarvesterCombatComponent_eventFindNearestCompatibleHarvestPoint_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeHarvesterCombatComponent_eventFindNearestCompatibleHarvestPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_FindNearestCompatibleHarvestPoint(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execFindNearestCompatibleHarvestPoint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ARenegadeHarvestPoint**)Z_Param__Result=P_THIS->FindNearestCompatibleHarvestPoint();
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function FindNearestCompatibleHarvestPoint 

// ********** Begin Class URenegadeHarvesterCombatComponent Function FindNearestCompatibleRefineryDockPoint 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_FindNearestCompatibleRefineryDockPoint_Statics
struct UHT_STATICS
{
	struct RenegadeHarvesterCombatComponent_eventFindNearestCompatibleRefineryDockPoint_Parms
	{
		ARenegadeRefineryDockPoint* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Cycle|Refinery Dock Point" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function FindNearestCompatibleRefineryDockPoint constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindNearestCompatibleRefineryDockPoint constinit property declarations **
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindNearestCompatibleRefineryDockPoint Property Definitions ***********
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvesterCombatComponent_eventFindNearestCompatibleRefineryDockPoint_Parms, ReturnValue), Z_Construct_UClass_ARenegadeRefineryDockPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function FindNearestCompatibleRefineryDockPoint Property Definitions *************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "FindNearestCompatibleRefineryDockPoint", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeHarvesterCombatComponent_eventFindNearestCompatibleRefineryDockPoint_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeHarvesterCombatComponent_eventFindNearestCompatibleRefineryDockPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_FindNearestCompatibleRefineryDockPoint(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execFindNearestCompatibleRefineryDockPoint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ARenegadeRefineryDockPoint**)Z_Param__Result=P_THIS->FindNearestCompatibleRefineryDockPoint();
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function FindNearestCompatibleRefineryDockPoint 

// ********** Begin Class URenegadeHarvesterCombatComponent Function ForceDestroyHarvester *********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_ForceDestroyHarvester_Statics
struct UHT_STATICS
{
	struct RenegadeHarvesterCombatComponent_eventForceDestroyHarvester_Parms
	{
		AActor* Destroyer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Health" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ForceDestroyHarvester constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Destroyer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ForceDestroyHarvester constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ForceDestroyHarvester Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Destroyer = { "Destroyer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvesterCombatComponent_eventForceDestroyHarvester_Parms, Destroyer), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Destroyer,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ForceDestroyHarvester Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "ForceDestroyHarvester", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeHarvesterCombatComponent_eventForceDestroyHarvester_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeHarvesterCombatComponent_eventForceDestroyHarvester_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_ForceDestroyHarvester(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execForceDestroyHarvester)
{
	P_GET_OBJECT(AActor,Z_Param_Destroyer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceDestroyHarvester(Z_Param_Destroyer);
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function ForceDestroyHarvester ***********

// ********** Begin Class URenegadeHarvesterCombatComponent Function ForceTurretTargetRefresh ******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_ForceTurretTargetRefresh_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Turret" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ForceTurretTargetRefresh constinit property declarations **************
// ********** End Function ForceTurretTargetRefresh constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "ForceTurretTargetRefresh", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_ForceTurretTargetRefresh(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execForceTurretTargetRefresh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceTurretTargetRefresh();
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function ForceTurretTargetRefresh ********

// ********** Begin Class URenegadeHarvesterCombatComponent Function GetAssignedHarvestPoint *******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_GetAssignedHarvestPoint_Statics
struct UHT_STATICS
{
	struct RenegadeHarvesterCombatComponent_eventGetAssignedHarvestPoint_Parms
	{
		ARenegadeHarvestPoint* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Cycle|Harvest Point" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAssignedHarvestPoint constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAssignedHarvestPoint constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAssignedHarvestPoint Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvesterCombatComponent_eventGetAssignedHarvestPoint_Parms, ReturnValue), Z_Construct_UClass_ARenegadeHarvestPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetAssignedHarvestPoint Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "GetAssignedHarvestPoint", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeHarvesterCombatComponent_eventGetAssignedHarvestPoint_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeHarvesterCombatComponent_eventGetAssignedHarvestPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_GetAssignedHarvestPoint(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execGetAssignedHarvestPoint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ARenegadeHarvestPoint**)Z_Param__Result=P_THIS->GetAssignedHarvestPoint();
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function GetAssignedHarvestPoint *********

// ********** Begin Class URenegadeHarvesterCombatComponent Function GetAssignedRefineryDockPoint **
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_GetAssignedRefineryDockPoint_Statics
struct UHT_STATICS
{
	struct RenegadeHarvesterCombatComponent_eventGetAssignedRefineryDockPoint_Parms
	{
		ARenegadeRefineryDockPoint* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Cycle|Refinery Dock Point" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAssignedRefineryDockPoint constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAssignedRefineryDockPoint constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAssignedRefineryDockPoint Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvesterCombatComponent_eventGetAssignedRefineryDockPoint_Parms, ReturnValue), Z_Construct_UClass_ARenegadeRefineryDockPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetAssignedRefineryDockPoint Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "GetAssignedRefineryDockPoint", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeHarvesterCombatComponent_eventGetAssignedRefineryDockPoint_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeHarvesterCombatComponent_eventGetAssignedRefineryDockPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_GetAssignedRefineryDockPoint(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execGetAssignedRefineryDockPoint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ARenegadeRefineryDockPoint**)Z_Param__Result=P_THIS->GetAssignedRefineryDockPoint();
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function GetAssignedRefineryDockPoint ****

// ********** Begin Class URenegadeHarvesterCombatComponent Function GetGeneratedTurretSocketNames *
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_GetGeneratedTurretSocketNames_Statics
struct UHT_STATICS
{
	struct RenegadeHarvesterCombatComponent_eventGetGeneratedTurretSocketNames_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Turret|Generated Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Socket names available on the assigned generated skeletal turret mesh. Blueprint utility only; Turret Muzzle Socket Name remains freely editable in Details. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Socket names available on the assigned generated skeletal turret mesh. Blueprint utility only; Turret Muzzle Socket Name remains freely editable in Details." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetGeneratedTurretSocketNames constinit property declarations *********
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetGeneratedTurretSocketNames constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetGeneratedTurretSocketNames Property Definitions ********************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvesterCombatComponent_eventGetGeneratedTurretSocketNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetGeneratedTurretSocketNames Property Definitions **********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "GetGeneratedTurretSocketNames", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeHarvesterCombatComponent_eventGetGeneratedTurretSocketNames_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeHarvesterCombatComponent_eventGetGeneratedTurretSocketNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_GetGeneratedTurretSocketNames(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execGetGeneratedTurretSocketNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetGeneratedTurretSocketNames();
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function GetGeneratedTurretSocketNames ***

// ********** Begin Class URenegadeHarvesterCombatComponent Function GetGroundAlignmentVisualComponent 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_GetGroundAlignmentVisualComponent_Statics
struct UHT_STATICS
{
	struct RenegadeHarvesterCombatComponent_eventGetGroundAlignmentVisualComponent_Parms
	{
		USceneComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Ground Alignment" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetGroundAlignmentVisualComponent constinit property declarations *****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetGroundAlignmentVisualComponent constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetGroundAlignmentVisualComponent Property Definitions ****************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvesterCombatComponent_eventGetGroundAlignmentVisualComponent_Parms, ReturnValue), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetGroundAlignmentVisualComponent Property Definitions ******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "GetGroundAlignmentVisualComponent", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeHarvesterCombatComponent_eventGetGroundAlignmentVisualComponent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeHarvesterCombatComponent_eventGetGroundAlignmentVisualComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_GetGroundAlignmentVisualComponent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execGetGroundAlignmentVisualComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USceneComponent**)Z_Param__Result=P_THIS->GetGroundAlignmentVisualComponent();
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function GetGroundAlignmentVisualComponent 

// ********** Begin Class URenegadeHarvesterCombatComponent Function GetHealthPercent **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_GetHealthPercent_Statics
struct UHT_STATICS
{
	struct RenegadeHarvesterCombatComponent_eventGetHealthPercent_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Health" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetHealthPercent constinit property declarations **********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetHealthPercent constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetHealthPercent Property Definitions *********************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvesterCombatComponent_eventGetHealthPercent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetHealthPercent Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "GetHealthPercent", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeHarvesterCombatComponent_eventGetHealthPercent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeHarvesterCombatComponent_eventGetHealthPercent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_GetHealthPercent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execGetHealthPercent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHealthPercent();
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function GetHealthPercent ****************

// ********** Begin Class URenegadeHarvesterCombatComponent Function GetOwningRefinery *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_GetOwningRefinery_Statics
struct UHT_STATICS
{
	struct RenegadeHarvesterCombatComponent_eventGetOwningRefinery_Parms
	{
		URenegadeBuildingCombatComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Refinery" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetOwningRefinery constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetOwningRefinery constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetOwningRefinery Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvesterCombatComponent_eventGetOwningRefinery_Parms, ReturnValue), Z_Construct_UClass_URenegadeBuildingCombatComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetOwningRefinery Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "GetOwningRefinery", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeHarvesterCombatComponent_eventGetOwningRefinery_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeHarvesterCombatComponent_eventGetOwningRefinery_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_GetOwningRefinery(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execGetOwningRefinery)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URenegadeBuildingCombatComponent**)Z_Param__Result=P_THIS->GetOwningRefinery();
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function GetOwningRefinery ***************

// ********** Begin Class URenegadeHarvesterCombatComponent Function GetTargetAimLocation **********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_GetTargetAimLocation_Statics
struct UHT_STATICS
{
	struct RenegadeHarvesterCombatComponent_eventGetTargetAimLocation_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Target" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTargetAimLocation constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTargetAimLocation constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTargetAimLocation Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvesterCombatComponent_eventGetTargetAimLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetTargetAimLocation Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "GetTargetAimLocation", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeHarvesterCombatComponent_eventGetTargetAimLocation_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeHarvesterCombatComponent_eventGetTargetAimLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_GetTargetAimLocation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execGetTargetAimLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetTargetAimLocation();
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function GetTargetAimLocation ************

// ********** Begin Class URenegadeHarvesterCombatComponent Function GetTeamCreditsManager *********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_GetTeamCreditsManager_Statics
struct UHT_STATICS
{
	struct RenegadeHarvesterCombatComponent_eventGetTeamCreditsManager_Parms
	{
		ARenegadeTeamCreditsManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Economy" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTeamCreditsManager constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTeamCreditsManager constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTeamCreditsManager Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvesterCombatComponent_eventGetTeamCreditsManager_Parms, ReturnValue), Z_Construct_UClass_ARenegadeTeamCreditsManager, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetTeamCreditsManager Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "GetTeamCreditsManager", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeHarvesterCombatComponent_eventGetTeamCreditsManager_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeHarvesterCombatComponent_eventGetTeamCreditsManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_GetTeamCreditsManager(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execGetTeamCreditsManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ARenegadeTeamCreditsManager**)Z_Param__Result=P_THIS->GetTeamCreditsManager();
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function GetTeamCreditsManager ***********

// ********** Begin Class URenegadeHarvesterCombatComponent Function GetTurretMuzzleLocation *******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_GetTurretMuzzleLocation_Statics
struct UHT_STATICS
{
	struct RenegadeHarvesterCombatComponent_eventGetTurretMuzzleLocation_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Turret" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTurretMuzzleLocation constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTurretMuzzleLocation constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTurretMuzzleLocation Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvesterCombatComponent_eventGetTurretMuzzleLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetTurretMuzzleLocation Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "GetTurretMuzzleLocation", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeHarvesterCombatComponent_eventGetTurretMuzzleLocation_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeHarvesterCombatComponent_eventGetTurretMuzzleLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_GetTurretMuzzleLocation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execGetTurretMuzzleLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetTurretMuzzleLocation();
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function GetTurretMuzzleLocation *********

// ********** Begin Class URenegadeHarvesterCombatComponent Function GoToHarvestPoint **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_GoToHarvestPoint_Statics
struct UHT_STATICS
{
	struct RenegadeHarvesterCombatComponent_eventGoToHarvestPoint_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Cycle|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Explicitly drive this Harvester to its assigned/auto-found Harvest Point. Useful from Blueprint route-complete or spawn logic. */" },
#endif
		{ "DisplayName", "Go To Harvest Point" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Explicitly drive this Harvester to its assigned/auto-found Harvest Point. Useful from Blueprint route-complete or spawn logic." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GoToHarvestPoint constinit property declarations **********************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeHarvesterCombatComponent_eventGoToHarvestPoint_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GoToHarvestPoint constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GoToHarvestPoint Property Definitions *********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeHarvesterCombatComponent_eventGoToHarvestPoint_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GoToHarvestPoint Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "GoToHarvestPoint", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeHarvesterCombatComponent_eventGoToHarvestPoint_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeHarvesterCombatComponent_eventGoToHarvestPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_GoToHarvestPoint(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execGoToHarvestPoint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GoToHarvestPoint();
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function GoToHarvestPoint ****************

// ********** Begin Class URenegadeHarvesterCombatComponent Function GoToRefineryDockPoint *********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_GoToRefineryDockPoint_Statics
struct UHT_STATICS
{
	struct RenegadeHarvesterCombatComponent_eventGoToRefineryDockPoint_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Cycle|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Explicitly drive this Harvester to its assigned/auto-found Refinery Dock Point. Useful from Blueprint route-complete logic. */" },
#endif
		{ "DisplayName", "Go To Refinery Dock Point" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Explicitly drive this Harvester to its assigned/auto-found Refinery Dock Point. Useful from Blueprint route-complete logic." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GoToRefineryDockPoint constinit property declarations *****************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeHarvesterCombatComponent_eventGoToRefineryDockPoint_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GoToRefineryDockPoint constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GoToRefineryDockPoint Property Definitions ****************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeHarvesterCombatComponent_eventGoToRefineryDockPoint_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GoToRefineryDockPoint Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "GoToRefineryDockPoint", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeHarvesterCombatComponent_eventGoToRefineryDockPoint_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeHarvesterCombatComponent_eventGoToRefineryDockPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_GoToRefineryDockPoint(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execGoToRefineryDockPoint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GoToRefineryDockPoint();
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function GoToRefineryDockPoint ***********

// ********** Begin Class URenegadeHarvesterCombatComponent Function HandleOwnerAnyDamage **********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_HandleOwnerAnyDamage_Statics
struct UHT_STATICS
{
	struct RenegadeHarvesterCombatComponent_eventHandleOwnerAnyDamage_Parms
	{
		AActor* DamagedActor;
		float Damage;
		const UDamageType* DamageType;
		AController* InstigatedBy;
		AActor* DamageCauser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleOwnerAnyDamage constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleOwnerAnyDamage constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleOwnerAnyDamage Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvesterCombatComponent_eventHandleOwnerAnyDamage_Parms, DamagedActor), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvesterCombatComponent_eventHandleOwnerAnyDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvesterCombatComponent_eventHandleOwnerAnyDamage_Parms, DamageType), Z_Construct_UClass_UDamageType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvesterCombatComponent_eventHandleOwnerAnyDamage_Parms, InstigatedBy), Z_Construct_UClass_AController, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvesterCombatComponent_eventHandleOwnerAnyDamage_Parms, DamageCauser), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DamagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HandleOwnerAnyDamage Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "HandleOwnerAnyDamage", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeHarvesterCombatComponent_eventHandleOwnerAnyDamage_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeHarvesterCombatComponent_eventHandleOwnerAnyDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_HandleOwnerAnyDamage(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execHandleOwnerAnyDamage)
{
	P_GET_OBJECT(AActor,Z_Param_DamagedActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_GET_OBJECT(UDamageType,Z_Param_DamageType);
	P_GET_OBJECT(AController,Z_Param_InstigatedBy);
	P_GET_OBJECT(AActor,Z_Param_DamageCauser);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleOwnerAnyDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser);
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function HandleOwnerAnyDamage ************

// ********** Begin Class URenegadeHarvesterCombatComponent Function HarvesterDockedAtRefinery *****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_HarvesterDockedAtRefinery_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Lifecycle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Call when docking completes. This also begins the unloading state. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Call when docking completes. This also begins the unloading state." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function HarvesterDockedAtRefinery constinit property declarations *************
// ********** End Function HarvesterDockedAtRefinery constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "HarvesterDockedAtRefinery", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_HarvesterDockedAtRefinery(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execHarvesterDockedAtRefinery)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HarvesterDockedAtRefinery();
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function HarvesterDockedAtRefinery *******

// ********** Begin Class URenegadeHarvesterCombatComponent Function HarvesterUndockedFromRefinery *
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_HarvesterUndockedFromRefinery_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Lifecycle" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HarvesterUndockedFromRefinery constinit property declarations *********
// ********** End Function HarvesterUndockedFromRefinery constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "HarvesterUndockedFromRefinery", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_HarvesterUndockedFromRefinery(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execHarvesterUndockedFromRefinery)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HarvesterUndockedFromRefinery();
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function HarvesterUndockedFromRefinery ***

// ********** Begin Class URenegadeHarvesterCombatComponent Function HasUsableSplineRoute **********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_HasUsableSplineRoute_Statics
struct UHT_STATICS
{
	struct RenegadeHarvesterCombatComponent_eventHasUsableSplineRoute_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Cycle|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** True when a RenegadeSplineFollower component has an assigned route/path that can own long-distance travel. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True when a RenegadeSplineFollower component has an assigned route/path that can own long-distance travel." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function HasUsableSplineRoute constinit property declarations ******************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeHarvesterCombatComponent_eventHasUsableSplineRoute_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasUsableSplineRoute constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasUsableSplineRoute Property Definitions *****************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeHarvesterCombatComponent_eventHasUsableSplineRoute_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HasUsableSplineRoute Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "HasUsableSplineRoute", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeHarvesterCombatComponent_eventHasUsableSplineRoute_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeHarvesterCombatComponent_eventHasUsableSplineRoute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_HasUsableSplineRoute(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execHasUsableSplineRoute)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasUsableSplineRoute();
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function HasUsableSplineRoute ************

// ********** Begin Class URenegadeHarvesterCombatComponent Function IsHostileToActor **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_IsHostileToActor_Statics
struct UHT_STATICS
{
	struct RenegadeHarvesterCombatComponent_eventIsHostileToActor_Parms
	{
		const AActor* OtherActor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Team" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsHostileToActor constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeHarvesterCombatComponent_eventIsHostileToActor_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsHostileToActor constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsHostileToActor Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvesterCombatComponent_eventIsHostileToActor_Parms, OtherActor), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherActor_MetaData), NewProp_OtherActor_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeHarvesterCombatComponent_eventIsHostileToActor_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsHostileToActor Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "IsHostileToActor", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeHarvesterCombatComponent_eventIsHostileToActor_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeHarvesterCombatComponent_eventIsHostileToActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_IsHostileToActor(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execIsHostileToActor)
{
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsHostileToActor(Z_Param_OtherActor);
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function IsHostileToActor ****************

// ********** Begin Class URenegadeHarvesterCombatComponent Function IsOperational *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_IsOperational_Statics
struct UHT_STATICS
{
	struct RenegadeHarvesterCombatComponent_eventIsOperational_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Health" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsOperational constinit property declarations *************************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeHarvesterCombatComponent_eventIsOperational_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsOperational constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsOperational Property Definitions ************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeHarvesterCombatComponent_eventIsOperational_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsOperational Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "IsOperational", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeHarvesterCombatComponent_eventIsOperational_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeHarvesterCombatComponent_eventIsOperational_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_IsOperational(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execIsOperational)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsOperational();
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function IsOperational *******************

// ********** Begin Class URenegadeHarvesterCombatComponent Function MarkReturningToRefinery *******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_MarkReturningToRefinery_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Lifecycle" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MarkReturningToRefinery constinit property declarations ***************
// ********** End Function MarkReturningToRefinery constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "MarkReturningToRefinery", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_MarkReturningToRefinery(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execMarkReturningToRefinery)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MarkReturningToRefinery();
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function MarkReturningToRefinery *********

// ********** Begin Class URenegadeHarvesterCombatComponent Function MulticastHarvesterCritical ****
struct RenegadeHarvesterCombatComponent_eventMulticastHarvesterCritical_Parms
{
	FVector_NetQuantize SoundLocation;
};
static FName NAME_URenegadeHarvesterCombatComponent_MulticastHarvesterCritical = FName(TEXT("MulticastHarvesterCritical"));
void URenegadeHarvesterCombatComponent::MulticastHarvesterCritical(FVector_NetQuantize SoundLocation)
{
	RenegadeHarvesterCombatComponent_eventMulticastHarvesterCritical_Parms Parms;
	Parms.SoundLocation=SoundLocation;
	UFunction* Func = FindFunctionChecked(NAME_URenegadeHarvesterCombatComponent_MulticastHarvesterCritical);
	ProcessEvent(Func,&Parms);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_MulticastHarvesterCritical_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MulticastHarvesterCritical constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SoundLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MulticastHarvesterCritical constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MulticastHarvesterCritical Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SoundLocation = { "SoundLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvesterCombatComponent_eventMulticastHarvesterCritical_Parms, SoundLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 360b775a5cdccbf04648aaedc65b3c6a0a2c5ffc
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SoundLocation,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function MulticastHarvesterCritical Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "MulticastHarvesterCritical", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<RenegadeHarvesterCombatComponent_eventMulticastHarvesterCritical_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(RenegadeHarvesterCombatComponent_eventMulticastHarvesterCritical_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_MulticastHarvesterCritical(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execMulticastHarvesterCritical)
{
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_SoundLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastHarvesterCritical_Implementation(Z_Param_SoundLocation);
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function MulticastHarvesterCritical ******

// ********** Begin Class URenegadeHarvesterCombatComponent Function MulticastHarvesterDestroyed ***
struct RenegadeHarvesterCombatComponent_eventMulticastHarvesterDestroyed_Parms
{
	AActor* Destroyer;
	FVector_NetQuantize EffectLocation;
};
static FName NAME_URenegadeHarvesterCombatComponent_MulticastHarvesterDestroyed = FName(TEXT("MulticastHarvesterDestroyed"));
void URenegadeHarvesterCombatComponent::MulticastHarvesterDestroyed(AActor* Destroyer, FVector_NetQuantize EffectLocation)
{
	RenegadeHarvesterCombatComponent_eventMulticastHarvesterDestroyed_Parms Parms;
	Parms.Destroyer=Destroyer;
	Parms.EffectLocation=EffectLocation;
	UFunction* Func = FindFunctionChecked(NAME_URenegadeHarvesterCombatComponent_MulticastHarvesterDestroyed);
	ProcessEvent(Func,&Parms);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_MulticastHarvesterDestroyed_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MulticastHarvesterDestroyed constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Destroyer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MulticastHarvesterDestroyed constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MulticastHarvesterDestroyed Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Destroyer = { "Destroyer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvesterCombatComponent_eventMulticastHarvesterDestroyed_Parms, Destroyer), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_EffectLocation = { "EffectLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvesterCombatComponent_eventMulticastHarvesterDestroyed_Parms, EffectLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 360b775a5cdccbf04648aaedc65b3c6a0a2c5ffc
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Destroyer,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EffectLocation,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function MulticastHarvesterDestroyed Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "MulticastHarvesterDestroyed", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<RenegadeHarvesterCombatComponent_eventMulticastHarvesterDestroyed_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(RenegadeHarvesterCombatComponent_eventMulticastHarvesterDestroyed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_MulticastHarvesterDestroyed(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execMulticastHarvesterDestroyed)
{
	P_GET_OBJECT(AActor,Z_Param_Destroyer);
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_EffectLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastHarvesterDestroyed_Implementation(Z_Param_Destroyer,Z_Param_EffectLocation);
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function MulticastHarvesterDestroyed *****

// ********** Begin Class URenegadeHarvesterCombatComponent Function MulticastHarvesterUnderAttack *
struct RenegadeHarvesterCombatComponent_eventMulticastHarvesterUnderAttack_Parms
{
	AActor* Attacker;
	float Damage;
	FVector_NetQuantize SoundLocation;
};
static FName NAME_URenegadeHarvesterCombatComponent_MulticastHarvesterUnderAttack = FName(TEXT("MulticastHarvesterUnderAttack"));
void URenegadeHarvesterCombatComponent::MulticastHarvesterUnderAttack(AActor* Attacker, float Damage, FVector_NetQuantize SoundLocation)
{
	RenegadeHarvesterCombatComponent_eventMulticastHarvesterUnderAttack_Parms Parms;
	Parms.Attacker=Attacker;
	Parms.Damage=Damage;
	Parms.SoundLocation=SoundLocation;
	UFunction* Func = FindFunctionChecked(NAME_URenegadeHarvesterCombatComponent_MulticastHarvesterUnderAttack);
	ProcessEvent(Func,&Parms);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_MulticastHarvesterUnderAttack_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MulticastHarvesterUnderAttack constinit property declarations *********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Attacker;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SoundLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MulticastHarvesterUnderAttack constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MulticastHarvesterUnderAttack Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Attacker = { "Attacker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvesterCombatComponent_eventMulticastHarvesterUnderAttack_Parms, Attacker), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvesterCombatComponent_eventMulticastHarvesterUnderAttack_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SoundLocation = { "SoundLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvesterCombatComponent_eventMulticastHarvesterUnderAttack_Parms, SoundLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 360b775a5cdccbf04648aaedc65b3c6a0a2c5ffc
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Attacker,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SoundLocation,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function MulticastHarvesterUnderAttack Property Definitions **********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "MulticastHarvesterUnderAttack", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<RenegadeHarvesterCombatComponent_eventMulticastHarvesterUnderAttack_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(RenegadeHarvesterCombatComponent_eventMulticastHarvesterUnderAttack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_MulticastHarvesterUnderAttack(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execMulticastHarvesterUnderAttack)
{
	P_GET_OBJECT(AActor,Z_Param_Attacker);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_SoundLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastHarvesterUnderAttack_Implementation(Z_Param_Attacker,Z_Param_Damage,Z_Param_SoundLocation);
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function MulticastHarvesterUnderAttack ***

// ********** Begin Class URenegadeHarvesterCombatComponent Function MulticastTurretFired **********
struct RenegadeHarvesterCombatComponent_eventMulticastTurretFired_Parms
{
	AActor* Target;
	FVector_NetQuantize TraceStart;
	FVector_NetQuantize TraceEnd;
	bool bSpawnImpactEffect;
};
static FName NAME_URenegadeHarvesterCombatComponent_MulticastTurretFired = FName(TEXT("MulticastTurretFired"));
void URenegadeHarvesterCombatComponent::MulticastTurretFired(AActor* Target, FVector_NetQuantize TraceStart, FVector_NetQuantize TraceEnd, bool bSpawnImpactEffect)
{
	RenegadeHarvesterCombatComponent_eventMulticastTurretFired_Parms Parms;
	Parms.Target=Target;
	Parms.TraceStart=TraceStart;
	Parms.TraceEnd=TraceEnd;
	Parms.bSpawnImpactEffect=bSpawnImpactEffect ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_URenegadeHarvesterCombatComponent_MulticastTurretFired);
	ProcessEvent(Func,&Parms);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_MulticastTurretFired_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MulticastTurretFired constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceEnd;
	static void NewProp_bSpawnImpactEffect_SetBit(void* Obj)
	{
		((RenegadeHarvesterCombatComponent_eventMulticastTurretFired_Parms*)Obj)->bSpawnImpactEffect = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnImpactEffect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MulticastTurretFired constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MulticastTurretFired Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvesterCombatComponent_eventMulticastTurretFired_Parms, Target), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TraceStart = { "TraceStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvesterCombatComponent_eventMulticastTurretFired_Parms, TraceStart), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 360b775a5cdccbf04648aaedc65b3c6a0a2c5ffc
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TraceEnd = { "TraceEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvesterCombatComponent_eventMulticastTurretFired_Parms, TraceEnd), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 360b775a5cdccbf04648aaedc65b3c6a0a2c5ffc
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSpawnImpactEffect = { "bSpawnImpactEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeHarvesterCombatComponent_eventMulticastTurretFired_Parms), &UHT_STATICS::NewProp_bSpawnImpactEffect_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TraceStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TraceEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSpawnImpactEffect,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function MulticastTurretFired Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "MulticastTurretFired", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<RenegadeHarvesterCombatComponent_eventMulticastTurretFired_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(RenegadeHarvesterCombatComponent_eventMulticastTurretFired_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_MulticastTurretFired(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execMulticastTurretFired)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_TraceStart);
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_TraceEnd);
	P_GET_UBOOL(Z_Param_bSpawnImpactEffect);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastTurretFired_Implementation(Z_Param_Target,Z_Param_TraceStart,Z_Param_TraceEnd,Z_Param_bSpawnImpactEffect);
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function MulticastTurretFired ************

// ********** Begin Class URenegadeHarvesterCombatComponent Function OnRep_AssignedHarvestPoint ****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_OnRep_AssignedHarvestPoint_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_AssignedHarvestPoint constinit property declarations ************
// ********** End Function OnRep_AssignedHarvestPoint constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "OnRep_AssignedHarvestPoint", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_OnRep_AssignedHarvestPoint(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execOnRep_AssignedHarvestPoint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_AssignedHarvestPoint();
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function OnRep_AssignedHarvestPoint ******

// ********** Begin Class URenegadeHarvesterCombatComponent Function OnRep_AssignedRefineryDockPoint 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_OnRep_AssignedRefineryDockPoint_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_AssignedRefineryDockPoint constinit property declarations *******
// ********** End Function OnRep_AssignedRefineryDockPoint constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "OnRep_AssignedRefineryDockPoint", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_OnRep_AssignedRefineryDockPoint(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execOnRep_AssignedRefineryDockPoint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_AssignedRefineryDockPoint();
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function OnRep_AssignedRefineryDockPoint *

// ********** Begin Class URenegadeHarvesterCombatComponent Function OnRep_CriticalHealth **********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_OnRep_CriticalHealth_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_CriticalHealth constinit property declarations ******************
// ********** End Function OnRep_CriticalHealth constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "OnRep_CriticalHealth", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_OnRep_CriticalHealth(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execOnRep_CriticalHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CriticalHealth();
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function OnRep_CriticalHealth ************

// ********** Begin Class URenegadeHarvesterCombatComponent Function OnRep_CurrentCargo ************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_OnRep_CurrentCargo_Statics
struct UHT_STATICS
{
	struct RenegadeHarvesterCombatComponent_eventOnRep_CurrentCargo_Parms
	{
		float PreviousCargo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_CurrentCargo constinit property declarations ********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviousCargo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_CurrentCargo constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_CurrentCargo Property Definitions *******************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_PreviousCargo = { "PreviousCargo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvesterCombatComponent_eventOnRep_CurrentCargo_Parms, PreviousCargo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviousCargo,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnRep_CurrentCargo Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "OnRep_CurrentCargo", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeHarvesterCombatComponent_eventOnRep_CurrentCargo_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeHarvesterCombatComponent_eventOnRep_CurrentCargo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_OnRep_CurrentCargo(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execOnRep_CurrentCargo)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_PreviousCargo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentCargo(Z_Param_PreviousCargo);
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function OnRep_CurrentCargo **************

// ********** Begin Class URenegadeHarvesterCombatComponent Function OnRep_CurrentHealth ***********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_OnRep_CurrentHealth_Statics
struct UHT_STATICS
{
	struct RenegadeHarvesterCombatComponent_eventOnRep_CurrentHealth_Parms
	{
		float PreviousHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_CurrentHealth constinit property declarations *******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviousHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_CurrentHealth constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_CurrentHealth Property Definitions ******************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_PreviousHealth = { "PreviousHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvesterCombatComponent_eventOnRep_CurrentHealth_Parms, PreviousHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviousHealth,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnRep_CurrentHealth Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "OnRep_CurrentHealth", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeHarvesterCombatComponent_eventOnRep_CurrentHealth_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeHarvesterCombatComponent_eventOnRep_CurrentHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_OnRep_CurrentHealth(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execOnRep_CurrentHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_PreviousHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentHealth(Z_Param_PreviousHealth);
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function OnRep_CurrentHealth *************

// ********** Begin Class URenegadeHarvesterCombatComponent Function OnRep_Destroyed ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_OnRep_Destroyed_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_Destroyed constinit property declarations ***********************
// ********** End Function OnRep_Destroyed constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "OnRep_Destroyed", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_OnRep_Destroyed(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execOnRep_Destroyed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Destroyed();
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function OnRep_Destroyed *****************

// ********** Begin Class URenegadeHarvesterCombatComponent Function OnRep_LifecycleState **********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_OnRep_LifecycleState_Statics
struct UHT_STATICS
{
	struct RenegadeHarvesterCombatComponent_eventOnRep_LifecycleState_Parms
	{
		ERenegadeHarvesterLifecycleState PreviousState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_LifecycleState constinit property declarations ******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_PreviousState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PreviousState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_LifecycleState constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_LifecycleState Property Definitions *****************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_PreviousState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_PreviousState = { "PreviousState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvesterCombatComponent_eventOnRep_LifecycleState_Parms, PreviousState), Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeHarvesterLifecycleState, METADATA_PARAMS(0, nullptr) }; // 303cb67f7589c2bedbdf72eb3531f9491cd3b307
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviousState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviousState,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnRep_LifecycleState Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "OnRep_LifecycleState", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeHarvesterCombatComponent_eventOnRep_LifecycleState_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeHarvesterCombatComponent_eventOnRep_LifecycleState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_OnRep_LifecycleState(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execOnRep_LifecycleState)
{
	P_GET_ENUM(ERenegadeHarvesterLifecycleState,Z_Param_PreviousState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_LifecycleState(ERenegadeHarvesterLifecycleState(Z_Param_PreviousState));
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function OnRep_LifecycleState ************

// ********** Begin Class URenegadeHarvesterCombatComponent Function OnRep_TeamId ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_OnRep_TeamId_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_TeamId constinit property declarations **************************
// ********** End Function OnRep_TeamId constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "OnRep_TeamId", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_OnRep_TeamId(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execOnRep_TeamId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_TeamId();
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function OnRep_TeamId ********************

// ********** Begin Class URenegadeHarvesterCombatComponent Function OnRep_TurretTarget ************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_OnRep_TurretTarget_Statics
struct UHT_STATICS
{
	struct RenegadeHarvesterCombatComponent_eventOnRep_TurretTarget_Parms
	{
		AActor* PreviousTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_TurretTarget constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviousTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_TurretTarget constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_TurretTarget Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PreviousTarget = { "PreviousTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvesterCombatComponent_eventOnRep_TurretTarget_Parms, PreviousTarget), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviousTarget,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnRep_TurretTarget Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "OnRep_TurretTarget", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeHarvesterCombatComponent_eventOnRep_TurretTarget_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeHarvesterCombatComponent_eventOnRep_TurretTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_OnRep_TurretTarget(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execOnRep_TurretTarget)
{
	P_GET_OBJECT(AActor,Z_Param_PreviousTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_TurretTarget(Z_Param_PreviousTarget);
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function OnRep_TurretTarget **************

// ********** Begin Class URenegadeHarvesterCombatComponent Function RefreshHarvesterPresentation **
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_RefreshHarvesterPresentation_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Visuals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Re-resolve presentation components and rebuild the optional generated turret visual. Useful after changing component references at runtime. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Re-resolve presentation components and rebuild the optional generated turret visual. Useful after changing component references at runtime." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RefreshHarvesterPresentation constinit property declarations **********
// ********** End Function RefreshHarvesterPresentation constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "RefreshHarvesterPresentation", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_RefreshHarvesterPresentation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execRefreshHarvesterPresentation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshHarvesterPresentation();
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function RefreshHarvesterPresentation ****

// ********** Begin Class URenegadeHarvesterCombatComponent Function RepairHarvester ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_RepairHarvester_Statics
struct UHT_STATICS
{
	struct RenegadeHarvesterCombatComponent_eventRepairHarvester_Parms
	{
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Health" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RepairHarvester constinit property declarations ***********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RepairHarvester constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RepairHarvester Property Definitions **********************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvesterCombatComponent_eventRepairHarvester_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RepairHarvester Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "RepairHarvester", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeHarvesterCombatComponent_eventRepairHarvester_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeHarvesterCombatComponent_eventRepairHarvester_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_RepairHarvester(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execRepairHarvester)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RepairHarvester(Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function RepairHarvester *****************

// ********** Begin Class URenegadeHarvesterCombatComponent Function SetAssignedHarvestPoint *******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_SetAssignedHarvestPoint_Statics
struct UHT_STATICS
{
	struct RenegadeHarvesterCombatComponent_eventSetAssignedHarvestPoint_Parms
	{
		ARenegadeHarvestPoint* NewHarvestPoint;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Cycle|Harvest Point" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetAssignedHarvestPoint constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewHarvestPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetAssignedHarvestPoint constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetAssignedHarvestPoint Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_NewHarvestPoint = { "NewHarvestPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvesterCombatComponent_eventSetAssignedHarvestPoint_Parms, NewHarvestPoint), Z_Construct_UClass_ARenegadeHarvestPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewHarvestPoint,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetAssignedHarvestPoint Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "SetAssignedHarvestPoint", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeHarvesterCombatComponent_eventSetAssignedHarvestPoint_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeHarvesterCombatComponent_eventSetAssignedHarvestPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_SetAssignedHarvestPoint(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execSetAssignedHarvestPoint)
{
	P_GET_OBJECT(ARenegadeHarvestPoint,Z_Param_NewHarvestPoint);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAssignedHarvestPoint(Z_Param_NewHarvestPoint);
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function SetAssignedHarvestPoint *********

// ********** Begin Class URenegadeHarvesterCombatComponent Function SetAssignedRefineryDockPoint **
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_SetAssignedRefineryDockPoint_Statics
struct UHT_STATICS
{
	struct RenegadeHarvesterCombatComponent_eventSetAssignedRefineryDockPoint_Parms
	{
		ARenegadeRefineryDockPoint* NewDockPoint;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Cycle|Refinery Dock Point" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetAssignedRefineryDockPoint constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewDockPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetAssignedRefineryDockPoint constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetAssignedRefineryDockPoint Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_NewDockPoint = { "NewDockPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvesterCombatComponent_eventSetAssignedRefineryDockPoint_Parms, NewDockPoint), Z_Construct_UClass_ARenegadeRefineryDockPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewDockPoint,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetAssignedRefineryDockPoint Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "SetAssignedRefineryDockPoint", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeHarvesterCombatComponent_eventSetAssignedRefineryDockPoint_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeHarvesterCombatComponent_eventSetAssignedRefineryDockPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_SetAssignedRefineryDockPoint(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execSetAssignedRefineryDockPoint)
{
	P_GET_OBJECT(ARenegadeRefineryDockPoint,Z_Param_NewDockPoint);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAssignedRefineryDockPoint(Z_Param_NewDockPoint);
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function SetAssignedRefineryDockPoint ****

// ********** Begin Class URenegadeHarvesterCombatComponent Function SetCurrentCargo ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_SetCurrentCargo_Statics
struct UHT_STATICS
{
	struct RenegadeHarvesterCombatComponent_eventSetCurrentCargo_Parms
	{
		float NewCargo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Economy" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetCurrentCargo constinit property declarations ***********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewCargo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetCurrentCargo constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetCurrentCargo Property Definitions **********************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_NewCargo = { "NewCargo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvesterCombatComponent_eventSetCurrentCargo_Parms, NewCargo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewCargo,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetCurrentCargo Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "SetCurrentCargo", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeHarvesterCombatComponent_eventSetCurrentCargo_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeHarvesterCombatComponent_eventSetCurrentCargo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_SetCurrentCargo(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execSetCurrentCargo)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewCargo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurrentCargo(Z_Param_NewCargo);
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function SetCurrentCargo *****************

// ********** Begin Class URenegadeHarvesterCombatComponent Function SetOwningRefinery *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_SetOwningRefinery_Statics
struct UHT_STATICS
{
	struct RenegadeHarvesterCombatComponent_eventSetOwningRefinery_Parms
	{
		URenegadeBuildingCombatComponent* RefineryComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Refinery" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefineryComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetOwningRefinery constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RefineryComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetOwningRefinery constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetOwningRefinery Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RefineryComponent = { "RefineryComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvesterCombatComponent_eventSetOwningRefinery_Parms, RefineryComponent), Z_Construct_UClass_URenegadeBuildingCombatComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefineryComponent_MetaData), NewProp_RefineryComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RefineryComponent,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetOwningRefinery Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "SetOwningRefinery", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeHarvesterCombatComponent_eventSetOwningRefinery_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeHarvesterCombatComponent_eventSetOwningRefinery_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_SetOwningRefinery(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execSetOwningRefinery)
{
	P_GET_OBJECT(URenegadeBuildingCombatComponent,Z_Param_RefineryComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOwningRefinery(Z_Param_RefineryComponent);
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function SetOwningRefinery ***************

// ********** Begin Class URenegadeHarvesterCombatComponent Function SetRuntimeGroundAlignmentVisualComponent 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_SetRuntimeGroundAlignmentVisualComponent_Statics
struct UHT_STATICS
{
	struct RenegadeHarvesterCombatComponent_eventSetRuntimeGroundAlignmentVisualComponent_Parms
	{
		USceneComponent* VisualComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Ground Alignment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Runtime override for the visual body that receives terrain-following pitch/roll. Pass null to restore automatic resolution. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Runtime override for the visual body that receives terrain-following pitch/roll. Pass null to restore automatic resolution." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisualComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetRuntimeGroundAlignmentVisualComponent constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VisualComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetRuntimeGroundAlignmentVisualComponent constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetRuntimeGroundAlignmentVisualComponent Property Definitions *********
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_VisualComponent = { "VisualComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvesterCombatComponent_eventSetRuntimeGroundAlignmentVisualComponent_Parms, VisualComponent), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisualComponent_MetaData), NewProp_VisualComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_VisualComponent,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetRuntimeGroundAlignmentVisualComponent Property Definitions ***********
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "SetRuntimeGroundAlignmentVisualComponent", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeHarvesterCombatComponent_eventSetRuntimeGroundAlignmentVisualComponent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeHarvesterCombatComponent_eventSetRuntimeGroundAlignmentVisualComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_SetRuntimeGroundAlignmentVisualComponent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execSetRuntimeGroundAlignmentVisualComponent)
{
	P_GET_OBJECT(USceneComponent,Z_Param_VisualComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRuntimeGroundAlignmentVisualComponent(Z_Param_VisualComponent);
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function SetRuntimeGroundAlignmentVisualComponent 

// ********** Begin Class URenegadeHarvesterCombatComponent Function SetRuntimeTurretComponents ****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_SetRuntimeTurretComponents_Statics
struct UHT_STATICS
{
	struct RenegadeHarvesterCombatComponent_eventSetRuntimeTurretComponents_Parms
	{
		USceneComponent* YawComponent;
		USceneComponent* PitchComponent;
		USceneComponent* MuzzleComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Turret" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YawComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetRuntimeTurretComponents constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_YawComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PitchComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MuzzleComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetRuntimeTurretComponents constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetRuntimeTurretComponents Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_YawComponent = { "YawComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvesterCombatComponent_eventSetRuntimeTurretComponents_Parms, YawComponent), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YawComponent_MetaData), NewProp_YawComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PitchComponent = { "PitchComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvesterCombatComponent_eventSetRuntimeTurretComponents_Parms, PitchComponent), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchComponent_MetaData), NewProp_PitchComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_MuzzleComponent = { "MuzzleComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvesterCombatComponent_eventSetRuntimeTurretComponents_Parms, MuzzleComponent), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MuzzleComponent_MetaData), NewProp_MuzzleComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_YawComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PitchComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MuzzleComponent,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetRuntimeTurretComponents Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "SetRuntimeTurretComponents", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeHarvesterCombatComponent_eventSetRuntimeTurretComponents_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeHarvesterCombatComponent_eventSetRuntimeTurretComponents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_SetRuntimeTurretComponents(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execSetRuntimeTurretComponents)
{
	P_GET_OBJECT(USceneComponent,Z_Param_YawComponent);
	P_GET_OBJECT(USceneComponent,Z_Param_PitchComponent);
	P_GET_OBJECT(USceneComponent,Z_Param_MuzzleComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRuntimeTurretComponents(Z_Param_YawComponent,Z_Param_PitchComponent,Z_Param_MuzzleComponent);
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function SetRuntimeTurretComponents ******

// ********** Begin Class URenegadeHarvesterCombatComponent Function SetTeamId *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_SetTeamId_Statics
struct UHT_STATICS
{
	struct RenegadeHarvesterCombatComponent_eventSetTeamId_Parms
	{
		FName NewTeamId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Team" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetTeamId constinit property declarations *****************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_NewTeamId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetTeamId constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetTeamId Property Definitions ****************************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_NewTeamId = { "NewTeamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvesterCombatComponent_eventSetTeamId_Parms, NewTeamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewTeamId,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetTeamId Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "SetTeamId", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeHarvesterCombatComponent_eventSetTeamId_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeHarvesterCombatComponent_eventSetTeamId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_SetTeamId(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execSetTeamId)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_NewTeamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTeamId(Z_Param_NewTeamId);
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function SetTeamId ***********************

// ********** Begin Class URenegadeHarvesterCombatComponent Function StartHarvesting ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_StartHarvesting_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Lifecycle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Call from your field/route Blueprint when the Harvester reaches the Tiberium collection point. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Call from your field/route Blueprint when the Harvester reaches the Tiberium collection point." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function StartHarvesting constinit property declarations ***********************
// ********** End Function StartHarvesting constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "StartHarvesting", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_StartHarvesting(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execStartHarvesting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartHarvesting();
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function StartHarvesting *****************

// ********** Begin Class URenegadeHarvesterCombatComponent Function StartRefineryDocking **********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_StartRefineryDocking_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Lifecycle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Call when the Harvester begins its final approach/docking movement into the Refinery. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Call when the Harvester begins its final approach/docking movement into the Refinery." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function StartRefineryDocking constinit property declarations ******************
// ********** End Function StartRefineryDocking constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "StartRefineryDocking", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_StartRefineryDocking(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execStartRefineryDocking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartRefineryDocking();
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function StartRefineryDocking ************

// ********** Begin Class URenegadeHarvesterCombatComponent Function StartRefineryUnloading ********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeHarvesterCombatComponent_StartRefineryUnloading_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Lifecycle" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartRefineryUnloading constinit property declarations ****************
// ********** End Function StartRefineryUnloading constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeHarvesterCombatComponent, nullptr, "StartRefineryUnloading", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeHarvesterCombatComponent_StartRefineryUnloading(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeHarvesterCombatComponent::execStartRefineryUnloading)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartRefineryUnloading();
	P_NATIVE_END;
}
// ********** End Class URenegadeHarvesterCombatComponent Function StartRefineryUnloading **********

// ********** Begin Class URenegadeHarvesterCombatComponent ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URenegadeHarvesterCombatComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "RenegadeNXT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Add to a GDI or Nod Harvester Character Blueprint. Spline AI owns normal route travel.\n * This component owns health, defensive turret combat, EVA, cargo/economy, wrecks/refinery integration,\n * and short final Harvest Point / Refinery-dock MoveTo approaches using a cooperative Spline AI external movement claim.\n */" },
#endif
		{ "IncludePath", "RenegadeHarvesterCombatComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add to a GDI or Nod Harvester Character Blueprint. Spline AI owns normal route travel.\nThis component owns health, defensive turret combat, EVA, cargo/economy, wrecks/refinery integration,\nand short final Harvest Point / Refinery-dock MoveTo approaches using a cooperative Spline AI external movement claim." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamId_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Team" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDifferentNonNeutralTeamsAreEnemies_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Team" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnsureOwnerReplicates_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Networking" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnsureOwnerReplicateMovement_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Networking" },
		{ "EditCondition", "bEnsureOwnerReplicates" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthSettings_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Health" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetSettings_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Target" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPointComponent_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SceneComponent" },
		{ "Category", "Renegade NXT|Harvester|Target" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
		{ "UseComponentPicker", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPointComponentTag_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Target" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPointRelativeOffset_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Target" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurretSettings_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Turret" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurretYawComponent_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SceneComponent" },
		{ "Category", "Renegade NXT|Harvester|Turret|Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Preferred existing static/skeletal/scene component that rotates in yaw toward the defensive target. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Preferred existing static/skeletal/scene component that rotates in yaw toward the defensive target." },
#endif
		{ "UseComponentPicker", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurretYawComponentTag_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Turret|Components" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurretPitchComponent_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SceneComponent" },
		{ "Category", "Renegade NXT|Harvester|Turret|Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional child component for independent gun pitch. Leave empty to pitch the yaw component itself. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional child component for independent gun pitch. Leave empty to pitch the yaw component itself." },
#endif
		{ "UseComponentPicker", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurretPitchComponentTag_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Turret|Components" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurretMuzzleComponent_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SceneComponent" },
		{ "Category", "Renegade NXT|Harvester|Turret|Components" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
		{ "UseComponentPicker", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurretMuzzleComponentTag_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Turret|Components" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurretMuzzleRelativeOffset_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Turret|Components" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurretMuzzleSocketName_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Turret|Generated Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Optional muzzle socket on the assigned/generated Turret Skeletal Mesh.\n     * When set and valid, this takes priority over the Scene Component / component-tag muzzle path.\n     * Turret Muzzle Relative Offset is applied in socket-local space.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional muzzle socket on the assigned/generated Turret Skeletal Mesh.\nWhen set and valid, this takes priority over the Scene Component / component-tag muzzle path.\nTurret Muzzle Relative Offset is applied in socket-local space." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurretStaticMesh_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Turret|Generated Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional generated turret visual asset. It can attach beneath existing yaw/pitch pivots or become the controllable turret when no authored pivot exists. Skeletal takes priority when both are assigned. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional generated turret visual asset. It can attach beneath existing yaw/pitch pivots or become the controllable turret when no authored pivot exists. Skeletal takes priority when both are assigned." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurretSkeletalMesh_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Turret|Generated Mesh" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAttachGeneratedTurretVisualToPitch_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Turret|Generated Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When a separate Pitch pivot exists, attach the generated visual below it so the mesh inherits pitch as well as yaw. Disable for a yaw-only turret base visual. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When a separate Pitch pivot exists, attach the generated visual below it so the mesh inherits pitch as well as yaw. Disable for a yaw-only turret base visual." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurretAttachSocket_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Turret|Generated Mesh" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurretRelativeLocation_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Turret|Generated Mesh" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurretRelativeRotation_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Turret|Generated Mesh" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurretRelativeScale_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Turret|Generated Mesh" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundAlignmentSettings_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Ground Alignment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Terrain-following visual suspension. The Character capsule/root stays upright; only this visual body component pitches and rolls. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Terrain-following visual suspension. The Character capsule/root stays upright; only this visual body component pitches and rolls." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundAlignmentVisualComponent_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SceneComponent" },
		{ "Category", "Renegade NXT|Harvester|Ground Alignment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional visual body to pitch/roll over terrain. Leave empty to use a component tagged HarvesterBody, then the Character Mesh fallback. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional visual body to pitch/roll over terrain. Leave empty to use a component tagged HarvesterBody, then the Character Mesh fallback." },
#endif
		{ "UseComponentPicker", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundAlignmentVisualComponentTag_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Ground Alignment" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EconomySettings_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Economy" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CycleSettings_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Cycle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Automatic field/refinery approach and timing controls. Spline AI still owns normal travel. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Automatic field/refinery approach and timing controls. Spline AI still owns normal travel." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssignedHarvestPoint_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Cycle|Harvest Point" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional explicit level Harvest Point. A Refinery spawner can assign this automatically after spawning. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional explicit level Harvest Point. A Refinery spawner can assign this automatically after spawning." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoFindNearestHarvestPoint_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Cycle|Harvest Point" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If no Harvest Point was assigned by the Refinery, search the level for the nearest compatible point. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If no Harvest Point was assigned by the Refinery, search the level for the nearest compatible point." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HarvestPointSearchRadius_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Cycle|Harvest Point" },
		{ "ClampMin", "100.0" },
		{ "EditCondition", "bAutoFindNearestHarvestPoint" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredHarvestPointGroup_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Cycle|Harvest Point" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional group filter when auto-selecting a Harvest Point. None accepts any group. */" },
#endif
		{ "EditCondition", "bAutoFindNearestHarvestPoint" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional group filter when auto-selecting a Harvest Point. None accepts any group." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssignedRefineryDockPoint_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Cycle|Refinery Dock Point" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional explicit level Refinery Dock Point. A Refinery spawner assigns this automatically when configured. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional explicit level Refinery Dock Point. A Refinery spawner assigns this automatically when configured." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoFindNearestRefineryDockPoint_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Cycle|Refinery Dock Point" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If no Dock Point was assigned by the Refinery, search the level for the nearest compatible point. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If no Dock Point was assigned by the Refinery, search the level for the nearest compatible point." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefineryDockPointSearchRadius_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Cycle|Refinery Dock Point" },
		{ "ClampMin", "100.0" },
		{ "EditCondition", "bAutoFindNearestRefineryDockPoint" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredRefineryDockPointGroup_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Cycle|Refinery Dock Point" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional group filter when auto-selecting a Dock Point. None accepts any group. */" },
#endif
		{ "EditCondition", "bAutoFindNearestRefineryDockPoint" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional group filter when auto-selecting a Dock Point. None accepts any group." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioSettings_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Audio" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestructionSettings_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Destruction" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WreckActorClass_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Destruction" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Runtime" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDestroyed_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Runtime" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCriticalHealth_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Runtime" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTurretTarget_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Runtime" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LifecycleState_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Runtime" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCargo_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Runtime" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningRefineryActor_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Runtime" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasSplineMovementClaim_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Runtime" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHarvesterHealthChanged_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Events" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHarvesterUnderAttack_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Events" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHarvesterDestroyed_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Events" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTurretTargetChanged_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Events" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTurretFired_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Events" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLifecycleStateChanged_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Events" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCargoChanged_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Events" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCreditsDelivered_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Events" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHarvestingStarted_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Events|Lifecycle" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHarvestingEnded_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Events|Lifecycle" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRefineryDockingStarted_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Events|Lifecycle" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRefineryDocked_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Events|Lifecycle" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRefineryUnloadingStarted_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Events|Lifecycle" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRefineryUnloadingEnded_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Events|Lifecycle" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRefineryUndocked_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Events|Lifecycle" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHarvestPointApproachStarted_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Events|Lifecycle" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHarvestPointArrived_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Events|Lifecycle" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRefineryDockPointApproachStarted_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Events|Lifecycle" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRefineryDockPointArrived_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Events|Lifecycle" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnReturnToRefineryRouteRequested_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Events|Lifecycle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Useful Blueprint hook for selecting/starting the return spline after field harvesting completes. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Useful Blueprint hook for selecting/starting the return spline after field harvesting completes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnOutboundHarvestRouteRequested_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester|Events|Lifecycle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Useful Blueprint hook for starting/reacquiring the outbound spline after unloading/undocking. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Useful Blueprint hook for starting/reacquiring the outbound spline after unloading/undocking." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeTargetPointComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeTurretYawComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeTurretPitchComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeTurretMuzzleComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedTurretComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeGroundAlignmentVisualComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedTurretYawBaseComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedTurretPitchBaseComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletVisualComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URenegadeHarvesterCombatComponent constinit property declarations ********
	static const UECodeGen_Private::FNamePropertyParams NewProp_TeamId;
	static void NewProp_bDifferentNonNeutralTeamsAreEnemies_SetBit(void* Obj)
	{
		((URenegadeHarvesterCombatComponent*)Obj)->bDifferentNonNeutralTeamsAreEnemies = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDifferentNonNeutralTeamsAreEnemies;
	static void NewProp_bEnsureOwnerReplicates_SetBit(void* Obj)
	{
		((URenegadeHarvesterCombatComponent*)Obj)->bEnsureOwnerReplicates = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnsureOwnerReplicates;
	static void NewProp_bEnsureOwnerReplicateMovement_SetBit(void* Obj)
	{
		((URenegadeHarvesterCombatComponent*)Obj)->bEnsureOwnerReplicateMovement = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnsureOwnerReplicateMovement;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HealthSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPointComponent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetPointComponentTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPointRelativeOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TurretSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TurretYawComponent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TurretYawComponentTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TurretPitchComponent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TurretPitchComponentTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TurretMuzzleComponent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TurretMuzzleComponentTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TurretMuzzleRelativeOffset;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TurretMuzzleSocketName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TurretStaticMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TurretSkeletalMesh;
	static void NewProp_bAttachGeneratedTurretVisualToPitch_SetBit(void* Obj)
	{
		((URenegadeHarvesterCombatComponent*)Obj)->bAttachGeneratedTurretVisualToPitch = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttachGeneratedTurretVisualToPitch;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TurretAttachSocket;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TurretRelativeLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TurretRelativeRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TurretRelativeScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroundAlignmentSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroundAlignmentVisualComponent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_GroundAlignmentVisualComponentTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EconomySettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CycleSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssignedHarvestPoint;
	static void NewProp_bAutoFindNearestHarvestPoint_SetBit(void* Obj)
	{
		((URenegadeHarvesterCombatComponent*)Obj)->bAutoFindNearestHarvestPoint = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoFindNearestHarvestPoint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HarvestPointSearchRadius;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RequiredHarvestPointGroup;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssignedRefineryDockPoint;
	static void NewProp_bAutoFindNearestRefineryDockPoint_SetBit(void* Obj)
	{
		((URenegadeHarvesterCombatComponent*)Obj)->bAutoFindNearestRefineryDockPoint = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoFindNearestRefineryDockPoint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RefineryDockPointSearchRadius;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RequiredRefineryDockPointGroup;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AudioSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DestructionSettings;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WreckActorClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
	static void NewProp_bIsDestroyed_SetBit(void* Obj)
	{
		((URenegadeHarvesterCombatComponent*)Obj)->bIsDestroyed = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDestroyed;
	static void NewProp_bIsCriticalHealth_SetBit(void* Obj)
	{
		((URenegadeHarvesterCombatComponent*)Obj)->bIsCriticalHealth = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCriticalHealth;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTurretTarget;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LifecycleState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LifecycleState;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentCargo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningRefineryActor;
	static void NewProp_bHasSplineMovementClaim_SetBit(void* Obj)
	{
		((URenegadeHarvesterCombatComponent*)Obj)->bHasSplineMovementClaim = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasSplineMovementClaim;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHarvesterHealthChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHarvesterUnderAttack;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHarvesterDestroyed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTurretTargetChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTurretFired;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLifecycleStateChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCargoChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCreditsDelivered;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHarvestingStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHarvestingEnded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRefineryDockingStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRefineryDocked;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRefineryUnloadingStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRefineryUnloadingEnded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRefineryUndocked;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHarvestPointApproachStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHarvestPointArrived;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRefineryDockPointApproachStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRefineryDockPointArrived;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReturnToRefineryRouteRequested;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOutboundHarvestRouteRequested;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RuntimeTargetPointComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RuntimeTurretYawComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RuntimeTurretPitchComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RuntimeTurretMuzzleComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeneratedTurretComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RuntimeGroundAlignmentVisualComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedTurretYawBaseComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedTurretPitchBaseComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletVisualComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BulletVisualComponents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URenegadeHarvesterCombatComponent constinit property declarations **********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddHarvestedCargo"), .Pointer = &URenegadeHarvesterCombatComponent::execAddHarvestedCargo },
		{ .NameUTF8 = UTF8TEXT("ArrivedAtHarvestPoint"), .Pointer = &URenegadeHarvesterCombatComponent::execArrivedAtHarvestPoint },
		{ .NameUTF8 = UTF8TEXT("ArrivedAtRefineryDockPoint"), .Pointer = &URenegadeHarvesterCombatComponent::execArrivedAtRefineryDockPoint },
		{ .NameUTF8 = UTF8TEXT("BeginHarvestPointApproach"), .Pointer = &URenegadeHarvesterCombatComponent::execBeginHarvestPointApproach },
		{ .NameUTF8 = UTF8TEXT("DepositCargoToTeamCredits"), .Pointer = &URenegadeHarvesterCombatComponent::execDepositCargoToTeamCredits },
		{ .NameUTF8 = UTF8TEXT("EndHarvesting"), .Pointer = &URenegadeHarvesterCombatComponent::execEndHarvesting },
		{ .NameUTF8 = UTF8TEXT("EndRefineryUnloading"), .Pointer = &URenegadeHarvesterCombatComponent::execEndRefineryUnloading },
		{ .NameUTF8 = UTF8TEXT("FindNearestCompatibleHarvestPoint"), .Pointer = &URenegadeHarvesterCombatComponent::execFindNearestCompatibleHarvestPoint },
		{ .NameUTF8 = UTF8TEXT("FindNearestCompatibleRefineryDockPoint"), .Pointer = &URenegadeHarvesterCombatComponent::execFindNearestCompatibleRefineryDockPoint },
		{ .NameUTF8 = UTF8TEXT("ForceDestroyHarvester"), .Pointer = &URenegadeHarvesterCombatComponent::execForceDestroyHarvester },
		{ .NameUTF8 = UTF8TEXT("ForceTurretTargetRefresh"), .Pointer = &URenegadeHarvesterCombatComponent::execForceTurretTargetRefresh },
		{ .NameUTF8 = UTF8TEXT("GetAssignedHarvestPoint"), .Pointer = &URenegadeHarvesterCombatComponent::execGetAssignedHarvestPoint },
		{ .NameUTF8 = UTF8TEXT("GetAssignedRefineryDockPoint"), .Pointer = &URenegadeHarvesterCombatComponent::execGetAssignedRefineryDockPoint },
		{ .NameUTF8 = UTF8TEXT("GetGeneratedTurretSocketNames"), .Pointer = &URenegadeHarvesterCombatComponent::execGetGeneratedTurretSocketNames },
		{ .NameUTF8 = UTF8TEXT("GetGroundAlignmentVisualComponent"), .Pointer = &URenegadeHarvesterCombatComponent::execGetGroundAlignmentVisualComponent },
		{ .NameUTF8 = UTF8TEXT("GetHealthPercent"), .Pointer = &URenegadeHarvesterCombatComponent::execGetHealthPercent },
		{ .NameUTF8 = UTF8TEXT("GetOwningRefinery"), .Pointer = &URenegadeHarvesterCombatComponent::execGetOwningRefinery },
		{ .NameUTF8 = UTF8TEXT("GetTargetAimLocation"), .Pointer = &URenegadeHarvesterCombatComponent::execGetTargetAimLocation },
		{ .NameUTF8 = UTF8TEXT("GetTeamCreditsManager"), .Pointer = &URenegadeHarvesterCombatComponent::execGetTeamCreditsManager },
		{ .NameUTF8 = UTF8TEXT("GetTurretMuzzleLocation"), .Pointer = &URenegadeHarvesterCombatComponent::execGetTurretMuzzleLocation },
		{ .NameUTF8 = UTF8TEXT("GoToHarvestPoint"), .Pointer = &URenegadeHarvesterCombatComponent::execGoToHarvestPoint },
		{ .NameUTF8 = UTF8TEXT("GoToRefineryDockPoint"), .Pointer = &URenegadeHarvesterCombatComponent::execGoToRefineryDockPoint },
		{ .NameUTF8 = UTF8TEXT("HandleOwnerAnyDamage"), .Pointer = &URenegadeHarvesterCombatComponent::execHandleOwnerAnyDamage },
		{ .NameUTF8 = UTF8TEXT("HarvesterDockedAtRefinery"), .Pointer = &URenegadeHarvesterCombatComponent::execHarvesterDockedAtRefinery },
		{ .NameUTF8 = UTF8TEXT("HarvesterUndockedFromRefinery"), .Pointer = &URenegadeHarvesterCombatComponent::execHarvesterUndockedFromRefinery },
		{ .NameUTF8 = UTF8TEXT("HasUsableSplineRoute"), .Pointer = &URenegadeHarvesterCombatComponent::execHasUsableSplineRoute },
		{ .NameUTF8 = UTF8TEXT("IsHostileToActor"), .Pointer = &URenegadeHarvesterCombatComponent::execIsHostileToActor },
		{ .NameUTF8 = UTF8TEXT("IsOperational"), .Pointer = &URenegadeHarvesterCombatComponent::execIsOperational },
		{ .NameUTF8 = UTF8TEXT("MarkReturningToRefinery"), .Pointer = &URenegadeHarvesterCombatComponent::execMarkReturningToRefinery },
		{ .NameUTF8 = UTF8TEXT("MulticastHarvesterCritical"), .Pointer = &URenegadeHarvesterCombatComponent::execMulticastHarvesterCritical },
		{ .NameUTF8 = UTF8TEXT("MulticastHarvesterDestroyed"), .Pointer = &URenegadeHarvesterCombatComponent::execMulticastHarvesterDestroyed },
		{ .NameUTF8 = UTF8TEXT("MulticastHarvesterUnderAttack"), .Pointer = &URenegadeHarvesterCombatComponent::execMulticastHarvesterUnderAttack },
		{ .NameUTF8 = UTF8TEXT("MulticastTurretFired"), .Pointer = &URenegadeHarvesterCombatComponent::execMulticastTurretFired },
		{ .NameUTF8 = UTF8TEXT("OnRep_AssignedHarvestPoint"), .Pointer = &URenegadeHarvesterCombatComponent::execOnRep_AssignedHarvestPoint },
		{ .NameUTF8 = UTF8TEXT("OnRep_AssignedRefineryDockPoint"), .Pointer = &URenegadeHarvesterCombatComponent::execOnRep_AssignedRefineryDockPoint },
		{ .NameUTF8 = UTF8TEXT("OnRep_CriticalHealth"), .Pointer = &URenegadeHarvesterCombatComponent::execOnRep_CriticalHealth },
		{ .NameUTF8 = UTF8TEXT("OnRep_CurrentCargo"), .Pointer = &URenegadeHarvesterCombatComponent::execOnRep_CurrentCargo },
		{ .NameUTF8 = UTF8TEXT("OnRep_CurrentHealth"), .Pointer = &URenegadeHarvesterCombatComponent::execOnRep_CurrentHealth },
		{ .NameUTF8 = UTF8TEXT("OnRep_Destroyed"), .Pointer = &URenegadeHarvesterCombatComponent::execOnRep_Destroyed },
		{ .NameUTF8 = UTF8TEXT("OnRep_LifecycleState"), .Pointer = &URenegadeHarvesterCombatComponent::execOnRep_LifecycleState },
		{ .NameUTF8 = UTF8TEXT("OnRep_TeamId"), .Pointer = &URenegadeHarvesterCombatComponent::execOnRep_TeamId },
		{ .NameUTF8 = UTF8TEXT("OnRep_TurretTarget"), .Pointer = &URenegadeHarvesterCombatComponent::execOnRep_TurretTarget },
		{ .NameUTF8 = UTF8TEXT("RefreshHarvesterPresentation"), .Pointer = &URenegadeHarvesterCombatComponent::execRefreshHarvesterPresentation },
		{ .NameUTF8 = UTF8TEXT("RepairHarvester"), .Pointer = &URenegadeHarvesterCombatComponent::execRepairHarvester },
		{ .NameUTF8 = UTF8TEXT("SetAssignedHarvestPoint"), .Pointer = &URenegadeHarvesterCombatComponent::execSetAssignedHarvestPoint },
		{ .NameUTF8 = UTF8TEXT("SetAssignedRefineryDockPoint"), .Pointer = &URenegadeHarvesterCombatComponent::execSetAssignedRefineryDockPoint },
		{ .NameUTF8 = UTF8TEXT("SetCurrentCargo"), .Pointer = &URenegadeHarvesterCombatComponent::execSetCurrentCargo },
		{ .NameUTF8 = UTF8TEXT("SetOwningRefinery"), .Pointer = &URenegadeHarvesterCombatComponent::execSetOwningRefinery },
		{ .NameUTF8 = UTF8TEXT("SetRuntimeGroundAlignmentVisualComponent"), .Pointer = &URenegadeHarvesterCombatComponent::execSetRuntimeGroundAlignmentVisualComponent },
		{ .NameUTF8 = UTF8TEXT("SetRuntimeTurretComponents"), .Pointer = &URenegadeHarvesterCombatComponent::execSetRuntimeTurretComponents },
		{ .NameUTF8 = UTF8TEXT("SetTeamId"), .Pointer = &URenegadeHarvesterCombatComponent::execSetTeamId },
		{ .NameUTF8 = UTF8TEXT("StartHarvesting"), .Pointer = &URenegadeHarvesterCombatComponent::execStartHarvesting },
		{ .NameUTF8 = UTF8TEXT("StartRefineryDocking"), .Pointer = &URenegadeHarvesterCombatComponent::execStartRefineryDocking },
		{ .NameUTF8 = UTF8TEXT("StartRefineryUnloading"), .Pointer = &URenegadeHarvesterCombatComponent::execStartRefineryUnloading },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_AddHarvestedCargo, "AddHarvestedCargo" }, // 75483cf6e982f3d77a7319345ff4481ccd0fea35
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_ArrivedAtHarvestPoint, "ArrivedAtHarvestPoint" }, // 71d4463fd2f6358a41f07b6279bf4f0de98054e0
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_ArrivedAtRefineryDockPoint, "ArrivedAtRefineryDockPoint" }, // 4ff11ebaa470e2bc3dc35b5286226fd98821e783
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_BeginHarvestPointApproach, "BeginHarvestPointApproach" }, // 9def1109127d766da27d7a0f218c62dcf5754c8a
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_DepositCargoToTeamCredits, "DepositCargoToTeamCredits" }, // 8672753d6975759d35d176191412b65fed6b6f81
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_EndHarvesting, "EndHarvesting" }, // 7c184262e85045703883db9c16cafa4f8c862513
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_EndRefineryUnloading, "EndRefineryUnloading" }, // 03be39c481d9c56d9227a7c65e8d27a5a4ccd6a7
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_FindNearestCompatibleHarvestPoint, "FindNearestCompatibleHarvestPoint" }, // 09097e6fb1fc5d7116f1a3b31dd0bc27dc70d8f1
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_FindNearestCompatibleRefineryDockPoint, "FindNearestCompatibleRefineryDockPoint" }, // 59281974659cafaaa86cb7a8f34a38ea666aec81
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_ForceDestroyHarvester, "ForceDestroyHarvester" }, // 3699a70819edcbd8c4ff08afea330b5f7ae2e639
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_ForceTurretTargetRefresh, "ForceTurretTargetRefresh" }, // 36eb1ea32e468dc4dd18c8914358b3116b8c87b3
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_GetAssignedHarvestPoint, "GetAssignedHarvestPoint" }, // 3353ac51572b350e00e9ec0e68370445a3986563
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_GetAssignedRefineryDockPoint, "GetAssignedRefineryDockPoint" }, // fdd146e984937d88836d80d3356a4d9f6219c88a
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_GetGeneratedTurretSocketNames, "GetGeneratedTurretSocketNames" }, // 21470b547c4f0bf1f366e3be8696e6ec88f7341d
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_GetGroundAlignmentVisualComponent, "GetGroundAlignmentVisualComponent" }, // c6d6b5506b898cac6e2feaff03f2766aeab8a4cf
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_GetHealthPercent, "GetHealthPercent" }, // 141c8880c300262165124720d1a4187c3403b07b
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_GetOwningRefinery, "GetOwningRefinery" }, // a459909db52987b9803c90447841d76dc6ec6cc2
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_GetTargetAimLocation, "GetTargetAimLocation" }, // f841d07cc1cd72bf3ee9eca6a80dd2cd63ca23c9
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_GetTeamCreditsManager, "GetTeamCreditsManager" }, // fb3eff0cbf90e76187b41273888966545327eb2f
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_GetTurretMuzzleLocation, "GetTurretMuzzleLocation" }, // 900b4f68eeecd3dcfc0d2511c1a93ee0f722bce4
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_GoToHarvestPoint, "GoToHarvestPoint" }, // c6a660656e247e0faa8206cdbf60458dcc704abe
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_GoToRefineryDockPoint, "GoToRefineryDockPoint" }, // 4baf2f06440e882d2b3d6388362905f63d4fa305
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_HandleOwnerAnyDamage, "HandleOwnerAnyDamage" }, // d28eb75f142dbffce89cab0c15305d7b1c54a87f
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_HarvesterDockedAtRefinery, "HarvesterDockedAtRefinery" }, // 4a2122610b5f3f1ae1791534dcb8af729e082186
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_HarvesterUndockedFromRefinery, "HarvesterUndockedFromRefinery" }, // d4e6c1997a16acdf6526f2c895ef6e60030e4953
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_HasUsableSplineRoute, "HasUsableSplineRoute" }, // bac31984149dab00096fab573868b372ca6e5e6a
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_IsHostileToActor, "IsHostileToActor" }, // 6f0c3e01fa7e213e595c062528de12378dbf6df3
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_IsOperational, "IsOperational" }, // 1668a1fd7e19e14185139cbba360d4780362e1ab
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_MarkReturningToRefinery, "MarkReturningToRefinery" }, // 3278d0e80bbe51d4937988c427408ba3296758b2
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_MulticastHarvesterCritical, "MulticastHarvesterCritical" }, // 7128978e6e3d380d161046c0e83fe9939fd9490f
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_MulticastHarvesterDestroyed, "MulticastHarvesterDestroyed" }, // 66f79f5c15107de82510536860e14dff3c836bac
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_MulticastHarvesterUnderAttack, "MulticastHarvesterUnderAttack" }, // 0eff12b862960735b1ef061c5e804ec594f2f763
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_MulticastTurretFired, "MulticastTurretFired" }, // f5c4901f778db43fb4227805d09e63409124a89b
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_OnRep_AssignedHarvestPoint, "OnRep_AssignedHarvestPoint" }, // 53c8bffb61d776bcd7d4747bda97bf08fb35833e
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_OnRep_AssignedRefineryDockPoint, "OnRep_AssignedRefineryDockPoint" }, // 0f49b2e330614a79b372c5a48bc3abcb9e45e2a3
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_OnRep_CriticalHealth, "OnRep_CriticalHealth" }, // e0ff517d3a412afbd8098ba5e57dee0b3c719643
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_OnRep_CurrentCargo, "OnRep_CurrentCargo" }, // a407b9d488a14eb57a7c2510123bcd8a4faca240
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_OnRep_CurrentHealth, "OnRep_CurrentHealth" }, // 6d4438d57e72932753ee08839eb0ca5b3ec99261
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_OnRep_Destroyed, "OnRep_Destroyed" }, // a88f4f4e2c02b34601fcfdaca2d329d946cea778
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_OnRep_LifecycleState, "OnRep_LifecycleState" }, // 6d722136cfbc3858c7530cb86ecbc0e67d049d5d
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_OnRep_TeamId, "OnRep_TeamId" }, // 0176cff9705b91967ef84eb476103d7afb738482
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_OnRep_TurretTarget, "OnRep_TurretTarget" }, // 981063e17ea597554dc43837a5df742e95f8b077
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_RefreshHarvesterPresentation, "RefreshHarvesterPresentation" }, // a650553bdb382ffebd8d70af6b505d04da0d66f2
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_RepairHarvester, "RepairHarvester" }, // 40c8dd78d3deaf9fe54394fa3901a8115d32777c
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_SetAssignedHarvestPoint, "SetAssignedHarvestPoint" }, // 9df641355036faaba071aa61f34373d6e31ce7fd
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_SetAssignedRefineryDockPoint, "SetAssignedRefineryDockPoint" }, // 4ad7fcdfd9d810dd0eddf0ecbf8b255ccb2c1558
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_SetCurrentCargo, "SetCurrentCargo" }, // 365c5faa68637bb0abd817db8dca29248e041ea3
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_SetOwningRefinery, "SetOwningRefinery" }, // 54c750590f247d3e0d81629f96f404157f6303b6
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_SetRuntimeGroundAlignmentVisualComponent, "SetRuntimeGroundAlignmentVisualComponent" }, // 0eb96a11e43516e9776b51ba078ce5e676455cbe
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_SetRuntimeTurretComponents, "SetRuntimeTurretComponents" }, // 9473bfe38c5d4a553631d94a7780f85594928ad3
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_SetTeamId, "SetTeamId" }, // 18e28de034db1566462d2083ba48c80bbdb06eda
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_StartHarvesting, "StartHarvesting" }, // 178805ede833929b9e953b17cff57eafe5350fc3
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_StartRefineryDocking, "StartRefineryDocking" }, // b6ee87b1177de8ea0a689914fc32bac30b8085a4
		{ &Z_Construct_UFunction_URenegadeHarvesterCombatComponent_StartRefineryUnloading, "StartRefineryUnloading" }, // f6ec5527e56472963247ec42a134358f00ef433e
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenegadeHarvesterCombatComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class URenegadeHarvesterCombatComponent Property Definitions *******************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_TeamId = { "TeamId", "OnRep_TeamId", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, TeamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamId_MetaData), NewProp_TeamId_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDifferentNonNeutralTeamsAreEnemies = { "bDifferentNonNeutralTeamsAreEnemies", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeHarvesterCombatComponent), &UHT_STATICS::NewProp_bDifferentNonNeutralTeamsAreEnemies_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDifferentNonNeutralTeamsAreEnemies_MetaData), NewProp_bDifferentNonNeutralTeamsAreEnemies_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnsureOwnerReplicates = { "bEnsureOwnerReplicates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeHarvesterCombatComponent), &UHT_STATICS::NewProp_bEnsureOwnerReplicates_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnsureOwnerReplicates_MetaData), NewProp_bEnsureOwnerReplicates_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnsureOwnerReplicateMovement = { "bEnsureOwnerReplicateMovement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeHarvesterCombatComponent), &UHT_STATICS::NewProp_bEnsureOwnerReplicateMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnsureOwnerReplicateMovement_MetaData), NewProp_bEnsureOwnerReplicateMovement_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_HealthSettings = { "HealthSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, HealthSettings), Z_Construct_UScriptStruct_FRenegadeHarvesterHealthSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthSettings_MetaData), NewProp_HealthSettings_MetaData) }; // a27a5080aa2a871bd22dcd6b5f99238a3189e036
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TargetSettings = { "TargetSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, TargetSettings), Z_Construct_UScriptStruct_FRenegadeHarvesterTargetSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetSettings_MetaData), NewProp_TargetSettings_MetaData) }; // bd4f5dcb317d67a7b981624d91c6267e3bf549f7
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TargetPointComponent = { "TargetPointComponent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, TargetPointComponent), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPointComponent_MetaData), NewProp_TargetPointComponent_MetaData) }; // 9b9ae5abd01cfb2cb2ece10137db004a3044215c
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_TargetPointComponentTag = { "TargetPointComponentTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, TargetPointComponentTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPointComponentTag_MetaData), NewProp_TargetPointComponentTag_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TargetPointRelativeOffset = { "TargetPointRelativeOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, TargetPointRelativeOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPointRelativeOffset_MetaData), NewProp_TargetPointRelativeOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TurretSettings = { "TurretSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, TurretSettings), Z_Construct_UScriptStruct_FRenegadeHarvesterTurretSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurretSettings_MetaData), NewProp_TurretSettings_MetaData) }; // 4ef2c13db0b28589ae69ca336eedb63a9990480b
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TurretYawComponent = { "TurretYawComponent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, TurretYawComponent), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurretYawComponent_MetaData), NewProp_TurretYawComponent_MetaData) }; // 9b9ae5abd01cfb2cb2ece10137db004a3044215c
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_TurretYawComponentTag = { "TurretYawComponentTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, TurretYawComponentTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurretYawComponentTag_MetaData), NewProp_TurretYawComponentTag_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TurretPitchComponent = { "TurretPitchComponent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, TurretPitchComponent), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurretPitchComponent_MetaData), NewProp_TurretPitchComponent_MetaData) }; // 9b9ae5abd01cfb2cb2ece10137db004a3044215c
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_TurretPitchComponentTag = { "TurretPitchComponentTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, TurretPitchComponentTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurretPitchComponentTag_MetaData), NewProp_TurretPitchComponentTag_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TurretMuzzleComponent = { "TurretMuzzleComponent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, TurretMuzzleComponent), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurretMuzzleComponent_MetaData), NewProp_TurretMuzzleComponent_MetaData) }; // 9b9ae5abd01cfb2cb2ece10137db004a3044215c
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_TurretMuzzleComponentTag = { "TurretMuzzleComponentTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, TurretMuzzleComponentTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurretMuzzleComponentTag_MetaData), NewProp_TurretMuzzleComponentTag_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TurretMuzzleRelativeOffset = { "TurretMuzzleRelativeOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, TurretMuzzleRelativeOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurretMuzzleRelativeOffset_MetaData), NewProp_TurretMuzzleRelativeOffset_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_TurretMuzzleSocketName = { "TurretMuzzleSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, TurretMuzzleSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurretMuzzleSocketName_MetaData), NewProp_TurretMuzzleSocketName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TurretStaticMesh = { "TurretStaticMesh", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, TurretStaticMesh), Z_Construct_UClass_UStaticMesh, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurretStaticMesh_MetaData), NewProp_TurretStaticMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TurretSkeletalMesh = { "TurretSkeletalMesh", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, TurretSkeletalMesh), Z_Construct_UClass_USkeletalMesh, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurretSkeletalMesh_MetaData), NewProp_TurretSkeletalMesh_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAttachGeneratedTurretVisualToPitch = { "bAttachGeneratedTurretVisualToPitch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeHarvesterCombatComponent), &UHT_STATICS::NewProp_bAttachGeneratedTurretVisualToPitch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAttachGeneratedTurretVisualToPitch_MetaData), NewProp_bAttachGeneratedTurretVisualToPitch_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_TurretAttachSocket = { "TurretAttachSocket", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, TurretAttachSocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurretAttachSocket_MetaData), NewProp_TurretAttachSocket_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TurretRelativeLocation = { "TurretRelativeLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, TurretRelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurretRelativeLocation_MetaData), NewProp_TurretRelativeLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TurretRelativeRotation = { "TurretRelativeRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, TurretRelativeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurretRelativeRotation_MetaData), NewProp_TurretRelativeRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TurretRelativeScale = { "TurretRelativeScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, TurretRelativeScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurretRelativeScale_MetaData), NewProp_TurretRelativeScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GroundAlignmentSettings = { "GroundAlignmentSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, GroundAlignmentSettings), Z_Construct_UScriptStruct_FRenegadeHarvesterGroundAlignmentSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundAlignmentSettings_MetaData), NewProp_GroundAlignmentSettings_MetaData) }; // 411a9b9d5f64fead9b1f9575e00e158a25b25ccc
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GroundAlignmentVisualComponent = { "GroundAlignmentVisualComponent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, GroundAlignmentVisualComponent), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundAlignmentVisualComponent_MetaData), NewProp_GroundAlignmentVisualComponent_MetaData) }; // 9b9ae5abd01cfb2cb2ece10137db004a3044215c
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_GroundAlignmentVisualComponentTag = { "GroundAlignmentVisualComponentTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, GroundAlignmentVisualComponentTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundAlignmentVisualComponentTag_MetaData), NewProp_GroundAlignmentVisualComponentTag_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_EconomySettings = { "EconomySettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, EconomySettings), Z_Construct_UScriptStruct_FRenegadeHarvesterEconomySettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EconomySettings_MetaData), NewProp_EconomySettings_MetaData) }; // 8ac7e547246a4764fd3cf53146f7c4a976772721
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CycleSettings = { "CycleSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, CycleSettings), Z_Construct_UScriptStruct_FRenegadeHarvesterCycleSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CycleSettings_MetaData), NewProp_CycleSettings_MetaData) }; // f2512b6950802bd492b924c96334f1f42f80c1ff
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AssignedHarvestPoint = { "AssignedHarvestPoint", "OnRep_AssignedHarvestPoint", (EPropertyFlags)0x0114000100000825, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, AssignedHarvestPoint), Z_Construct_UClass_ARenegadeHarvestPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssignedHarvestPoint_MetaData), NewProp_AssignedHarvestPoint_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAutoFindNearestHarvestPoint = { "bAutoFindNearestHarvestPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeHarvesterCombatComponent), &UHT_STATICS::NewProp_bAutoFindNearestHarvestPoint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoFindNearestHarvestPoint_MetaData), NewProp_bAutoFindNearestHarvestPoint_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_HarvestPointSearchRadius = { "HarvestPointSearchRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, HarvestPointSearchRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HarvestPointSearchRadius_MetaData), NewProp_HarvestPointSearchRadius_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_RequiredHarvestPointGroup = { "RequiredHarvestPointGroup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, RequiredHarvestPointGroup), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredHarvestPointGroup_MetaData), NewProp_RequiredHarvestPointGroup_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AssignedRefineryDockPoint = { "AssignedRefineryDockPoint", "OnRep_AssignedRefineryDockPoint", (EPropertyFlags)0x0114000100000825, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, AssignedRefineryDockPoint), Z_Construct_UClass_ARenegadeRefineryDockPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssignedRefineryDockPoint_MetaData), NewProp_AssignedRefineryDockPoint_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAutoFindNearestRefineryDockPoint = { "bAutoFindNearestRefineryDockPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeHarvesterCombatComponent), &UHT_STATICS::NewProp_bAutoFindNearestRefineryDockPoint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoFindNearestRefineryDockPoint_MetaData), NewProp_bAutoFindNearestRefineryDockPoint_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RefineryDockPointSearchRadius = { "RefineryDockPointSearchRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, RefineryDockPointSearchRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefineryDockPointSearchRadius_MetaData), NewProp_RefineryDockPointSearchRadius_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_RequiredRefineryDockPointGroup = { "RequiredRefineryDockPointGroup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, RequiredRefineryDockPointGroup), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredRefineryDockPointGroup_MetaData), NewProp_RequiredRefineryDockPointGroup_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AudioSettings = { "AudioSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, AudioSettings), Z_Construct_UScriptStruct_FRenegadeHarvesterAudioSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioSettings_MetaData), NewProp_AudioSettings_MetaData) }; // 723fe8eff802cace1e9c15cd28acdfb4d9868e76
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_DestructionSettings = { "DestructionSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, DestructionSettings), Z_Construct_UScriptStruct_FRenegadeHarvesterDestructionSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestructionSettings_MetaData), NewProp_DestructionSettings_MetaData) }; // 46807b87db5b03222bf4715215c7a8bbb4b62953
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_WreckActorClass = { "WreckActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, WreckActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ARenegadeHarvesterWreck, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WreckActorClass_MetaData), NewProp_WreckActorClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CurrentHealth = { "CurrentHealth", "OnRep_CurrentHealth", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsDestroyed = { "bIsDestroyed", "OnRep_Destroyed", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeHarvesterCombatComponent), &UHT_STATICS::NewProp_bIsDestroyed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDestroyed_MetaData), NewProp_bIsDestroyed_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsCriticalHealth = { "bIsCriticalHealth", "OnRep_CriticalHealth", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeHarvesterCombatComponent), &UHT_STATICS::NewProp_bIsCriticalHealth_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCriticalHealth_MetaData), NewProp_bIsCriticalHealth_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CurrentTurretTarget = { "CurrentTurretTarget", "OnRep_TurretTarget", (EPropertyFlags)0x0114000100000034, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, CurrentTurretTarget), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTurretTarget_MetaData), NewProp_CurrentTurretTarget_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_LifecycleState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_LifecycleState = { "LifecycleState", "OnRep_LifecycleState", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, LifecycleState), Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeHarvesterLifecycleState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LifecycleState_MetaData), NewProp_LifecycleState_MetaData) }; // 303cb67f7589c2bedbdf72eb3531f9491cd3b307
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CurrentCargo = { "CurrentCargo", "OnRep_CurrentCargo", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, CurrentCargo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCargo_MetaData), NewProp_CurrentCargo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OwningRefineryActor = { "OwningRefineryActor", nullptr, (EPropertyFlags)0x0114000000000034, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, OwningRefineryActor), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningRefineryActor_MetaData), NewProp_OwningRefineryActor_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bHasSplineMovementClaim = { "bHasSplineMovementClaim", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeHarvesterCombatComponent), &UHT_STATICS::NewProp_bHasSplineMovementClaim_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasSplineMovementClaim_MetaData), NewProp_bHasSplineMovementClaim_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnHarvesterHealthChanged = { "OnHarvesterHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, OnHarvesterHealthChanged), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterHealthChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHarvesterHealthChanged_MetaData), NewProp_OnHarvesterHealthChanged_MetaData) }; // 64ca37263c49bc2cc20275b8162d6b005ac6ef12
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnHarvesterUnderAttack = { "OnHarvesterUnderAttack", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, OnHarvesterUnderAttack), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterUnderAttackSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHarvesterUnderAttack_MetaData), NewProp_OnHarvesterUnderAttack_MetaData) }; // 40723b63db73fa999f07310d5630a66c6c8deb53
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnHarvesterDestroyed = { "OnHarvesterDestroyed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, OnHarvesterDestroyed), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterDestroyedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHarvesterDestroyed_MetaData), NewProp_OnHarvesterDestroyed_MetaData) }; // 8d215c6af76b228348a1e9f3a7b2ab13929363b9
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnTurretTargetChanged = { "OnTurretTargetChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, OnTurretTargetChanged), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterTargetChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTurretTargetChanged_MetaData), NewProp_OnTurretTargetChanged_MetaData) }; // 5909bbcace5efee0e5c40cbda2025408e1117cfc
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnTurretFired = { "OnTurretFired", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, OnTurretFired), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterTurretFiredSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTurretFired_MetaData), NewProp_OnTurretFired_MetaData) }; // 0e2ddb1cb32c46f47507652d27193db9720eafdc
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnLifecycleStateChanged = { "OnLifecycleStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, OnLifecycleStateChanged), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterLifecycleChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLifecycleStateChanged_MetaData), NewProp_OnLifecycleStateChanged_MetaData) }; // fd2e48c89b2e604c1c25becc24ee57b4063fc6e6
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnCargoChanged = { "OnCargoChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, OnCargoChanged), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterCargoChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCargoChanged_MetaData), NewProp_OnCargoChanged_MetaData) }; // 5e9e7bbadcf6e3afb6d6758bdfbd919dc2edd224
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnCreditsDelivered = { "OnCreditsDelivered", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, OnCreditsDelivered), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterCreditsDeliveredSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCreditsDelivered_MetaData), NewProp_OnCreditsDelivered_MetaData) }; // cda4b4dc95cb9a58984a7daf56daf40978a320bd
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnHarvestingStarted = { "OnHarvestingStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, OnHarvestingStarted), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterSimpleLifecycleSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHarvestingStarted_MetaData), NewProp_OnHarvestingStarted_MetaData) }; // 30087798343feaea6bfe48066d06422d5120aa75
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnHarvestingEnded = { "OnHarvestingEnded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, OnHarvestingEnded), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterSimpleLifecycleSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHarvestingEnded_MetaData), NewProp_OnHarvestingEnded_MetaData) }; // 30087798343feaea6bfe48066d06422d5120aa75
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnRefineryDockingStarted = { "OnRefineryDockingStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, OnRefineryDockingStarted), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterSimpleLifecycleSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRefineryDockingStarted_MetaData), NewProp_OnRefineryDockingStarted_MetaData) }; // 30087798343feaea6bfe48066d06422d5120aa75
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnRefineryDocked = { "OnRefineryDocked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, OnRefineryDocked), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterSimpleLifecycleSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRefineryDocked_MetaData), NewProp_OnRefineryDocked_MetaData) }; // 30087798343feaea6bfe48066d06422d5120aa75
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnRefineryUnloadingStarted = { "OnRefineryUnloadingStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, OnRefineryUnloadingStarted), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterSimpleLifecycleSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRefineryUnloadingStarted_MetaData), NewProp_OnRefineryUnloadingStarted_MetaData) }; // 30087798343feaea6bfe48066d06422d5120aa75
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnRefineryUnloadingEnded = { "OnRefineryUnloadingEnded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, OnRefineryUnloadingEnded), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterSimpleLifecycleSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRefineryUnloadingEnded_MetaData), NewProp_OnRefineryUnloadingEnded_MetaData) }; // 30087798343feaea6bfe48066d06422d5120aa75
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnRefineryUndocked = { "OnRefineryUndocked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, OnRefineryUndocked), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterSimpleLifecycleSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRefineryUndocked_MetaData), NewProp_OnRefineryUndocked_MetaData) }; // 30087798343feaea6bfe48066d06422d5120aa75
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnHarvestPointApproachStarted = { "OnHarvestPointApproachStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, OnHarvestPointApproachStarted), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterHarvestPointSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHarvestPointApproachStarted_MetaData), NewProp_OnHarvestPointApproachStarted_MetaData) }; // 50b97b5631ef4ff1ca1177097d7ba99f7d5aed5c
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnHarvestPointArrived = { "OnHarvestPointArrived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, OnHarvestPointArrived), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterHarvestPointSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHarvestPointArrived_MetaData), NewProp_OnHarvestPointArrived_MetaData) }; // 50b97b5631ef4ff1ca1177097d7ba99f7d5aed5c
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnRefineryDockPointApproachStarted = { "OnRefineryDockPointApproachStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, OnRefineryDockPointApproachStarted), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterDockPointSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRefineryDockPointApproachStarted_MetaData), NewProp_OnRefineryDockPointApproachStarted_MetaData) }; // 54341482076d44533466d5521a13c881e80970ad
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnRefineryDockPointArrived = { "OnRefineryDockPointArrived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, OnRefineryDockPointArrived), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterDockPointSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRefineryDockPointArrived_MetaData), NewProp_OnRefineryDockPointArrived_MetaData) }; // 54341482076d44533466d5521a13c881e80970ad
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnReturnToRefineryRouteRequested = { "OnReturnToRefineryRouteRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, OnReturnToRefineryRouteRequested), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterSimpleLifecycleSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnReturnToRefineryRouteRequested_MetaData), NewProp_OnReturnToRefineryRouteRequested_MetaData) }; // 30087798343feaea6bfe48066d06422d5120aa75
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnOutboundHarvestRouteRequested = { "OnOutboundHarvestRouteRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, OnOutboundHarvestRouteRequested), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvesterSimpleLifecycleSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnOutboundHarvestRouteRequested_MetaData), NewProp_OnOutboundHarvestRouteRequested_MetaData) }; // 30087798343feaea6bfe48066d06422d5120aa75
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RuntimeTargetPointComponent = { "RuntimeTargetPointComponent", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, RuntimeTargetPointComponent), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeTargetPointComponent_MetaData), NewProp_RuntimeTargetPointComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RuntimeTurretYawComponent = { "RuntimeTurretYawComponent", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, RuntimeTurretYawComponent), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeTurretYawComponent_MetaData), NewProp_RuntimeTurretYawComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RuntimeTurretPitchComponent = { "RuntimeTurretPitchComponent", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, RuntimeTurretPitchComponent), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeTurretPitchComponent_MetaData), NewProp_RuntimeTurretPitchComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RuntimeTurretMuzzleComponent = { "RuntimeTurretMuzzleComponent", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, RuntimeTurretMuzzleComponent), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeTurretMuzzleComponent_MetaData), NewProp_RuntimeTurretMuzzleComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_GeneratedTurretComponent = { "GeneratedTurretComponent", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, GeneratedTurretComponent), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedTurretComponent_MetaData), NewProp_GeneratedTurretComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RuntimeGroundAlignmentVisualComponent = { "RuntimeGroundAlignmentVisualComponent", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, RuntimeGroundAlignmentVisualComponent), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeGroundAlignmentVisualComponent_MetaData), NewProp_RuntimeGroundAlignmentVisualComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CachedTurretYawBaseComponent = { "CachedTurretYawBaseComponent", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, CachedTurretYawBaseComponent), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedTurretYawBaseComponent_MetaData), NewProp_CachedTurretYawBaseComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CachedTurretPitchBaseComponent = { "CachedTurretPitchBaseComponent", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, CachedTurretPitchBaseComponent), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedTurretPitchBaseComponent_MetaData), NewProp_CachedTurretPitchBaseComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_BulletVisualComponents_Inner = { "BulletVisualComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMeshComponent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_BulletVisualComponents = { "BulletVisualComponents", nullptr, (EPropertyFlags)0x0144008000002008, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeHarvesterCombatComponent, BulletVisualComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletVisualComponents_MetaData), NewProp_BulletVisualComponents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TeamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDifferentNonNeutralTeamsAreEnemies,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnsureOwnerReplicates,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnsureOwnerReplicateMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HealthSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetPointComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetPointComponentTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetPointRelativeOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TurretSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TurretYawComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TurretYawComponentTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TurretPitchComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TurretPitchComponentTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TurretMuzzleComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TurretMuzzleComponentTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TurretMuzzleRelativeOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TurretMuzzleSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TurretStaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TurretSkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAttachGeneratedTurretVisualToPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TurretAttachSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TurretRelativeLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TurretRelativeRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TurretRelativeScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GroundAlignmentSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GroundAlignmentVisualComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GroundAlignmentVisualComponentTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EconomySettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CycleSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AssignedHarvestPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAutoFindNearestHarvestPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HarvestPointSearchRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RequiredHarvestPointGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AssignedRefineryDockPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAutoFindNearestRefineryDockPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RefineryDockPointSearchRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RequiredRefineryDockPointGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AudioSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DestructionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WreckActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsDestroyed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsCriticalHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentTurretTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LifecycleState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LifecycleState,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentCargo,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OwningRefineryActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bHasSplineMovementClaim,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnHarvesterHealthChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnHarvesterUnderAttack,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnHarvesterDestroyed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnTurretTargetChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnTurretFired,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnLifecycleStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnCargoChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnCreditsDelivered,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnHarvestingStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnHarvestingEnded,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnRefineryDockingStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnRefineryDocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnRefineryUnloadingStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnRefineryUnloadingEnded,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnRefineryUndocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnHarvestPointApproachStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnHarvestPointArrived,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnRefineryDockPointApproachStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnRefineryDockPointArrived,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnReturnToRefineryRouteRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnOutboundHarvestRouteRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RuntimeTargetPointComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RuntimeTurretYawComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RuntimeTurretPitchComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RuntimeTurretMuzzleComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GeneratedTurretComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RuntimeGroundAlignmentVisualComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CachedTurretYawBaseComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CachedTurretPitchBaseComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BulletVisualComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BulletVisualComponents,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class URenegadeHarvesterCombatComponent Property Definitions *********************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UActorComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URenegadeHarvesterCombatComponent,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void URenegadeHarvesterCombatComponent_StaticRegisterNativesURenegadeHarvesterCombatComponent()
{
	UClass* Class = URenegadeHarvesterCombatComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URenegadeHarvesterCombatComponent;
UClass* Z_Construct_UClass_URenegadeHarvesterCombatComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URenegadeHarvesterCombatComponent;
		if (!Z_Registration_Info_UClass_URenegadeHarvesterCombatComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RenegadeHarvesterCombatComponent"),
				Z_Registration_Info_UClass_URenegadeHarvesterCombatComponent.InnerSingleton,
				URenegadeHarvesterCombatComponent_StaticRegisterNativesURenegadeHarvesterCombatComponent,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_URenegadeHarvesterCombatComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URenegadeHarvesterCombatComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URenegadeHarvesterCombatComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URenegadeHarvesterCombatComponent.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void URenegadeHarvesterCombatComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_TeamId(TEXT("TeamId"));
	static FName Name_AssignedHarvestPoint(TEXT("AssignedHarvestPoint"));
	static FName Name_AssignedRefineryDockPoint(TEXT("AssignedRefineryDockPoint"));
	static FName Name_CurrentHealth(TEXT("CurrentHealth"));
	static FName Name_bIsDestroyed(TEXT("bIsDestroyed"));
	static FName Name_bIsCriticalHealth(TEXT("bIsCriticalHealth"));
	static FName Name_CurrentTurretTarget(TEXT("CurrentTurretTarget"));
	static FName Name_LifecycleState(TEXT("LifecycleState"));
	static FName Name_CurrentCargo(TEXT("CurrentCargo"));
	static FName Name_OwningRefineryActor(TEXT("OwningRefineryActor"));
	const bool bIsValid = true
		&& Name_TeamId == ClassReps[(int32)ENetFields_Private::TeamId].Property->GetFName()
		&& Name_AssignedHarvestPoint == ClassReps[(int32)ENetFields_Private::AssignedHarvestPoint].Property->GetFName()
		&& Name_AssignedRefineryDockPoint == ClassReps[(int32)ENetFields_Private::AssignedRefineryDockPoint].Property->GetFName()
		&& Name_CurrentHealth == ClassReps[(int32)ENetFields_Private::CurrentHealth].Property->GetFName()
		&& Name_bIsDestroyed == ClassReps[(int32)ENetFields_Private::bIsDestroyed].Property->GetFName()
		&& Name_bIsCriticalHealth == ClassReps[(int32)ENetFields_Private::bIsCriticalHealth].Property->GetFName()
		&& Name_CurrentTurretTarget == ClassReps[(int32)ENetFields_Private::CurrentTurretTarget].Property->GetFName()
		&& Name_LifecycleState == ClassReps[(int32)ENetFields_Private::LifecycleState].Property->GetFName()
		&& Name_CurrentCargo == ClassReps[(int32)ENetFields_Private::CurrentCargo].Property->GetFName()
		&& Name_OwningRefineryActor == ClassReps[(int32)ENetFields_Private::OwningRefineryActor].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in URenegadeHarvesterCombatComponent"));
}
#endif
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URenegadeHarvesterCombatComponent);
URenegadeHarvesterCombatComponent::~URenegadeHarvesterCombatComponent() {}
// ********** End Class URenegadeHarvesterCombatComponent ******************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeHarvesterCombatComponent_h__Script_RenegadeSoldierCombat_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URenegadeHarvesterCombatComponent, TEXT("URenegadeHarvesterCombatComponent"), &Z_Registration_Info_UClass_URenegadeHarvesterCombatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URenegadeHarvesterCombatComponent), 3446187613U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeHarvesterCombatComponent_h__Script_RenegadeSoldierCombat_6d0af1017c06d762b714199147b77ec38afa37da{
	TEXT("/Script/RenegadeSoldierCombat"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
