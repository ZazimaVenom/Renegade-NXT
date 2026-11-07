// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RenegadeSplineAITypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRenegadeSplineAITypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RenegadeSplineAI(ETypeConstructPhase);
RENEGADESPLINEAI_API UEnum* Z_Construct_UEnum_RenegadeSplineAI_ERenegadeCharacterVehiclePreset(ETypeConstructPhase);
RENEGADESPLINEAI_API UEnum* Z_Construct_UEnum_RenegadeSplineAI_ERenegadeSplineFollowState(ETypeConstructPhase);
RENEGADESPLINEAI_API UEnum* Z_Construct_UEnum_RenegadeSplineAI_ERenegadeSplineResumePolicy(ETypeConstructPhase);
RENEGADESPLINEAI_API UEnum* Z_Construct_UEnum_RenegadeSplineAI_ERenegadeSplineTravelDirection(ETypeConstructPhase);
RENEGADESPLINEAI_API UFunction* Z_Construct_UDelegateFunction_RenegadeSplineAI_RenegadeCharacterVehicleDriveSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESPLINEAI_API UFunction* Z_Construct_UDelegateFunction_RenegadeSplineAI_RenegadeSplineExternalControlSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESPLINEAI_API UFunction* Z_Construct_UDelegateFunction_RenegadeSplineAI_RenegadeSplineMoveFailureSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESPLINEAI_API UFunction* Z_Construct_UDelegateFunction_RenegadeSplineAI_RenegadeSplinePathSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESPLINEAI_API UFunction* Z_Construct_UDelegateFunction_RenegadeSplineAI_RenegadeSplineProgressSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESPLINEAI_API UFunction* Z_Construct_UDelegateFunction_RenegadeSplineAI_RenegadeSplineStateChangedSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESPLINEAI_API UClass* Z_Construct_UClass_ARenegadeSplinePath(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum ERenegadeSplineFollowState ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RenegadeSplineAI_ERenegadeSplineFollowState_Statics
template<> RENEGADESPLINEAI_NON_ATTRIBUTED_API UEnum* StaticEnum<ERenegadeSplineFollowState>()
{
	return Z_Construct_UEnum_RenegadeSplineAI_ERenegadeSplineFollowState(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Blocked.DisplayName", "Blocked" },
		{ "Blocked.Name", "ERenegadeSplineFollowState::Blocked" },
		{ "BlueprintType", "true" },
		{ "CombatPaused.DisplayName", "Paused For Combat" },
		{ "CombatPaused.Name", "ERenegadeSplineFollowState::CombatPaused" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Runtime state of a spline follower. Existing values are kept stable for saved Blueprints. */" },
#endif
		{ "Completed.DisplayName", "Completed" },
		{ "Completed.Name", "ERenegadeSplineFollowState::Completed" },
		{ "Disabled.DisplayName", "Disabled" },
		{ "Disabled.Name", "ERenegadeSplineFollowState::Disabled" },
		{ "ExternalPaused.DisplayName", "Paused For External AI" },
		{ "ExternalPaused.Name", "ERenegadeSplineFollowState::ExternalPaused" },
		{ "Following.DisplayName", "Following Route" },
		{ "Following.Name", "ERenegadeSplineFollowState::Following" },
		{ "Idle.DisplayName", "Idle" },
		{ "Idle.Name", "ERenegadeSplineFollowState::Idle" },
		{ "ModuleRelativePath", "Public/RenegadeSplineAITypes.h" },
		{ "Reacquiring.DisplayName", "Reacquiring Route" },
		{ "Reacquiring.Name", "ERenegadeSplineFollowState::Reacquiring" },
		{ "Suspended.DisplayName", "Suspended By External Movement" },
		{ "Suspended.Name", "ERenegadeSplineFollowState::Suspended" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Runtime state of a spline follower. Existing values are kept stable for saved Blueprints." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERenegadeSplineFollowState::Disabled", (int64)ERenegadeSplineFollowState::Disabled },
		{ "ERenegadeSplineFollowState::Idle", (int64)ERenegadeSplineFollowState::Idle },
		{ "ERenegadeSplineFollowState::Reacquiring", (int64)ERenegadeSplineFollowState::Reacquiring },
		{ "ERenegadeSplineFollowState::Following", (int64)ERenegadeSplineFollowState::Following },
		{ "ERenegadeSplineFollowState::CombatPaused", (int64)ERenegadeSplineFollowState::CombatPaused },
		{ "ERenegadeSplineFollowState::Suspended", (int64)ERenegadeSplineFollowState::Suspended },
		{ "ERenegadeSplineFollowState::Blocked", (int64)ERenegadeSplineFollowState::Blocked },
		{ "ERenegadeSplineFollowState::Completed", (int64)ERenegadeSplineFollowState::Completed },
		{ "ERenegadeSplineFollowState::ExternalPaused", (int64)ERenegadeSplineFollowState::ExternalPaused },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSplineAI,
	nullptr,
	"ERenegadeSplineFollowState",
	"ERenegadeSplineFollowState",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ERenegadeSplineFollowState;
UEnum* Z_Construct_UEnum_RenegadeSplineAI_ERenegadeSplineFollowState(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ERenegadeSplineFollowState.OuterSingleton)
		{
			ZRIE_ERenegadeSplineFollowState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RenegadeSplineAI_ERenegadeSplineFollowState, (UObject*)Z_Construct_UPackage__Script_RenegadeSplineAI(ETypeConstructPhase::Outer), TEXT("ERenegadeSplineFollowState"));
		}
		return ZRIE_ERenegadeSplineFollowState.OuterSingleton;
	}
	if (!ZRIE_ERenegadeSplineFollowState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ERenegadeSplineFollowState.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ERenegadeSplineFollowState.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ERenegadeSplineFollowState **************************************************

// ********** Begin Enum ERenegadeSplineTravelDirection ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RenegadeSplineAI_ERenegadeSplineTravelDirection_Statics
template<> RENEGADESPLINEAI_NON_ATTRIBUTED_API UEnum* StaticEnum<ERenegadeSplineTravelDirection>()
{
	return Z_Construct_UEnum_RenegadeSplineAI_ERenegadeSplineTravelDirection(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Direction in which a pawn travels along an authored spline. */" },
#endif
		{ "Forward.DisplayName", "Forward" },
		{ "Forward.Name", "ERenegadeSplineTravelDirection::Forward" },
		{ "ModuleRelativePath", "Public/RenegadeSplineAITypes.h" },
		{ "Reverse.DisplayName", "Reverse" },
		{ "Reverse.Name", "ERenegadeSplineTravelDirection::Reverse" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Direction in which a pawn travels along an authored spline." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERenegadeSplineTravelDirection::Forward", (int64)ERenegadeSplineTravelDirection::Forward },
		{ "ERenegadeSplineTravelDirection::Reverse", (int64)ERenegadeSplineTravelDirection::Reverse },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSplineAI,
	nullptr,
	"ERenegadeSplineTravelDirection",
	"ERenegadeSplineTravelDirection",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ERenegadeSplineTravelDirection;
UEnum* Z_Construct_UEnum_RenegadeSplineAI_ERenegadeSplineTravelDirection(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ERenegadeSplineTravelDirection.OuterSingleton)
		{
			ZRIE_ERenegadeSplineTravelDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RenegadeSplineAI_ERenegadeSplineTravelDirection, (UObject*)Z_Construct_UPackage__Script_RenegadeSplineAI(ETypeConstructPhase::Outer), TEXT("ERenegadeSplineTravelDirection"));
		}
		return ZRIE_ERenegadeSplineTravelDirection.OuterSingleton;
	}
	if (!ZRIE_ERenegadeSplineTravelDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ERenegadeSplineTravelDirection.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ERenegadeSplineTravelDirection.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ERenegadeSplineTravelDirection **********************************************

// ********** Begin Enum ERenegadeSplineResumePolicy ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RenegadeSplineAI_ERenegadeSplineResumePolicy_Statics
template<> RENEGADESPLINEAI_NON_ATTRIBUTED_API UEnum* StaticEnum<ERenegadeSplineResumePolicy>()
{
	return Z_Construct_UEnum_RenegadeSplineAI_ERenegadeSplineResumePolicy(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ClosestPoint.Comment", "/** Resume from the geometrically closest point on the route. */" },
		{ "ClosestPoint.DisplayName", "Closest Point" },
		{ "ClosestPoint.Name", "ERenegadeSplineResumePolicy::ClosestPoint" },
		{ "ClosestPoint.ToolTip", "Resume from the geometrically closest point on the route." },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How route progress is reconstructed after combat or displacement. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSplineAITypes.h" },
		{ "PreserveProgress.Comment", "/** Resume near the closest point, but limit accidental backwards progress on open routes. */" },
		{ "PreserveProgress.DisplayName", "Preserve Progress" },
		{ "PreserveProgress.Name", "ERenegadeSplineResumePolicy::PreserveProgress" },
		{ "PreserveProgress.ToolTip", "Resume near the closest point, but limit accidental backwards progress on open routes." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How route progress is reconstructed after combat or displacement." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERenegadeSplineResumePolicy::ClosestPoint", (int64)ERenegadeSplineResumePolicy::ClosestPoint },
		{ "ERenegadeSplineResumePolicy::PreserveProgress", (int64)ERenegadeSplineResumePolicy::PreserveProgress },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSplineAI,
	nullptr,
	"ERenegadeSplineResumePolicy",
	"ERenegadeSplineResumePolicy",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ERenegadeSplineResumePolicy;
UEnum* Z_Construct_UEnum_RenegadeSplineAI_ERenegadeSplineResumePolicy(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ERenegadeSplineResumePolicy.OuterSingleton)
		{
			ZRIE_ERenegadeSplineResumePolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RenegadeSplineAI_ERenegadeSplineResumePolicy, (UObject*)Z_Construct_UPackage__Script_RenegadeSplineAI(ETypeConstructPhase::Outer), TEXT("ERenegadeSplineResumePolicy"));
		}
		return ZRIE_ERenegadeSplineResumePolicy.OuterSingleton;
	}
	if (!ZRIE_ERenegadeSplineResumePolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ERenegadeSplineResumePolicy.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ERenegadeSplineResumePolicy.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ERenegadeSplineResumePolicy *************************************************

// ********** Begin Enum ERenegadeCharacterVehiclePreset *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RenegadeSplineAI_ERenegadeCharacterVehiclePreset_Statics
template<> RENEGADESPLINEAI_NON_ATTRIBUTED_API UEnum* StaticEnum<ERenegadeCharacterVehiclePreset>()
{
	return Z_Construct_UEnum_RenegadeSplineAI_ERenegadeCharacterVehiclePreset(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Starting configurations for Character Blueprints that visually represent vehicles. */" },
#endif
		{ "Custom.DisplayName", "Custom" },
		{ "Custom.Name", "ERenegadeCharacterVehiclePreset::Custom" },
		{ "Harvester.DisplayName", "Harvester / Heavy Utility" },
		{ "Harvester.Name", "ERenegadeCharacterVehiclePreset::Harvester" },
		{ "HeavyTracked.DisplayName", "Heavy Tank" },
		{ "HeavyTracked.Name", "ERenegadeCharacterVehiclePreset::HeavyTracked" },
		{ "LightTracked.DisplayName", "Light Tracked Vehicle" },
		{ "LightTracked.Name", "ERenegadeCharacterVehiclePreset::LightTracked" },
		{ "ModuleRelativePath", "Public/RenegadeSplineAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Starting configurations for Character Blueprints that visually represent vehicles." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERenegadeCharacterVehiclePreset::LightTracked", (int64)ERenegadeCharacterVehiclePreset::LightTracked },
		{ "ERenegadeCharacterVehiclePreset::HeavyTracked", (int64)ERenegadeCharacterVehiclePreset::HeavyTracked },
		{ "ERenegadeCharacterVehiclePreset::Harvester", (int64)ERenegadeCharacterVehiclePreset::Harvester },
		{ "ERenegadeCharacterVehiclePreset::Custom", (int64)ERenegadeCharacterVehiclePreset::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSplineAI,
	nullptr,
	"ERenegadeCharacterVehiclePreset",
	"ERenegadeCharacterVehiclePreset",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ERenegadeCharacterVehiclePreset;
UEnum* Z_Construct_UEnum_RenegadeSplineAI_ERenegadeCharacterVehiclePreset(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ERenegadeCharacterVehiclePreset.OuterSingleton)
		{
			ZRIE_ERenegadeCharacterVehiclePreset.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RenegadeSplineAI_ERenegadeCharacterVehiclePreset, (UObject*)Z_Construct_UPackage__Script_RenegadeSplineAI(ETypeConstructPhase::Outer), TEXT("ERenegadeCharacterVehiclePreset"));
		}
		return ZRIE_ERenegadeCharacterVehiclePreset.OuterSingleton;
	}
	if (!ZRIE_ERenegadeCharacterVehiclePreset.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ERenegadeCharacterVehiclePreset.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ERenegadeCharacterVehiclePreset.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ERenegadeCharacterVehiclePreset *********************************************

// ********** Begin Delegate FRenegadeSplineStateChangedSignature **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSplineAI_RenegadeSplineStateChangedSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSplineAI_eventRenegadeSplineStateChangedSignature_Parms
	{
		ERenegadeSplineFollowState PreviousState;
		ERenegadeSplineFollowState NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSplineAITypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeSplineStateChangedSignature constinit property declarations **
	static const UECodeGen_Private::FBytePropertyParams NewProp_PreviousState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PreviousState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeSplineStateChangedSignature constinit property declarations ****
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeSplineStateChangedSignature Property Definitions *************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_PreviousState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_PreviousState = { "PreviousState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSplineAI_eventRenegadeSplineStateChangedSignature_Parms, PreviousState), Z_Construct_UEnum_RenegadeSplineAI_ERenegadeSplineFollowState, METADATA_PARAMS(0, nullptr) }; // 71206f693ecea4c7092ab4888618a0f2fb681a1e
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSplineAI_eventRenegadeSplineStateChangedSignature_Parms, NewState), Z_Construct_UEnum_RenegadeSplineAI_ERenegadeSplineFollowState, METADATA_PARAMS(0, nullptr) }; // 71206f693ecea4c7092ab4888618a0f2fb681a1e
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviousState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviousState,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeSplineStateChangedSignature Property Definitions ***************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSplineAI, nullptr, "RenegadeSplineStateChangedSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSplineAI_eventRenegadeSplineStateChangedSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSplineAI_eventRenegadeSplineStateChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSplineAI_RenegadeSplineStateChangedSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeSplineStateChangedSignature ************************************

// ********** Begin Delegate FRenegadeSplineProgressSignature **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSplineAI_RenegadeSplineProgressSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSplineAI_eventRenegadeSplineProgressSignature_Parms
	{
		float DistanceAlongSpline;
		float NormalizedProgress;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSplineAITypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeSplineProgressSignature constinit property declarations ******
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceAlongSpline;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizedProgress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeSplineProgressSignature constinit property declarations ********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeSplineProgressSignature Property Definitions *****************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DistanceAlongSpline = { "DistanceAlongSpline", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSplineAI_eventRenegadeSplineProgressSignature_Parms, DistanceAlongSpline), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_NormalizedProgress = { "NormalizedProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSplineAI_eventRenegadeSplineProgressSignature_Parms, NormalizedProgress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DistanceAlongSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NormalizedProgress,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeSplineProgressSignature Property Definitions *******************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSplineAI, nullptr, "RenegadeSplineProgressSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSplineAI_eventRenegadeSplineProgressSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSplineAI_eventRenegadeSplineProgressSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSplineAI_RenegadeSplineProgressSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeSplineProgressSignature ****************************************

// ********** Begin Delegate FRenegadeSplinePathSignature ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSplineAI_RenegadeSplinePathSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSplineAI_eventRenegadeSplinePathSignature_Parms
	{
		ARenegadeSplinePath* Path;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSplineAITypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeSplinePathSignature constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Path;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeSplinePathSignature constinit property declarations ************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeSplinePathSignature Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSplineAI_eventRenegadeSplinePathSignature_Parms, Path), Z_Construct_UClass_ARenegadeSplinePath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Path,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeSplinePathSignature Property Definitions ***********************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSplineAI, nullptr, "RenegadeSplinePathSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSplineAI_eventRenegadeSplinePathSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSplineAI_eventRenegadeSplinePathSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSplineAI_RenegadeSplinePathSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeSplinePathSignature ********************************************

// ********** Begin Delegate FRenegadeSplineMoveFailureSignature ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSplineAI_RenegadeSplineMoveFailureSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSplineAI_eventRenegadeSplineMoveFailureSignature_Parms
	{
		int32 ConsecutiveFailures;
		FVector FailedGoalLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSplineAITypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeSplineMoveFailureSignature constinit property declarations ***
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConsecutiveFailures;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FailedGoalLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeSplineMoveFailureSignature constinit property declarations *****
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeSplineMoveFailureSignature Property Definitions **************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ConsecutiveFailures = { "ConsecutiveFailures", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSplineAI_eventRenegadeSplineMoveFailureSignature_Parms, ConsecutiveFailures), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_FailedGoalLocation = { "FailedGoalLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSplineAI_eventRenegadeSplineMoveFailureSignature_Parms, FailedGoalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ConsecutiveFailures,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FailedGoalLocation,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeSplineMoveFailureSignature Property Definitions ****************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSplineAI, nullptr, "RenegadeSplineMoveFailureSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSplineAI_eventRenegadeSplineMoveFailureSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSplineAI_eventRenegadeSplineMoveFailureSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSplineAI_RenegadeSplineMoveFailureSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeSplineMoveFailureSignature *************************************

// ********** Begin Delegate FRenegadeSplineExternalControlSignature *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSplineAI_RenegadeSplineExternalControlSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSplineAI_eventRenegadeSplineExternalControlSignature_Parms
	{
		FName SourceName;
		bool bActive;
		int32 ActiveClaimCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSplineAITypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeSplineExternalControlSignature constinit property declarations 
	static const UECodeGen_Private::FNamePropertyParams NewProp_SourceName;
	static void NewProp_bActive_SetBit(void* Obj)
	{
		((_Script_RenegadeSplineAI_eventRenegadeSplineExternalControlSignature_Parms*)Obj)->bActive = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActiveClaimCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeSplineExternalControlSignature constinit property declarations *
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeSplineExternalControlSignature Property Definitions **********
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_SourceName = { "SourceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSplineAI_eventRenegadeSplineExternalControlSignature_Parms, SourceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_RenegadeSplineAI_eventRenegadeSplineExternalControlSignature_Parms), &UHT_STATICS::NewProp_bActive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ActiveClaimCount = { "ActiveClaimCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSplineAI_eventRenegadeSplineExternalControlSignature_Parms, ActiveClaimCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveClaimCount,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeSplineExternalControlSignature Property Definitions ************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSplineAI, nullptr, "RenegadeSplineExternalControlSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSplineAI_eventRenegadeSplineExternalControlSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSplineAI_eventRenegadeSplineExternalControlSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSplineAI_RenegadeSplineExternalControlSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeSplineExternalControlSignature *********************************

// ********** Begin Delegate FRenegadeCharacterVehicleDriveSignature *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSplineAI_RenegadeCharacterVehicleDriveSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSplineAI_eventRenegadeCharacterVehicleDriveSignature_Parms
	{
		float Throttle;
		float Steering;
		float SpeedKPH;
		bool bPivotTurning;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSplineAITypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeCharacterVehicleDriveSignature constinit property declarations 
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Throttle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Steering;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedKPH;
	static void NewProp_bPivotTurning_SetBit(void* Obj)
	{
		((_Script_RenegadeSplineAI_eventRenegadeCharacterVehicleDriveSignature_Parms*)Obj)->bPivotTurning = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPivotTurning;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeCharacterVehicleDriveSignature constinit property declarations *
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeCharacterVehicleDriveSignature Property Definitions **********
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Throttle = { "Throttle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSplineAI_eventRenegadeCharacterVehicleDriveSignature_Parms, Throttle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Steering = { "Steering", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSplineAI_eventRenegadeCharacterVehicleDriveSignature_Parms, Steering), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_SpeedKPH = { "SpeedKPH", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSplineAI_eventRenegadeCharacterVehicleDriveSignature_Parms, SpeedKPH), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bPivotTurning = { "bPivotTurning", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_RenegadeSplineAI_eventRenegadeCharacterVehicleDriveSignature_Parms), &UHT_STATICS::NewProp_bPivotTurning_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Throttle,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Steering,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpeedKPH,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bPivotTurning,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeCharacterVehicleDriveSignature Property Definitions ************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSplineAI, nullptr, "RenegadeCharacterVehicleDriveSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSplineAI_eventRenegadeCharacterVehicleDriveSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSplineAI_eventRenegadeCharacterVehicleDriveSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSplineAI_RenegadeCharacterVehicleDriveSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeCharacterVehicleDriveSignature *********************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeSplineAITypes_h__Script_RenegadeSplineAI_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_RenegadeSplineAI_ERenegadeSplineFollowState, TEXT("ERenegadeSplineFollowState"), &ZRIE_ERenegadeSplineFollowState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1897951081U) },
		{ Z_Construct_UEnum_RenegadeSplineAI_ERenegadeSplineTravelDirection, TEXT("ERenegadeSplineTravelDirection"), &ZRIE_ERenegadeSplineTravelDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3801760497U) },
		{ Z_Construct_UEnum_RenegadeSplineAI_ERenegadeSplineResumePolicy, TEXT("ERenegadeSplineResumePolicy"), &ZRIE_ERenegadeSplineResumePolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3250574084U) },
		{ Z_Construct_UEnum_RenegadeSplineAI_ERenegadeCharacterVehiclePreset, TEXT("ERenegadeCharacterVehiclePreset"), &ZRIE_ERenegadeCharacterVehiclePreset, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2452398896U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSplineAI_Source_RenegadeSplineAI_Public_RenegadeSplineAITypes_h__Script_RenegadeSplineAI_a7d0d91d56e2eef1f3ec011762cac7700155e9d4{
	TEXT("/Script/RenegadeSplineAI"),
	nullptr, 0,
	nullptr, 0,
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
