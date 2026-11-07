// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RenegadeCharacterVehicleComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRenegadeCharacterVehicleComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UActorComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RenegadeSplineAI(ETypeConstructPhase);
RENEGADESPLINEAI_API UEnum* Z_Construct_UEnum_RenegadeSplineAI_ERenegadeCharacterVehiclePreset(ETypeConstructPhase);
RENEGADESPLINEAI_API UClass* Z_Construct_UClass_URenegadeCharacterVehicleComponent(ETypeConstructPhase);
RENEGADESPLINEAI_API UFunction* Z_Construct_UDelegateFunction_RenegadeSplineAI_RenegadeCharacterVehicleDriveSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESPLINEAI_API UClass* Z_Construct_UClass_URenegadeCharacterVehicleComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class URenegadeCharacterVehicleComponent Function ApplyVehiclePreset ***********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeCharacterVehicleComponent_ApplyVehiclePreset_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade Spline AI|Character Vehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// -------------------- Blueprint API --------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCharacterVehicleComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-------------------- Blueprint API --------------------" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ApplyVehiclePreset constinit property declarations ********************
// ********** End Function ApplyVehiclePreset constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeCharacterVehicleComponent, nullptr, "ApplyVehiclePreset", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeCharacterVehicleComponent_ApplyVehiclePreset(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeCharacterVehicleComponent::execApplyVehiclePreset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyVehiclePreset();
	P_NATIVE_END;
}
// ********** End Class URenegadeCharacterVehicleComponent Function ApplyVehiclePreset *************

// ********** Begin Class URenegadeCharacterVehicleComponent Function ClearSteeringTarget **********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeCharacterVehicleComponent_ClearSteeringTarget_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade Spline AI|Character Vehicle" },
		{ "ModuleRelativePath", "Public/RenegadeCharacterVehicleComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ClearSteeringTarget constinit property declarations *******************
// ********** End Function ClearSteeringTarget constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeCharacterVehicleComponent, nullptr, "ClearSteeringTarget", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeCharacterVehicleComponent_ClearSteeringTarget(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeCharacterVehicleComponent::execClearSteeringTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearSteeringTarget();
	P_NATIVE_END;
}
// ********** End Class URenegadeCharacterVehicleComponent Function ClearSteeringTarget ************

