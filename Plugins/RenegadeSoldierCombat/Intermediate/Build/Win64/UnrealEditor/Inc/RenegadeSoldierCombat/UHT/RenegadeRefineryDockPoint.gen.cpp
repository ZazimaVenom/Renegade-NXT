// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RenegadeRefineryDockPoint.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRenegadeRefineryDockPoint() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USceneComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USphereComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeRefineryDockHarvesterSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_ARenegadeRefineryDockPoint(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeRefineryDockReservationChangedSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_ARenegadeRefineryDockPoint(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Delegate FRenegadeRefineryDockReservationChangedSignature **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeRefineryDockReservationChangedSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadeRefineryDockReservationChangedSignature_Parms
	{
		AActor* PreviousHarvester;
		AActor* NewHarvester;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeRefineryDockPoint.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeRefineryDockReservationChangedSignature constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviousHarvester;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewHarvester;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeRefineryDockReservationChangedSignature constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeRefineryDockReservationChangedSignature Property Definitions *
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PreviousHarvester = { "PreviousHarvester", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeRefineryDockReservationChangedSignature_Parms, PreviousHarvester), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_NewHarvester = { "NewHarvester", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeRefineryDockReservationChangedSignature_Parms, NewHarvester), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviousHarvester,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewHarvester,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeRefineryDockReservationChangedSignature Property Definitions ***
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeRefineryDockReservationChangedSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeRefineryDockReservationChangedSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeRefineryDockReservationChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeRefineryDockReservationChangedSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeRefineryDockReservationChangedSignature ************************

// ********** Begin Delegate FRenegadeRefineryDockHarvesterSignature *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeRefineryDockHarvesterSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadeRefineryDockHarvesterSignature_Parms
	{
		AActor* Harvester;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeRefineryDockPoint.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeRefineryDockHarvesterSignature constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Harvester;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeRefineryDockHarvesterSignature constinit property declarations *
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeRefineryDockHarvesterSignature Property Definitions **********
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Harvester = { "Harvester", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeRefineryDockHarvesterSignature_Parms, Harvester), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Harvester,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeRefineryDockHarvesterSignature Property Definitions ************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeRefineryDockHarvesterSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeRefineryDockHarvesterSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeRefineryDockHarvesterSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeRefineryDockHarvesterSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeRefineryDockHarvesterSignature *********************************

// ********** Begin Class ARenegadeRefineryDockPoint Function CanBeUsedByHarvester *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ARenegadeRefineryDockPoint_CanBeUsedByHarvester_Statics
struct UHT_STATICS
{
	struct RenegadeRefineryDockPoint_eventCanBeUsedByHarvester_Parms
	{
		const AActor* Harvester;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Refinery Dock Point" },
		{ "ModuleRelativePath", "Public/RenegadeRefineryDockPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Harvester_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CanBeUsedByHarvester constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Harvester;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeRefineryDockPoint_eventCanBeUsedByHarvester_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CanBeUsedByHarvester constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CanBeUsedByHarvester Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Harvester = { "Harvester", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeRefineryDockPoint_eventCanBeUsedByHarvester_Parms, Harvester), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Harvester_MetaData), NewProp_Harvester_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeRefineryDockPoint_eventCanBeUsedByHarvester_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Harvester,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CanBeUsedByHarvester Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ARenegadeRefineryDockPoint, nullptr, "CanBeUsedByHarvester", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeRefineryDockPoint_eventCanBeUsedByHarvester_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeRefineryDockPoint_eventCanBeUsedByHarvester_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARenegadeRefineryDockPoint_CanBeUsedByHarvester(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ARenegadeRefineryDockPoint::execCanBeUsedByHarvester)
{
	P_GET_OBJECT(AActor,Z_Param_Harvester);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanBeUsedByHarvester(Z_Param_Harvester);
	P_NATIVE_END;
}
// ********** End Class ARenegadeRefineryDockPoint Function CanBeUsedByHarvester *******************

// ********** Begin Class ARenegadeRefineryDockPoint Function GetDockTransform *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ARenegadeRefineryDockPoint_GetDockTransform_Statics
struct UHT_STATICS
{
	struct RenegadeRefineryDockPoint_eventGetDockTransform_Parms
	{
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Refinery Dock Point" },
		{ "ModuleRelativePath", "Public/RenegadeRefineryDockPoint.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDockTransform constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDockTransform constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDockTransform Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeRefineryDockPoint_eventGetDockTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetDockTransform Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ARenegadeRefineryDockPoint, nullptr, "GetDockTransform", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeRefineryDockPoint_eventGetDockTransform_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeRefineryDockPoint_eventGetDockTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARenegadeRefineryDockPoint_GetDockTransform(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ARenegadeRefineryDockPoint::execGetDockTransform)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetDockTransform();
	P_NATIVE_END;
}
// ********** End Class ARenegadeRefineryDockPoint Function GetDockTransform ***********************

// ********** Begin Class ARenegadeRefineryDockPoint Function IsCompatibleWithTeam *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ARenegadeRefineryDockPoint_IsCompatibleWithTeam_Statics
struct UHT_STATICS
{
	struct RenegadeRefineryDockPoint_eventIsCompatibleWithTeam_Parms
	{
		FName HarvesterTeamId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Refinery Dock Point" },
		{ "ModuleRelativePath", "Public/RenegadeRefineryDockPoint.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsCompatibleWithTeam constinit property declarations ******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_HarvesterTeamId;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeRefineryDockPoint_eventIsCompatibleWithTeam_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsCompatibleWithTeam constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsCompatibleWithTeam Property Definitions *****************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_HarvesterTeamId = { "HarvesterTeamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeRefineryDockPoint_eventIsCompatibleWithTeam_Parms, HarvesterTeamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeRefineryDockPoint_eventIsCompatibleWithTeam_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HarvesterTeamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsCompatibleWithTeam Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ARenegadeRefineryDockPoint, nullptr, "IsCompatibleWithTeam", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeRefineryDockPoint_eventIsCompatibleWithTeam_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeRefineryDockPoint_eventIsCompatibleWithTeam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARenegadeRefineryDockPoint_IsCompatibleWithTeam(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ARenegadeRefineryDockPoint::execIsCompatibleWithTeam)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_HarvesterTeamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCompatibleWithTeam(Z_Param_HarvesterTeamId);
	P_NATIVE_END;
}
// ********** End Class ARenegadeRefineryDockPoint Function IsCompatibleWithTeam *******************

// ********** Begin Class ARenegadeRefineryDockPoint Function NotifyHarvesterApproachStarted *******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ARenegadeRefineryDockPoint_NotifyHarvesterApproachStarted_Statics
struct UHT_STATICS
{
	struct RenegadeRefineryDockPoint_eventNotifyHarvesterApproachStarted_Parms
	{
		AActor* Harvester;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Refinery Dock Point|Lifecycle" },
		{ "ModuleRelativePath", "Public/RenegadeRefineryDockPoint.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function NotifyHarvesterApproachStarted constinit property declarations ********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Harvester;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function NotifyHarvesterApproachStarted constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function NotifyHarvesterApproachStarted Property Definitions *******************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Harvester = { "Harvester", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeRefineryDockPoint_eventNotifyHarvesterApproachStarted_Parms, Harvester), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Harvester,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function NotifyHarvesterApproachStarted Property Definitions *********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ARenegadeRefineryDockPoint, nullptr, "NotifyHarvesterApproachStarted", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeRefineryDockPoint_eventNotifyHarvesterApproachStarted_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeRefineryDockPoint_eventNotifyHarvesterApproachStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARenegadeRefineryDockPoint_NotifyHarvesterApproachStarted(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ARenegadeRefineryDockPoint::execNotifyHarvesterApproachStarted)
{
	P_GET_OBJECT(AActor,Z_Param_Harvester);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotifyHarvesterApproachStarted(Z_Param_Harvester);
	P_NATIVE_END;
}
// ********** End Class ARenegadeRefineryDockPoint Function NotifyHarvesterApproachStarted *********

// ********** Begin Class ARenegadeRefineryDockPoint Function NotifyHarvesterDocked ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ARenegadeRefineryDockPoint_NotifyHarvesterDocked_Statics
struct UHT_STATICS
{
	struct RenegadeRefineryDockPoint_eventNotifyHarvesterDocked_Parms
	{
		AActor* Harvester;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Refinery Dock Point|Lifecycle" },
		{ "ModuleRelativePath", "Public/RenegadeRefineryDockPoint.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function NotifyHarvesterDocked constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Harvester;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function NotifyHarvesterDocked constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function NotifyHarvesterDocked Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Harvester = { "Harvester", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeRefineryDockPoint_eventNotifyHarvesterDocked_Parms, Harvester), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Harvester,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function NotifyHarvesterDocked Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ARenegadeRefineryDockPoint, nullptr, "NotifyHarvesterDocked", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeRefineryDockPoint_eventNotifyHarvesterDocked_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeRefineryDockPoint_eventNotifyHarvesterDocked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARenegadeRefineryDockPoint_NotifyHarvesterDocked(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ARenegadeRefineryDockPoint::execNotifyHarvesterDocked)
{
	P_GET_OBJECT(AActor,Z_Param_Harvester);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotifyHarvesterDocked(Z_Param_Harvester);
	P_NATIVE_END;
}
// ********** End Class ARenegadeRefineryDockPoint Function NotifyHarvesterDocked ******************

// ********** Begin Class ARenegadeRefineryDockPoint Function NotifyHarvesterUndocked **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ARenegadeRefineryDockPoint_NotifyHarvesterUndocked_Statics
struct UHT_STATICS
{
	struct RenegadeRefineryDockPoint_eventNotifyHarvesterUndocked_Parms
	{
		AActor* Harvester;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Refinery Dock Point|Lifecycle" },
		{ "ModuleRelativePath", "Public/RenegadeRefineryDockPoint.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function NotifyHarvesterUndocked constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Harvester;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function NotifyHarvesterUndocked constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function NotifyHarvesterUndocked Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Harvester = { "Harvester", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeRefineryDockPoint_eventNotifyHarvesterUndocked_Parms, Harvester), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Harvester,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function NotifyHarvesterUndocked Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ARenegadeRefineryDockPoint, nullptr, "NotifyHarvesterUndocked", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeRefineryDockPoint_eventNotifyHarvesterUndocked_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeRefineryDockPoint_eventNotifyHarvesterUndocked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARenegadeRefineryDockPoint_NotifyHarvesterUndocked(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ARenegadeRefineryDockPoint::execNotifyHarvesterUndocked)
{
	P_GET_OBJECT(AActor,Z_Param_Harvester);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotifyHarvesterUndocked(Z_Param_Harvester);
	P_NATIVE_END;
}
// ********** End Class ARenegadeRefineryDockPoint Function NotifyHarvesterUndocked ****************

// ********** Begin Class ARenegadeRefineryDockPoint Function OnRep_ReservedHarvester **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ARenegadeRefineryDockPoint_OnRep_ReservedHarvester_Statics
struct UHT_STATICS
{
	struct RenegadeRefineryDockPoint_eventOnRep_ReservedHarvester_Parms
	{
		AActor* PreviousHarvester;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeRefineryDockPoint.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_ReservedHarvester constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviousHarvester;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_ReservedHarvester constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_ReservedHarvester Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PreviousHarvester = { "PreviousHarvester", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeRefineryDockPoint_eventOnRep_ReservedHarvester_Parms, PreviousHarvester), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviousHarvester,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnRep_ReservedHarvester Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ARenegadeRefineryDockPoint, nullptr, "OnRep_ReservedHarvester", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeRefineryDockPoint_eventOnRep_ReservedHarvester_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeRefineryDockPoint_eventOnRep_ReservedHarvester_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARenegadeRefineryDockPoint_OnRep_ReservedHarvester(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ARenegadeRefineryDockPoint::execOnRep_ReservedHarvester)
{
	P_GET_OBJECT(AActor,Z_Param_PreviousHarvester);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ReservedHarvester(Z_Param_PreviousHarvester);
	P_NATIVE_END;
}
// ********** End Class ARenegadeRefineryDockPoint Function OnRep_ReservedHarvester ****************

// ********** Begin Class ARenegadeRefineryDockPoint Function ReleaseReservation *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ARenegadeRefineryDockPoint_ReleaseReservation_Statics
struct UHT_STATICS
{
	struct RenegadeRefineryDockPoint_eventReleaseReservation_Parms
	{
		AActor* Harvester;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Refinery Dock Point|Reservation" },
		{ "ModuleRelativePath", "Public/RenegadeRefineryDockPoint.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReleaseReservation constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Harvester;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReleaseReservation constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReleaseReservation Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Harvester = { "Harvester", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeRefineryDockPoint_eventReleaseReservation_Parms, Harvester), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Harvester,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ReleaseReservation Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ARenegadeRefineryDockPoint, nullptr, "ReleaseReservation", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeRefineryDockPoint_eventReleaseReservation_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeRefineryDockPoint_eventReleaseReservation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARenegadeRefineryDockPoint_ReleaseReservation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ARenegadeRefineryDockPoint::execReleaseReservation)
{
	P_GET_OBJECT(AActor,Z_Param_Harvester);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReleaseReservation(Z_Param_Harvester);
	P_NATIVE_END;
}
// ********** End Class ARenegadeRefineryDockPoint Function ReleaseReservation *********************

// ********** Begin Class ARenegadeRefineryDockPoint Function SetOwningRefineryActor ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ARenegadeRefineryDockPoint_SetOwningRefineryActor_Statics
struct UHT_STATICS
{
	struct RenegadeRefineryDockPoint_eventSetOwningRefineryActor_Parms
	{
		AActor* NewRefineryActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Refinery Dock Point|Ownership" },
		{ "ModuleRelativePath", "Public/RenegadeRefineryDockPoint.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetOwningRefineryActor constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewRefineryActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetOwningRefineryActor constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetOwningRefineryActor Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_NewRefineryActor = { "NewRefineryActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeRefineryDockPoint_eventSetOwningRefineryActor_Parms, NewRefineryActor), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewRefineryActor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetOwningRefineryActor Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ARenegadeRefineryDockPoint, nullptr, "SetOwningRefineryActor", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeRefineryDockPoint_eventSetOwningRefineryActor_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeRefineryDockPoint_eventSetOwningRefineryActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARenegadeRefineryDockPoint_SetOwningRefineryActor(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ARenegadeRefineryDockPoint::execSetOwningRefineryActor)
{
	P_GET_OBJECT(AActor,Z_Param_NewRefineryActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOwningRefineryActor(Z_Param_NewRefineryActor);
	P_NATIVE_END;
}
// ********** End Class ARenegadeRefineryDockPoint Function SetOwningRefineryActor *****************

// ********** Begin Class ARenegadeRefineryDockPoint Function TryReserve ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ARenegadeRefineryDockPoint_TryReserve_Statics
struct UHT_STATICS
{
	struct RenegadeRefineryDockPoint_eventTryReserve_Parms
	{
		AActor* Harvester;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Refinery Dock Point|Reservation" },
		{ "ModuleRelativePath", "Public/RenegadeRefineryDockPoint.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function TryReserve constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Harvester;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeRefineryDockPoint_eventTryReserve_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TryReserve constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TryReserve Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Harvester = { "Harvester", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeRefineryDockPoint_eventTryReserve_Parms, Harvester), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeRefineryDockPoint_eventTryReserve_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Harvester,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function TryReserve Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ARenegadeRefineryDockPoint, nullptr, "TryReserve", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeRefineryDockPoint_eventTryReserve_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeRefineryDockPoint_eventTryReserve_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARenegadeRefineryDockPoint_TryReserve(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ARenegadeRefineryDockPoint::execTryReserve)
{
	P_GET_OBJECT(AActor,Z_Param_Harvester);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryReserve(Z_Param_Harvester);
	P_NATIVE_END;
}
// ********** End Class ARenegadeRefineryDockPoint Function TryReserve *****************************

// ********** Begin Class ARenegadeRefineryDockPoint ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_ARenegadeRefineryDockPoint_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Placeable final docking destination for a Renegade NXT Refinery Harvester.\n * With Spline AI, the route remains responsible for long-distance travel and this actor owns only the final approach.\n * Without a usable spline route, Harvester Combat can navigate directly between this Dock Point and its Harvest Point.\n */" },
#endif
		{ "IncludePath", "RenegadeRefineryDockPoint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RenegadeRefineryDockPoint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Placeable final docking destination for a Renegade NXT Refinery Harvester.\nWith Spline AI, the route remains responsible for long-distance travel and this actor owns only the final approach.\nWithout a usable spline route, Harvester Combat can navigate directly between this Dock Point and its Harvest Point." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "Renegade NXT|Refinery Dock Point" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RenegadeRefineryDockPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionSphere_MetaData[] = {
		{ "Category", "Renegade NXT|Refinery Dock Point" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RenegadeRefineryDockPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamId_MetaData[] = {
		{ "Category", "Renegade NXT|Refinery Dock Point|Team" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** None/Neutral accepts any Harvester team. Otherwise only matching TeamId Harvesters use this dock. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeRefineryDockPoint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "None/Neutral accepts any Harvester team. Otherwise only matching TeamId Harvesters use this dock." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDockPointEnabled_MetaData[] = {
		{ "Category", "Renegade NXT|Refinery Dock Point" },
		{ "ModuleRelativePath", "Public/RenegadeRefineryDockPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApproachRadius_MetaData[] = {
		{ "Category", "Renegade NXT|Refinery Dock Point|Movement" },
		{ "ClampMin", "100.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Long-route travel hands off to final dock movement when the Harvester enters this radius. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeRefineryDockPoint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Long-route travel hands off to final dock movement when the Harvester enters this radius." },
#endif
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionRadius_MetaData[] = {
		{ "Category", "Renegade NXT|Refinery Dock Point|Movement" },
		{ "ClampMin", "25.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Distance at which the Harvester is considered docked and may start its unload delay. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeRefineryDockPoint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance at which the Harvester is considered docked and may start its unload delay." },
#endif
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DockLocationOffset_MetaData[] = {
		{ "Category", "Renegade NXT|Refinery Dock Point|Movement" },
		{ "ModuleRelativePath", "Public/RenegadeRefineryDockPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DockRotationOffset_MetaData[] = {
		{ "Category", "Renegade NXT|Refinery Dock Point|Movement" },
		{ "ModuleRelativePath", "Public/RenegadeRefineryDockPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DockPointGroup_MetaData[] = {
		{ "Category", "Renegade NXT|Refinery Dock Point|Selection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional logical tag used by Refinery/Harvester automatic dock lookup. None accepts any group. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeRefineryDockPoint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional logical tag used by Refinery/Harvester automatic dock lookup. None accepts any group." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExclusiveReservation_MetaData[] = {
		{ "Category", "Renegade NXT|Refinery Dock Point|Reservation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Normally enabled so two Harvesters do not attempt to occupy one unloading bay. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeRefineryDockPoint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normally enabled so two Harvesters do not attempt to occupy one unloading bay." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningRefineryActor_MetaData[] = {
		{ "Category", "Renegade NXT|Refinery Dock Point|Ownership" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Refinery that owns this dock. The Refinery spawner sets this automatically when it resolves the point. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeRefineryDockPoint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Refinery that owns this dock. The Refinery spawner sets this automatically when it resolves the point." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReservedHarvester_MetaData[] = {
		{ "Category", "Renegade NXT|Refinery Dock Point|Runtime" },
		{ "ModuleRelativePath", "Public/RenegadeRefineryDockPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnReservationChanged_MetaData[] = {
		{ "Category", "Renegade NXT|Refinery Dock Point|Events" },
		{ "ModuleRelativePath", "Public/RenegadeRefineryDockPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHarvesterApproachStarted_MetaData[] = {
		{ "Category", "Renegade NXT|Refinery Dock Point|Events" },
		{ "ModuleRelativePath", "Public/RenegadeRefineryDockPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHarvesterDocked_MetaData[] = {
		{ "Category", "Renegade NXT|Refinery Dock Point|Events" },
		{ "ModuleRelativePath", "Public/RenegadeRefineryDockPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHarvesterUndocked_MetaData[] = {
		{ "Category", "Renegade NXT|Refinery Dock Point|Events" },
		{ "ModuleRelativePath", "Public/RenegadeRefineryDockPoint.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ARenegadeRefineryDockPoint constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionSphere;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TeamId;
	static void NewProp_bDockPointEnabled_SetBit(void* Obj)
	{
		((ARenegadeRefineryDockPoint*)Obj)->bDockPointEnabled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDockPointEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ApproachRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DockLocationOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DockRotationOffset;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DockPointGroup;
	static void NewProp_bExclusiveReservation_SetBit(void* Obj)
	{
		((ARenegadeRefineryDockPoint*)Obj)->bExclusiveReservation = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExclusiveReservation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningRefineryActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReservedHarvester;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReservationChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHarvesterApproachStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHarvesterDocked;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHarvesterUndocked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ARenegadeRefineryDockPoint constinit property declarations *****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CanBeUsedByHarvester"), .Pointer = &ARenegadeRefineryDockPoint::execCanBeUsedByHarvester },
		{ .NameUTF8 = UTF8TEXT("GetDockTransform"), .Pointer = &ARenegadeRefineryDockPoint::execGetDockTransform },
		{ .NameUTF8 = UTF8TEXT("IsCompatibleWithTeam"), .Pointer = &ARenegadeRefineryDockPoint::execIsCompatibleWithTeam },
		{ .NameUTF8 = UTF8TEXT("NotifyHarvesterApproachStarted"), .Pointer = &ARenegadeRefineryDockPoint::execNotifyHarvesterApproachStarted },
		{ .NameUTF8 = UTF8TEXT("NotifyHarvesterDocked"), .Pointer = &ARenegadeRefineryDockPoint::execNotifyHarvesterDocked },
		{ .NameUTF8 = UTF8TEXT("NotifyHarvesterUndocked"), .Pointer = &ARenegadeRefineryDockPoint::execNotifyHarvesterUndocked },
		{ .NameUTF8 = UTF8TEXT("OnRep_ReservedHarvester"), .Pointer = &ARenegadeRefineryDockPoint::execOnRep_ReservedHarvester },
		{ .NameUTF8 = UTF8TEXT("ReleaseReservation"), .Pointer = &ARenegadeRefineryDockPoint::execReleaseReservation },
		{ .NameUTF8 = UTF8TEXT("SetOwningRefineryActor"), .Pointer = &ARenegadeRefineryDockPoint::execSetOwningRefineryActor },
		{ .NameUTF8 = UTF8TEXT("TryReserve"), .Pointer = &ARenegadeRefineryDockPoint::execTryReserve },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARenegadeRefineryDockPoint_CanBeUsedByHarvester, "CanBeUsedByHarvester" }, // 7b414a3985954a0aa1bf79c818545730d29f49aa
		{ &Z_Construct_UFunction_ARenegadeRefineryDockPoint_GetDockTransform, "GetDockTransform" }, // a644ad8df90c496c24de2fc261a65c3c7d475eb0
		{ &Z_Construct_UFunction_ARenegadeRefineryDockPoint_IsCompatibleWithTeam, "IsCompatibleWithTeam" }, // db4e7f843cf3803cc36e776365b48c9c5d39e28a
		{ &Z_Construct_UFunction_ARenegadeRefineryDockPoint_NotifyHarvesterApproachStarted, "NotifyHarvesterApproachStarted" }, // 2b06b25bcab5a8eb4828d7812b0acae273afc5ee
		{ &Z_Construct_UFunction_ARenegadeRefineryDockPoint_NotifyHarvesterDocked, "NotifyHarvesterDocked" }, // c34acd6f47b1c185906323582d99f0581fa6a0c7
		{ &Z_Construct_UFunction_ARenegadeRefineryDockPoint_NotifyHarvesterUndocked, "NotifyHarvesterUndocked" }, // 98941ac61e787f99a44c9b2a261a731a3e9d8cbf
		{ &Z_Construct_UFunction_ARenegadeRefineryDockPoint_OnRep_ReservedHarvester, "OnRep_ReservedHarvester" }, // 7b24cb43f0615f3b12b633b664e85c74abbaa122
		{ &Z_Construct_UFunction_ARenegadeRefineryDockPoint_ReleaseReservation, "ReleaseReservation" }, // 7addfc8893f1794f6de3dd7b31b586a01a25a4dc
		{ &Z_Construct_UFunction_ARenegadeRefineryDockPoint_SetOwningRefineryActor, "SetOwningRefineryActor" }, // 20dc39e6758b5ca75060038a949f76a1b824b37d
		{ &Z_Construct_UFunction_ARenegadeRefineryDockPoint_TryReserve, "TryReserve" }, // df8857d768f831d4b96b0e75ec7c798e3c9bc747
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARenegadeRefineryDockPoint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class ARenegadeRefineryDockPoint Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ARenegadeRefineryDockPoint, SceneRoot), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InteractionSphere = { "InteractionSphere", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ARenegadeRefineryDockPoint, InteractionSphere), Z_Construct_UClass_USphereComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionSphere_MetaData), NewProp_InteractionSphere_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_TeamId = { "TeamId", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(ARenegadeRefineryDockPoint, TeamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamId_MetaData), NewProp_TeamId_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDockPointEnabled = { "bDockPointEnabled", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ARenegadeRefineryDockPoint), &UHT_STATICS::NewProp_bDockPointEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDockPointEnabled_MetaData), NewProp_bDockPointEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ApproachRadius = { "ApproachRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(ARenegadeRefineryDockPoint, ApproachRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApproachRadius_MetaData), NewProp_ApproachRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InteractionRadius = { "InteractionRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(ARenegadeRefineryDockPoint, InteractionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionRadius_MetaData), NewProp_InteractionRadius_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_DockLocationOffset = { "DockLocationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(ARenegadeRefineryDockPoint, DockLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DockLocationOffset_MetaData), NewProp_DockLocationOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_DockRotationOffset = { "DockRotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(ARenegadeRefineryDockPoint, DockRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DockRotationOffset_MetaData), NewProp_DockRotationOffset_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_DockPointGroup = { "DockPointGroup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(ARenegadeRefineryDockPoint, DockPointGroup), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DockPointGroup_MetaData), NewProp_DockPointGroup_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bExclusiveReservation = { "bExclusiveReservation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ARenegadeRefineryDockPoint), &UHT_STATICS::NewProp_bExclusiveReservation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExclusiveReservation_MetaData), NewProp_bExclusiveReservation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OwningRefineryActor = { "OwningRefineryActor", nullptr, (EPropertyFlags)0x0114000000000825, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ARenegadeRefineryDockPoint, OwningRefineryActor), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningRefineryActor_MetaData), NewProp_OwningRefineryActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReservedHarvester = { "ReservedHarvester", "OnRep_ReservedHarvester", (EPropertyFlags)0x0114000100000034, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ARenegadeRefineryDockPoint, ReservedHarvester), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReservedHarvester_MetaData), NewProp_ReservedHarvester_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnReservationChanged = { "OnReservationChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(ARenegadeRefineryDockPoint, OnReservationChanged), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeRefineryDockReservationChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnReservationChanged_MetaData), NewProp_OnReservationChanged_MetaData) }; // f919e76721de6623bb57ca581a26a3ace6b2f501
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnHarvesterApproachStarted = { "OnHarvesterApproachStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(ARenegadeRefineryDockPoint, OnHarvesterApproachStarted), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeRefineryDockHarvesterSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHarvesterApproachStarted_MetaData), NewProp_OnHarvesterApproachStarted_MetaData) }; // b601c9fd3cb7cbd8e61c01e4c95ac4ab129f9ff2
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnHarvesterDocked = { "OnHarvesterDocked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(ARenegadeRefineryDockPoint, OnHarvesterDocked), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeRefineryDockHarvesterSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHarvesterDocked_MetaData), NewProp_OnHarvesterDocked_MetaData) }; // b601c9fd3cb7cbd8e61c01e4c95ac4ab129f9ff2
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnHarvesterUndocked = { "OnHarvesterUndocked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(ARenegadeRefineryDockPoint, OnHarvesterUndocked), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeRefineryDockHarvesterSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHarvesterUndocked_MetaData), NewProp_OnHarvesterUndocked_MetaData) }; // b601c9fd3cb7cbd8e61c01e4c95ac4ab129f9ff2
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InteractionSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TeamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDockPointEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ApproachRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InteractionRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DockLocationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DockRotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DockPointGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bExclusiveReservation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OwningRefineryActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReservedHarvester,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnReservationChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnHarvesterApproachStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnHarvesterDocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnHarvesterUndocked,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class ARenegadeRefineryDockPoint Property Definitions ****************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AActor,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_ARenegadeRefineryDockPoint,
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
static void ARenegadeRefineryDockPoint_StaticRegisterNativesARenegadeRefineryDockPoint()
{
	UClass* Class = ARenegadeRefineryDockPoint::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ARenegadeRefineryDockPoint;
UClass* Z_Construct_UClass_ARenegadeRefineryDockPoint(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = ARenegadeRefineryDockPoint;
		if (!Z_Registration_Info_UClass_ARenegadeRefineryDockPoint.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RenegadeRefineryDockPoint"),
				Z_Registration_Info_UClass_ARenegadeRefineryDockPoint.InnerSingleton,
				ARenegadeRefineryDockPoint_StaticRegisterNativesARenegadeRefineryDockPoint,
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
		return Z_Registration_Info_UClass_ARenegadeRefineryDockPoint.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_ARenegadeRefineryDockPoint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARenegadeRefineryDockPoint.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_ARenegadeRefineryDockPoint.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void ARenegadeRefineryDockPoint::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_TeamId(TEXT("TeamId"));
	static FName Name_bDockPointEnabled(TEXT("bDockPointEnabled"));
	static FName Name_OwningRefineryActor(TEXT("OwningRefineryActor"));
	static FName Name_ReservedHarvester(TEXT("ReservedHarvester"));
	const bool bIsValid = true
		&& Name_TeamId == ClassReps[(int32)ENetFields_Private::TeamId].Property->GetFName()
		&& Name_bDockPointEnabled == ClassReps[(int32)ENetFields_Private::bDockPointEnabled].Property->GetFName()
		&& Name_OwningRefineryActor == ClassReps[(int32)ENetFields_Private::OwningRefineryActor].Property->GetFName()
		&& Name_ReservedHarvester == ClassReps[(int32)ENetFields_Private::ReservedHarvester].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ARenegadeRefineryDockPoint"));
}
#endif
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ARenegadeRefineryDockPoint);
ARenegadeRefineryDockPoint::~ARenegadeRefineryDockPoint() {}
// ********** End Class ARenegadeRefineryDockPoint *************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeRefineryDockPoint_h__Script_RenegadeSoldierCombat_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARenegadeRefineryDockPoint, TEXT("ARenegadeRefineryDockPoint"), &Z_Registration_Info_UClass_ARenegadeRefineryDockPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARenegadeRefineryDockPoint), 3006296679U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeRefineryDockPoint_h__Script_RenegadeSoldierCombat_c4eb21849768137c65e3dc7ebac5f9d8c6c5d495{
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
