// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RenegadeSplinePath.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRenegadeSplinePath() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USplineComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RenegadeSplineAI(ETypeConstructPhase);
RENEGADESPLINEAI_API UClass* Z_Construct_UClass_ARenegadeSplinePath(ETypeConstructPhase);
RENEGADESPLINEAI_API UClass* Z_Construct_UClass_ARenegadeSplinePath(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class ARenegadeSplinePath Function GetClosestDistanceAlongRoute ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ARenegadeSplinePath_GetClosestDistanceAlongRoute_Statics
struct UHT_STATICS
{
	struct RenegadeSplinePath_eventGetClosestDistanceAlongRoute_Parms
	{
		FVector WorldLocation;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade Spline AI|Path" },
		{ "ModuleRelativePath", "Public/RenegadeSplinePath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetClosestDistanceAlongRoute constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetClosestDistanceAlongRoute constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetClosestDistanceAlongRoute Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSplinePath_eventGetClosestDistanceAlongRoute_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldLocation_MetaData), NewProp_WorldLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSplinePath_eventGetClosestDistanceAlongRoute_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetClosestDistanceAlongRoute Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ARenegadeSplinePath, nullptr, "GetClosestDistanceAlongRoute", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSplinePath_eventGetClosestDistanceAlongRoute_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSplinePath_eventGetClosestDistanceAlongRoute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARenegadeSplinePath_GetClosestDistanceAlongRoute(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ARenegadeSplinePath::execGetClosestDistanceAlongRoute)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetClosestDistanceAlongRoute(Z_Param_Out_WorldLocation);
	P_NATIVE_END;
}
// ********** End Class ARenegadeSplinePath Function GetClosestDistanceAlongRoute ******************

// ********** Begin Class ARenegadeSplinePath Function GetRouteLength ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ARenegadeSplinePath_GetRouteLength_Statics
struct UHT_STATICS
{
	struct RenegadeSplinePath_eventGetRouteLength_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade Spline AI|Path" },
		{ "ModuleRelativePath", "Public/RenegadeSplinePath.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRouteLength constinit property declarations ************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRouteLength constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRouteLength Property Definitions ***********************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSplinePath_eventGetRouteLength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetRouteLength Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ARenegadeSplinePath, nullptr, "GetRouteLength", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSplinePath_eventGetRouteLength_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSplinePath_eventGetRouteLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARenegadeSplinePath_GetRouteLength(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ARenegadeSplinePath::execGetRouteLength)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetRouteLength();
	P_NATIVE_END;
}
// ********** End Class ARenegadeSplinePath Function GetRouteLength ********************************

// ********** Begin Class ARenegadeSplinePath Function GetRouteLocationAtDistance ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ARenegadeSplinePath_GetRouteLocationAtDistance_Statics
struct UHT_STATICS
{
	struct RenegadeSplinePath_eventGetRouteLocationAtDistance_Parms
	{
		float DistanceAlongSpline;
		float LateralOffset;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade Spline AI|Path" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns a route location with an optional lateral lane offset. */" },
#endif
		{ "CPP_Default_LateralOffset", "0.000000" },
		{ "ModuleRelativePath", "Public/RenegadeSplinePath.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a route location with an optional lateral lane offset." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetRouteLocationAtDistance constinit property declarations ************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceAlongSpline;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LateralOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRouteLocationAtDistance constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRouteLocationAtDistance Property Definitions ***********************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DistanceAlongSpline = { "DistanceAlongSpline", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSplinePath_eventGetRouteLocationAtDistance_Parms, DistanceAlongSpline), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LateralOffset = { "LateralOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSplinePath_eventGetRouteLocationAtDistance_Parms, LateralOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSplinePath_eventGetRouteLocationAtDistance_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DistanceAlongSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LateralOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetRouteLocationAtDistance Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ARenegadeSplinePath, nullptr, "GetRouteLocationAtDistance", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSplinePath_eventGetRouteLocationAtDistance_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSplinePath_eventGetRouteLocationAtDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARenegadeSplinePath_GetRouteLocationAtDistance(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ARenegadeSplinePath::execGetRouteLocationAtDistance)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DistanceAlongSpline);
	P_GET_PROPERTY(FFloatProperty,Z_Param_LateralOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetRouteLocationAtDistance(Z_Param_DistanceAlongSpline,Z_Param_LateralOffset);
	P_NATIVE_END;
}
// ********** End Class ARenegadeSplinePath Function GetRouteLocationAtDistance ********************

// ********** Begin Class ARenegadeSplinePath Function GetSplineComponent **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ARenegadeSplinePath_GetSplineComponent_Statics
struct UHT_STATICS
{
	struct RenegadeSplinePath_eventGetSplineComponent_Parms
	{
		USplineComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade Spline AI|Path" },
		{ "ModuleRelativePath", "Public/RenegadeSplinePath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSplineComponent constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSplineComponent constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSplineComponent Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSplinePath_eventGetSplineComponent_Parms, ReturnValue), Z_Construct_UClass_USplineComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetSplineComponent Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ARenegadeSplinePath, nullptr, "GetSplineComponent", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSplinePath_eventGetSplineComponent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSplinePath_eventGetSplineComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARenegadeSplinePath_GetSplineComponent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ARenegadeSplinePath::execGetSplineComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USplineComponent**)Z_Param__Result=P_THIS->GetSplineComponent();
	P_NATIVE_END;
}
// ********** End Class ARenegadeSplinePath Function GetSplineComponent ****************************

// ********** Begin Class ARenegadeSplinePath Function IsClosedLoop ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ARenegadeSplinePath_IsClosedLoop_Statics
struct UHT_STATICS
{
	struct RenegadeSplinePath_eventIsClosedLoop_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade Spline AI|Path" },
		{ "ModuleRelativePath", "Public/RenegadeSplinePath.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsClosedLoop constinit property declarations **************************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeSplinePath_eventIsClosedLoop_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsClosedLoop constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsClosedLoop Property Definitions *************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSplinePath_eventIsClosedLoop_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsClosedLoop Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ARenegadeSplinePath, nullptr, "IsClosedLoop", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSplinePath_eventIsClosedLoop_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSplinePath_eventIsClosedLoop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARenegadeSplinePath_IsClosedLoop(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ARenegadeSplinePath::execIsClosedLoop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsClosedLoop();
	P_NATIVE_END;
}
// ********** End Class ARenegadeSplinePath Function IsClosedLoop **********************************

// ********** Begin Class ARenegadeSplinePath Function IsTeamAllowed *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ARenegadeSplinePath_IsTeamAllowed_Statics
struct UHT_STATICS
{
	struct RenegadeSplinePath_eventIsTeamAllowed_Parms
	{
		int32 TeamId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade Spline AI|Path" },
		{ "ModuleRelativePath", "Public/RenegadeSplinePath.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsTeamAllowed constinit property declarations *************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_TeamId;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeSplinePath_eventIsTeamAllowed_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsTeamAllowed constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsTeamAllowed Property Definitions ************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_TeamId = { "TeamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSplinePath_eventIsTeamAllowed_Parms, TeamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSplinePath_eventIsTeamAllowed_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TeamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsTeamAllowed Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ARenegadeSplinePath, nullptr, "IsTeamAllowed", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSplinePath_eventIsTeamAllowed_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSplinePath_eventIsTeamAllowed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARenegadeSplinePath_IsTeamAllowed(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ARenegadeSplinePath::execIsTeamAllowed)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TeamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsTeamAllowed(Z_Param_TeamId);
	P_NATIVE_END;
}
// ********** End Class ARenegadeSplinePath Function IsTeamAllowed *********************************

// ********** Begin Class ARenegadeSplinePath ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_ARenegadeSplinePath_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * An authored route for infantry, Character-based vehicles, or other AI-controlled pawns.\n * The spline is only a route guide. Followers navigate on the NavMesh and are never attached to it.\n */" },
#endif
		{ "IncludePath", "RenegadeSplinePath.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RenegadeSplinePath.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An authored route for infantry, Character-based vehicles, or other AI-controlled pawns.\nThe spline is only a route guide. Followers navigate on the NavMesh and are never attached to it." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[] = {
		{ "Category", "Renegade Spline AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Editable route spline. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RenegadeSplinePath.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Editable route spline." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RouteGroup_MetaData[] = {
		{ "Category", "Renegade Spline AI|Routing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional logical group, such as GDI_MainLane, Nod_Tunnel, or Neutral_Defence. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSplinePath.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional logical group, such as GDI_MainLane, Nod_Tunnel, or Neutral_Defence." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowedTeamIds_MetaData[] = {
		{ "Category", "Renegade Spline AI|Routing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Empty means all teams are allowed. Team IDs are game-defined integers. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSplinePath.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Empty means all teams are allowed. Team IDs are game-defined integers." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRouteEnabled_MetaData[] = {
		{ "Category", "Renegade Spline AI|Routing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Disable a route without deleting it or changing follower blueprints. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSplinePath.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Disable a route without deleting it or changing follower blueprints." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class ARenegadeSplinePath constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Spline;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RouteGroup;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AllowedTeamIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedTeamIds;
	static void NewProp_bRouteEnabled_SetBit(void* Obj)
	{
		((ARenegadeSplinePath*)Obj)->bRouteEnabled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRouteEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ARenegadeSplinePath constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetClosestDistanceAlongRoute"), .Pointer = &ARenegadeSplinePath::execGetClosestDistanceAlongRoute },
		{ .NameUTF8 = UTF8TEXT("GetRouteLength"), .Pointer = &ARenegadeSplinePath::execGetRouteLength },
		{ .NameUTF8 = UTF8TEXT("GetRouteLocationAtDistance"), .Pointer = &ARenegadeSplinePath::execGetRouteLocationAtDistance },
		{ .NameUTF8 = UTF8TEXT("GetSplineComponent"), .Pointer = &ARenegadeSplinePath::execGetSplineComponent },
		{ .NameUTF8 = UTF8TEXT("IsClosedLoop"), .Pointer = &ARenegadeSplinePath::execIsClosedLoop },
		{ .NameUTF8 = UTF8TEXT("IsTeamAllowed"), .Pointer = &ARenegadeSplinePath::execIsTeamAllowed },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARenegadeSplinePath_GetClosestDistanceAlongRoute, "GetClosestDistanceAlongRoute" }, // 488bcaa63ba667427a1abb55111bc831c4370148
		{ &Z_Construct_UFunction_ARenegadeSplinePath_GetRouteLength, "GetRouteLength" }, // 1be0028ef4f3251f7301d037bdaa957bab2549ef
		{ &Z_Construct_UFunction_ARenegadeSplinePath_GetRouteLocationAtDistance, "GetRouteLocationAtDistance" }, // 00abf4de166e498e3bdb56fe769d104baa448ca8
		{ &Z_Construct_UFunction_ARenegadeSplinePath_GetSplineComponent, "GetSplineComponent" }, // 1590202b2b3ee9c8aa5ab94a47d228c3441ca23c
		{ &Z_Construct_UFunction_ARenegadeSplinePath_IsClosedLoop, "IsClosedLoop" }, // a0e040b86be6e68121223a34b35b8ca9131804db
		{ &Z_Construct_UFunction_ARenegadeSplinePath_IsTeamAllowed, "IsTeamAllowed" }, // 9b5095ae049af07ba4e97f4af40f15610e647969
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARenegadeSplinePath>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class ARenegadeSplinePath Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ARenegadeSplinePath, Spline), Z_Construct_UClass_USplineComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spline_MetaData), NewProp_Spline_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_RouteGroup = { "RouteGroup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(ARenegadeSplinePath, RouteGroup), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RouteGroup_MetaData), NewProp_RouteGroup_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_AllowedTeamIds_Inner = { "AllowedTeamIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_AllowedTeamIds = { "AllowedTeamIds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ARenegadeSplinePath, AllowedTeamIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowedTeamIds_MetaData), NewProp_AllowedTeamIds_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRouteEnabled = { "bRouteEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ARenegadeSplinePath), &UHT_STATICS::NewProp_bRouteEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRouteEnabled_MetaData), NewProp_bRouteEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Spline,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RouteGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AllowedTeamIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AllowedTeamIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRouteEnabled,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class ARenegadeSplinePath Property Definitions ***********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AActor,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSplineAI,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_ARenegadeSplinePath,
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
static void ARenegadeSplinePath_StaticRegisterNativesARenegadeSplinePath()
{
	UClass* Class = ARenegadeSplinePath::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ARenegadeSplinePath;
UClass* Z_Construct_UClass_ARenegadeSplinePath(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = ARenegadeSplinePath;
		if (!Z_Registration_Info_UClass_ARenegadeSplinePath.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RenegadeSplinePath"),
				Z_Registration_Info_UClass_ARenegadeSplinePath.InnerSingleton,
				ARenegadeSplinePath_StaticRegisterNativesARenegadeSplinePath,
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
		return Z_Registration_Info_UClass_ARenegadeSplinePath.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_ARenegadeSplinePath.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARenegadeSplinePath.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_ARenegadeSplinePath.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ARenegadeSplinePath);
ARenegadeSplinePath::~ARenegadeSplinePath() {}
// ********** End Class ARenegadeSplinePath ********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeSplinePath_h__Script_RenegadeSplineAI_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARenegadeSplinePath, TEXT("ARenegadeSplinePath"), &Z_Registration_Info_UClass_ARenegadeSplinePath, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARenegadeSplinePath), 4198106923U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeSplinePath_h__Script_RenegadeSplineAI_46a27adbdb957ba69ef9608e161e8e0b5b21e996{
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