// ********** Begin Class URenegadeCharacterVehicleComponent Function IsCharacterVehicleReady ******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeCharacterVehicleComponent_IsCharacterVehicleReady_Statics
struct UHT_STATICS
{
	struct RenegadeCharacterVehicleComponent_eventIsCharacterVehicleReady_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade Spline AI|Character Vehicle" },
		{ "ModuleRelativePath", "Public/RenegadeCharacterVehicleComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsCharacterVehicleReady constinit property declarations ***************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeCharacterVehicleComponent_eventIsCharacterVehicleReady_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsCharacterVehicleReady constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsCharacterVehicleReady Property Definitions **************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeCharacterVehicleComponent_eventIsCharacterVehicleReady_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsCharacterVehicleReady Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeCharacterVehicleComponent, nullptr, "IsCharacterVehicleReady", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeCharacterVehicleComponent_eventIsCharacterVehicleReady_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeCharacterVehicleComponent_eventIsCharacterVehicleReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeCharacterVehicleComponent_IsCharacterVehicleReady(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeCharacterVehicleComponent::execIsCharacterVehicleReady)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCharacterVehicleReady();
	P_NATIVE_END;
}
// ********** End Class URenegadeCharacterVehicleComponent Function IsCharacterVehicleReady ********

// ********** Begin Class URenegadeCharacterVehicleComponent Function SetDriveEnabled **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeCharacterVehicleComponent_SetDriveEnabled_Statics
struct UHT_STATICS
{
	struct RenegadeCharacterVehicleComponent_eventSetDriveEnabled_Parms
	{
		bool bEnabled;
		bool bStopImmediately;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade Spline AI|Character Vehicle" },
		{ "CPP_Default_bStopImmediately", "true" },
		{ "ModuleRelativePath", "Public/RenegadeCharacterVehicleComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetDriveEnabled constinit property declarations ***********************
	static void NewProp_bEnabled_SetBit(void* Obj)
	{
		((RenegadeCharacterVehicleComponent_eventSetDriveEnabled_Parms*)Obj)->bEnabled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static void NewProp_bStopImmediately_SetBit(void* Obj)
	{
		((RenegadeCharacterVehicleComponent_eventSetDriveEnabled_Parms*)Obj)->bStopImmediately = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopImmediately;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetDriveEnabled constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetDriveEnabled Property Definitions **********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeCharacterVehicleComponent_eventSetDriveEnabled_Parms), &UHT_STATICS::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bStopImmediately = { "bStopImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeCharacterVehicleComponent_eventSetDriveEnabled_Parms), &UHT_STATICS::NewProp_bStopImmediately_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bStopImmediately,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetDriveEnabled Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeCharacterVehicleComponent, nullptr, "SetDriveEnabled", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeCharacterVehicleComponent_eventSetDriveEnabled_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeCharacterVehicleComponent_eventSetDriveEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeCharacterVehicleComponent_SetDriveEnabled(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeCharacterVehicleComponent::execSetDriveEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_GET_UBOOL(Z_Param_bStopImmediately);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDriveEnabled(Z_Param_bEnabled,Z_Param_bStopImmediately);
	P_NATIVE_END;
}
// ********** End Class URenegadeCharacterVehicleComponent Function SetDriveEnabled ****************

// ********** Begin Class URenegadeCharacterVehicleComponent Function SetSteeringTarget ************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeCharacterVehicleComponent_SetSteeringTarget_Statics
struct UHT_STATICS
{
	struct RenegadeCharacterVehicleComponent_eventSetSteeringTarget_Parms
	{
		FVector WorldTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade Spline AI|Character Vehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional steering hint. Active AI path-following direction still has priority for obstacle detours. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCharacterVehicleComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional steering hint. Active AI path-following direction still has priority for obstacle detours." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetSteeringTarget constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSteeringTarget constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSteeringTarget Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WorldTarget = { "WorldTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeCharacterVehicleComponent_eventSetSteeringTarget_Parms, WorldTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldTarget,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetSteeringTarget Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeCharacterVehicleComponent, nullptr, "SetSteeringTarget", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeCharacterVehicleComponent_eventSetSteeringTarget_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeCharacterVehicleComponent_eventSetSteeringTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeCharacterVehicleComponent_SetSteeringTarget(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeCharacterVehicleComponent::execSetSteeringTarget)
{
	P_GET_STRUCT(FVector,Z_Param_WorldTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSteeringTarget(Z_Param_WorldTarget);
	P_NATIVE_END;
}
// ********** End Class URenegadeCharacterVehicleComponent Function SetSteeringTarget **************

// ********** Begin Class URenegadeCharacterVehicleComponent ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URenegadeCharacterVehicleComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Vehicle-like locomotion adapter for an ACharacter-based Blueprint.\n *\n * This is intentionally not a wheeled/Chaos vehicle. The owner remains a normal Character so it\n * can use NavMesh, AAIController MoveTo, CharacterMovement replication, and existing combat AI.\n * The adapter adds controlled yaw, acceleration/braking, corner speed reduction, pivot turning,\n * and lateral-slip damping so a tank or harvester does not move like an infantry character.\n */" },
#endif
		{ "IncludePath", "RenegadeCharacterVehicleComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RenegadeCharacterVehicleComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vehicle-like locomotion adapter for an ACharacter-based Blueprint.\n\nThis is intentionally not a wheeled/Chaos vehicle. The owner remains a normal Character so it\ncan use NavMesh, AAIController MoveTo, CharacterMovement replication, and existing combat AI.\nThe adapter adds controlled yaw, acceleration/braking, corner speed reduction, pivot turning,\nand lateral-slip damping so a tank or harvester does not move like an infantry character." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VehiclePreset_MetaData[] = {
		{ "Category", "Renegade Spline AI|Character Vehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// -------------------- Profile --------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCharacterVehicleComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-------------------- Profile --------------------" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoApplyPreset_MetaData[] = {
		{ "Category", "Renegade Spline AI|Character Vehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Apply the selected preset during BeginPlay. Custom preserves all manually entered values. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCharacterVehicleComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Apply the selected preset during BeginPlay. Custom preserves all manually entered values." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDriveEnabled_MetaData[] = {
		{ "Category", "Renegade Spline AI|Character Vehicle" },
		{ "ModuleRelativePath", "Public/RenegadeCharacterVehicleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRestoreOriginalSettingsOnEndPlay_MetaData[] = {
		{ "Category", "Renegade Spline AI|Character Vehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Restore CharacterMovement and Character rotation settings when the component ends play. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCharacterVehicleComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Restore CharacterMovement and Character rotation settings when the component ends play." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CruiseSpeed_MetaData[] = {
		{ "Category", "Renegade Spline AI|Character Vehicle|Handling" },
		{ "ClampMin", "1.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum straight-line speed. 100 cm/s equals 3.6 km/h. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCharacterVehicleComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum straight-line speed. 100 cm/s equals 3.6 km/h." },
#endif
		{ "Units", "cm/s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[] = {
		{ "Category", "Renegade Spline AI|Character Vehicle|Handling" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeCharacterVehicleComponent.h" },
		{ "Units", "cm/s^2" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrakingDeceleration_MetaData[] = {
		{ "Category", "Renegade Spline AI|Character Vehicle|Handling" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RenegadeCharacterVehicleComponent.h" },
		{ "Units", "cm/s^2" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundFriction_MetaData[] = {
		{ "Category", "Renegade Spline AI|Character Vehicle|Handling" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Lower values feel heavier/slipperier. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCharacterVehicleComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lower values feel heavier/slipperier." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumYawRate_MetaData[] = {
		{ "Category", "Renegade Spline AI|Character Vehicle|Steering" },
		{ "ClampMin", "1.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum body yaw rate during normal driving. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCharacterVehicleComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum body yaw rate during normal driving." },
#endif
		{ "Units", "deg/s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnSlowdownStartAngle_MetaData[] = {
		{ "Category", "Renegade Spline AI|Character Vehicle|Steering" },
		{ "ClampMax", "179.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Begin reducing speed when the requested path direction exceeds this heading error. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCharacterVehicleComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Begin reducing speed when the requested path direction exceeds this heading error." },
#endif
		{ "Units", "deg" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumCornerSpeed_MetaData[] = {
		{ "Category", "Renegade Spline AI|Character Vehicle|Steering" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Lowest speed allowed during an ordinary corner. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCharacterVehicleComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lowest speed allowed during an ordinary corner." },
#endif
		{ "Units", "cm/s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowPivotTurn_MetaData[] = {
		{ "Category", "Renegade Spline AI|Character Vehicle|Pivot Turn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tracked vehicles can rotate their body almost in place for severe heading errors. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCharacterVehicleComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tracked vehicles can rotate their body almost in place for severe heading errors." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PivotTurnStartAngle_MetaData[] = {
		{ "Category", "Renegade Spline AI|Character Vehicle|Pivot Turn" },
		{ "ClampMax", "179.0" },
		{ "ClampMin", "1.0" },
		{ "EditCondition", "bAllowPivotTurn" },
		{ "ModuleRelativePath", "Public/RenegadeCharacterVehicleComponent.h" },
		{ "Units", "deg" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PivotYawRate_MetaData[] = {
		{ "Category", "Renegade Spline AI|Character Vehicle|Pivot Turn" },
		{ "ClampMin", "1.0" },
		{ "EditCondition", "bAllowPivotTurn" },
		{ "ModuleRelativePath", "Public/RenegadeCharacterVehicleComponent.h" },
		{ "Units", "deg/s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PivotMaximumSpeed_MetaData[] = {
		{ "Category", "Renegade Spline AI|Character Vehicle|Pivot Turn" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bAllowPivotTurn" },
		{ "ModuleRelativePath", "Public/RenegadeCharacterVehicleComponent.h" },
		{ "Units", "cm/s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowReverseMotion_MetaData[] = {
		{ "Category", "Renegade Spline AI|Character Vehicle|Handling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Permit reverse body motion. Disabled makes the Character turn before driving forward. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCharacterVehicleComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Permit reverse body motion. Disabled makes the Character turn before driving forward." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LateralGrip_MetaData[] = {
		{ "Category", "Renegade Spline AI|Character Vehicle|Handling" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Exponential damping applied to sideways velocity. Higher values remove infantry-style strafing faster. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCharacterVehicleComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Exponential damping applied to sideways velocity. Higher values remove infantry-style strafing faster." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseRVOAvoidance_MetaData[] = {
		{ "Category", "Renegade Spline AI|Character Vehicle|Avoidance" },
		{ "ModuleRelativePath", "Public/RenegadeCharacterVehicleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideSplineFollowerDistances_MetaData[] = {
		{ "Category", "Renegade Spline AI|Character Vehicle|Spline" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Let RenegadeSplineFollower automatically use these larger vehicle-friendly distances. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCharacterVehicleComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Let RenegadeSplineFollower automatically use these larger vehicle-friendly distances." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecommendedSplineLookAheadDistance_MetaData[] = {
		{ "Category", "Renegade Spline AI|Character Vehicle|Spline" },
		{ "ClampMin", "100.0" },
		{ "ModuleRelativePath", "Public/RenegadeCharacterVehicleComponent.h" },
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecommendedAcceptanceRadius_MetaData[] = {
		{ "Category", "Renegade Spline AI|Character Vehicle|Spline" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/RenegadeCharacterVehicleComponent.h" },
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecommendedRouteEndTolerance_MetaData[] = {
		{ "Category", "Renegade Spline AI|Character Vehicle|Spline" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/RenegadeCharacterVehicleComponent.h" },
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentThrottle_MetaData[] = {
		{ "Category", "Renegade Spline AI|Character Vehicle|State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// -------------------- Runtime state --------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCharacterVehicleComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-------------------- Runtime state --------------------" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSteering_MetaData[] = {
		{ "Category", "Renegade Spline AI|Character Vehicle|State" },
		{ "ModuleRelativePath", "Public/RenegadeCharacterVehicleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSpeedKPH_MetaData[] = {
		{ "Category", "Renegade Spline AI|Character Vehicle|State" },
		{ "ModuleRelativePath", "Public/RenegadeCharacterVehicleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPivotTurning_MetaData[] = {
		{ "Category", "Renegade Spline AI|Character Vehicle|State" },
		{ "ModuleRelativePath", "Public/RenegadeCharacterVehicleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnVehicleDriveUpdated_MetaData[] = {
		{ "Category", "Renegade Spline AI|Character Vehicle|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Bind this to track scrolling, wheel rotation, engine sound, dust, or vehicle animation logic. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeCharacterVehicleComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bind this to track scrolling, wheel rotation, engine sound, dust, or vehicle animation logic." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class URenegadeCharacterVehicleComponent constinit property declarations *******
	static const UECodeGen_Private::FBytePropertyParams NewProp_VehiclePreset_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VehiclePreset;
	static void NewProp_bAutoApplyPreset_SetBit(void* Obj)
	{
		((URenegadeCharacterVehicleComponent*)Obj)->bAutoApplyPreset = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoApplyPreset;
	static void NewProp_bDriveEnabled_SetBit(void* Obj)
	{
		((URenegadeCharacterVehicleComponent*)Obj)->bDriveEnabled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDriveEnabled;
	static void NewProp_bRestoreOriginalSettingsOnEndPlay_SetBit(void* Obj)
	{
		((URenegadeCharacterVehicleComponent*)Obj)->bRestoreOriginalSettingsOnEndPlay = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRestoreOriginalSettingsOnEndPlay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CruiseSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Acceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BrakingDeceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundFriction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumYawRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnSlowdownStartAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumCornerSpeed;
	static void NewProp_bAllowPivotTurn_SetBit(void* Obj)
	{
		((URenegadeCharacterVehicleComponent*)Obj)->bAllowPivotTurn = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowPivotTurn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PivotTurnStartAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PivotYawRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PivotMaximumSpeed;
	static void NewProp_bAllowReverseMotion_SetBit(void* Obj)
	{
		((URenegadeCharacterVehicleComponent*)Obj)->bAllowReverseMotion = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowReverseMotion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LateralGrip;
	static void NewProp_bUseRVOAvoidance_SetBit(void* Obj)
	{
		((URenegadeCharacterVehicleComponent*)Obj)->bUseRVOAvoidance = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRVOAvoidance;
	static void NewProp_bOverrideSplineFollowerDistances_SetBit(void* Obj)
	{
		((URenegadeCharacterVehicleComponent*)Obj)->bOverrideSplineFollowerDistances = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideSplineFollowerDistances;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RecommendedSplineLookAheadDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RecommendedAcceptanceRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RecommendedRouteEndTolerance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentThrottle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentSteering;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentSpeedKPH;
	static void NewProp_bIsPivotTurning_SetBit(void* Obj)
	{
		((URenegadeCharacterVehicleComponent*)Obj)->bIsPivotTurning = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPivotTurning;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVehicleDriveUpdated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URenegadeCharacterVehicleComponent constinit property declarations *********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ApplyVehiclePreset"), .Pointer = &URenegadeCharacterVehicleComponent::execApplyVehiclePreset },
		{ .NameUTF8 = UTF8TEXT("ClearSteeringTarget"), .Pointer = &URenegadeCharacterVehicleComponent::execClearSteeringTarget },
		{ .NameUTF8 = UTF8TEXT("IsCharacterVehicleReady"), .Pointer = &URenegadeCharacterVehicleComponent::execIsCharacterVehicleReady },
		{ .NameUTF8 = UTF8TEXT("SetDriveEnabled"), .Pointer = &URenegadeCharacterVehicleComponent::execSetDriveEnabled },
		{ .NameUTF8 = UTF8TEXT("SetSteeringTarget"), .Pointer = &URenegadeCharacterVehicleComponent::execSetSteeringTarget },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URenegadeCharacterVehicleComponent_ApplyVehiclePreset, "ApplyVehiclePreset" }, // a57057a46dc5c0361915566e2e2ba35e7924a330
		{ &Z_Construct_UFunction_URenegadeCharacterVehicleComponent_ClearSteeringTarget, "ClearSteeringTarget" }, // a788dc38c4e2ae2a82870f9b266f9c5ae9f6a7ed
		{ &Z_Construct_UFunction_URenegadeCharacterVehicleComponent_IsCharacterVehicleReady, "IsCharacterVehicleReady" }, // cfbbcdf60aabd6925ca7200a06cd2752843208a9
		{ &Z_Construct_UFunction_URenegadeCharacterVehicleComponent_SetDriveEnabled, "SetDriveEnabled" }, // 83e926e96ac2af84dd4a927d77f97a2787d0398b
		{ &Z_Construct_UFunction_URenegadeCharacterVehicleComponent_SetSteeringTarget, "SetSteeringTarget" }, // 69b031e69a8ff4d4bf0fa9dc8e1834cc12b42811
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenegadeCharacterVehicleComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class URenegadeCharacterVehicleComponent Property Definitions ******************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_VehiclePreset_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_VehiclePreset = { "VehiclePreset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeCharacterVehicleComponent, VehiclePreset), Z_Construct_UEnum_RenegadeSplineAI_ERenegadeCharacterVehiclePreset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VehiclePreset_MetaData), NewProp_VehiclePreset_MetaData) }; // 922ca33038d36bc252dfdf77cfb2f2f8a4610781
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAutoApplyPreset = { "bAutoApplyPreset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeCharacterVehicleComponent), &UHT_STATICS::NewProp_bAutoApplyPreset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoApplyPreset_MetaData), NewProp_bAutoApplyPreset_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDriveEnabled = { "bDriveEnabled", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeCharacterVehicleComponent), &UHT_STATICS::NewProp_bDriveEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDriveEnabled_MetaData), NewProp_bDriveEnabled_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRestoreOriginalSettingsOnEndPlay = { "bRestoreOriginalSettingsOnEndPlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeCharacterVehicleComponent), &UHT_STATICS::NewProp_bRestoreOriginalSettingsOnEndPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRestoreOriginalSettingsOnEndPlay_MetaData), NewProp_bRestoreOriginalSettingsOnEndPlay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CruiseSpeed = { "CruiseSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeCharacterVehicleComponent, CruiseSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CruiseSpeed_MetaData), NewProp_CruiseSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeCharacterVehicleComponent, Acceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Acceleration_MetaData), NewProp_Acceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_BrakingDeceleration = { "BrakingDeceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeCharacterVehicleComponent, BrakingDeceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrakingDeceleration_MetaData), NewProp_BrakingDeceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_GroundFriction = { "GroundFriction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeCharacterVehicleComponent, GroundFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundFriction_MetaData), NewProp_GroundFriction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaximumYawRate = { "MaximumYawRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeCharacterVehicleComponent, MaximumYawRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumYawRate_MetaData), NewProp_MaximumYawRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_TurnSlowdownStartAngle = { "TurnSlowdownStartAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeCharacterVehicleComponent, TurnSlowdownStartAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnSlowdownStartAngle_MetaData), NewProp_TurnSlowdownStartAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MinimumCornerSpeed = { "MinimumCornerSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeCharacterVehicleComponent, MinimumCornerSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumCornerSpeed_MetaData), NewProp_MinimumCornerSpeed_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAllowPivotTurn = { "bAllowPivotTurn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeCharacterVehicleComponent), &UHT_STATICS::NewProp_bAllowPivotTurn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowPivotTurn_MetaData), NewProp_bAllowPivotTurn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_PivotTurnStartAngle = { "PivotTurnStartAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeCharacterVehicleComponent, PivotTurnStartAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PivotTurnStartAngle_MetaData), NewProp_PivotTurnStartAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_PivotYawRate = { "PivotYawRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeCharacterVehicleComponent, PivotYawRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PivotYawRate_MetaData), NewProp_PivotYawRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_PivotMaximumSpeed = { "PivotMaximumSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeCharacterVehicleComponent, PivotMaximumSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PivotMaximumSpeed_MetaData), NewProp_PivotMaximumSpeed_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAllowReverseMotion = { "bAllowReverseMotion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeCharacterVehicleComponent), &UHT_STATICS::NewProp_bAllowReverseMotion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowReverseMotion_MetaData), NewProp_bAllowReverseMotion_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LateralGrip = { "LateralGrip", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeCharacterVehicleComponent, LateralGrip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LateralGrip_MetaData), NewProp_LateralGrip_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseRVOAvoidance = { "bUseRVOAvoidance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeCharacterVehicleComponent), &UHT_STATICS::NewProp_bUseRVOAvoidance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseRVOAvoidance_MetaData), NewProp_bUseRVOAvoidance_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bOverrideSplineFollowerDistances = { "bOverrideSplineFollowerDistances", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeCharacterVehicleComponent), &UHT_STATICS::NewProp_bOverrideSplineFollowerDistances_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideSplineFollowerDistances_MetaData), NewProp_bOverrideSplineFollowerDistances_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RecommendedSplineLookAheadDistance = { "RecommendedSplineLookAheadDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeCharacterVehicleComponent, RecommendedSplineLookAheadDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecommendedSplineLookAheadDistance_MetaData), NewProp_RecommendedSplineLookAheadDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RecommendedAcceptanceRadius = { "RecommendedAcceptanceRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeCharacterVehicleComponent, RecommendedAcceptanceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecommendedAcceptanceRadius_MetaData), NewProp_RecommendedAcceptanceRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RecommendedRouteEndTolerance = { "RecommendedRouteEndTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeCharacterVehicleComponent, RecommendedRouteEndTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecommendedRouteEndTolerance_MetaData), NewProp_RecommendedRouteEndTolerance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CurrentThrottle = { "CurrentThrottle", nullptr, (EPropertyFlags)0x0010000000020035, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeCharacterVehicleComponent, CurrentThrottle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentThrottle_MetaData), NewProp_CurrentThrottle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CurrentSteering = { "CurrentSteering", nullptr, (EPropertyFlags)0x0010000000020035, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeCharacterVehicleComponent, CurrentSteering), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSteering_MetaData), NewProp_CurrentSteering_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CurrentSpeedKPH = { "CurrentSpeedKPH", nullptr, (EPropertyFlags)0x0010000000020035, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeCharacterVehicleComponent, CurrentSpeedKPH), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSpeedKPH_MetaData), NewProp_CurrentSpeedKPH_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsPivotTurning = { "bIsPivotTurning", nullptr, (EPropertyFlags)0x0010000000020035, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeCharacterVehicleComponent), &UHT_STATICS::NewProp_bIsPivotTurning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPivotTurning_MetaData), NewProp_bIsPivotTurning_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnVehicleDriveUpdated = { "OnVehicleDriveUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeCharacterVehicleComponent, OnVehicleDriveUpdated), Z_Construct_UDelegateFunction_RenegadeSplineAI_RenegadeCharacterVehicleDriveSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnVehicleDriveUpdated_MetaData), NewProp_OnVehicleDriveUpdated_MetaData) }; // 014cba07f3e815e19c9b0879919538cbf91f0006
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_VehiclePreset_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_VehiclePreset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAutoApplyPreset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDriveEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRestoreOriginalSettingsOnEndPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CruiseSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Acceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BrakingDeceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GroundFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaximumYawRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TurnSlowdownStartAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinimumCornerSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAllowPivotTurn,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PivotTurnStartAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PivotYawRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PivotMaximumSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAllowReverseMotion,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LateralGrip,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseRVOAvoidance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bOverrideSplineFollowerDistances,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RecommendedSplineLookAheadDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RecommendedAcceptanceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RecommendedRouteEndTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentThrottle,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentSteering,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentSpeedKPH,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsPivotTurning,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnVehicleDriveUpdated,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class URenegadeCharacterVehicleComponent Property Definitions ********************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UActorComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSplineAI,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URenegadeCharacterVehicleComponent,
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
static void URenegadeCharacterVehicleComponent_StaticRegisterNativesURenegadeCharacterVehicleComponent()
{
	UClass* Class = URenegadeCharacterVehicleComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URenegadeCharacterVehicleComponent;
UClass* Z_Construct_UClass_URenegadeCharacterVehicleComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URenegadeCharacterVehicleComponent;
		if (!Z_Registration_Info_UClass_URenegadeCharacterVehicleComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RenegadeCharacterVehicleComponent"),
				Z_Registration_Info_UClass_URenegadeCharacterVehicleComponent.InnerSingleton,
				URenegadeCharacterVehicleComponent_StaticRegisterNativesURenegadeCharacterVehicleComponent,
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
		return Z_Registration_Info_UClass_URenegadeCharacterVehicleComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URenegadeCharacterVehicleComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URenegadeCharacterVehicleComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URenegadeCharacterVehicleComponent.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void URenegadeCharacterVehicleComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_bDriveEnabled(TEXT("bDriveEnabled"));
	static FName Name_CurrentThrottle(TEXT("CurrentThrottle"));
	static FName Name_CurrentSteering(TEXT("CurrentSteering"));
	static FName Name_CurrentSpeedKPH(TEXT("CurrentSpeedKPH"));
	static FName Name_bIsPivotTurning(TEXT("bIsPivotTurning"));
	const bool bIsValid = true
		&& Name_bDriveEnabled == ClassReps[(int32)ENetFields_Private::bDriveEnabled].Property->GetFName()
		&& Name_CurrentThrottle == ClassReps[(int32)ENetFields_Private::CurrentThrottle].Property->GetFName()
		&& Name_CurrentSteering == ClassReps[(int32)ENetFields_Private::CurrentSteering].Property->GetFName()
		&& Name_CurrentSpeedKPH == ClassReps[(int32)ENetFields_Private::CurrentSpeedKPH].Property->GetFName()
		&& Name_bIsPivotTurning == ClassReps[(int32)ENetFields_Private::bIsPivotTurning].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in URenegadeCharacterVehicleComponent"));
}
#endif
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URenegadeCharacterVehicleComponent);
URenegadeCharacterVehicleComponent::~URenegadeCharacterVehicleComponent() {}
// ********** End Class URenegadeCharacterVehicleComponent *****************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeCharacterVehicleComponent_h__Script_RenegadeSplineAI_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URenegadeCharacterVehicleComponent, TEXT("URenegadeCharacterVehicleComponent"), &Z_Registration_Info_UClass_URenegadeCharacterVehicleComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URenegadeCharacterVehicleComponent), 3317487734U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeCharacterVehicleComponent_h__Script_RenegadeSplineAI_8817cd9c00a701b34b96815edf463d1aecefcc5d{
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
