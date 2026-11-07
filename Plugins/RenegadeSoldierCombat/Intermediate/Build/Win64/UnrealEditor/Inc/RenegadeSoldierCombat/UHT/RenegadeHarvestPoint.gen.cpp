// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RenegadeHarvestPoint.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRenegadeHarvestPoint() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USceneComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USphereComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_ARenegadeHarvestPoint(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvestPointHarvesterSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvestPointReservationChangedSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_ARenegadeHarvestPoint(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Delegate FRenegadeHarvestPointReservationChangedSignature **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvestPointReservationChangedSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadeHarvestPointReservationChangedSignature_Parms
	{
		AActor* PreviousHarvester;
		AActor* NewHarvester;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeHarvestPoint.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeHarvestPointReservationChangedSignature constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviousHarvester;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewHarvester;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeHarvestPointReservationChangedSignature constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeHarvestPointReservationChangedSignature Property Definitions *
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PreviousHarvester = { "PreviousHarvester", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeHarvestPointReservationChangedSignature_Parms, PreviousHarvester), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_NewHarvester = { "NewHarvester", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeHarvestPointReservationChangedSignature_Parms, NewHarvester), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviousHarvester,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewHarvester,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeHarvestPointReservationChangedSignature Property Definitions ***
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeHarvestPointReservationChangedSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeHarvestPointReservationChangedSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeHarvestPointReservationChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvestPointReservationChangedSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeHarvestPointReservationChangedSignature ************************

// ********** Begin Delegate FRenegadeHarvestPointHarvesterSignature *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvestPointHarvesterSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadeHarvestPointHarvesterSignature_Parms
	{
		AActor* Harvester;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeHarvestPoint.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeHarvestPointHarvesterSignature constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Harvester;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeHarvestPointHarvesterSignature constinit property declarations *
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeHarvestPointHarvesterSignature Property Definitions **********
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Harvester = { "Harvester", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeHarvestPointHarvesterSignature_Parms, Harvester), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Harvester,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeHarvestPointHarvesterSignature Property Definitions ************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeHarvestPointHarvesterSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeHarvestPointHarvesterSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeHarvestPointHarvesterSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvestPointHarvesterSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeHarvestPointHarvesterSignature *********************************

// ********** Begin Class ARenegadeHarvestPoint Function CanBeUsedByHarvester **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ARenegadeHarvestPoint_CanBeUsedByHarvester_Statics
struct UHT_STATICS
{
	struct RenegadeHarvestPoint_eventCanBeUsedByHarvester_Parms
	{
		const AActor* Harvester;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvest Point" },
		{ "ModuleRelativePath", "Public/RenegadeHarvestPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Harvester_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CanBeUsedByHarvester constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Harvester;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeHarvestPoint_eventCanBeUsedByHarvester_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CanBeUsedByHarvester constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CanBeUsedByHarvester Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Harvester = { "Harvester", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvestPoint_eventCanBeUsedByHarvester_Parms, Harvester), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Harvester_MetaData), NewProp_Harvester_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeHarvestPoint_eventCanBeUsedByHarvester_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Harvester,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CanBeUsedByHarvester Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ARenegadeHarvestPoint, nullptr, "CanBeUsedByHarvester", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeHarvestPoint_eventCanBeUsedByHarvester_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeHarvestPoint_eventCanBeUsedByHarvester_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARenegadeHarvestPoint_CanBeUsedByHarvester(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ARenegadeHarvestPoint::execCanBeUsedByHarvester)
{
	P_GET_OBJECT(AActor,Z_Param_Harvester);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanBeUsedByHarvester(Z_Param_Harvester);
	P_NATIVE_END;
}
// ********** End Class ARenegadeHarvestPoint Function CanBeUsedByHarvester ************************

// ********** Begin Class ARenegadeHarvestPoint Function GetHarvestLocation ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ARenegadeHarvestPoint_GetHarvestLocation_Statics
struct UHT_STATICS
{
	struct RenegadeHarvestPoint_eventGetHarvestLocation_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvest Point" },
		{ "ModuleRelativePath", "Public/RenegadeHarvestPoint.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetHarvestLocation constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetHarvestLocation constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetHarvestLocation Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvestPoint_eventGetHarvestLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetHarvestLocation Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ARenegadeHarvestPoint, nullptr, "GetHarvestLocation", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeHarvestPoint_eventGetHarvestLocation_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeHarvestPoint_eventGetHarvestLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARenegadeHarvestPoint_GetHarvestLocation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ARenegadeHarvestPoint::execGetHarvestLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetHarvestLocation();
	P_NATIVE_END;
}
// ********** End Class ARenegadeHarvestPoint Function GetHarvestLocation **************************

// ********** Begin Class ARenegadeHarvestPoint Function IsCompatibleWithTeam **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ARenegadeHarvestPoint_IsCompatibleWithTeam_Statics
struct UHT_STATICS
{
	struct RenegadeHarvestPoint_eventIsCompatibleWithTeam_Parms
	{
		FName HarvesterTeamId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvest Point" },
		{ "ModuleRelativePath", "Public/RenegadeHarvestPoint.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsCompatibleWithTeam constinit property declarations ******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_HarvesterTeamId;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeHarvestPoint_eventIsCompatibleWithTeam_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsCompatibleWithTeam constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsCompatibleWithTeam Property Definitions *****************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_HarvesterTeamId = { "HarvesterTeamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvestPoint_eventIsCompatibleWithTeam_Parms, HarvesterTeamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeHarvestPoint_eventIsCompatibleWithTeam_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HarvesterTeamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsCompatibleWithTeam Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ARenegadeHarvestPoint, nullptr, "IsCompatibleWithTeam", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeHarvestPoint_eventIsCompatibleWithTeam_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeHarvestPoint_eventIsCompatibleWithTeam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARenegadeHarvestPoint_IsCompatibleWithTeam(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ARenegadeHarvestPoint::execIsCompatibleWithTeam)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_HarvesterTeamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCompatibleWithTeam(Z_Param_HarvesterTeamId);
	P_NATIVE_END;
}
// ********** End Class ARenegadeHarvestPoint Function IsCompatibleWithTeam ************************

// ********** Begin Class ARenegadeHarvestPoint Function NotifyHarvesterArrived ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ARenegadeHarvestPoint_NotifyHarvesterArrived_Statics
struct UHT_STATICS
{
	struct RenegadeHarvestPoint_eventNotifyHarvesterArrived_Parms
	{
		AActor* Harvester;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvest Point|Lifecycle" },
		{ "ModuleRelativePath", "Public/RenegadeHarvestPoint.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function NotifyHarvesterArrived constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Harvester;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function NotifyHarvesterArrived constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function NotifyHarvesterArrived Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Harvester = { "Harvester", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvestPoint_eventNotifyHarvesterArrived_Parms, Harvester), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Harvester,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function NotifyHarvesterArrived Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ARenegadeHarvestPoint, nullptr, "NotifyHarvesterArrived", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeHarvestPoint_eventNotifyHarvesterArrived_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeHarvestPoint_eventNotifyHarvesterArrived_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARenegadeHarvestPoint_NotifyHarvesterArrived(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ARenegadeHarvestPoint::execNotifyHarvesterArrived)
{
	P_GET_OBJECT(AActor,Z_Param_Harvester);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotifyHarvesterArrived(Z_Param_Harvester);
	P_NATIVE_END;
}
// ********** End Class ARenegadeHarvestPoint Function NotifyHarvesterArrived **********************

// ********** Begin Class ARenegadeHarvestPoint Function NotifyHarvestingEnded *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ARenegadeHarvestPoint_NotifyHarvestingEnded_Statics
struct UHT_STATICS
{
	struct RenegadeHarvestPoint_eventNotifyHarvestingEnded_Parms
	{
		AActor* Harvester;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvest Point|Lifecycle" },
		{ "ModuleRelativePath", "Public/RenegadeHarvestPoint.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function NotifyHarvestingEnded constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Harvester;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function NotifyHarvestingEnded constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function NotifyHarvestingEnded Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Harvester = { "Harvester", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvestPoint_eventNotifyHarvestingEnded_Parms, Harvester), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Harvester,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function NotifyHarvestingEnded Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ARenegadeHarvestPoint, nullptr, "NotifyHarvestingEnded", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeHarvestPoint_eventNotifyHarvestingEnded_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeHarvestPoint_eventNotifyHarvestingEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARenegadeHarvestPoint_NotifyHarvestingEnded(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ARenegadeHarvestPoint::execNotifyHarvestingEnded)
{
	P_GET_OBJECT(AActor,Z_Param_Harvester);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotifyHarvestingEnded(Z_Param_Harvester);
	P_NATIVE_END;
}
// ********** End Class ARenegadeHarvestPoint Function NotifyHarvestingEnded ***********************

// ********** Begin Class ARenegadeHarvestPoint Function NotifyHarvestingStarted *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ARenegadeHarvestPoint_NotifyHarvestingStarted_Statics
struct UHT_STATICS
{
	struct RenegadeHarvestPoint_eventNotifyHarvestingStarted_Parms
	{
		AActor* Harvester;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvest Point|Lifecycle" },
		{ "ModuleRelativePath", "Public/RenegadeHarvestPoint.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function NotifyHarvestingStarted constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Harvester;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function NotifyHarvestingStarted constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function NotifyHarvestingStarted Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Harvester = { "Harvester", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvestPoint_eventNotifyHarvestingStarted_Parms, Harvester), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Harvester,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function NotifyHarvestingStarted Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ARenegadeHarvestPoint, nullptr, "NotifyHarvestingStarted", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeHarvestPoint_eventNotifyHarvestingStarted_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeHarvestPoint_eventNotifyHarvestingStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARenegadeHarvestPoint_NotifyHarvestingStarted(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ARenegadeHarvestPoint::execNotifyHarvestingStarted)
{
	P_GET_OBJECT(AActor,Z_Param_Harvester);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotifyHarvestingStarted(Z_Param_Harvester);
	P_NATIVE_END;
}
// ********** End Class ARenegadeHarvestPoint Function NotifyHarvestingStarted *********************

// ********** Begin Class ARenegadeHarvestPoint Function OnRep_ReservedHarvester *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ARenegadeHarvestPoint_OnRep_ReservedHarvester_Statics
struct UHT_STATICS
{
	struct RenegadeHarvestPoint_eventOnRep_ReservedHarvester_Parms
	{
		AActor* PreviousHarvester;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeHarvestPoint.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_ReservedHarvester constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviousHarvester;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_ReservedHarvester constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_ReservedHarvester Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PreviousHarvester = { "PreviousHarvester", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvestPoint_eventOnRep_ReservedHarvester_Parms, PreviousHarvester), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviousHarvester,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnRep_ReservedHarvester Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ARenegadeHarvestPoint, nullptr, "OnRep_ReservedHarvester", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeHarvestPoint_eventOnRep_ReservedHarvester_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeHarvestPoint_eventOnRep_ReservedHarvester_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARenegadeHarvestPoint_OnRep_ReservedHarvester(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ARenegadeHarvestPoint::execOnRep_ReservedHarvester)
{
	P_GET_OBJECT(AActor,Z_Param_PreviousHarvester);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ReservedHarvester(Z_Param_PreviousHarvester);
	P_NATIVE_END;
}
// ********** End Class ARenegadeHarvestPoint Function OnRep_ReservedHarvester *********************

// ********** Begin Class ARenegadeHarvestPoint Function ReleaseReservation ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ARenegadeHarvestPoint_ReleaseReservation_Statics
struct UHT_STATICS
{
	struct RenegadeHarvestPoint_eventReleaseReservation_Parms
	{
		AActor* Harvester;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvest Point|Reservation" },
		{ "ModuleRelativePath", "Public/RenegadeHarvestPoint.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReleaseReservation constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Harvester;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReleaseReservation constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReleaseReservation Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Harvester = { "Harvester", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvestPoint_eventReleaseReservation_Parms, Harvester), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Harvester,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ReleaseReservation Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ARenegadeHarvestPoint, nullptr, "ReleaseReservation", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeHarvestPoint_eventReleaseReservation_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeHarvestPoint_eventReleaseReservation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARenegadeHarvestPoint_ReleaseReservation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ARenegadeHarvestPoint::execReleaseReservation)
{
	P_GET_OBJECT(AActor,Z_Param_Harvester);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReleaseReservation(Z_Param_Harvester);
	P_NATIVE_END;
}
// ********** End Class ARenegadeHarvestPoint Function ReleaseReservation **************************

// ********** Begin Class ARenegadeHarvestPoint Function TryReserve ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ARenegadeHarvestPoint_TryReserve_Statics
struct UHT_STATICS
{
	struct RenegadeHarvestPoint_eventTryReserve_Parms
	{
		AActor* Harvester;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Harvest Point|Reservation" },
		{ "ModuleRelativePath", "Public/RenegadeHarvestPoint.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function TryReserve constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Harvester;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeHarvestPoint_eventTryReserve_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TryReserve constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TryReserve Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Harvester = { "Harvester", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeHarvestPoint_eventTryReserve_Parms, Harvester), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeHarvestPoint_eventTryReserve_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Harvester,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function TryReserve Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ARenegadeHarvestPoint, nullptr, "TryReserve", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeHarvestPoint_eventTryReserve_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeHarvestPoint_eventTryReserve_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARenegadeHarvestPoint_TryReserve(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ARenegadeHarvestPoint::execTryReserve)
{
	P_GET_OBJECT(AActor,Z_Param_Harvester);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryReserve(Z_Param_Harvester);
	P_NATIVE_END;
}
// ********** End Class ARenegadeHarvestPoint Function TryReserve **********************************

// ********** Begin Class ARenegadeHarvestPoint ****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_ARenegadeHarvestPoint_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Placeable Tiberium/resource-field destination for Renegade NXT Harvesters.\n * The Harvester remains on its spline until it enters ApproachRadius, then its combat component can\n * temporarily claim movement and drive to this actor's interaction point for the timed harvest cycle.\n */" },
#endif
		{ "IncludePath", "RenegadeHarvestPoint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RenegadeHarvestPoint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Placeable Tiberium/resource-field destination for Renegade NXT Harvesters.\nThe Harvester remains on its spline until it enters ApproachRadius, then its combat component can\ntemporarily claim movement and drive to this actor's interaction point for the timed harvest cycle." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "Renegade NXT|Harvest Point" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RenegadeHarvestPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionSphere_MetaData[] = {
		{ "Category", "Renegade NXT|Harvest Point" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RenegadeHarvestPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamId_MetaData[] = {
		{ "Category", "Renegade NXT|Harvest Point|Team" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** None/Neutral accepts any Harvester team. Otherwise only matching TeamId Harvesters use this point. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvestPoint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "None/Neutral accepts any Harvester team. Otherwise only matching TeamId Harvesters use this point." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHarvestPointEnabled_MetaData[] = {
		{ "Category", "Renegade NXT|Harvest Point" },
		{ "ModuleRelativePath", "Public/RenegadeHarvestPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApproachRadius_MetaData[] = {
		{ "Category", "Renegade NXT|Harvest Point|Movement" },
		{ "ClampMin", "100.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Harvester stays on the spline until it comes within this radius. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvestPoint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Harvester stays on the spline until it comes within this radius." },
#endif
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionRadius_MetaData[] = {
		{ "Category", "Renegade NXT|Harvest Point|Movement" },
		{ "ClampMin", "25.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Distance at which the Harvester is considered physically at the field and may begin its arrival delay. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvestPoint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance at which the Harvester is considered physically at the field and may begin its arrival delay." },
#endif
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HarvestLocationOffset_MetaData[] = {
		{ "Category", "Renegade NXT|Harvest Point|Movement" },
		{ "ModuleRelativePath", "Public/RenegadeHarvestPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HarvestPointGroup_MetaData[] = {
		{ "Category", "Renegade NXT|Harvest Point|Selection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional logical tag used when a Harvester/Refinery auto-selects a field. None accepts any tag. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvestPoint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional logical tag used when a Harvester/Refinery auto-selects a field. None accepts any tag." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExclusiveReservation_MetaData[] = {
		{ "Category", "Renegade NXT|Harvest Point|Reservation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Prevents several Harvesters from trying to occupy the same interaction location simultaneously. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeHarvestPoint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prevents several Harvesters from trying to occupy the same interaction location simultaneously." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReservedHarvester_MetaData[] = {
		{ "Category", "Renegade NXT|Harvest Point|Runtime" },
		{ "ModuleRelativePath", "Public/RenegadeHarvestPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnReservationChanged_MetaData[] = {
		{ "Category", "Renegade NXT|Harvest Point|Events" },
		{ "ModuleRelativePath", "Public/RenegadeHarvestPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHarvesterArrived_MetaData[] = {
		{ "Category", "Renegade NXT|Harvest Point|Events" },
		{ "ModuleRelativePath", "Public/RenegadeHarvestPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHarvestingStarted_MetaData[] = {
		{ "Category", "Renegade NXT|Harvest Point|Events" },
		{ "ModuleRelativePath", "Public/RenegadeHarvestPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHarvestingEnded_MetaData[] = {
		{ "Category", "Renegade NXT|Harvest Point|Events" },
		{ "ModuleRelativePath", "Public/RenegadeHarvestPoint.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ARenegadeHarvestPoint constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionSphere;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TeamId;
	static void NewProp_bHarvestPointEnabled_SetBit(void* Obj)
	{
		((ARenegadeHarvestPoint*)Obj)->bHarvestPointEnabled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHarvestPointEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ApproachRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HarvestLocationOffset;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HarvestPointGroup;
	static void NewProp_bExclusiveReservation_SetBit(void* Obj)
	{
		((ARenegadeHarvestPoint*)Obj)->bExclusiveReservation = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExclusiveReservation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReservedHarvester;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReservationChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHarvesterArrived;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHarvestingStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHarvestingEnded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ARenegadeHarvestPoint constinit property declarations **********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CanBeUsedByHarvester"), .Pointer = &ARenegadeHarvestPoint::execCanBeUsedByHarvester },
		{ .NameUTF8 = UTF8TEXT("GetHarvestLocation"), .Pointer = &ARenegadeHarvestPoint::execGetHarvestLocation },
		{ .NameUTF8 = UTF8TEXT("IsCompatibleWithTeam"), .Pointer = &ARenegadeHarvestPoint::execIsCompatibleWithTeam },
		{ .NameUTF8 = UTF8TEXT("NotifyHarvesterArrived"), .Pointer = &ARenegadeHarvestPoint::execNotifyHarvesterArrived },
		{ .NameUTF8 = UTF8TEXT("NotifyHarvestingEnded"), .Pointer = &ARenegadeHarvestPoint::execNotifyHarvestingEnded },
		{ .NameUTF8 = UTF8TEXT("NotifyHarvestingStarted"), .Pointer = &ARenegadeHarvestPoint::execNotifyHarvestingStarted },
		{ .NameUTF8 = UTF8TEXT("OnRep_ReservedHarvester"), .Pointer = &ARenegadeHarvestPoint::execOnRep_ReservedHarvester },
		{ .NameUTF8 = UTF8TEXT("ReleaseReservation"), .Pointer = &ARenegadeHarvestPoint::execReleaseReservation },
		{ .NameUTF8 = UTF8TEXT("TryReserve"), .Pointer = &ARenegadeHarvestPoint::execTryReserve },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARenegadeHarvestPoint_CanBeUsedByHarvester, "CanBeUsedByHarvester" }, // ca6f0e152687a0bf3514c3ecf22f02ecce356967
		{ &Z_Construct_UFunction_ARenegadeHarvestPoint_GetHarvestLocation, "GetHarvestLocation" }, // 1397dc8566fe12d3fd67171a4fecec93e4ca0fcd
		{ &Z_Construct_UFunction_ARenegadeHarvestPoint_IsCompatibleWithTeam, "IsCompatibleWithTeam" }, // 9496e25e881084488e7d47fd3d6a8624abf5c6e6
		{ &Z_Construct_UFunction_ARenegadeHarvestPoint_NotifyHarvesterArrived, "NotifyHarvesterArrived" }, // 7e39391ceb401f6cd88ad6d0cfb00be6b92fdfac
		{ &Z_Construct_UFunction_ARenegadeHarvestPoint_NotifyHarvestingEnded, "NotifyHarvestingEnded" }, // c65044d29d2ca5c926a0ae11e2196aabc6273b84
		{ &Z_Construct_UFunction_ARenegadeHarvestPoint_NotifyHarvestingStarted, "NotifyHarvestingStarted" }, // 34cb3cfa76de86fb0c19faf3aaf07167da590f12
		{ &Z_Construct_UFunction_ARenegadeHarvestPoint_OnRep_ReservedHarvester, "OnRep_ReservedHarvester" }, // e6b19fa739be97f4928e336d2f89e8aafc9b0279
		{ &Z_Construct_UFunction_ARenegadeHarvestPoint_ReleaseReservation, "ReleaseReservation" }, // 63a4817f077b1b490c57941932ab853df0863401
		{ &Z_Construct_UFunction_ARenegadeHarvestPoint_TryReserve, "TryReserve" }, // a22568d587cbe225d47ee636c79dbe1349232605
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARenegadeHarvestPoint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class ARenegadeHarvestPoint Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ARenegadeHarvestPoint, SceneRoot), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InteractionSphere = { "InteractionSphere", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ARenegadeHarvestPoint, InteractionSphere), Z_Construct_UClass_USphereComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionSphere_MetaData), NewProp_InteractionSphere_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_TeamId = { "TeamId", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(ARenegadeHarvestPoint, TeamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamId_MetaData), NewProp_TeamId_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bHarvestPointEnabled = { "bHarvestPointEnabled", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ARenegadeHarvestPoint), &UHT_STATICS::NewProp_bHarvestPointEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHarvestPointEnabled_MetaData), NewProp_bHarvestPointEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ApproachRadius = { "ApproachRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(ARenegadeHarvestPoint, ApproachRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApproachRadius_MetaData), NewProp_ApproachRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InteractionRadius = { "InteractionRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(ARenegadeHarvestPoint, InteractionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionRadius_MetaData), NewProp_InteractionRadius_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_HarvestLocationOffset = { "HarvestLocationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(ARenegadeHarvestPoint, HarvestLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HarvestLocationOffset_MetaData), NewProp_HarvestLocationOffset_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_HarvestPointGroup = { "HarvestPointGroup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(ARenegadeHarvestPoint, HarvestPointGroup), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HarvestPointGroup_MetaData), NewProp_HarvestPointGroup_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bExclusiveReservation = { "bExclusiveReservation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ARenegadeHarvestPoint), &UHT_STATICS::NewProp_bExclusiveReservation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExclusiveReservation_MetaData), NewProp_bExclusiveReservation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReservedHarvester = { "ReservedHarvester", "OnRep_ReservedHarvester", (EPropertyFlags)0x0114000100000034, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ARenegadeHarvestPoint, ReservedHarvester), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReservedHarvester_MetaData), NewProp_ReservedHarvester_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnReservationChanged = { "OnReservationChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(ARenegadeHarvestPoint, OnReservationChanged), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvestPointReservationChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnReservationChanged_MetaData), NewProp_OnReservationChanged_MetaData) }; // 90f602aebbc82244e55c9e89ba7083904b0ecdc1
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnHarvesterArrived = { "OnHarvesterArrived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(ARenegadeHarvestPoint, OnHarvesterArrived), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvestPointHarvesterSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHarvesterArrived_MetaData), NewProp_OnHarvesterArrived_MetaData) }; // dde15c05dcee86b8e33707e8903684d1b7f31876
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnHarvestingStarted = { "OnHarvestingStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(ARenegadeHarvestPoint, OnHarvestingStarted), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvestPointHarvesterSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHarvestingStarted_MetaData), NewProp_OnHarvestingStarted_MetaData) }; // dde15c05dcee86b8e33707e8903684d1b7f31876
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnHarvestingEnded = { "OnHarvestingEnded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(ARenegadeHarvestPoint, OnHarvestingEnded), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHarvestPointHarvesterSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHarvestingEnded_MetaData), NewProp_OnHarvestingEnded_MetaData) }; // dde15c05dcee86b8e33707e8903684d1b7f31876
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InteractionSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TeamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bHarvestPointEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ApproachRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InteractionRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HarvestLocationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HarvestPointGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bExclusiveReservation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReservedHarvester,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnReservationChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnHarvesterArrived,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnHarvestingStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnHarvestingEnded,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class ARenegadeHarvestPoint Property Definitions *********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AActor,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_ARenegadeHarvestPoint,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void ARenegadeHarvestPoint_StaticRegisterNativesARenegadeHarvestPoint()
{
	UClass* Class = ARenegadeHarvestPoint::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ARenegadeHarvestPoint;
UClass* Z_Construct_UClass_ARenegadeHarvestPoint(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = ARenegadeHarvestPoint;
		if (!Z_Registration_Info_UClass_ARenegadeHarvestPoint.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RenegadeHarvestPoint"),
				Z_Registration_Info_UClass_ARenegadeHarvestPoint.InnerSingleton,
				ARenegadeHarvestPoint_StaticRegisterNativesARenegadeHarvestPoint,
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
		return Z_Registration_Info_UClass_ARenegadeHarvestPoint.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_ARenegadeHarvestPoint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARenegadeHarvestPoint.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_ARenegadeHarvestPoint.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void ARenegadeHarvestPoint::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_TeamId(TEXT("TeamId"));
	static FName Name_bHarvestPointEnabled(TEXT("bHarvestPointEnabled"));
	static FName Name_ReservedHarvester(TEXT("ReservedHarvester"));
	const bool bIsValid = true
		&& Name_TeamId == ClassReps[(int32)ENetFields_Private::TeamId].Property->GetFName()
		&& Name_bHarvestPointEnabled == ClassReps[(int32)ENetFields_Private::bHarvestPointEnabled].Property->GetFName()
		&& Name_ReservedHarvester == ClassReps[(int32)ENetFields_Private::ReservedHarvester].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ARenegadeHarvestPoint"));
}
#endif
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ARenegadeHarvestPoint);
ARenegadeHarvestPoint::~ARenegadeHarvestPoint() {}
// ********** End Class ARenegadeHarvestPoint ******************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeHarvestPoint_h__Script_RenegadeSoldierCombat_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARenegadeHarvestPoint, TEXT("ARenegadeHarvestPoint"), &Z_Registration_Info_UClass_ARenegadeHarvestPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARenegadeHarvestPoint), 2536821994U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeHarvestPoint_h__Script_RenegadeSoldierCombat_995f34beaa81c274709961738ac080aaedfc4a88{
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
