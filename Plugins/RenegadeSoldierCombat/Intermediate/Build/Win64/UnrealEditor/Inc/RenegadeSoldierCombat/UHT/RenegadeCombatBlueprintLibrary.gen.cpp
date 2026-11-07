// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RenegadeCombatBlueprintLibrary.h"
#include "RenegadeCombatTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRenegadeCombatBlueprintLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_URenegadeCombatBlueprintLibrary(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeWeaponSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_URenegadeBuildingCombatComponent(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_URenegadeCombatBlueprintLibrary(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_URenegadeHarvesterCombatComponent(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_URenegadeSoldierCombatComponent(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_ARenegadeTeamCreditsManager(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class URenegadeCombatBlueprintLibrary Function AddRenegadeTeamCredits **********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeCombatBlueprintLibrary_AddRenegadeTeamCredits_Statics
struct UHT_STATICS
{
	struct RenegadeCombatBlueprintLibrary_eventAddRenegadeTeamCredits_Parms
	{
		const UObject* WorldContextObject;
		FName TeamId;
		int32 Amount;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Economy" },
		{ "ModuleRelativePath", "Public/RenegadeCombatBlueprintLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddRenegadeTeamCredits constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TeamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddRenegadeTeamCredits constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddRenegadeTeamCredits Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeCombatBlueprintLibrary_eventAddRenegadeTeamCredits_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_TeamId = { "TeamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeCombatBlueprintLibrary_eventAddRenegadeTeamCredits_Parms, TeamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeCombatBlueprintLibrary_eventAddRenegadeTeamCredits_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeCombatBlueprintLibrary_eventAddRenegadeTeamCredits_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TeamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AddRenegadeTeamCredits Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeCombatBlueprintLibrary, nullptr, "AddRenegadeTeamCredits", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeCombatBlueprintLibrary_eventAddRenegadeTeamCredits_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeCombatBlueprintLibrary_eventAddRenegadeTeamCredits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeCombatBlueprintLibrary_AddRenegadeTeamCredits(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeCombatBlueprintLibrary::execAddRenegadeTeamCredits)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_TeamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=URenegadeCombatBlueprintLibrary::AddRenegadeTeamCredits(Z_Param_WorldContextObject,Z_Param_TeamId,Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class URenegadeCombatBlueprintLibrary Function AddRenegadeTeamCredits ************

// ********** Begin Class URenegadeCombatBlueprintLibrary Function AreRenegadeActorsHostile ********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeCombatBlueprintLibrary_AreRenegadeActorsHostile_Statics
struct UHT_STATICS
{
	struct RenegadeCombatBlueprintLibrary_eventAreRenegadeActorsHostile_Parms
	{
		const AActor* FirstActor;
		const AActor* SecondActor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Combat" },
		{ "ModuleRelativePath", "Public/RenegadeCombatBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstActor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AreRenegadeActorsHostile constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SecondActor;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeCombatBlueprintLibrary_eventAreRenegadeActorsHostile_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AreRenegadeActorsHostile constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AreRenegadeActorsHostile Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_FirstActor = { "FirstActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeCombatBlueprintLibrary_eventAreRenegadeActorsHostile_Parms, FirstActor), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstActor_MetaData), NewProp_FirstActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SecondActor = { "SecondActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeCombatBlueprintLibrary_eventAreRenegadeActorsHostile_Parms, SecondActor), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondActor_MetaData), NewProp_SecondActor_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeCombatBlueprintLibrary_eventAreRenegadeActorsHostile_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FirstActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SecondActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AreRenegadeActorsHostile Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeCombatBlueprintLibrary, nullptr, "AreRenegadeActorsHostile", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeCombatBlueprintLibrary_eventAreRenegadeActorsHostile_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeCombatBlueprintLibrary_eventAreRenegadeActorsHostile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeCombatBlueprintLibrary_AreRenegadeActorsHostile(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeCombatBlueprintLibrary::execAreRenegadeActorsHostile)
{
	P_GET_OBJECT(AActor,Z_Param_FirstActor);
	P_GET_OBJECT(AActor,Z_Param_SecondActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URenegadeCombatBlueprintLibrary::AreRenegadeActorsHostile(Z_Param_FirstActor,Z_Param_SecondActor);
	P_NATIVE_END;
}
// ********** End Class URenegadeCombatBlueprintLibrary Function AreRenegadeActorsHostile **********

// ********** Begin Class URenegadeCombatBlueprintLibrary Function GetRenegadeBuildingCombatComponent 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeCombatBlueprintLibrary_GetRenegadeBuildingCombatComponent_Statics
struct UHT_STATICS
{
	struct RenegadeCombatBlueprintLibrary_eventGetRenegadeBuildingCombatComponent_Parms
	{
		const AActor* Actor;
		URenegadeBuildingCombatComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Buildings" },
		{ "ModuleRelativePath", "Public/RenegadeCombatBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRenegadeBuildingCombatComponent constinit property declarations ****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRenegadeBuildingCombatComponent constinit property declarations ******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRenegadeBuildingCombatComponent Property Definitions ***************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeCombatBlueprintLibrary_eventGetRenegadeBuildingCombatComponent_Parms, Actor), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeCombatBlueprintLibrary_eventGetRenegadeBuildingCombatComponent_Parms, ReturnValue), Z_Construct_UClass_URenegadeBuildingCombatComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetRenegadeBuildingCombatComponent Property Definitions *****************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeCombatBlueprintLibrary, nullptr, "GetRenegadeBuildingCombatComponent", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeCombatBlueprintLibrary_eventGetRenegadeBuildingCombatComponent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeCombatBlueprintLibrary_eventGetRenegadeBuildingCombatComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeCombatBlueprintLibrary_GetRenegadeBuildingCombatComponent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeCombatBlueprintLibrary::execGetRenegadeBuildingCombatComponent)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URenegadeBuildingCombatComponent**)Z_Param__Result=URenegadeCombatBlueprintLibrary::GetRenegadeBuildingCombatComponent(Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class URenegadeCombatBlueprintLibrary Function GetRenegadeBuildingCombatComponent 

// ********** Begin Class URenegadeCombatBlueprintLibrary Function GetRenegadeCombatComponent ******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeCombatBlueprintLibrary_GetRenegadeCombatComponent_Statics
struct UHT_STATICS
{
	struct RenegadeCombatBlueprintLibrary_eventGetRenegadeCombatComponent_Parms
	{
		const AActor* Actor;
		URenegadeSoldierCombatComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Combat" },
		{ "ModuleRelativePath", "Public/RenegadeCombatBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRenegadeCombatComponent constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRenegadeCombatComponent constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRenegadeCombatComponent Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeCombatBlueprintLibrary_eventGetRenegadeCombatComponent_Parms, Actor), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeCombatBlueprintLibrary_eventGetRenegadeCombatComponent_Parms, ReturnValue), Z_Construct_UClass_URenegadeSoldierCombatComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetRenegadeCombatComponent Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeCombatBlueprintLibrary, nullptr, "GetRenegadeCombatComponent", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeCombatBlueprintLibrary_eventGetRenegadeCombatComponent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeCombatBlueprintLibrary_eventGetRenegadeCombatComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeCombatBlueprintLibrary_GetRenegadeCombatComponent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeCombatBlueprintLibrary::execGetRenegadeCombatComponent)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URenegadeSoldierCombatComponent**)Z_Param__Result=URenegadeCombatBlueprintLibrary::GetRenegadeCombatComponent(Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class URenegadeCombatBlueprintLibrary Function GetRenegadeCombatComponent ********

// ********** Begin Class URenegadeCombatBlueprintLibrary Function GetRenegadeHarvesterCombatComponent 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeCombatBlueprintLibrary_GetRenegadeHarvesterCombatComponent_Statics
struct UHT_STATICS
{
	struct RenegadeCombatBlueprintLibrary_eventGetRenegadeHarvesterCombatComponent_Parms
	{
		const AActor* Actor;
		URenegadeHarvesterCombatComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvesters" },
		{ "ModuleRelativePath", "Public/RenegadeCombatBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRenegadeHarvesterCombatComponent constinit property declarations ***
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRenegadeHarvesterCombatComponent constinit property declarations *****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRenegadeHarvesterCombatComponent Property Definitions **************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeCombatBlueprintLibrary_eventGetRenegadeHarvesterCombatComponent_Parms, Actor), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeCombatBlueprintLibrary_eventGetRenegadeHarvesterCombatComponent_Parms, ReturnValue), Z_Construct_UClass_URenegadeHarvesterCombatComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetRenegadeHarvesterCombatComponent Property Definitions ****************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeCombatBlueprintLibrary, nullptr, "GetRenegadeHarvesterCombatComponent", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeCombatBlueprintLibrary_eventGetRenegadeHarvesterCombatComponent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeCombatBlueprintLibrary_eventGetRenegadeHarvesterCombatComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeCombatBlueprintLibrary_GetRenegadeHarvesterCombatComponent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeCombatBlueprintLibrary::execGetRenegadeHarvesterCombatComponent)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URenegadeHarvesterCombatComponent**)Z_Param__Result=URenegadeCombatBlueprintLibrary::GetRenegadeHarvesterCombatComponent(Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class URenegadeCombatBlueprintLibrary Function GetRenegadeHarvesterCombatComponent 

// ********** Begin Class URenegadeCombatBlueprintLibrary Function GetRenegadeTeamCredits **********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeCombatBlueprintLibrary_GetRenegadeTeamCredits_Statics
struct UHT_STATICS
{
	struct RenegadeCombatBlueprintLibrary_eventGetRenegadeTeamCredits_Parms
	{
		const UObject* WorldContextObject;
		FName TeamId;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Economy" },
		{ "ModuleRelativePath", "Public/RenegadeCombatBlueprintLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRenegadeTeamCredits constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TeamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRenegadeTeamCredits constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRenegadeTeamCredits Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeCombatBlueprintLibrary_eventGetRenegadeTeamCredits_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_TeamId = { "TeamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeCombatBlueprintLibrary_eventGetRenegadeTeamCredits_Parms, TeamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeCombatBlueprintLibrary_eventGetRenegadeTeamCredits_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TeamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetRenegadeTeamCredits Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeCombatBlueprintLibrary, nullptr, "GetRenegadeTeamCredits", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeCombatBlueprintLibrary_eventGetRenegadeTeamCredits_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeCombatBlueprintLibrary_eventGetRenegadeTeamCredits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeCombatBlueprintLibrary_GetRenegadeTeamCredits(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeCombatBlueprintLibrary::execGetRenegadeTeamCredits)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_TeamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=URenegadeCombatBlueprintLibrary::GetRenegadeTeamCredits(Z_Param_WorldContextObject,Z_Param_TeamId);
	P_NATIVE_END;
}
// ********** End Class URenegadeCombatBlueprintLibrary Function GetRenegadeTeamCredits ************

// ********** Begin Class URenegadeCombatBlueprintLibrary Function GetRenegadeTeamCreditsManager ***
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeCombatBlueprintLibrary_GetRenegadeTeamCreditsManager_Statics
struct UHT_STATICS
{
	struct RenegadeCombatBlueprintLibrary_eventGetRenegadeTeamCreditsManager_Parms
	{
		const UObject* WorldContextObject;
		ARenegadeTeamCreditsManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Economy" },
		{ "ModuleRelativePath", "Public/RenegadeCombatBlueprintLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRenegadeTeamCreditsManager constinit property declarations *********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRenegadeTeamCreditsManager constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRenegadeTeamCreditsManager Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeCombatBlueprintLibrary_eventGetRenegadeTeamCreditsManager_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeCombatBlueprintLibrary_eventGetRenegadeTeamCreditsManager_Parms, ReturnValue), Z_Construct_UClass_ARenegadeTeamCreditsManager, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetRenegadeTeamCreditsManager Property Definitions **********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeCombatBlueprintLibrary, nullptr, "GetRenegadeTeamCreditsManager", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeCombatBlueprintLibrary_eventGetRenegadeTeamCreditsManager_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeCombatBlueprintLibrary_eventGetRenegadeTeamCreditsManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeCombatBlueprintLibrary_GetRenegadeTeamCreditsManager(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeCombatBlueprintLibrary::execGetRenegadeTeamCreditsManager)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ARenegadeTeamCreditsManager**)Z_Param__Result=URenegadeCombatBlueprintLibrary::GetRenegadeTeamCreditsManager(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class URenegadeCombatBlueprintLibrary Function GetRenegadeTeamCreditsManager *****

// ********** Begin Class URenegadeCombatBlueprintLibrary Function GetRenegadeTeamId ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeCombatBlueprintLibrary_GetRenegadeTeamId_Statics
struct UHT_STATICS
{
	struct RenegadeCombatBlueprintLibrary_eventGetRenegadeTeamId_Parms
	{
		const AActor* Actor;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Combat" },
		{ "ModuleRelativePath", "Public/RenegadeCombatBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRenegadeTeamId constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRenegadeTeamId constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRenegadeTeamId Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeCombatBlueprintLibrary_eventGetRenegadeTeamId_Parms, Actor), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeCombatBlueprintLibrary_eventGetRenegadeTeamId_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetRenegadeTeamId Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeCombatBlueprintLibrary, nullptr, "GetRenegadeTeamId", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeCombatBlueprintLibrary_eventGetRenegadeTeamId_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeCombatBlueprintLibrary_eventGetRenegadeTeamId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeCombatBlueprintLibrary_GetRenegadeTeamId(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeCombatBlueprintLibrary::execGetRenegadeTeamId)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=URenegadeCombatBlueprintLibrary::GetRenegadeTeamId(Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class URenegadeCombatBlueprintLibrary Function GetRenegadeTeamId *****************

// ********** Begin Class URenegadeCombatBlueprintLibrary Function MakeAutomaticRiflePreset ********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeCombatBlueprintLibrary_MakeAutomaticRiflePreset_Statics
struct UHT_STATICS
{
	struct RenegadeCombatBlueprintLibrary_eventMakeAutomaticRiflePreset_Parms
	{
		FRenegadeWeaponSettings ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Weapon Presets" },
		{ "ModuleRelativePath", "Public/RenegadeCombatBlueprintLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MakeAutomaticRiflePreset constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeAutomaticRiflePreset constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeAutomaticRiflePreset Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeCombatBlueprintLibrary_eventMakeAutomaticRiflePreset_Parms, ReturnValue), Z_Construct_UScriptStruct_FRenegadeWeaponSettings, METADATA_PARAMS(0, nullptr) }; // 99eb1d7bdc6f572230d4fc8d38884a3a59f036d1
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function MakeAutomaticRiflePreset Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeCombatBlueprintLibrary, nullptr, "MakeAutomaticRiflePreset", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeCombatBlueprintLibrary_eventMakeAutomaticRiflePreset_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeCombatBlueprintLibrary_eventMakeAutomaticRiflePreset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeCombatBlueprintLibrary_MakeAutomaticRiflePreset(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeCombatBlueprintLibrary::execMakeAutomaticRiflePreset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRenegadeWeaponSettings*)Z_Param__Result=URenegadeCombatBlueprintLibrary::MakeAutomaticRiflePreset();
	P_NATIVE_END;
}
// ********** End Class URenegadeCombatBlueprintLibrary Function MakeAutomaticRiflePreset **********

// ********** Begin Class URenegadeCombatBlueprintLibrary Function MakeGrenadeLauncherPreset *******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeCombatBlueprintLibrary_MakeGrenadeLauncherPreset_Statics
struct UHT_STATICS
{
	struct RenegadeCombatBlueprintLibrary_eventMakeGrenadeLauncherPreset_Parms
	{
		FRenegadeWeaponSettings ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Weapon Presets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns a Renegade-style 8-round ballistic Grenadier preset with impact splash. Assign mesh/effect/audio assets after applying it. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a Renegade-style 8-round ballistic Grenadier preset with impact splash. Assign mesh/effect/audio assets after applying it." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function MakeGrenadeLauncherPreset constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeGrenadeLauncherPreset constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeGrenadeLauncherPreset Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeCombatBlueprintLibrary_eventMakeGrenadeLauncherPreset_Parms, ReturnValue), Z_Construct_UScriptStruct_FRenegadeWeaponSettings, METADATA_PARAMS(0, nullptr) }; // 99eb1d7bdc6f572230d4fc8d38884a3a59f036d1
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function MakeGrenadeLauncherPreset Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeCombatBlueprintLibrary, nullptr, "MakeGrenadeLauncherPreset", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeCombatBlueprintLibrary_eventMakeGrenadeLauncherPreset_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeCombatBlueprintLibrary_eventMakeGrenadeLauncherPreset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeCombatBlueprintLibrary_MakeGrenadeLauncherPreset(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeCombatBlueprintLibrary::execMakeGrenadeLauncherPreset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRenegadeWeaponSettings*)Z_Param__Result=URenegadeCombatBlueprintLibrary::MakeGrenadeLauncherPreset();
	P_NATIVE_END;
}
// ********** End Class URenegadeCombatBlueprintLibrary Function MakeGrenadeLauncherPreset *********

// ********** Begin Class URenegadeCombatBlueprintLibrary Function MakePistolPreset ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeCombatBlueprintLibrary_MakePistolPreset_Statics
struct UHT_STATICS
{
	struct RenegadeCombatBlueprintLibrary_eventMakePistolPreset_Parms
	{
		FRenegadeWeaponSettings ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Weapon Presets" },
		{ "ModuleRelativePath", "Public/RenegadeCombatBlueprintLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MakePistolPreset constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakePistolPreset constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakePistolPreset Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeCombatBlueprintLibrary_eventMakePistolPreset_Parms, ReturnValue), Z_Construct_UScriptStruct_FRenegadeWeaponSettings, METADATA_PARAMS(0, nullptr) }; // 99eb1d7bdc6f572230d4fc8d38884a3a59f036d1
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function MakePistolPreset Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeCombatBlueprintLibrary, nullptr, "MakePistolPreset", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeCombatBlueprintLibrary_eventMakePistolPreset_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeCombatBlueprintLibrary_eventMakePistolPreset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeCombatBlueprintLibrary_MakePistolPreset(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeCombatBlueprintLibrary::execMakePistolPreset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRenegadeWeaponSettings*)Z_Param__Result=URenegadeCombatBlueprintLibrary::MakePistolPreset();
	P_NATIVE_END;
}
// ********** End Class URenegadeCombatBlueprintLibrary Function MakePistolPreset ******************

// ********** Begin Class URenegadeCombatBlueprintLibrary Function MakeRocketLauncherPreset ********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeCombatBlueprintLibrary_MakeRocketLauncherPreset_Statics
struct UHT_STATICS
{
	struct RenegadeCombatBlueprintLibrary_eventMakeRocketLauncherPreset_Parms
	{
		FRenegadeWeaponSettings ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Weapon Presets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns a polished one-round infantry rocket-launcher preset. Assign mesh/effect/audio assets after applying it. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCombatBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a polished one-round infantry rocket-launcher preset. Assign mesh/effect/audio assets after applying it." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function MakeRocketLauncherPreset constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeRocketLauncherPreset constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeRocketLauncherPreset Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeCombatBlueprintLibrary_eventMakeRocketLauncherPreset_Parms, ReturnValue), Z_Construct_UScriptStruct_FRenegadeWeaponSettings, METADATA_PARAMS(0, nullptr) }; // 99eb1d7bdc6f572230d4fc8d38884a3a59f036d1
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function MakeRocketLauncherPreset Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeCombatBlueprintLibrary, nullptr, "MakeRocketLauncherPreset", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeCombatBlueprintLibrary_eventMakeRocketLauncherPreset_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeCombatBlueprintLibrary_eventMakeRocketLauncherPreset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeCombatBlueprintLibrary_MakeRocketLauncherPreset(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeCombatBlueprintLibrary::execMakeRocketLauncherPreset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRenegadeWeaponSettings*)Z_Param__Result=URenegadeCombatBlueprintLibrary::MakeRocketLauncherPreset();
	P_NATIVE_END;
}
// ********** End Class URenegadeCombatBlueprintLibrary Function MakeRocketLauncherPreset **********

// ********** Begin Class URenegadeCombatBlueprintLibrary Function SetRenegadeTeamId ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeCombatBlueprintLibrary_SetRenegadeTeamId_Statics
struct UHT_STATICS
{
	struct RenegadeCombatBlueprintLibrary_eventSetRenegadeTeamId_Parms
	{
		AActor* Actor;
		FName NewTeamId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Combat" },
		{ "ModuleRelativePath", "Public/RenegadeCombatBlueprintLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetRenegadeTeamId constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NewTeamId;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeCombatBlueprintLibrary_eventSetRenegadeTeamId_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetRenegadeTeamId constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetRenegadeTeamId Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeCombatBlueprintLibrary_eventSetRenegadeTeamId_Parms, Actor), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_NewTeamId = { "NewTeamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeCombatBlueprintLibrary_eventSetRenegadeTeamId_Parms, NewTeamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeCombatBlueprintLibrary_eventSetRenegadeTeamId_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewTeamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetRenegadeTeamId Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeCombatBlueprintLibrary, nullptr, "SetRenegadeTeamId", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeCombatBlueprintLibrary_eventSetRenegadeTeamId_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeCombatBlueprintLibrary_eventSetRenegadeTeamId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeCombatBlueprintLibrary_SetRenegadeTeamId(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeCombatBlueprintLibrary::execSetRenegadeTeamId)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_PROPERTY(FNameProperty,Z_Param_NewTeamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URenegadeCombatBlueprintLibrary::SetRenegadeTeamId(Z_Param_Actor,Z_Param_NewTeamId);
	P_NATIVE_END;
}
// ********** End Class URenegadeCombatBlueprintLibrary Function SetRenegadeTeamId *****************

// ********** Begin Class URenegadeCombatBlueprintLibrary Function SpendRenegadeTeamCredits ********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeCombatBlueprintLibrary_SpendRenegadeTeamCredits_Statics
struct UHT_STATICS
{
	struct RenegadeCombatBlueprintLibrary_eventSpendRenegadeTeamCredits_Parms
	{
		const UObject* WorldContextObject;
		FName TeamId;
		int32 Amount;
		int32 RemainingCredits;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Economy" },
		{ "ModuleRelativePath", "Public/RenegadeCombatBlueprintLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SpendRenegadeTeamCredits constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TeamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RemainingCredits;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeCombatBlueprintLibrary_eventSpendRenegadeTeamCredits_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SpendRenegadeTeamCredits constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SpendRenegadeTeamCredits Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeCombatBlueprintLibrary_eventSpendRenegadeTeamCredits_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_TeamId = { "TeamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeCombatBlueprintLibrary_eventSpendRenegadeTeamCredits_Parms, TeamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeCombatBlueprintLibrary_eventSpendRenegadeTeamCredits_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_RemainingCredits = { "RemainingCredits", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeCombatBlueprintLibrary_eventSpendRenegadeTeamCredits_Parms, RemainingCredits), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeCombatBlueprintLibrary_eventSpendRenegadeTeamCredits_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TeamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RemainingCredits,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SpendRenegadeTeamCredits Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeCombatBlueprintLibrary, nullptr, "SpendRenegadeTeamCredits", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeCombatBlueprintLibrary_eventSpendRenegadeTeamCredits_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeCombatBlueprintLibrary_eventSpendRenegadeTeamCredits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeCombatBlueprintLibrary_SpendRenegadeTeamCredits(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeCombatBlueprintLibrary::execSpendRenegadeTeamCredits)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_TeamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_RemainingCredits);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URenegadeCombatBlueprintLibrary::SpendRenegadeTeamCredits(Z_Param_WorldContextObject,Z_Param_TeamId,Z_Param_Amount,Z_Param_Out_RemainingCredits);
	P_NATIVE_END;
}
// ********** End Class URenegadeCombatBlueprintLibrary Function SpendRenegadeTeamCredits **********

// ********** Begin Class URenegadeCombatBlueprintLibrary ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URenegadeCombatBlueprintLibrary_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "RenegadeCombatBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/RenegadeCombatBlueprintLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URenegadeCombatBlueprintLibrary constinit property declarations **********
// ********** End Class URenegadeCombatBlueprintLibrary constinit property declarations ************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddRenegadeTeamCredits"), .Pointer = &URenegadeCombatBlueprintLibrary::execAddRenegadeTeamCredits },
		{ .NameUTF8 = UTF8TEXT("AreRenegadeActorsHostile"), .Pointer = &URenegadeCombatBlueprintLibrary::execAreRenegadeActorsHostile },
		{ .NameUTF8 = UTF8TEXT("GetRenegadeBuildingCombatComponent"), .Pointer = &URenegadeCombatBlueprintLibrary::execGetRenegadeBuildingCombatComponent },
		{ .NameUTF8 = UTF8TEXT("GetRenegadeCombatComponent"), .Pointer = &URenegadeCombatBlueprintLibrary::execGetRenegadeCombatComponent },
		{ .NameUTF8 = UTF8TEXT("GetRenegadeHarvesterCombatComponent"), .Pointer = &URenegadeCombatBlueprintLibrary::execGetRenegadeHarvesterCombatComponent },
		{ .NameUTF8 = UTF8TEXT("GetRenegadeTeamCredits"), .Pointer = &URenegadeCombatBlueprintLibrary::execGetRenegadeTeamCredits },
		{ .NameUTF8 = UTF8TEXT("GetRenegadeTeamCreditsManager"), .Pointer = &URenegadeCombatBlueprintLibrary::execGetRenegadeTeamCreditsManager },
		{ .NameUTF8 = UTF8TEXT("GetRenegadeTeamId"), .Pointer = &URenegadeCombatBlueprintLibrary::execGetRenegadeTeamId },
		{ .NameUTF8 = UTF8TEXT("MakeAutomaticRiflePreset"), .Pointer = &URenegadeCombatBlueprintLibrary::execMakeAutomaticRiflePreset },
		{ .NameUTF8 = UTF8TEXT("MakeGrenadeLauncherPreset"), .Pointer = &URenegadeCombatBlueprintLibrary::execMakeGrenadeLauncherPreset },
		{ .NameUTF8 = UTF8TEXT("MakePistolPreset"), .Pointer = &URenegadeCombatBlueprintLibrary::execMakePistolPreset },
		{ .NameUTF8 = UTF8TEXT("MakeRocketLauncherPreset"), .Pointer = &URenegadeCombatBlueprintLibrary::execMakeRocketLauncherPreset },
		{ .NameUTF8 = UTF8TEXT("SetRenegadeTeamId"), .Pointer = &URenegadeCombatBlueprintLibrary::execSetRenegadeTeamId },
		{ .NameUTF8 = UTF8TEXT("SpendRenegadeTeamCredits"), .Pointer = &URenegadeCombatBlueprintLibrary::execSpendRenegadeTeamCredits },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URenegadeCombatBlueprintLibrary_AddRenegadeTeamCredits, "AddRenegadeTeamCredits" }, // bf25e803e992468983cbe451cee3b6de14604a99
		{ &Z_Construct_UFunction_URenegadeCombatBlueprintLibrary_AreRenegadeActorsHostile, "AreRenegadeActorsHostile" }, // 87c92ea00944bd7a06152a466d970ecd3fbde1c1
		{ &Z_Construct_UFunction_URenegadeCombatBlueprintLibrary_GetRenegadeBuildingCombatComponent, "GetRenegadeBuildingCombatComponent" }, // 256b966a96dd9d3bfa9ad2701a5acc81e290a0d3
		{ &Z_Construct_UFunction_URenegadeCombatBlueprintLibrary_GetRenegadeCombatComponent, "GetRenegadeCombatComponent" }, // 1f727dff974c927143882b36ef69a93506f75fc1
		{ &Z_Construct_UFunction_URenegadeCombatBlueprintLibrary_GetRenegadeHarvesterCombatComponent, "GetRenegadeHarvesterCombatComponent" }, // b373764ca39ba84a53d5850b4b2f4f3da69278b0
		{ &Z_Construct_UFunction_URenegadeCombatBlueprintLibrary_GetRenegadeTeamCredits, "GetRenegadeTeamCredits" }, // 8e0641a8002c50123466d29498b848c2ceefa43c
		{ &Z_Construct_UFunction_URenegadeCombatBlueprintLibrary_GetRenegadeTeamCreditsManager, "GetRenegadeTeamCreditsManager" }, // 8e63233713a08273f51df08f066e175fdeb21b6b
		{ &Z_Construct_UFunction_URenegadeCombatBlueprintLibrary_GetRenegadeTeamId, "GetRenegadeTeamId" }, // 7d14c5be73c62f97d3869e52786462f12c5060ff
		{ &Z_Construct_UFunction_URenegadeCombatBlueprintLibrary_MakeAutomaticRiflePreset, "MakeAutomaticRiflePreset" }, // a14ea6378bada8c9e97e46a54b7bcead65a86a0e
		{ &Z_Construct_UFunction_URenegadeCombatBlueprintLibrary_MakeGrenadeLauncherPreset, "MakeGrenadeLauncherPreset" }, // 410ff331520d76a711bee1ed7acb82b8e1329323
		{ &Z_Construct_UFunction_URenegadeCombatBlueprintLibrary_MakePistolPreset, "MakePistolPreset" }, // 63bce765b584aa484dcf1034b91291e52d1e5f07
		{ &Z_Construct_UFunction_URenegadeCombatBlueprintLibrary_MakeRocketLauncherPreset, "MakeRocketLauncherPreset" }, // 7ec3405c6959a6e88e409d1f20a002cea584c59b
		{ &Z_Construct_UFunction_URenegadeCombatBlueprintLibrary_SetRenegadeTeamId, "SetRenegadeTeamId" }, // aa67941350bb796d1fdf8bee6b0362cc582f947f
		{ &Z_Construct_UFunction_URenegadeCombatBlueprintLibrary_SpendRenegadeTeamCredits, "SpendRenegadeTeamCredits" }, // 005fea48cee9b15678d718189b3dd55174e52d48
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenegadeCombatBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URenegadeCombatBlueprintLibrary,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void URenegadeCombatBlueprintLibrary_StaticRegisterNativesURenegadeCombatBlueprintLibrary()
{
	UClass* Class = URenegadeCombatBlueprintLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URenegadeCombatBlueprintLibrary;
UClass* Z_Construct_UClass_URenegadeCombatBlueprintLibrary(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URenegadeCombatBlueprintLibrary;
		if (!Z_Registration_Info_UClass_URenegadeCombatBlueprintLibrary.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RenegadeCombatBlueprintLibrary"),
				Z_Registration_Info_UClass_URenegadeCombatBlueprintLibrary.InnerSingleton,
				URenegadeCombatBlueprintLibrary_StaticRegisterNativesURenegadeCombatBlueprintLibrary,
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
		return Z_Registration_Info_UClass_URenegadeCombatBlueprintLibrary.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URenegadeCombatBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URenegadeCombatBlueprintLibrary.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URenegadeCombatBlueprintLibrary.OuterSingleton;
}
#undef UHT_STATICS
URenegadeCombatBlueprintLibrary::URenegadeCombatBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URenegadeCombatBlueprintLibrary);
URenegadeCombatBlueprintLibrary::~URenegadeCombatBlueprintLibrary() {}
// ********** End Class URenegadeCombatBlueprintLibrary ********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeCombatBlueprintLibrary_h__Script_RenegadeSoldierCombat_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URenegadeCombatBlueprintLibrary, TEXT("URenegadeCombatBlueprintLibrary"), &Z_Registration_Info_UClass_URenegadeCombatBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URenegadeCombatBlueprintLibrary), 3413942312U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeCombatBlueprintLibrary_h__Script_RenegadeSoldierCombat_a8bfa4718420014a7dbed1535d343fa14162daaa{
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
