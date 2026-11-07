// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RenegadeSplineAIBlueprintLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRenegadeSplineAIBlueprintLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RenegadeSplineAI(ETypeConstructPhase);
RENEGADESPLINEAI_API UClass* Z_Construct_UClass_URenegadeSplineAIBlueprintLibrary(ETypeConstructPhase);
RENEGADESPLINEAI_API UClass* Z_Construct_UClass_URenegadeCharacterVehicleComponent(ETypeConstructPhase);
RENEGADESPLINEAI_API UClass* Z_Construct_UClass_URenegadeSplineAIBlueprintLibrary(ETypeConstructPhase);
RENEGADESPLINEAI_API UClass* Z_Construct_UClass_URenegadeSplineFollowerComponent(ETypeConstructPhase);
RENEGADESPLINEAI_API UClass* Z_Construct_UClass_ARenegadeSplinePath(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class URenegadeSplineAIBlueprintLibrary Function FindNearestCompatiblePath *****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSplineAIBlueprintLibrary_FindNearestCompatiblePath_Statics
struct UHT_STATICS
{
	struct RenegadeSplineAIBlueprintLibrary_eventFindNearestCompatiblePath_Parms
	{
		const UObject* WorldContextObject;
		FVector WorldLocation;
		int32 TeamId;
		FName RequiredRouteGroup;
		float MaxSearchDistance;
		ARenegadeSplinePath* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade Spline AI|Routing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Finds the nearest enabled route that accepts TeamId.\n     * RequiredRouteGroup NAME_None accepts any route group.\n     * MaxSearchDistance <= 0 means unlimited.\n     */" },
#endif
		{ "CPP_Default_MaxSearchDistance", "0.000000" },
		{ "CPP_Default_RequiredRouteGroup", "None" },
		{ "ModuleRelativePath", "Public/RenegadeSplineAIBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finds the nearest enabled route that accepts TeamId.\nRequiredRouteGroup NAME_None accepts any route group.\nMaxSearchDistance <= 0 means unlimited." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FindNearestCompatiblePath constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TeamId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RequiredRouteGroup;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSearchDistance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindNearestCompatiblePath constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindNearestCompatiblePath Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSplineAIBlueprintLibrary_eventFindNearestCompatiblePath_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSplineAIBlueprintLibrary_eventFindNearestCompatiblePath_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_TeamId = { "TeamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSplineAIBlueprintLibrary_eventFindNearestCompatiblePath_Parms, TeamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_RequiredRouteGroup = { "RequiredRouteGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSplineAIBlueprintLibrary_eventFindNearestCompatiblePath_Parms, RequiredRouteGroup), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaxSearchDistance = { "MaxSearchDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSplineAIBlueprintLibrary_eventFindNearestCompatiblePath_Parms, MaxSearchDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSplineAIBlueprintLibrary_eventFindNearestCompatiblePath_Parms, ReturnValue), Z_Construct_UClass_ARenegadeSplinePath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TeamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RequiredRouteGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxSearchDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function FindNearestCompatiblePath Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSplineAIBlueprintLibrary, nullptr, "FindNearestCompatiblePath", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSplineAIBlueprintLibrary_eventFindNearestCompatiblePath_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSplineAIBlueprintLibrary_eventFindNearestCompatiblePath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSplineAIBlueprintLibrary_FindNearestCompatiblePath(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSplineAIBlueprintLibrary::execFindNearestCompatiblePath)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FVector,Z_Param_WorldLocation);
	P_GET_PROPERTY(FIntProperty,Z_Param_TeamId);
	P_GET_PROPERTY(FNameProperty,Z_Param_RequiredRouteGroup);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxSearchDistance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ARenegadeSplinePath**)Z_Param__Result=URenegadeSplineAIBlueprintLibrary::FindNearestCompatiblePath(Z_Param_WorldContextObject,Z_Param_WorldLocation,Z_Param_TeamId,Z_Param_RequiredRouteGroup,Z_Param_MaxSearchDistance);
	P_NATIVE_END;
}
// ********** End Class URenegadeSplineAIBlueprintLibrary Function FindNearestCompatiblePath *******

// ********** Begin Class URenegadeSplineAIBlueprintLibrary Function GetCharacterVehicleComponent **
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSplineAIBlueprintLibrary_GetCharacterVehicleComponent_Statics
struct UHT_STATICS
{
	struct RenegadeSplineAIBlueprintLibrary_eventGetCharacterVehicleComponent_Parms
	{
		AActor* Actor;
		URenegadeCharacterVehicleComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade Spline AI|Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Finds the Character-based vehicle adapter on an Actor. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSplineAIBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finds the Character-based vehicle adapter on an Actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCharacterVehicleComponent constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCharacterVehicleComponent constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCharacterVehicleComponent Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSplineAIBlueprintLibrary_eventGetCharacterVehicleComponent_Parms, Actor), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSplineAIBlueprintLibrary_eventGetCharacterVehicleComponent_Parms, ReturnValue), Z_Construct_UClass_URenegadeCharacterVehicleComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetCharacterVehicleComponent Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSplineAIBlueprintLibrary, nullptr, "GetCharacterVehicleComponent", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSplineAIBlueprintLibrary_eventGetCharacterVehicleComponent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSplineAIBlueprintLibrary_eventGetCharacterVehicleComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSplineAIBlueprintLibrary_GetCharacterVehicleComponent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSplineAIBlueprintLibrary::execGetCharacterVehicleComponent)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URenegadeCharacterVehicleComponent**)Z_Param__Result=URenegadeSplineAIBlueprintLibrary::GetCharacterVehicleComponent(Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class URenegadeSplineAIBlueprintLibrary Function GetCharacterVehicleComponent ****

// ********** Begin Class URenegadeSplineAIBlueprintLibrary Function GetSplineFollowerComponent ****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSplineAIBlueprintLibrary_GetSplineFollowerComponent_Statics
struct UHT_STATICS
{
	struct RenegadeSplineAIBlueprintLibrary_eventGetSplineFollowerComponent_Parms
	{
		AActor* Actor;
		URenegadeSplineFollowerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade Spline AI|Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Finds the route follower on an Actor, avoiding Blueprint component-target wiring mistakes. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSplineAIBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finds the route follower on an Actor, avoiding Blueprint component-target wiring mistakes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSplineFollowerComponent constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSplineFollowerComponent constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSplineFollowerComponent Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSplineAIBlueprintLibrary_eventGetSplineFollowerComponent_Parms, Actor), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSplineAIBlueprintLibrary_eventGetSplineFollowerComponent_Parms, ReturnValue), Z_Construct_UClass_URenegadeSplineFollowerComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetSplineFollowerComponent Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSplineAIBlueprintLibrary, nullptr, "GetSplineFollowerComponent", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSplineAIBlueprintLibrary_eventGetSplineFollowerComponent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSplineAIBlueprintLibrary_eventGetSplineFollowerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSplineAIBlueprintLibrary_GetSplineFollowerComponent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSplineAIBlueprintLibrary::execGetSplineFollowerComponent)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URenegadeSplineFollowerComponent**)Z_Param__Result=URenegadeSplineAIBlueprintLibrary::GetSplineFollowerComponent(Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class URenegadeSplineAIBlueprintLibrary Function GetSplineFollowerComponent ******

// ********** Begin Class URenegadeSplineAIBlueprintLibrary Function SetSplineCombatActiveForActor *
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSplineAIBlueprintLibrary_SetSplineCombatActiveForActor_Statics
struct UHT_STATICS
{
	struct RenegadeSplineAIBlueprintLibrary_eventSetSplineCombatActiveForActor_Parms
	{
		AActor* ControlledActor;
		bool bCombatActive;
		AActor* CombatTarget;
		float ResumeDelayOverride;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade Spline AI|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Actor-level combat hand-off for RenegadeSoldierCombat or other combat systems.\n     * Returns false when ControlledActor has no spline follower.\n     */" },
#endif
		{ "CPP_Default_CombatTarget", "None" },
		{ "CPP_Default_ResumeDelayOverride", "-1.000000" },
		{ "ModuleRelativePath", "Public/RenegadeSplineAIBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor-level combat hand-off for RenegadeSoldierCombat or other combat systems.\nReturns false when ControlledActor has no spline follower." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetSplineCombatActiveForActor constinit property declarations *********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlledActor;
	static void NewProp_bCombatActive_SetBit(void* Obj)
	{
		((RenegadeSplineAIBlueprintLibrary_eventSetSplineCombatActiveForActor_Parms*)Obj)->bCombatActive = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCombatActive;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatTarget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ResumeDelayOverride;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeSplineAIBlueprintLibrary_eventSetSplineCombatActiveForActor_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSplineCombatActiveForActor constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSplineCombatActiveForActor Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ControlledActor = { "ControlledActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSplineAIBlueprintLibrary_eventSetSplineCombatActiveForActor_Parms, ControlledActor), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bCombatActive = { "bCombatActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSplineAIBlueprintLibrary_eventSetSplineCombatActiveForActor_Parms), &UHT_STATICS::NewProp_bCombatActive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CombatTarget = { "CombatTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSplineAIBlueprintLibrary_eventSetSplineCombatActiveForActor_Parms, CombatTarget), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ResumeDelayOverride = { "ResumeDelayOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSplineAIBlueprintLibrary_eventSetSplineCombatActiveForActor_Parms, ResumeDelayOverride), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSplineAIBlueprintLibrary_eventSetSplineCombatActiveForActor_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ControlledActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bCombatActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CombatTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ResumeDelayOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetSplineCombatActiveForActor Property Definitions **********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSplineAIBlueprintLibrary, nullptr, "SetSplineCombatActiveForActor", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSplineAIBlueprintLibrary_eventSetSplineCombatActiveForActor_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSplineAIBlueprintLibrary_eventSetSplineCombatActiveForActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSplineAIBlueprintLibrary_SetSplineCombatActiveForActor(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSplineAIBlueprintLibrary::execSetSplineCombatActiveForActor)
{
	P_GET_OBJECT(AActor,Z_Param_ControlledActor);
	P_GET_UBOOL(Z_Param_bCombatActive);
	P_GET_OBJECT(AActor,Z_Param_CombatTarget);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ResumeDelayOverride);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URenegadeSplineAIBlueprintLibrary::SetSplineCombatActiveForActor(Z_Param_ControlledActor,Z_Param_bCombatActive,Z_Param_CombatTarget,Z_Param_ResumeDelayOverride);
	P_NATIVE_END;
}
// ********** End Class URenegadeSplineAIBlueprintLibrary Function SetSplineCombatActiveForActor ***

// ********** Begin Class URenegadeSplineAIBlueprintLibrary Function SetSplineExternalMovementActiveForActor 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSplineAIBlueprintLibrary_SetSplineExternalMovementActiveForActor_Statics
struct UHT_STATICS
{
	struct RenegadeSplineAIBlueprintLibrary_eventSetSplineExternalMovementActiveForActor_Parms
	{
		AActor* ControlledActor;
		bool bExternalActive;
		FName SourceName;
		bool bStopCurrentMovement;
		float ResumeDelayOverride;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade Spline AI|External AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Actor-level named movement hand-off. Use one stable SourceName per external system.\n     * The spline follower resumes only after all active sources release their claims.\n     */" },
#endif
		{ "CPP_Default_bStopCurrentMovement", "true" },
		{ "CPP_Default_ResumeDelayOverride", "-1.000000" },
		{ "ModuleRelativePath", "Public/RenegadeSplineAIBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor-level named movement hand-off. Use one stable SourceName per external system.\nThe spline follower resumes only after all active sources release their claims." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetSplineExternalMovementActiveForActor constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlledActor;
	static void NewProp_bExternalActive_SetBit(void* Obj)
	{
		((RenegadeSplineAIBlueprintLibrary_eventSetSplineExternalMovementActiveForActor_Parms*)Obj)->bExternalActive = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExternalActive;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SourceName;
	static void NewProp_bStopCurrentMovement_SetBit(void* Obj)
	{
		((RenegadeSplineAIBlueprintLibrary_eventSetSplineExternalMovementActiveForActor_Parms*)Obj)->bStopCurrentMovement = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopCurrentMovement;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ResumeDelayOverride;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeSplineAIBlueprintLibrary_eventSetSplineExternalMovementActiveForActor_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSplineExternalMovementActiveForActor constinit property declarations *
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSplineExternalMovementActiveForActor Property Definitions **********
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ControlledActor = { "ControlledActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSplineAIBlueprintLibrary_eventSetSplineExternalMovementActiveForActor_Parms, ControlledActor), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bExternalActive = { "bExternalActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSplineAIBlueprintLibrary_eventSetSplineExternalMovementActiveForActor_Parms), &UHT_STATICS::NewProp_bExternalActive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_SourceName = { "SourceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSplineAIBlueprintLibrary_eventSetSplineExternalMovementActiveForActor_Parms, SourceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bStopCurrentMovement = { "bStopCurrentMovement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSplineAIBlueprintLibrary_eventSetSplineExternalMovementActiveForActor_Parms), &UHT_STATICS::NewProp_bStopCurrentMovement_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ResumeDelayOverride = { "ResumeDelayOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSplineAIBlueprintLibrary_eventSetSplineExternalMovementActiveForActor_Parms, ResumeDelayOverride), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSplineAIBlueprintLibrary_eventSetSplineExternalMovementActiveForActor_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ControlledActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bExternalActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bStopCurrentMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ResumeDelayOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetSplineExternalMovementActiveForActor Property Definitions ************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSplineAIBlueprintLibrary, nullptr, "SetSplineExternalMovementActiveForActor", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSplineAIBlueprintLibrary_eventSetSplineExternalMovementActiveForActor_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSplineAIBlueprintLibrary_eventSetSplineExternalMovementActiveForActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSplineAIBlueprintLibrary_SetSplineExternalMovementActiveForActor(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSplineAIBlueprintLibrary::execSetSplineExternalMovementActiveForActor)
{
	P_GET_OBJECT(AActor,Z_Param_ControlledActor);
	P_GET_UBOOL(Z_Param_bExternalActive);
	P_GET_PROPERTY(FNameProperty,Z_Param_SourceName);
	P_GET_UBOOL(Z_Param_bStopCurrentMovement);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ResumeDelayOverride);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URenegadeSplineAIBlueprintLibrary::SetSplineExternalMovementActiveForActor(Z_Param_ControlledActor,Z_Param_bExternalActive,Z_Param_SourceName,Z_Param_bStopCurrentMovement,Z_Param_ResumeDelayOverride);
	P_NATIVE_END;
}
// ********** End Class URenegadeSplineAIBlueprintLibrary Function SetSplineExternalMovementActiveForActor 

// ********** Begin Class URenegadeSplineAIBlueprintLibrary ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URenegadeSplineAIBlueprintLibrary_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "RenegadeSplineAIBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/RenegadeSplineAIBlueprintLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URenegadeSplineAIBlueprintLibrary constinit property declarations ********
// ********** End Class URenegadeSplineAIBlueprintLibrary constinit property declarations **********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("FindNearestCompatiblePath"), .Pointer = &URenegadeSplineAIBlueprintLibrary::execFindNearestCompatiblePath },
		{ .NameUTF8 = UTF8TEXT("GetCharacterVehicleComponent"), .Pointer = &URenegadeSplineAIBlueprintLibrary::execGetCharacterVehicleComponent },
		{ .NameUTF8 = UTF8TEXT("GetSplineFollowerComponent"), .Pointer = &URenegadeSplineAIBlueprintLibrary::execGetSplineFollowerComponent },
		{ .NameUTF8 = UTF8TEXT("SetSplineCombatActiveForActor"), .Pointer = &URenegadeSplineAIBlueprintLibrary::execSetSplineCombatActiveForActor },
		{ .NameUTF8 = UTF8TEXT("SetSplineExternalMovementActiveForActor"), .Pointer = &URenegadeSplineAIBlueprintLibrary::execSetSplineExternalMovementActiveForActor },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URenegadeSplineAIBlueprintLibrary_FindNearestCompatiblePath, "FindNearestCompatiblePath" }, // 3d140abcbac11e786670966a9dc26245abc5b075
		{ &Z_Construct_UFunction_URenegadeSplineAIBlueprintLibrary_GetCharacterVehicleComponent, "GetCharacterVehicleComponent" }, // cd6202d22da76d5376673890bed6fbf702f88196
		{ &Z_Construct_UFunction_URenegadeSplineAIBlueprintLibrary_GetSplineFollowerComponent, "GetSplineFollowerComponent" }, // 04d0ad33be3c7d28a0b8dcee0465e60f1ac18bfd
		{ &Z_Construct_UFunction_URenegadeSplineAIBlueprintLibrary_SetSplineCombatActiveForActor, "SetSplineCombatActiveForActor" }, // de72e750af6c359799418a4d14b286bd8921b098
		{ &Z_Construct_UFunction_URenegadeSplineAIBlueprintLibrary_SetSplineExternalMovementActiveForActor, "SetSplineExternalMovementActiveForActor" }, // aa2e2ed8a31bfcdfba6171711665d463ab25c925
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenegadeSplineAIBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSplineAI,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URenegadeSplineAIBlueprintLibrary,
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
static void URenegadeSplineAIBlueprintLibrary_StaticRegisterNativesURenegadeSplineAIBlueprintLibrary()
{
	UClass* Class = URenegadeSplineAIBlueprintLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URenegadeSplineAIBlueprintLibrary;
UClass* Z_Construct_UClass_URenegadeSplineAIBlueprintLibrary(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URenegadeSplineAIBlueprintLibrary;
		if (!Z_Registration_Info_UClass_URenegadeSplineAIBlueprintLibrary.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RenegadeSplineAIBlueprintLibrary"),
				Z_Registration_Info_UClass_URenegadeSplineAIBlueprintLibrary.InnerSingleton,
				URenegadeSplineAIBlueprintLibrary_StaticRegisterNativesURenegadeSplineAIBlueprintLibrary,
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
		return Z_Registration_Info_UClass_URenegadeSplineAIBlueprintLibrary.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URenegadeSplineAIBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URenegadeSplineAIBlueprintLibrary.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URenegadeSplineAIBlueprintLibrary.OuterSingleton;
}
#undef UHT_STATICS
URenegadeSplineAIBlueprintLibrary::URenegadeSplineAIBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URenegadeSplineAIBlueprintLibrary);
URenegadeSplineAIBlueprintLibrary::~URenegadeSplineAIBlueprintLibrary() {}
// ********** End Class URenegadeSplineAIBlueprintLibrary ******************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeSplineAIBlueprintLibrary_h__Script_RenegadeSplineAI_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URenegadeSplineAIBlueprintLibrary, TEXT("URenegadeSplineAIBlueprintLibrary"), &Z_Registration_Info_UClass_URenegadeSplineAIBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URenegadeSplineAIBlueprintLibrary), 2326334921U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeSplineAIBlueprintLibrary_h__Script_RenegadeSplineAI_3eae2f8931c90b74087349a3a58e43685fa56676{
	TEXT("/Script/RenegadeSplineAI"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
