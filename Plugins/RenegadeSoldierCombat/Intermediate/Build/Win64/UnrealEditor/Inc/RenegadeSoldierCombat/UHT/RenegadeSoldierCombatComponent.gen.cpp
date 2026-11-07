// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RenegadeSoldierCombatComponent.h"
#include "Engine/EngineTypes.h"
#include "Engine/HitResult.h"
#include "Engine/NetSerialization.h"
#include "RenegadeCombatTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRenegadeSoldierCombatComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UActorComponent(ETypeConstructPhase);
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference(ETypeConstructPhase);
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult(ETypeConstructPhase);
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize(ETypeConstructPhase);
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize10(ETypeConstructPhase);
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantizeNormal(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_ACharacter(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AController(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UDamageType(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UDecalComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USceneComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UTexture2D(ETypeConstructPhase);
UMG_API UClass* Z_Construct_UClass_UWidgetComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UEnum* Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeCombatMoveType(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UEnum* Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadePlayerWeaponSlot(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeCombatEndedSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeCombatMoveSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeCombatMovementSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeCombatStartedSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeCombatVisualSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeDeathSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeGrenadeBouncedSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeGrenadeExplodedSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeGrenadeLaunchedSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeGroundBloodSpawnedSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHealthChangedSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeHealthRespawnSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadePlayerAimChangedSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadePlayerAimPresentationSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadePlayerAmmoChangedSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadePlayerCombatSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadePlayerInputSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadePlayerLockOnSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadePlayerLockOnStateChangedSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadePlayerLockOnTargetChangedSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadePlayerWeaponChangedSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeReloadSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeRespawnTransformSelectedSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeRocketImpactedSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeRocketLaunchedSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeShotFiredSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeSimpleSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_URenegadeSoldierCombatComponent(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeSplinePauseSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeSplineResumeSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeTargetChangedSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeTargetingSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeWeaponSettings(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_URenegadeSoldierCombatComponent(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_URenegadeWeaponProfile(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Delegate FRenegadeTargetChangedSignature ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeTargetChangedSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadeTargetChangedSignature_Parms
	{
		AActor* PreviousTarget;
		AActor* NewTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeTargetChangedSignature constinit property declarations *******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviousTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeTargetChangedSignature constinit property declarations *********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeTargetChangedSignature Property Definitions ******************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PreviousTarget = { "PreviousTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeTargetChangedSignature_Parms, PreviousTarget), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_NewTarget = { "NewTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeTargetChangedSignature_Parms, NewTarget), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviousTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewTarget,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeTargetChangedSignature Property Definitions ********************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeTargetChangedSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeTargetChangedSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeTargetChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeTargetChangedSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeTargetChangedSignature *****************************************

// ********** Begin Delegate FRenegadeCombatStartedSignature ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeCombatStartedSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadeCombatStartedSignature_Parms
	{
		AActor* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeCombatStartedSignature constinit property declarations *******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeCombatStartedSignature constinit property declarations *********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeCombatStartedSignature Property Definitions ******************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeCombatStartedSignature_Parms, Target), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeCombatStartedSignature Property Definitions ********************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeCombatStartedSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeCombatStartedSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeCombatStartedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeCombatStartedSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeCombatStartedSignature *****************************************

// ********** Begin Delegate FRenegadeCombatEndedSignature *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeCombatEndedSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadeCombatEndedSignature_Parms
	{
		AActor* PreviousTarget;
		FVector ResumeFromLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeCombatEndedSignature constinit property declarations *********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviousTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResumeFromLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeCombatEndedSignature constinit property declarations ***********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeCombatEndedSignature Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PreviousTarget = { "PreviousTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeCombatEndedSignature_Parms, PreviousTarget), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ResumeFromLocation = { "ResumeFromLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeCombatEndedSignature_Parms, ResumeFromLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviousTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ResumeFromLocation,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeCombatEndedSignature Property Definitions **********************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeCombatEndedSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeCombatEndedSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeCombatEndedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeCombatEndedSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeCombatEndedSignature *******************************************

// ********** Begin Delegate FRenegadeShotFiredSignature *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeShotFiredSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadeShotFiredSignature_Parms
	{
		FVector TraceStart;
		FVector TraceEnd;
		bool bBlockingHit;
		FHitResult HitResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeShotFiredSignature constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceEnd;
	static void NewProp_bBlockingHit_SetBit(void* Obj)
	{
		((_Script_RenegadeSoldierCombat_eventRenegadeShotFiredSignature_Parms*)Obj)->bBlockingHit = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlockingHit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeShotFiredSignature constinit property declarations *************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeShotFiredSignature Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TraceStart = { "TraceStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeShotFiredSignature_Parms, TraceStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TraceEnd = { "TraceEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeShotFiredSignature_Parms, TraceEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bBlockingHit = { "bBlockingHit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_RenegadeSoldierCombat_eventRenegadeShotFiredSignature_Parms), &UHT_STATICS::NewProp_bBlockingHit_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeShotFiredSignature_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResult_MetaData), NewProp_HitResult_MetaData) }; // e0ec7b349cc3b29366a6161006ad7fa74de2944e
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TraceStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TraceEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bBlockingHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HitResult,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeShotFiredSignature Property Definitions ************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeShotFiredSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeShotFiredSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeShotFiredSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeShotFiredSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeShotFiredSignature *********************************************

// ********** Begin Delegate FRenegadeRocketLaunchedSignature **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeRocketLaunchedSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadeRocketLaunchedSignature_Parms
	{
		FVector LaunchLocation;
		FVector ImpactLocation;
		float FlightSeconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeRocketLaunchedSignature constinit property declarations ******
	static const UECodeGen_Private::FStructPropertyParams NewProp_LaunchLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FlightSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeRocketLaunchedSignature constinit property declarations ********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeRocketLaunchedSignature Property Definitions *****************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LaunchLocation = { "LaunchLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeRocketLaunchedSignature_Parms, LaunchLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ImpactLocation = { "ImpactLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeRocketLaunchedSignature_Parms, ImpactLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_FlightSeconds = { "FlightSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeRocketLaunchedSignature_Parms, FlightSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LaunchLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ImpactLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FlightSeconds,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeRocketLaunchedSignature Property Definitions *******************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeRocketLaunchedSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeRocketLaunchedSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeRocketLaunchedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeRocketLaunchedSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeRocketLaunchedSignature ****************************************

// ********** Begin Delegate FRenegadeRocketImpactedSignature **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeRocketImpactedSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadeRocketImpactedSignature_Parms
	{
		FVector ImpactLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeRocketImpactedSignature constinit property declarations ******
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeRocketImpactedSignature constinit property declarations ********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeRocketImpactedSignature Property Definitions *****************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ImpactLocation = { "ImpactLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeRocketImpactedSignature_Parms, ImpactLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ImpactLocation,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeRocketImpactedSignature Property Definitions *******************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeRocketImpactedSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeRocketImpactedSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeRocketImpactedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeRocketImpactedSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeRocketImpactedSignature ****************************************

// ********** Begin Delegate FRenegadeGrenadeLaunchedSignature *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeGrenadeLaunchedSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadeGrenadeLaunchedSignature_Parms
	{
		int32 GrenadeId;
		FVector LaunchLocation;
		FVector InitialVelocity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeGrenadeLaunchedSignature constinit property declarations *****
	static const UECodeGen_Private::FIntPropertyParams NewProp_GrenadeId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LaunchLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeGrenadeLaunchedSignature constinit property declarations *******
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeGrenadeLaunchedSignature Property Definitions ****************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_GrenadeId = { "GrenadeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeGrenadeLaunchedSignature_Parms, GrenadeId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LaunchLocation = { "LaunchLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeGrenadeLaunchedSignature_Parms, LaunchLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_InitialVelocity = { "InitialVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeGrenadeLaunchedSignature_Parms, InitialVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GrenadeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LaunchLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InitialVelocity,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeGrenadeLaunchedSignature Property Definitions ******************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeGrenadeLaunchedSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeGrenadeLaunchedSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeGrenadeLaunchedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeGrenadeLaunchedSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeGrenadeLaunchedSignature ***************************************

// ********** Begin Delegate FRenegadeGrenadeBouncedSignature **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeGrenadeBouncedSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadeGrenadeBouncedSignature_Parms
	{
		int32 GrenadeId;
		FVector BounceLocation;
		FVector ImpactNormal;
		FVector NewVelocity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeGrenadeBouncedSignature constinit property declarations ******
	static const UECodeGen_Private::FIntPropertyParams NewProp_GrenadeId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BounceLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactNormal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeGrenadeBouncedSignature constinit property declarations ********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeGrenadeBouncedSignature Property Definitions *****************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_GrenadeId = { "GrenadeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeGrenadeBouncedSignature_Parms, GrenadeId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BounceLocation = { "BounceLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeGrenadeBouncedSignature_Parms, BounceLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ImpactNormal = { "ImpactNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeGrenadeBouncedSignature_Parms, ImpactNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_NewVelocity = { "NewVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeGrenadeBouncedSignature_Parms, NewVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GrenadeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BounceLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ImpactNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewVelocity,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeGrenadeBouncedSignature Property Definitions *******************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeGrenadeBouncedSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeGrenadeBouncedSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeGrenadeBouncedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeGrenadeBouncedSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeGrenadeBouncedSignature ****************************************

// ********** Begin Delegate FRenegadeGrenadeExplodedSignature *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeGrenadeExplodedSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadeGrenadeExplodedSignature_Parms
	{
		int32 GrenadeId;
		FVector ImpactLocation;
		FVector ImpactNormal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeGrenadeExplodedSignature constinit property declarations *****
	static const UECodeGen_Private::FIntPropertyParams NewProp_GrenadeId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactNormal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeGrenadeExplodedSignature constinit property declarations *******
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeGrenadeExplodedSignature Property Definitions ****************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_GrenadeId = { "GrenadeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeGrenadeExplodedSignature_Parms, GrenadeId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ImpactLocation = { "ImpactLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeGrenadeExplodedSignature_Parms, ImpactLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ImpactNormal = { "ImpactNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeGrenadeExplodedSignature_Parms, ImpactNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GrenadeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ImpactLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ImpactNormal,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeGrenadeExplodedSignature Property Definitions ******************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeGrenadeExplodedSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeGrenadeExplodedSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeGrenadeExplodedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeGrenadeExplodedSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeGrenadeExplodedSignature ***************************************

// ********** Begin Delegate FRenegadeReloadSignature **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeReloadSignature__DelegateSignature_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeReloadSignature constinit property declarations **************
// ********** End Delegate FRenegadeReloadSignature constinit property declarations ****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeReloadSignature__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeReloadSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeReloadSignature ************************************************

// ********** Begin Delegate FRenegadeHealthChangedSignature ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHealthChangedSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadeHealthChangedSignature_Parms
	{
		float PreviousHealth;
		float NewHealth;
		AActor* DamageCauser;
		AController* InstigatedBy;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeHealthChangedSignature constinit property declarations *******
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviousHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealth;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeHealthChangedSignature constinit property declarations *********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeHealthChangedSignature Property Definitions ******************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_PreviousHealth = { "PreviousHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeHealthChangedSignature_Parms, PreviousHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeHealthChangedSignature_Parms, NewHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeHealthChangedSignature_Parms, DamageCauser), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeHealthChangedSignature_Parms, InstigatedBy), Z_Construct_UClass_AController, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviousHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DamageCauser,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InstigatedBy,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeHealthChangedSignature Property Definitions ********************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeHealthChangedSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeHealthChangedSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeHealthChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHealthChangedSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeHealthChangedSignature *****************************************

// ********** Begin Delegate FRenegadeDeathSignature ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeDeathSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadeDeathSignature_Parms
	{
		AActor* Killer;
		FVector RagdollImpulse;
		FName HitBone;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeDeathSignature constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Killer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RagdollImpulse;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HitBone;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeDeathSignature constinit property declarations *****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeDeathSignature Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Killer = { "Killer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeDeathSignature_Parms, Killer), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RagdollImpulse = { "RagdollImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeDeathSignature_Parms, RagdollImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_HitBone = { "HitBone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeDeathSignature_Parms, HitBone), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Killer,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RagdollImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HitBone,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeDeathSignature Property Definitions ****************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeDeathSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeDeathSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeDeathSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeDeathSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeDeathSignature *************************************************

// ********** Begin Delegate FRenegadeSimpleSignature **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeSimpleSignature__DelegateSignature_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeSimpleSignature constinit property declarations **************
// ********** End Delegate FRenegadeSimpleSignature constinit property declarations ****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeSimpleSignature__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeSimpleSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeSimpleSignature ************************************************

// ********** Begin Delegate FRenegadeCombatMoveSignature ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeCombatMoveSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadeCombatMoveSignature_Parms
	{
		FVector Destination;
		ERenegadeCombatMoveType MoveType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeCombatMoveSignature constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Destination;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MoveType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MoveType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeCombatMoveSignature constinit property declarations ************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeCombatMoveSignature Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeCombatMoveSignature_Parms, Destination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_MoveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_MoveType = { "MoveType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeCombatMoveSignature_Parms, MoveType), Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadeCombatMoveType, METADATA_PARAMS(0, nullptr) }; // 5803b7773b7316479520a813b089f81802a69d23
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Destination,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MoveType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MoveType,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeCombatMoveSignature Property Definitions ***********************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeCombatMoveSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeCombatMoveSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeCombatMoveSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeCombatMoveSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeCombatMoveSignature ********************************************

// ********** Begin Delegate FRenegadeSplinePauseSignature *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeSplinePauseSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadeSplinePauseSignature_Parms
	{
		AActor* CombatTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeSplinePauseSignature constinit property declarations *********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeSplinePauseSignature constinit property declarations ***********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeSplinePauseSignature Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CombatTarget = { "CombatTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeSplinePauseSignature_Parms, CombatTarget), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CombatTarget,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeSplinePauseSignature Property Definitions **********************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeSplinePauseSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeSplinePauseSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeSplinePauseSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeSplinePauseSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeSplinePauseSignature *******************************************

// ********** Begin Delegate FRenegadeSplineResumeSignature ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeSplineResumeSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadeSplineResumeSignature_Parms
	{
		FVector ResumeFromLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeSplineResumeSignature constinit property declarations ********
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResumeFromLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeSplineResumeSignature constinit property declarations **********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeSplineResumeSignature Property Definitions *******************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ResumeFromLocation = { "ResumeFromLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeSplineResumeSignature_Parms, ResumeFromLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ResumeFromLocation,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeSplineResumeSignature Property Definitions *********************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeSplineResumeSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeSplineResumeSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeSplineResumeSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeSplineResumeSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeSplineResumeSignature ******************************************

// ********** Begin Delegate FRenegadeGroundBloodSpawnedSignature **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeGroundBloodSpawnedSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadeGroundBloodSpawnedSignature_Parms
	{
		UDecalComponent* DecalComponent;
		FHitResult BulletHit;
		FHitResult GroundHit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecalComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletHit_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundHit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeGroundBloodSpawnedSignature constinit property declarations **
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DecalComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BulletHit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroundHit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeGroundBloodSpawnedSignature constinit property declarations ****
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeGroundBloodSpawnedSignature Property Definitions *************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DecalComponent = { "DecalComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeGroundBloodSpawnedSignature_Parms, DecalComponent), Z_Construct_UClass_UDecalComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecalComponent_MetaData), NewProp_DecalComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BulletHit = { "BulletHit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeGroundBloodSpawnedSignature_Parms, BulletHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletHit_MetaData), NewProp_BulletHit_MetaData) }; // e0ec7b349cc3b29366a6161006ad7fa74de2944e
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GroundHit = { "GroundHit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeGroundBloodSpawnedSignature_Parms, GroundHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundHit_MetaData), NewProp_GroundHit_MetaData) }; // e0ec7b349cc3b29366a6161006ad7fa74de2944e
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DecalComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BulletHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GroundHit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeGroundBloodSpawnedSignature Property Definitions ***************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeGroundBloodSpawnedSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeGroundBloodSpawnedSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeGroundBloodSpawnedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeGroundBloodSpawnedSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeGroundBloodSpawnedSignature ************************************

// ********** Begin Delegate FRenegadePlayerWeaponChangedSignature *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadePlayerWeaponChangedSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadePlayerWeaponChangedSignature_Parms
	{
		ERenegadePlayerWeaponSlot PreviousWeapon;
		ERenegadePlayerWeaponSlot NewWeapon;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadePlayerWeaponChangedSignature constinit property declarations *
	static const UECodeGen_Private::FBytePropertyParams NewProp_PreviousWeapon_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PreviousWeapon;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewWeapon_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewWeapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadePlayerWeaponChangedSignature constinit property declarations ***
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadePlayerWeaponChangedSignature Property Definitions ************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_PreviousWeapon_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_PreviousWeapon = { "PreviousWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadePlayerWeaponChangedSignature_Parms, PreviousWeapon), Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadePlayerWeaponSlot, METADATA_PARAMS(0, nullptr) }; // 3d3c6554bcaa42767edc1195d01cd72bd763897b
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_NewWeapon_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_NewWeapon = { "NewWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadePlayerWeaponChangedSignature_Parms, NewWeapon), Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadePlayerWeaponSlot, METADATA_PARAMS(0, nullptr) }; // 3d3c6554bcaa42767edc1195d01cd72bd763897b
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviousWeapon_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviousWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewWeapon_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewWeapon,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadePlayerWeaponChangedSignature Property Definitions **************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadePlayerWeaponChangedSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadePlayerWeaponChangedSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadePlayerWeaponChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadePlayerWeaponChangedSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadePlayerWeaponChangedSignature ***********************************

// ********** Begin Delegate FRenegadePlayerAmmoChangedSignature ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadePlayerAmmoChangedSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadePlayerAmmoChangedSignature_Parms
	{
		ERenegadePlayerWeaponSlot WeaponSlot;
		int32 PreviousAmmo;
		int32 NewAmmo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadePlayerAmmoChangedSignature constinit property declarations ***
	static const UECodeGen_Private::FBytePropertyParams NewProp_WeaponSlot_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WeaponSlot;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PreviousAmmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewAmmo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadePlayerAmmoChangedSignature constinit property declarations *****
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadePlayerAmmoChangedSignature Property Definitions **************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_WeaponSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_WeaponSlot = { "WeaponSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadePlayerAmmoChangedSignature_Parms, WeaponSlot), Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadePlayerWeaponSlot, METADATA_PARAMS(0, nullptr) }; // 3d3c6554bcaa42767edc1195d01cd72bd763897b
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_PreviousAmmo = { "PreviousAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadePlayerAmmoChangedSignature_Parms, PreviousAmmo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_NewAmmo = { "NewAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadePlayerAmmoChangedSignature_Parms, NewAmmo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WeaponSlot_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WeaponSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviousAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewAmmo,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadePlayerAmmoChangedSignature Property Definitions ****************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadePlayerAmmoChangedSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadePlayerAmmoChangedSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadePlayerAmmoChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadePlayerAmmoChangedSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadePlayerAmmoChangedSignature *************************************

// ********** Begin Delegate FRenegadePlayerAimChangedSignature ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadePlayerAimChangedSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadePlayerAimChangedSignature_Parms
	{
		bool bIsAiming;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadePlayerAimChangedSignature constinit property declarations ****
	static void NewProp_bIsAiming_SetBit(void* Obj)
	{
		((_Script_RenegadeSoldierCombat_eventRenegadePlayerAimChangedSignature_Parms*)Obj)->bIsAiming = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAiming;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadePlayerAimChangedSignature constinit property declarations ******
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadePlayerAimChangedSignature Property Definitions ***************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsAiming = { "bIsAiming", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_RenegadeSoldierCombat_eventRenegadePlayerAimChangedSignature_Parms), &UHT_STATICS::NewProp_bIsAiming_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsAiming,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadePlayerAimChangedSignature Property Definitions *****************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadePlayerAimChangedSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadePlayerAimChangedSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadePlayerAimChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadePlayerAimChangedSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadePlayerAimChangedSignature **************************************

// ********** Begin Delegate FRenegadePlayerLockOnTargetChangedSignature ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadePlayerLockOnTargetChangedSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadePlayerLockOnTargetChangedSignature_Parms
	{
		AActor* PreviousTarget;
		AActor* NewTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadePlayerLockOnTargetChangedSignature constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviousTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadePlayerLockOnTargetChangedSignature constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadePlayerLockOnTargetChangedSignature Property Definitions ******
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PreviousTarget = { "PreviousTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadePlayerLockOnTargetChangedSignature_Parms, PreviousTarget), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_NewTarget = { "NewTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadePlayerLockOnTargetChangedSignature_Parms, NewTarget), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviousTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewTarget,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadePlayerLockOnTargetChangedSignature Property Definitions ********
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadePlayerLockOnTargetChangedSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadePlayerLockOnTargetChangedSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadePlayerLockOnTargetChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadePlayerLockOnTargetChangedSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadePlayerLockOnTargetChangedSignature *****************************

// ********** Begin Delegate FRenegadePlayerLockOnStateChangedSignature ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadePlayerLockOnStateChangedSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadePlayerLockOnStateChangedSignature_Parms
	{
		bool bIsLockedOn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadePlayerLockOnStateChangedSignature constinit property declarations 
	static void NewProp_bIsLockedOn_SetBit(void* Obj)
	{
		((_Script_RenegadeSoldierCombat_eventRenegadePlayerLockOnStateChangedSignature_Parms*)Obj)->bIsLockedOn = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLockedOn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadePlayerLockOnStateChangedSignature constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadePlayerLockOnStateChangedSignature Property Definitions *******
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsLockedOn = { "bIsLockedOn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_RenegadeSoldierCombat_eventRenegadePlayerLockOnStateChangedSignature_Parms), &UHT_STATICS::NewProp_bIsLockedOn_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsLockedOn,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadePlayerLockOnStateChangedSignature Property Definitions *********
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadePlayerLockOnStateChangedSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadePlayerLockOnStateChangedSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadePlayerLockOnStateChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadePlayerLockOnStateChangedSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadePlayerLockOnStateChangedSignature ******************************

// ********** Begin Delegate FRenegadeRespawnTransformSelectedSignature ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeRespawnTransformSelectedSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadeRespawnTransformSelectedSignature_Parms
	{
		FTransform RespawnTransform;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeRespawnTransformSelectedSignature constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_RespawnTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeRespawnTransformSelectedSignature constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeRespawnTransformSelectedSignature Property Definitions *******
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RespawnTransform = { "RespawnTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeRespawnTransformSelectedSignature_Parms, RespawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RespawnTransform,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeRespawnTransformSelectedSignature Property Definitions *********
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeRespawnTransformSelectedSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeRespawnTransformSelectedSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeRespawnTransformSelectedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeRespawnTransformSelectedSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeRespawnTransformSelectedSignature ******************************

// ********** Begin Class URenegadeSoldierCombatComponent Function AddCustomRespawnTransform *******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_AddCustomRespawnTransform_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventAddCustomRespawnTransform_Parms
	{
		FTransform NewRespawnTransform;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Respawn" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddCustomRespawnTransform constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewRespawnTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddCustomRespawnTransform constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddCustomRespawnTransform Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_NewRespawnTransform = { "NewRespawnTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventAddCustomRespawnTransform_Parms, NewRespawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewRespawnTransform,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AddCustomRespawnTransform Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "AddCustomRespawnTransform", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventAddCustomRespawnTransform_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventAddCustomRespawnTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_AddCustomRespawnTransform(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execAddCustomRespawnTransform)
{
	P_GET_STRUCT(FTransform,Z_Param_NewRespawnTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddCustomRespawnTransform(Z_Param_NewRespawnTransform);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function AddCustomRespawnTransform *********

// ********** Begin Class URenegadeSoldierCombatComponent Function CalculateGrenadeLaunchVelocityToLocation 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_CalculateGrenadeLaunchVelocityToLocation_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventCalculateGrenadeLaunchVelocityToLocation_Parms
	{
		FVector TargetLocation;
		FVector OutLaunchVelocity;
		float OutFlightSeconds;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Grenade Launcher|Ballistics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Solves the active Grenadier ballistic arc from the configured muzzle to Target Location. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Solves the active Grenadier ballistic arc from the configured muzzle to Target Location." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function CalculateGrenadeLaunchVelocityToLocation constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutLaunchVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutFlightSeconds;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeSoldierCombatComponent_eventCalculateGrenadeLaunchVelocityToLocation_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CalculateGrenadeLaunchVelocityToLocation constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CalculateGrenadeLaunchVelocityToLocation Property Definitions *********
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventCalculateGrenadeLaunchVelocityToLocation_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutLaunchVelocity = { "OutLaunchVelocity", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventCalculateGrenadeLaunchVelocityToLocation_Parms, OutLaunchVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_OutFlightSeconds = { "OutFlightSeconds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventCalculateGrenadeLaunchVelocityToLocation_Parms, OutFlightSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSoldierCombatComponent_eventCalculateGrenadeLaunchVelocityToLocation_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutLaunchVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutFlightSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CalculateGrenadeLaunchVelocityToLocation Property Definitions ***********
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "CalculateGrenadeLaunchVelocityToLocation", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventCalculateGrenadeLaunchVelocityToLocation_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventCalculateGrenadeLaunchVelocityToLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_CalculateGrenadeLaunchVelocityToLocation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execCalculateGrenadeLaunchVelocityToLocation)
{
	P_GET_STRUCT(FVector,Z_Param_TargetLocation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutLaunchVelocity);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutFlightSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CalculateGrenadeLaunchVelocityToLocation(Z_Param_TargetLocation,Z_Param_Out_OutLaunchVelocity,Z_Param_Out_OutFlightSeconds);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function CalculateGrenadeLaunchVelocityToLocation 

// ********** Begin Class URenegadeSoldierCombatComponent Function ClearBulletVisualSpawnComponent *
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_ClearBulletVisualSpawnComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Combat Visuals|Bullet Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Clears the runtime bullet-spawn override and returns to the Details-panel component reference/tag/fallback muzzle. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clears the runtime bullet-spawn override and returns to the Details-panel component reference/tag/fallback muzzle." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ClearBulletVisualSpawnComponent constinit property declarations *******
// ********** End Function ClearBulletVisualSpawnComponent constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "ClearBulletVisualSpawnComponent", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_ClearBulletVisualSpawnComponent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execClearBulletVisualSpawnComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearBulletVisualSpawnComponent();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function ClearBulletVisualSpawnComponent ***

// ********** Begin Class URenegadeSoldierCombatComponent Function ClearCombatTarget ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_ClearCombatTarget_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventClearCombatTarget_Parms
	{
		bool bResumeSplineMovement;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Combat" },
		{ "CPP_Default_bResumeSplineMovement", "true" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ClearCombatTarget constinit property declarations *********************
	static void NewProp_bResumeSplineMovement_SetBit(void* Obj)
	{
		((RenegadeSoldierCombatComponent_eventClearCombatTarget_Parms*)Obj)->bResumeSplineMovement = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResumeSplineMovement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ClearCombatTarget constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ClearCombatTarget Property Definitions ********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bResumeSplineMovement = { "bResumeSplineMovement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSoldierCombatComponent_eventClearCombatTarget_Parms), &UHT_STATICS::NewProp_bResumeSplineMovement_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bResumeSplineMovement,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ClearCombatTarget Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "ClearCombatTarget", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventClearCombatTarget_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventClearCombatTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_ClearCombatTarget(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execClearCombatTarget)
{
	P_GET_UBOOL(Z_Param_bResumeSplineMovement);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearCombatTarget(Z_Param_bResumeSplineMovement);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function ClearCombatTarget *****************

// ********** Begin Class URenegadeSoldierCombatComponent Function ClearCustomRespawnTransforms ****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_ClearCustomRespawnTransforms_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Respawn" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ClearCustomRespawnTransforms constinit property declarations **********
// ********** End Function ClearCustomRespawnTransforms constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "ClearCustomRespawnTransforms", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_ClearCustomRespawnTransforms(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execClearCustomRespawnTransforms)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearCustomRespawnTransforms();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function ClearCustomRespawnTransforms ******

// ********** Begin Class URenegadeSoldierCombatComponent Function ClearGrenadeLauncherMuzzleComponent 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_ClearGrenadeLauncherMuzzleComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Grenade Launcher|Muzzle" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ClearGrenadeLauncherMuzzleComponent constinit property declarations ***
// ********** End Function ClearGrenadeLauncherMuzzleComponent constinit property declarations *****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "ClearGrenadeLauncherMuzzleComponent", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_ClearGrenadeLauncherMuzzleComponent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execClearGrenadeLauncherMuzzleComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearGrenadeLauncherMuzzleComponent();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function ClearGrenadeLauncherMuzzleComponent 

// ********** Begin Class URenegadeSoldierCombatComponent Function ClearPlayerAimCameraComponent ***
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_ClearPlayerAimCameraComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Aiming|Camera" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ClearPlayerAimCameraComponent constinit property declarations *********
// ********** End Function ClearPlayerAimCameraComponent constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "ClearPlayerAimCameraComponent", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_ClearPlayerAimCameraComponent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execClearPlayerAimCameraComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearPlayerAimCameraComponent();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function ClearPlayerAimCameraComponent *****

// ********** Begin Class URenegadeSoldierCombatComponent Function ClearRocketLauncherMuzzleComponent 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_ClearRocketLauncherMuzzleComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Rocket Launcher|Muzzle" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ClearRocketLauncherMuzzleComponent constinit property declarations ****
// ********** End Function ClearRocketLauncherMuzzleComponent constinit property declarations ******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "ClearRocketLauncherMuzzleComponent", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_ClearRocketLauncherMuzzleComponent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execClearRocketLauncherMuzzleComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearRocketLauncherMuzzleComponent();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function ClearRocketLauncherMuzzleComponent 

// ********** Begin Class URenegadeSoldierCombatComponent Function ClearRuntimeRespawnTransform ****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_ClearRuntimeRespawnTransform_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Respawn" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ClearRuntimeRespawnTransform constinit property declarations **********
// ********** End Function ClearRuntimeRespawnTransform constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "ClearRuntimeRespawnTransform", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_ClearRuntimeRespawnTransform(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execClearRuntimeRespawnTransform)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearRuntimeRespawnTransform();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function ClearRuntimeRespawnTransform ******

// ********** Begin Class URenegadeSoldierCombatComponent Function ForceKill ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_ForceKill_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventForceKill_Parms
	{
		AActor* Killer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Health" },
		{ "CPP_Default_Killer", "None" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ForceKill constinit property declarations *****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Killer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ForceKill constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ForceKill Property Definitions ****************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Killer = { "Killer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventForceKill_Parms, Killer), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Killer,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ForceKill Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "ForceKill", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventForceKill_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventForceKill_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_ForceKill(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execForceKill)
{
	P_GET_OBJECT(AActor,Z_Param_Killer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceKill(Z_Param_Killer);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function ForceKill *************************

// ********** Begin Class URenegadeSoldierCombatComponent Function ForceTargetRefresh **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_ForceTargetRefresh_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Combat" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ForceTargetRefresh constinit property declarations ********************
// ********** End Function ForceTargetRefresh constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "ForceTargetRefresh", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_ForceTargetRefresh(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execForceTargetRefresh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceTargetRefresh();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function ForceTargetRefresh ****************

// ********** Begin Class URenegadeSoldierCombatComponent Function GetActiveWeaponSettings *********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetActiveWeaponSettings_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventGetActiveWeaponSettings_Parms
	{
		FRenegadeWeaponSettings ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Weapon" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetActiveWeaponSettings constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetActiveWeaponSettings constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetActiveWeaponSettings Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventGetActiveWeaponSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FRenegadeWeaponSettings, METADATA_PARAMS(0, nullptr) }; // 99eb1d7bdc6f572230d4fc8d38884a3a59f036d1
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetActiveWeaponSettings Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "GetActiveWeaponSettings", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventGetActiveWeaponSettings_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventGetActiveWeaponSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetActiveWeaponSettings(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execGetActiveWeaponSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRenegadeWeaponSettings*)Z_Param__Result=P_THIS->GetActiveWeaponSettings();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function GetActiveWeaponSettings ***********

// ********** Begin Class URenegadeSoldierCombatComponent Function GetBulletVisualSpawnComponent ***
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetBulletVisualSpawnComponent_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventGetBulletVisualSpawnComponent_Parms
	{
		USceneComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Combat Visuals|Bullet Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the currently resolved Scene Component used for bullet visuals, or null when the trace-start fallback is active. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the currently resolved Scene Component used for bullet visuals, or null when the trace-start fallback is active." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetBulletVisualSpawnComponent constinit property declarations *********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBulletVisualSpawnComponent constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBulletVisualSpawnComponent Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventGetBulletVisualSpawnComponent_Parms, ReturnValue), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetBulletVisualSpawnComponent Property Definitions **********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "GetBulletVisualSpawnComponent", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventGetBulletVisualSpawnComponent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventGetBulletVisualSpawnComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetBulletVisualSpawnComponent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execGetBulletVisualSpawnComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USceneComponent**)Z_Param__Result=P_THIS->GetBulletVisualSpawnComponent();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function GetBulletVisualSpawnComponent *****

// ********** Begin Class URenegadeSoldierCombatComponent Function GetBulletVisualSpawnLocation ****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetBulletVisualSpawnLocation_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventGetBulletVisualSpawnLocation_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Combat Visuals|Bullet Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the final world-space visual spawn position, including the configured local offset. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the final world-space visual spawn position, including the configured local offset." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetBulletVisualSpawnLocation constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBulletVisualSpawnLocation constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBulletVisualSpawnLocation Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventGetBulletVisualSpawnLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetBulletVisualSpawnLocation Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "GetBulletVisualSpawnLocation", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventGetBulletVisualSpawnLocation_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventGetBulletVisualSpawnLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetBulletVisualSpawnLocation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execGetBulletVisualSpawnLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetBulletVisualSpawnLocation();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function GetBulletVisualSpawnLocation ******

// ********** Begin Class URenegadeSoldierCombatComponent Function GetGrenadeLauncherMuzzleComponent 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetGrenadeLauncherMuzzleComponent_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventGetGrenadeLauncherMuzzleComponent_Parms
	{
		USceneComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Grenade Launcher|Muzzle" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetGrenadeLauncherMuzzleComponent constinit property declarations *****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetGrenadeLauncherMuzzleComponent constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetGrenadeLauncherMuzzleComponent Property Definitions ****************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventGetGrenadeLauncherMuzzleComponent_Parms, ReturnValue), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetGrenadeLauncherMuzzleComponent Property Definitions ******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "GetGrenadeLauncherMuzzleComponent", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventGetGrenadeLauncherMuzzleComponent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventGetGrenadeLauncherMuzzleComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetGrenadeLauncherMuzzleComponent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execGetGrenadeLauncherMuzzleComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USceneComponent**)Z_Param__Result=P_THIS->GetGrenadeLauncherMuzzleComponent();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function GetGrenadeLauncherMuzzleComponent *

// ********** Begin Class URenegadeSoldierCombatComponent Function GetGrenadeLauncherMuzzleLocation 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetGrenadeLauncherMuzzleLocation_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventGetGrenadeLauncherMuzzleLocation_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Grenade Launcher|Muzzle" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetGrenadeLauncherMuzzleLocation constinit property declarations ******
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetGrenadeLauncherMuzzleLocation constinit property declarations ********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetGrenadeLauncherMuzzleLocation Property Definitions *****************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventGetGrenadeLauncherMuzzleLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetGrenadeLauncherMuzzleLocation Property Definitions *******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "GetGrenadeLauncherMuzzleLocation", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventGetGrenadeLauncherMuzzleLocation_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventGetGrenadeLauncherMuzzleLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetGrenadeLauncherMuzzleLocation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execGetGrenadeLauncherMuzzleLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetGrenadeLauncherMuzzleLocation();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function GetGrenadeLauncherMuzzleLocation **

// ********** Begin Class URenegadeSoldierCombatComponent Function GetHealthPercent ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetHealthPercent_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventGetHealthPercent_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Health" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetHealthPercent constinit property declarations **********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetHealthPercent constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetHealthPercent Property Definitions *********************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventGetHealthPercent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetHealthPercent Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "GetHealthPercent", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventGetHealthPercent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventGetHealthPercent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetHealthPercent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execGetHealthPercent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHealthPercent();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function GetHealthPercent ******************

// ********** Begin Class URenegadeSoldierCombatComponent Function GetPlayerAimAlpha ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetPlayerAimAlpha_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventGetPlayerAimAlpha_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Aiming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the current local aim transition amount: 0 is hip-fire and 1 is fully aimed. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current local aim transition amount: 0 is hip-fire and 1 is fully aimed." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetPlayerAimAlpha constinit property declarations *********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPlayerAimAlpha constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPlayerAimAlpha Property Definitions ********************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventGetPlayerAimAlpha_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetPlayerAimAlpha Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "GetPlayerAimAlpha", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventGetPlayerAimAlpha_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventGetPlayerAimAlpha_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetPlayerAimAlpha(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execGetPlayerAimAlpha)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPlayerAimAlpha();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function GetPlayerAimAlpha *****************

// ********** Begin Class URenegadeSoldierCombatComponent Function GetPlayerAimCameraComponent *****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetPlayerAimCameraComponent_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventGetPlayerAimCameraComponent_Parms
	{
		UCameraComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Aiming|Camera" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPlayerAimCameraComponent constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPlayerAimCameraComponent constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPlayerAimCameraComponent Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventGetPlayerAimCameraComponent_Parms, ReturnValue), Z_Construct_UClass_UCameraComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetPlayerAimCameraComponent Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "GetPlayerAimCameraComponent", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventGetPlayerAimCameraComponent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventGetPlayerAimCameraComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetPlayerAimCameraComponent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execGetPlayerAimCameraComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCameraComponent**)Z_Param__Result=P_THIS->GetPlayerAimCameraComponent();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function GetPlayerAimCameraComponent *******

// ********** Begin Class URenegadeSoldierCombatComponent Function GetPlayerLockOnAimLocation ******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetPlayerLockOnAimLocation_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventGetPlayerLockOnAimLocation_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Lock-On" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the final predicted aim point currently used for camera tracking and optional shot assistance. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the final predicted aim point currently used for camera tracking and optional shot assistance." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetPlayerLockOnAimLocation constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPlayerLockOnAimLocation constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPlayerLockOnAimLocation Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventGetPlayerLockOnAimLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetPlayerLockOnAimLocation Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "GetPlayerLockOnAimLocation", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventGetPlayerLockOnAimLocation_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventGetPlayerLockOnAimLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetPlayerLockOnAimLocation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execGetPlayerLockOnAimLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetPlayerLockOnAimLocation();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function GetPlayerLockOnAimLocation ********

// ********** Begin Class URenegadeSoldierCombatComponent Function GetPlayerLockOnAimOffset ********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetPlayerLockOnAimOffset_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventGetPlayerLockOnAimOffset_Parms
	{
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Lock-On|Aim Offset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns horizontal and vertical lock-point displacement in centimetres. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns horizontal and vertical lock-point displacement in centimetres." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetPlayerLockOnAimOffset constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPlayerLockOnAimOffset constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPlayerLockOnAimOffset Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventGetPlayerLockOnAimOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetPlayerLockOnAimOffset Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "GetPlayerLockOnAimOffset", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventGetPlayerLockOnAimOffset_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventGetPlayerLockOnAimOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetPlayerLockOnAimOffset(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execGetPlayerLockOnAimOffset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetPlayerLockOnAimOffset();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function GetPlayerLockOnAimOffset **********

// ********** Begin Class URenegadeSoldierCombatComponent Function GetPlayerLockOnIndicatorColor ***
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetPlayerLockOnIndicatorColor_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventGetPlayerLockOnIndicatorColor_Parms
	{
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Lock-On|Indicator" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPlayerLockOnIndicatorColor constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPlayerLockOnIndicatorColor constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPlayerLockOnIndicatorColor Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventGetPlayerLockOnIndicatorColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetPlayerLockOnIndicatorColor Property Definitions **********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "GetPlayerLockOnIndicatorColor", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventGetPlayerLockOnIndicatorColor_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventGetPlayerLockOnIndicatorColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetPlayerLockOnIndicatorColor(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execGetPlayerLockOnIndicatorColor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=P_THIS->GetPlayerLockOnIndicatorColor();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function GetPlayerLockOnIndicatorColor *****

// ********** Begin Class URenegadeSoldierCombatComponent Function GetPlayerLockOnIndicatorTexture *
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetPlayerLockOnIndicatorTexture_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventGetPlayerLockOnIndicatorTexture_Parms
	{
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Lock-On|Indicator" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPlayerLockOnIndicatorTexture constinit property declarations *******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPlayerLockOnIndicatorTexture constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPlayerLockOnIndicatorTexture Property Definitions ******************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventGetPlayerLockOnIndicatorTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetPlayerLockOnIndicatorTexture Property Definitions ********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "GetPlayerLockOnIndicatorTexture", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventGetPlayerLockOnIndicatorTexture_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventGetPlayerLockOnIndicatorTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetPlayerLockOnIndicatorTexture(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execGetPlayerLockOnIndicatorTexture)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=P_THIS->GetPlayerLockOnIndicatorTexture();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function GetPlayerLockOnIndicatorTexture ***

// ********** Begin Class URenegadeSoldierCombatComponent Function GetPlayerLockOnTarget ***********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetPlayerLockOnTarget_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventGetPlayerLockOnTarget_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Lock-On" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPlayerLockOnTarget constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPlayerLockOnTarget constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPlayerLockOnTarget Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventGetPlayerLockOnTarget_Parms, ReturnValue), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetPlayerLockOnTarget Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "GetPlayerLockOnTarget", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventGetPlayerLockOnTarget_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventGetPlayerLockOnTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetPlayerLockOnTarget(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execGetPlayerLockOnTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetPlayerLockOnTarget();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function GetPlayerLockOnTarget *************

// ********** Begin Class URenegadeSoldierCombatComponent Function GetPlayerWeaponAmmo *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetPlayerWeaponAmmo_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventGetPlayerWeaponAmmo_Parms
	{
		ERenegadePlayerWeaponSlot WeaponSlot;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Weapons" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPlayerWeaponAmmo constinit property declarations *******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_WeaponSlot_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WeaponSlot;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPlayerWeaponAmmo constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPlayerWeaponAmmo Property Definitions ******************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_WeaponSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_WeaponSlot = { "WeaponSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventGetPlayerWeaponAmmo_Parms, WeaponSlot), Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadePlayerWeaponSlot, METADATA_PARAMS(0, nullptr) }; // 3d3c6554bcaa42767edc1195d01cd72bd763897b
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventGetPlayerWeaponAmmo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WeaponSlot_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WeaponSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetPlayerWeaponAmmo Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "GetPlayerWeaponAmmo", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventGetPlayerWeaponAmmo_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventGetPlayerWeaponAmmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetPlayerWeaponAmmo(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execGetPlayerWeaponAmmo)
{
	P_GET_ENUM(ERenegadePlayerWeaponSlot,Z_Param_WeaponSlot);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPlayerWeaponAmmo(ERenegadePlayerWeaponSlot(Z_Param_WeaponSlot));
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function GetPlayerWeaponAmmo ***************

// ********** Begin Class URenegadeSoldierCombatComponent Function GetPlayerWeaponSettings *********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetPlayerWeaponSettings_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventGetPlayerWeaponSettings_Parms
	{
		ERenegadePlayerWeaponSlot WeaponSlot;
		FRenegadeWeaponSettings ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Weapons" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPlayerWeaponSettings constinit property declarations ***************
	static const UECodeGen_Private::FBytePropertyParams NewProp_WeaponSlot_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WeaponSlot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPlayerWeaponSettings constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPlayerWeaponSettings Property Definitions **************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_WeaponSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_WeaponSlot = { "WeaponSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventGetPlayerWeaponSettings_Parms, WeaponSlot), Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadePlayerWeaponSlot, METADATA_PARAMS(0, nullptr) }; // 3d3c6554bcaa42767edc1195d01cd72bd763897b
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventGetPlayerWeaponSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FRenegadeWeaponSettings, METADATA_PARAMS(0, nullptr) }; // 99eb1d7bdc6f572230d4fc8d38884a3a59f036d1
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WeaponSlot_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WeaponSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetPlayerWeaponSettings Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "GetPlayerWeaponSettings", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventGetPlayerWeaponSettings_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventGetPlayerWeaponSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetPlayerWeaponSettings(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execGetPlayerWeaponSettings)
{
	P_GET_ENUM(ERenegadePlayerWeaponSlot,Z_Param_WeaponSlot);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRenegadeWeaponSettings*)Z_Param__Result=P_THIS->GetPlayerWeaponSettings(ERenegadePlayerWeaponSlot(Z_Param_WeaponSlot));
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function GetPlayerWeaponSettings ***********

// ********** Begin Class URenegadeSoldierCombatComponent Function GetResolvedRagdollMesh **********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetResolvedRagdollMesh_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventGetResolvedRagdollMesh_Parms
	{
		USkeletalMeshComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Ragdoll" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the skeletal mesh currently selected for automatic ragdoll. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the skeletal mesh currently selected for automatic ragdoll." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetResolvedRagdollMesh constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetResolvedRagdollMesh constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetResolvedRagdollMesh Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventGetResolvedRagdollMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetResolvedRagdollMesh Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "GetResolvedRagdollMesh", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventGetResolvedRagdollMesh_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventGetResolvedRagdollMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetResolvedRagdollMesh(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execGetResolvedRagdollMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetResolvedRagdollMesh();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function GetResolvedRagdollMesh ************

// ********** Begin Class URenegadeSoldierCombatComponent Function GetRocketLauncherMuzzleComponent 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetRocketLauncherMuzzleComponent_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventGetRocketLauncherMuzzleComponent_Parms
	{
		USceneComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Rocket Launcher|Muzzle" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRocketLauncherMuzzleComponent constinit property declarations ******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRocketLauncherMuzzleComponent constinit property declarations ********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRocketLauncherMuzzleComponent Property Definitions *****************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventGetRocketLauncherMuzzleComponent_Parms, ReturnValue), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetRocketLauncherMuzzleComponent Property Definitions *******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "GetRocketLauncherMuzzleComponent", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventGetRocketLauncherMuzzleComponent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventGetRocketLauncherMuzzleComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetRocketLauncherMuzzleComponent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execGetRocketLauncherMuzzleComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USceneComponent**)Z_Param__Result=P_THIS->GetRocketLauncherMuzzleComponent();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function GetRocketLauncherMuzzleComponent **

// ********** Begin Class URenegadeSoldierCombatComponent Function GetRocketLauncherMuzzleLocation *
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetRocketLauncherMuzzleLocation_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventGetRocketLauncherMuzzleLocation_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Rocket Launcher|Muzzle" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRocketLauncherMuzzleLocation constinit property declarations *******
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRocketLauncherMuzzleLocation constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRocketLauncherMuzzleLocation Property Definitions ******************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventGetRocketLauncherMuzzleLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetRocketLauncherMuzzleLocation Property Definitions ********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "GetRocketLauncherMuzzleLocation", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventGetRocketLauncherMuzzleLocation_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventGetRocketLauncherMuzzleLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetRocketLauncherMuzzleLocation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execGetRocketLauncherMuzzleLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetRocketLauncherMuzzleLocation();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function GetRocketLauncherMuzzleLocation ***

// ********** Begin Class URenegadeSoldierCombatComponent Function HandleOwnerAnyDamage ************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_HandleOwnerAnyDamage_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventHandleOwnerAnyDamage_Parms
	{
		AActor* DamagedActor;
		float Damage;
		const UDamageType* DamageType;
		AController* InstigatedBy;
		AActor* DamageCauser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
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
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventHandleOwnerAnyDamage_Parms, DamagedActor), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventHandleOwnerAnyDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventHandleOwnerAnyDamage_Parms, DamageType), Z_Construct_UClass_UDamageType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventHandleOwnerAnyDamage_Parms, InstigatedBy), Z_Construct_UClass_AController, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventHandleOwnerAnyDamage_Parms, DamageCauser), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DamagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HandleOwnerAnyDamage Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "HandleOwnerAnyDamage", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventHandleOwnerAnyDamage_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventHandleOwnerAnyDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_HandleOwnerAnyDamage(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execHandleOwnerAnyDamage)
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
// ********** End Class URenegadeSoldierCombatComponent Function HandleOwnerAnyDamage **************

// ********** Begin Class URenegadeSoldierCombatComponent Function HasRuntimeRespawnTransform ******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_HasRuntimeRespawnTransform_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventHasRuntimeRespawnTransform_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Respawn" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasRuntimeRespawnTransform constinit property declarations ************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeSoldierCombatComponent_eventHasRuntimeRespawnTransform_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasRuntimeRespawnTransform constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasRuntimeRespawnTransform Property Definitions ***********************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSoldierCombatComponent_eventHasRuntimeRespawnTransform_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HasRuntimeRespawnTransform Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "HasRuntimeRespawnTransform", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventHasRuntimeRespawnTransform_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventHasRuntimeRespawnTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_HasRuntimeRespawnTransform(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execHasRuntimeRespawnTransform)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasRuntimeRespawnTransform();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function HasRuntimeRespawnTransform ********

// ********** Begin Class URenegadeSoldierCombatComponent Function Heal ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_Heal_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventHeal_Parms
	{
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Health" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Heal constinit property declarations **********************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Heal constinit property declarations ************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Heal Property Definitions *********************************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventHeal_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function Heal Property Definitions ***********************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "Heal", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventHeal_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventHeal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_Heal(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execHeal)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Heal(Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function Heal ******************************

// ********** Begin Class URenegadeSoldierCombatComponent Function IsBuiltInPlayerInputEnabled *****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsBuiltInPlayerInputEnabled_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventIsBuiltInPlayerInputEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Built-In Input" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsBuiltInPlayerInputEnabled constinit property declarations ***********
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeSoldierCombatComponent_eventIsBuiltInPlayerInputEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsBuiltInPlayerInputEnabled constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsBuiltInPlayerInputEnabled Property Definitions **********************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSoldierCombatComponent_eventIsBuiltInPlayerInputEnabled_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsBuiltInPlayerInputEnabled Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "IsBuiltInPlayerInputEnabled", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventIsBuiltInPlayerInputEnabled_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventIsBuiltInPlayerInputEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsBuiltInPlayerInputEnabled(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execIsBuiltInPlayerInputEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsBuiltInPlayerInputEnabled();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function IsBuiltInPlayerInputEnabled *******

// ********** Begin Class URenegadeSoldierCombatComponent Function IsCombatRotationLockEnabled *****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsCombatRotationLockEnabled_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventIsCombatRotationLockEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Combat Facing" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsCombatRotationLockEnabled constinit property declarations ***********
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeSoldierCombatComponent_eventIsCombatRotationLockEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsCombatRotationLockEnabled constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsCombatRotationLockEnabled Property Definitions **********************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSoldierCombatComponent_eventIsCombatRotationLockEnabled_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsCombatRotationLockEnabled Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "IsCombatRotationLockEnabled", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventIsCombatRotationLockEnabled_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventIsCombatRotationLockEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsCombatRotationLockEnabled(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execIsCombatRotationLockEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCombatRotationLockEnabled();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function IsCombatRotationLockEnabled *******

// ********** Begin Class URenegadeSoldierCombatComponent Function IsHostileToActor ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsHostileToActor_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventIsHostileToActor_Parms
	{
		const AActor* OtherActor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Team" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsHostileToActor constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeSoldierCombatComponent_eventIsHostileToActor_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsHostileToActor constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsHostileToActor Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventIsHostileToActor_Parms, OtherActor), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherActor_MetaData), NewProp_OtherActor_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSoldierCombatComponent_eventIsHostileToActor_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsHostileToActor Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "IsHostileToActor", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventIsHostileToActor_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventIsHostileToActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsHostileToActor(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execIsHostileToActor)
{
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsHostileToActor(Z_Param_OtherActor);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function IsHostileToActor ******************

// ********** Begin Class URenegadeSoldierCombatComponent Function IsInCombat **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsInCombat_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventIsInCombat_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Combat" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsInCombat constinit property declarations ****************************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeSoldierCombatComponent_eventIsInCombat_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsInCombat constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsInCombat Property Definitions ***************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSoldierCombatComponent_eventIsInCombat_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsInCombat Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "IsInCombat", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventIsInCombat_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventIsInCombat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsInCombat(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execIsInCombat)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInCombat();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function IsInCombat ************************

// ********** Begin Class URenegadeSoldierCombatComponent Function IsInvulnerable ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsInvulnerable_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventIsInvulnerable_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Health" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsInvulnerable constinit property declarations ************************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeSoldierCombatComponent_eventIsInvulnerable_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsInvulnerable constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsInvulnerable Property Definitions ***********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSoldierCombatComponent_eventIsInvulnerable_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsInvulnerable Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "IsInvulnerable", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventIsInvulnerable_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventIsInvulnerable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsInvulnerable(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execIsInvulnerable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInvulnerable();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function IsInvulnerable ********************

// ********** Begin Class URenegadeSoldierCombatComponent Function IsPlayerAiming ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsPlayerAiming_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventIsPlayerAiming_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Input" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsPlayerAiming constinit property declarations ************************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeSoldierCombatComponent_eventIsPlayerAiming_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsPlayerAiming constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsPlayerAiming Property Definitions ***********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSoldierCombatComponent_eventIsPlayerAiming_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsPlayerAiming Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "IsPlayerAiming", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventIsPlayerAiming_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventIsPlayerAiming_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsPlayerAiming(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execIsPlayerAiming)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlayerAiming();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function IsPlayerAiming ********************

// ********** Begin Class URenegadeSoldierCombatComponent Function IsPlayerControlledCombatant *****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsPlayerControlledCombatant_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventIsPlayerControlledCombatant_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsPlayerControlledCombatant constinit property declarations ***********
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeSoldierCombatComponent_eventIsPlayerControlledCombatant_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsPlayerControlledCombatant constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsPlayerControlledCombatant Property Definitions **********************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSoldierCombatComponent_eventIsPlayerControlledCombatant_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsPlayerControlledCombatant Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "IsPlayerControlledCombatant", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventIsPlayerControlledCombatant_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventIsPlayerControlledCombatant_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsPlayerControlledCombatant(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execIsPlayerControlledCombatant)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlayerControlledCombatant();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function IsPlayerControlledCombatant *******

// ********** Begin Class URenegadeSoldierCombatComponent Function IsPlayerFireHeld ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsPlayerFireHeld_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventIsPlayerFireHeld_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Input" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsPlayerFireHeld constinit property declarations **********************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeSoldierCombatComponent_eventIsPlayerFireHeld_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsPlayerFireHeld constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsPlayerFireHeld Property Definitions *********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSoldierCombatComponent_eventIsPlayerFireHeld_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsPlayerFireHeld Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "IsPlayerFireHeld", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventIsPlayerFireHeld_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventIsPlayerFireHeld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsPlayerFireHeld(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execIsPlayerFireHeld)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlayerFireHeld();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function IsPlayerFireHeld ******************

// ********** Begin Class URenegadeSoldierCombatComponent Function IsPlayerLockedOn ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsPlayerLockedOn_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventIsPlayerLockedOn_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Lock-On" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsPlayerLockedOn constinit property declarations **********************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeSoldierCombatComponent_eventIsPlayerLockedOn_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsPlayerLockedOn constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsPlayerLockedOn Property Definitions *********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSoldierCombatComponent_eventIsPlayerLockedOn_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsPlayerLockedOn Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "IsPlayerLockedOn", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventIsPlayerLockedOn_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventIsPlayerLockedOn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsPlayerLockedOn(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execIsPlayerLockedOn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlayerLockedOn();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function IsPlayerLockedOn ******************

// ********** Begin Class URenegadeSoldierCombatComponent Function IsPlayerLockOnHeld **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsPlayerLockOnHeld_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventIsPlayerLockOnHeld_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Lock-On" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsPlayerLockOnHeld constinit property declarations ********************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeSoldierCombatComponent_eventIsPlayerLockOnHeld_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsPlayerLockOnHeld constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsPlayerLockOnHeld Property Definitions *******************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSoldierCombatComponent_eventIsPlayerLockOnHeld_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsPlayerLockOnHeld Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "IsPlayerLockOnHeld", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventIsPlayerLockOnHeld_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventIsPlayerLockOnHeld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsPlayerLockOnHeld(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execIsPlayerLockOnHeld)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlayerLockOnHeld();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function IsPlayerLockOnHeld ****************

// ********** Begin Class URenegadeSoldierCombatComponent Function IsReloading *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsReloading_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventIsReloading_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Weapon" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsReloading constinit property declarations ***************************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeSoldierCombatComponent_eventIsReloading_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsReloading constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsReloading Property Definitions **************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSoldierCombatComponent_eventIsReloading_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsReloading Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "IsReloading", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventIsReloading_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventIsReloading_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsReloading(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execIsReloading)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsReloading();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function IsReloading ***********************

// ********** Begin Class URenegadeSoldierCombatComponent Function IsValidCombatTarget *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsValidCombatTarget_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventIsValidCombatTarget_Parms
	{
		const AActor* PossibleTarget;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Combat" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PossibleTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsValidCombatTarget constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PossibleTarget;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeSoldierCombatComponent_eventIsValidCombatTarget_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsValidCombatTarget constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsValidCombatTarget Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PossibleTarget = { "PossibleTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventIsValidCombatTarget_Parms, PossibleTarget), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PossibleTarget_MetaData), NewProp_PossibleTarget_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSoldierCombatComponent_eventIsValidCombatTarget_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PossibleTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsValidCombatTarget Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "IsValidCombatTarget", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventIsValidCombatTarget_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventIsValidCombatTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsValidCombatTarget(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execIsValidCombatTarget)
{
	P_GET_OBJECT(AActor,Z_Param_PossibleTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsValidCombatTarget(Z_Param_PossibleTarget);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function IsValidCombatTarget ***************

// ********** Begin Class URenegadeSoldierCombatComponent Function MulticastBeginDeath *************
struct RenegadeSoldierCombatComponent_eventMulticastBeginDeath_Parms
{
	AActor* Killer;
	FVector RagdollImpulse;
	FName HitBone;
};
static FName NAME_URenegadeSoldierCombatComponent_MulticastBeginDeath = FName(TEXT("MulticastBeginDeath"));
void URenegadeSoldierCombatComponent::MulticastBeginDeath(AActor* Killer, FVector RagdollImpulse, FName HitBone)
{
	RenegadeSoldierCombatComponent_eventMulticastBeginDeath_Parms Parms;
	Parms.Killer=Killer;
	Parms.RagdollImpulse=RagdollImpulse;
	Parms.HitBone=HitBone;
	UFunction* Func = FindFunctionChecked(NAME_URenegadeSoldierCombatComponent_MulticastBeginDeath);
	ProcessEvent(Func,&Parms);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_MulticastBeginDeath_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MulticastBeginDeath constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Killer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RagdollImpulse;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HitBone;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MulticastBeginDeath constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MulticastBeginDeath Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Killer = { "Killer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventMulticastBeginDeath_Parms, Killer), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RagdollImpulse = { "RagdollImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventMulticastBeginDeath_Parms, RagdollImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_HitBone = { "HitBone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventMulticastBeginDeath_Parms, HitBone), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Killer,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RagdollImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HitBone,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function MulticastBeginDeath Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "MulticastBeginDeath", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<RenegadeSoldierCombatComponent_eventMulticastBeginDeath_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00884CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(RenegadeSoldierCombatComponent_eventMulticastBeginDeath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_MulticastBeginDeath(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execMulticastBeginDeath)
{
	P_GET_OBJECT(AActor,Z_Param_Killer);
	P_GET_STRUCT(FVector,Z_Param_RagdollImpulse);
	P_GET_PROPERTY(FNameProperty,Z_Param_HitBone);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastBeginDeath_Implementation(Z_Param_Killer,Z_Param_RagdollImpulse,Z_Param_HitBone);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function MulticastBeginDeath ***************

// ********** Begin Class URenegadeSoldierCombatComponent Function MulticastFinishRespawn **********
struct RenegadeSoldierCombatComponent_eventMulticastFinishRespawn_Parms
{
	FTransform RespawnTransform;
};
static FName NAME_URenegadeSoldierCombatComponent_MulticastFinishRespawn = FName(TEXT("MulticastFinishRespawn"));
void URenegadeSoldierCombatComponent::MulticastFinishRespawn(FTransform RespawnTransform)
{
	RenegadeSoldierCombatComponent_eventMulticastFinishRespawn_Parms Parms;
	Parms.RespawnTransform=RespawnTransform;
	UFunction* Func = FindFunctionChecked(NAME_URenegadeSoldierCombatComponent_MulticastFinishRespawn);
	ProcessEvent(Func,&Parms);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_MulticastFinishRespawn_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MulticastFinishRespawn constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_RespawnTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MulticastFinishRespawn constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MulticastFinishRespawn Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RespawnTransform = { "RespawnTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventMulticastFinishRespawn_Parms, RespawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RespawnTransform,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function MulticastFinishRespawn Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "MulticastFinishRespawn", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<RenegadeSoldierCombatComponent_eventMulticastFinishRespawn_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00884CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(RenegadeSoldierCombatComponent_eventMulticastFinishRespawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_MulticastFinishRespawn(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execMulticastFinishRespawn)
{
	P_GET_STRUCT(FTransform,Z_Param_RespawnTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastFinishRespawn_Implementation(Z_Param_RespawnTransform);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function MulticastFinishRespawn ************

// ********** Begin Class URenegadeSoldierCombatComponent Function MulticastGrenadeBounced *********
struct RenegadeSoldierCombatComponent_eventMulticastGrenadeBounced_Parms
{
	int32 GrenadeId;
	FVector_NetQuantize BounceLocation;
	FVector_NetQuantizeNormal ImpactNormal;
	FVector_NetQuantize10 NewVelocity;
};
static FName NAME_URenegadeSoldierCombatComponent_MulticastGrenadeBounced = FName(TEXT("MulticastGrenadeBounced"));
void URenegadeSoldierCombatComponent::MulticastGrenadeBounced(int32 GrenadeId, FVector_NetQuantize BounceLocation, FVector_NetQuantizeNormal ImpactNormal, FVector_NetQuantize10 NewVelocity)
{
	RenegadeSoldierCombatComponent_eventMulticastGrenadeBounced_Parms Parms;
	Parms.GrenadeId=GrenadeId;
	Parms.BounceLocation=BounceLocation;
	Parms.ImpactNormal=ImpactNormal;
	Parms.NewVelocity=NewVelocity;
	UFunction* Func = FindFunctionChecked(NAME_URenegadeSoldierCombatComponent_MulticastGrenadeBounced);
	ProcessEvent(Func,&Parms);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_MulticastGrenadeBounced_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MulticastGrenadeBounced constinit property declarations ***************
	static const UECodeGen_Private::FIntPropertyParams NewProp_GrenadeId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BounceLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactNormal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MulticastGrenadeBounced constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MulticastGrenadeBounced Property Definitions **************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_GrenadeId = { "GrenadeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventMulticastGrenadeBounced_Parms, GrenadeId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BounceLocation = { "BounceLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventMulticastGrenadeBounced_Parms, BounceLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 360b775a5cdccbf04648aaedc65b3c6a0a2c5ffc
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ImpactNormal = { "ImpactNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventMulticastGrenadeBounced_Parms, ImpactNormal), Z_Construct_UScriptStruct_FVector_NetQuantizeNormal, METADATA_PARAMS(0, nullptr) }; // b72fc0c9329e7384dd3617558ef2e117846163f4
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_NewVelocity = { "NewVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventMulticastGrenadeBounced_Parms, NewVelocity), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(0, nullptr) }; // 516b3872ed052b6e63cab435e73b895a38ea618c
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GrenadeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BounceLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ImpactNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewVelocity,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function MulticastGrenadeBounced Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "MulticastGrenadeBounced", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<RenegadeSoldierCombatComponent_eventMulticastGrenadeBounced_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(RenegadeSoldierCombatComponent_eventMulticastGrenadeBounced_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_MulticastGrenadeBounced(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execMulticastGrenadeBounced)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_GrenadeId);
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_BounceLocation);
	P_GET_STRUCT(FVector_NetQuantizeNormal,Z_Param_ImpactNormal);
	P_GET_STRUCT(FVector_NetQuantize10,Z_Param_NewVelocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastGrenadeBounced_Implementation(Z_Param_GrenadeId,Z_Param_BounceLocation,Z_Param_ImpactNormal,Z_Param_NewVelocity);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function MulticastGrenadeBounced ***********

// ********** Begin Class URenegadeSoldierCombatComponent Function MulticastGrenadeExploded ********
struct RenegadeSoldierCombatComponent_eventMulticastGrenadeExploded_Parms
{
	int32 GrenadeId;
	FVector_NetQuantize ImpactLocation;
	FVector_NetQuantizeNormal ImpactNormal;
};
static FName NAME_URenegadeSoldierCombatComponent_MulticastGrenadeExploded = FName(TEXT("MulticastGrenadeExploded"));
void URenegadeSoldierCombatComponent::MulticastGrenadeExploded(int32 GrenadeId, FVector_NetQuantize ImpactLocation, FVector_NetQuantizeNormal ImpactNormal)
{
	RenegadeSoldierCombatComponent_eventMulticastGrenadeExploded_Parms Parms;
	Parms.GrenadeId=GrenadeId;
	Parms.ImpactLocation=ImpactLocation;
	Parms.ImpactNormal=ImpactNormal;
	UFunction* Func = FindFunctionChecked(NAME_URenegadeSoldierCombatComponent_MulticastGrenadeExploded);
	ProcessEvent(Func,&Parms);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_MulticastGrenadeExploded_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MulticastGrenadeExploded constinit property declarations **************
	static const UECodeGen_Private::FIntPropertyParams NewProp_GrenadeId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactNormal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MulticastGrenadeExploded constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MulticastGrenadeExploded Property Definitions *************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_GrenadeId = { "GrenadeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventMulticastGrenadeExploded_Parms, GrenadeId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ImpactLocation = { "ImpactLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventMulticastGrenadeExploded_Parms, ImpactLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 360b775a5cdccbf04648aaedc65b3c6a0a2c5ffc
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ImpactNormal = { "ImpactNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventMulticastGrenadeExploded_Parms, ImpactNormal), Z_Construct_UScriptStruct_FVector_NetQuantizeNormal, METADATA_PARAMS(0, nullptr) }; // b72fc0c9329e7384dd3617558ef2e117846163f4
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GrenadeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ImpactLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ImpactNormal,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function MulticastGrenadeExploded Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "MulticastGrenadeExploded", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<RenegadeSoldierCombatComponent_eventMulticastGrenadeExploded_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(RenegadeSoldierCombatComponent_eventMulticastGrenadeExploded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_MulticastGrenadeExploded(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execMulticastGrenadeExploded)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_GrenadeId);
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_ImpactLocation);
	P_GET_STRUCT(FVector_NetQuantizeNormal,Z_Param_ImpactNormal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastGrenadeExploded_Implementation(Z_Param_GrenadeId,Z_Param_ImpactLocation,Z_Param_ImpactNormal);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function MulticastGrenadeExploded **********

// ********** Begin Class URenegadeSoldierCombatComponent Function MulticastGrenadeLaunched ********
struct RenegadeSoldierCombatComponent_eventMulticastGrenadeLaunched_Parms
{
	int32 GrenadeId;
	FVector_NetQuantize LaunchLocation;
	FVector_NetQuantize10 InitialVelocity;
};
static FName NAME_URenegadeSoldierCombatComponent_MulticastGrenadeLaunched = FName(TEXT("MulticastGrenadeLaunched"));
void URenegadeSoldierCombatComponent::MulticastGrenadeLaunched(int32 GrenadeId, FVector_NetQuantize LaunchLocation, FVector_NetQuantize10 InitialVelocity)
{
	RenegadeSoldierCombatComponent_eventMulticastGrenadeLaunched_Parms Parms;
	Parms.GrenadeId=GrenadeId;
	Parms.LaunchLocation=LaunchLocation;
	Parms.InitialVelocity=InitialVelocity;
	UFunction* Func = FindFunctionChecked(NAME_URenegadeSoldierCombatComponent_MulticastGrenadeLaunched);
	ProcessEvent(Func,&Parms);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_MulticastGrenadeLaunched_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MulticastGrenadeLaunched constinit property declarations **************
	static const UECodeGen_Private::FIntPropertyParams NewProp_GrenadeId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LaunchLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MulticastGrenadeLaunched constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MulticastGrenadeLaunched Property Definitions *************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_GrenadeId = { "GrenadeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventMulticastGrenadeLaunched_Parms, GrenadeId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LaunchLocation = { "LaunchLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventMulticastGrenadeLaunched_Parms, LaunchLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 360b775a5cdccbf04648aaedc65b3c6a0a2c5ffc
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_InitialVelocity = { "InitialVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventMulticastGrenadeLaunched_Parms, InitialVelocity), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(0, nullptr) }; // 516b3872ed052b6e63cab435e73b895a38ea618c
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GrenadeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LaunchLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InitialVelocity,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function MulticastGrenadeLaunched Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "MulticastGrenadeLaunched", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<RenegadeSoldierCombatComponent_eventMulticastGrenadeLaunched_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(RenegadeSoldierCombatComponent_eventMulticastGrenadeLaunched_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_MulticastGrenadeLaunched(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execMulticastGrenadeLaunched)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_GrenadeId);
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_LaunchLocation);
	P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InitialVelocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastGrenadeLaunched_Implementation(Z_Param_GrenadeId,Z_Param_LaunchLocation,Z_Param_InitialVelocity);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function MulticastGrenadeLaunched **********

// ********** Begin Class URenegadeSoldierCombatComponent Function MulticastReloadFinished *********
static FName NAME_URenegadeSoldierCombatComponent_MulticastReloadFinished = FName(TEXT("MulticastReloadFinished"));
void URenegadeSoldierCombatComponent::MulticastReloadFinished()
{
	UFunction* Func = FindFunctionChecked(NAME_URenegadeSoldierCombatComponent_MulticastReloadFinished);
	ProcessEvent(Func,NULL);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_MulticastReloadFinished_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MulticastReloadFinished constinit property declarations ***************
// ********** End Function MulticastReloadFinished constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "MulticastReloadFinished", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_MulticastReloadFinished(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execMulticastReloadFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastReloadFinished_Implementation();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function MulticastReloadFinished ***********

// ********** Begin Class URenegadeSoldierCombatComponent Function MulticastReloadStarted **********
static FName NAME_URenegadeSoldierCombatComponent_MulticastReloadStarted = FName(TEXT("MulticastReloadStarted"));
void URenegadeSoldierCombatComponent::MulticastReloadStarted()
{
	UFunction* Func = FindFunctionChecked(NAME_URenegadeSoldierCombatComponent_MulticastReloadStarted);
	ProcessEvent(Func,NULL);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_MulticastReloadStarted_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MulticastReloadStarted constinit property declarations ****************
// ********** End Function MulticastReloadStarted constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "MulticastReloadStarted", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_MulticastReloadStarted(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execMulticastReloadStarted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastReloadStarted_Implementation();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function MulticastReloadStarted ************

// ********** Begin Class URenegadeSoldierCombatComponent Function MulticastRocketLaunched *********
struct RenegadeSoldierCombatComponent_eventMulticastRocketLaunched_Parms
{
	FVector_NetQuantize LaunchLocation;
	FVector_NetQuantize ImpactLocation;
	float FlightSeconds;
};
static FName NAME_URenegadeSoldierCombatComponent_MulticastRocketLaunched = FName(TEXT("MulticastRocketLaunched"));
void URenegadeSoldierCombatComponent::MulticastRocketLaunched(FVector_NetQuantize LaunchLocation, FVector_NetQuantize ImpactLocation, float FlightSeconds)
{
	RenegadeSoldierCombatComponent_eventMulticastRocketLaunched_Parms Parms;
	Parms.LaunchLocation=LaunchLocation;
	Parms.ImpactLocation=ImpactLocation;
	Parms.FlightSeconds=FlightSeconds;
	UFunction* Func = FindFunctionChecked(NAME_URenegadeSoldierCombatComponent_MulticastRocketLaunched);
	ProcessEvent(Func,&Parms);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_MulticastRocketLaunched_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MulticastRocketLaunched constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LaunchLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FlightSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MulticastRocketLaunched constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MulticastRocketLaunched Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LaunchLocation = { "LaunchLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventMulticastRocketLaunched_Parms, LaunchLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 360b775a5cdccbf04648aaedc65b3c6a0a2c5ffc
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ImpactLocation = { "ImpactLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventMulticastRocketLaunched_Parms, ImpactLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 360b775a5cdccbf04648aaedc65b3c6a0a2c5ffc
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_FlightSeconds = { "FlightSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventMulticastRocketLaunched_Parms, FlightSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LaunchLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ImpactLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FlightSeconds,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function MulticastRocketLaunched Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "MulticastRocketLaunched", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<RenegadeSoldierCombatComponent_eventMulticastRocketLaunched_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(RenegadeSoldierCombatComponent_eventMulticastRocketLaunched_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_MulticastRocketLaunched(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execMulticastRocketLaunched)
{
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_LaunchLocation);
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_ImpactLocation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FlightSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastRocketLaunched_Implementation(Z_Param_LaunchLocation,Z_Param_ImpactLocation,Z_Param_FlightSeconds);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function MulticastRocketLaunched ***********

// ********** Begin Class URenegadeSoldierCombatComponent Function MulticastShotFired **************
struct RenegadeSoldierCombatComponent_eventMulticastShotFired_Parms
{
	FVector TraceStart;
	FVector TraceEnd;
	bool bBlockingHit;
	FHitResult HitResult;
	bool bSpawnGroundBloodForHit;
	bool bDamagedCombatTarget;
};
static FName NAME_URenegadeSoldierCombatComponent_MulticastShotFired = FName(TEXT("MulticastShotFired"));
void URenegadeSoldierCombatComponent::MulticastShotFired(FVector TraceStart, FVector TraceEnd, bool bBlockingHit, FHitResult HitResult, bool bSpawnGroundBloodForHit, bool bDamagedCombatTarget)
{
	RenegadeSoldierCombatComponent_eventMulticastShotFired_Parms Parms;
	Parms.TraceStart=TraceStart;
	Parms.TraceEnd=TraceEnd;
	Parms.bBlockingHit=bBlockingHit ? true : false;
	Parms.HitResult=HitResult;
	Parms.bSpawnGroundBloodForHit=bSpawnGroundBloodForHit ? true : false;
	Parms.bDamagedCombatTarget=bDamagedCombatTarget ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_URenegadeSoldierCombatComponent_MulticastShotFired);
	ProcessEvent(Func,&Parms);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_MulticastShotFired_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MulticastShotFired constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceEnd;
	static void NewProp_bBlockingHit_SetBit(void* Obj)
	{
		((RenegadeSoldierCombatComponent_eventMulticastShotFired_Parms*)Obj)->bBlockingHit = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlockingHit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static void NewProp_bSpawnGroundBloodForHit_SetBit(void* Obj)
	{
		((RenegadeSoldierCombatComponent_eventMulticastShotFired_Parms*)Obj)->bSpawnGroundBloodForHit = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnGroundBloodForHit;
	static void NewProp_bDamagedCombatTarget_SetBit(void* Obj)
	{
		((RenegadeSoldierCombatComponent_eventMulticastShotFired_Parms*)Obj)->bDamagedCombatTarget = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDamagedCombatTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MulticastShotFired constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MulticastShotFired Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TraceStart = { "TraceStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventMulticastShotFired_Parms, TraceStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TraceEnd = { "TraceEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventMulticastShotFired_Parms, TraceEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bBlockingHit = { "bBlockingHit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSoldierCombatComponent_eventMulticastShotFired_Parms), &UHT_STATICS::NewProp_bBlockingHit_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventMulticastShotFired_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // e0ec7b349cc3b29366a6161006ad7fa74de2944e
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSpawnGroundBloodForHit = { "bSpawnGroundBloodForHit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSoldierCombatComponent_eventMulticastShotFired_Parms), &UHT_STATICS::NewProp_bSpawnGroundBloodForHit_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDamagedCombatTarget = { "bDamagedCombatTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSoldierCombatComponent_eventMulticastShotFired_Parms), &UHT_STATICS::NewProp_bDamagedCombatTarget_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TraceStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TraceEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bBlockingHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSpawnGroundBloodForHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDamagedCombatTarget,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function MulticastShotFired Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "MulticastShotFired", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<RenegadeSoldierCombatComponent_eventMulticastShotFired_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00884C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(RenegadeSoldierCombatComponent_eventMulticastShotFired_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_MulticastShotFired(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execMulticastShotFired)
{
	P_GET_STRUCT(FVector,Z_Param_TraceStart);
	P_GET_STRUCT(FVector,Z_Param_TraceEnd);
	P_GET_UBOOL(Z_Param_bBlockingHit);
	P_GET_STRUCT(FHitResult,Z_Param_HitResult);
	P_GET_UBOOL(Z_Param_bSpawnGroundBloodForHit);
	P_GET_UBOOL(Z_Param_bDamagedCombatTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastShotFired_Implementation(Z_Param_TraceStart,Z_Param_TraceEnd,Z_Param_bBlockingHit,Z_Param_HitResult,Z_Param_bSpawnGroundBloodForHit,Z_Param_bDamagedCombatTarget);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function MulticastShotFired ****************

// ********** Begin Class URenegadeSoldierCombatComponent Function OnRep_ActivePlayerWeapon ********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_OnRep_ActivePlayerWeapon_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventOnRep_ActivePlayerWeapon_Parms
	{
		ERenegadePlayerWeaponSlot PreviousWeapon;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_ActivePlayerWeapon constinit property declarations **************
	static const UECodeGen_Private::FBytePropertyParams NewProp_PreviousWeapon_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PreviousWeapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_ActivePlayerWeapon constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_ActivePlayerWeapon Property Definitions *************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_PreviousWeapon_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_PreviousWeapon = { "PreviousWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventOnRep_ActivePlayerWeapon_Parms, PreviousWeapon), Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadePlayerWeaponSlot, METADATA_PARAMS(0, nullptr) }; // 3d3c6554bcaa42767edc1195d01cd72bd763897b
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviousWeapon_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviousWeapon,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnRep_ActivePlayerWeapon Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "OnRep_ActivePlayerWeapon", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventOnRep_ActivePlayerWeapon_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventOnRep_ActivePlayerWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_OnRep_ActivePlayerWeapon(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execOnRep_ActivePlayerWeapon)
{
	P_GET_ENUM(ERenegadePlayerWeaponSlot,Z_Param_PreviousWeapon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ActivePlayerWeapon(ERenegadePlayerWeaponSlot(Z_Param_PreviousWeapon));
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function OnRep_ActivePlayerWeapon **********

// ********** Begin Class URenegadeSoldierCombatComponent Function OnRep_AutomaticRifleAmmo ********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_OnRep_AutomaticRifleAmmo_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventOnRep_AutomaticRifleAmmo_Parms
	{
		int32 PreviousAmmo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_AutomaticRifleAmmo constinit property declarations **************
	static const UECodeGen_Private::FIntPropertyParams NewProp_PreviousAmmo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_AutomaticRifleAmmo constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_AutomaticRifleAmmo Property Definitions *************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_PreviousAmmo = { "PreviousAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventOnRep_AutomaticRifleAmmo_Parms, PreviousAmmo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviousAmmo,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnRep_AutomaticRifleAmmo Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "OnRep_AutomaticRifleAmmo", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventOnRep_AutomaticRifleAmmo_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventOnRep_AutomaticRifleAmmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_OnRep_AutomaticRifleAmmo(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execOnRep_AutomaticRifleAmmo)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PreviousAmmo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_AutomaticRifleAmmo(Z_Param_PreviousAmmo);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function OnRep_AutomaticRifleAmmo **********

// ********** Begin Class URenegadeSoldierCombatComponent Function OnRep_CurrentHealth *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_OnRep_CurrentHealth_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventOnRep_CurrentHealth_Parms
	{
		float PreviousHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_CurrentHealth constinit property declarations *******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviousHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_CurrentHealth constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_CurrentHealth Property Definitions ******************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_PreviousHealth = { "PreviousHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventOnRep_CurrentHealth_Parms, PreviousHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviousHealth,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnRep_CurrentHealth Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "OnRep_CurrentHealth", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventOnRep_CurrentHealth_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventOnRep_CurrentHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_OnRep_CurrentHealth(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execOnRep_CurrentHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_PreviousHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentHealth(Z_Param_PreviousHealth);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function OnRep_CurrentHealth ***************

// ********** Begin Class URenegadeSoldierCombatComponent Function OnRep_CurrentTarget *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_OnRep_CurrentTarget_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_CurrentTarget constinit property declarations *******************
// ********** End Function OnRep_CurrentTarget constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "OnRep_CurrentTarget", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_OnRep_CurrentTarget(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execOnRep_CurrentTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentTarget();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function OnRep_CurrentTarget ***************

// ********** Begin Class URenegadeSoldierCombatComponent Function OnRep_Dead **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_OnRep_Dead_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_Dead constinit property declarations ****************************
// ********** End Function OnRep_Dead constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "OnRep_Dead", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_OnRep_Dead(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execOnRep_Dead)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Dead();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function OnRep_Dead ************************

// ********** Begin Class URenegadeSoldierCombatComponent Function OnRep_PistolAmmo ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_OnRep_PistolAmmo_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventOnRep_PistolAmmo_Parms
	{
		int32 PreviousAmmo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_PistolAmmo constinit property declarations **********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_PreviousAmmo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_PistolAmmo constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_PistolAmmo Property Definitions *********************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_PreviousAmmo = { "PreviousAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventOnRep_PistolAmmo_Parms, PreviousAmmo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviousAmmo,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnRep_PistolAmmo Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "OnRep_PistolAmmo", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventOnRep_PistolAmmo_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventOnRep_PistolAmmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_OnRep_PistolAmmo(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execOnRep_PistolAmmo)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PreviousAmmo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_PistolAmmo(Z_Param_PreviousAmmo);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function OnRep_PistolAmmo ******************

// ********** Begin Class URenegadeSoldierCombatComponent Function OnRep_PlayerAiming **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_OnRep_PlayerAiming_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventOnRep_PlayerAiming_Parms
	{
		bool bPreviousAiming;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_PlayerAiming constinit property declarations ********************
	static void NewProp_bPreviousAiming_SetBit(void* Obj)
	{
		((RenegadeSoldierCombatComponent_eventOnRep_PlayerAiming_Parms*)Obj)->bPreviousAiming = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviousAiming;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_PlayerAiming constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_PlayerAiming Property Definitions *******************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bPreviousAiming = { "bPreviousAiming", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSoldierCombatComponent_eventOnRep_PlayerAiming_Parms), &UHT_STATICS::NewProp_bPreviousAiming_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bPreviousAiming,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnRep_PlayerAiming Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "OnRep_PlayerAiming", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventOnRep_PlayerAiming_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventOnRep_PlayerAiming_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_OnRep_PlayerAiming(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execOnRep_PlayerAiming)
{
	P_GET_UBOOL(Z_Param_bPreviousAiming);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_PlayerAiming(Z_Param_bPreviousAiming);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function OnRep_PlayerAiming ****************

// ********** Begin Class URenegadeSoldierCombatComponent Function OnRep_RocketLauncherAmmo ********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_OnRep_RocketLauncherAmmo_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventOnRep_RocketLauncherAmmo_Parms
	{
		int32 PreviousAmmo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_RocketLauncherAmmo constinit property declarations **************
	static const UECodeGen_Private::FIntPropertyParams NewProp_PreviousAmmo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_RocketLauncherAmmo constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_RocketLauncherAmmo Property Definitions *************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_PreviousAmmo = { "PreviousAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventOnRep_RocketLauncherAmmo_Parms, PreviousAmmo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviousAmmo,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnRep_RocketLauncherAmmo Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "OnRep_RocketLauncherAmmo", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventOnRep_RocketLauncherAmmo_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventOnRep_RocketLauncherAmmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_OnRep_RocketLauncherAmmo(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execOnRep_RocketLauncherAmmo)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PreviousAmmo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_RocketLauncherAmmo(Z_Param_PreviousAmmo);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function OnRep_RocketLauncherAmmo **********

// ********** Begin Class URenegadeSoldierCombatComponent Function OnRep_TeamId ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_OnRep_TeamId_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_TeamId constinit property declarations **************************
// ********** End Function OnRep_TeamId constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "OnRep_TeamId", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_OnRep_TeamId(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execOnRep_TeamId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_TeamId();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function OnRep_TeamId **********************

// ********** Begin Class URenegadeSoldierCombatComponent Function PlayerAddLockOnAimInput *********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerAddLockOnAimInput_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventPlayerAddLockOnAimInput_Parms
	{
		FVector2D LookInput;
		bool bGamepadInput;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Lock-On|Aim Offset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Feeds a 2D look axis into the movable lock point. Use this from Enhanced Input when Built-In Look Input is disabled. */" },
#endif
		{ "CPP_Default_bGamepadInput", "false" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Feeds a 2D look axis into the movable lock point. Use this from Enhanced Input when Built-In Look Input is disabled." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function PlayerAddLockOnAimInput constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LookInput;
	static void NewProp_bGamepadInput_SetBit(void* Obj)
	{
		((RenegadeSoldierCombatComponent_eventPlayerAddLockOnAimInput_Parms*)Obj)->bGamepadInput = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGamepadInput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PlayerAddLockOnAimInput constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PlayerAddLockOnAimInput Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LookInput = { "LookInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventPlayerAddLockOnAimInput_Parms, LookInput), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bGamepadInput = { "bGamepadInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSoldierCombatComponent_eventPlayerAddLockOnAimInput_Parms), &UHT_STATICS::NewProp_bGamepadInput_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LookInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bGamepadInput,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PlayerAddLockOnAimInput Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "PlayerAddLockOnAimInput", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventPlayerAddLockOnAimInput_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventPlayerAddLockOnAimInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerAddLockOnAimInput(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execPlayerAddLockOnAimInput)
{
	P_GET_STRUCT(FVector2D,Z_Param_LookInput);
	P_GET_UBOOL(Z_Param_bGamepadInput);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayerAddLockOnAimInput(Z_Param_LookInput,Z_Param_bGamepadInput);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function PlayerAddLockOnAimInput ***********

// ********** Begin Class URenegadeSoldierCombatComponent Function PlayerFireOnce ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerFireOnce_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fires exactly one shot using the currently selected weapon. Ideal for a pistol Started input. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fires exactly one shot using the currently selected weapon. Ideal for a pistol Started input." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function PlayerFireOnce constinit property declarations ************************
// ********** End Function PlayerFireOnce constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "PlayerFireOnce", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerFireOnce(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execPlayerFireOnce)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayerFireOnce();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function PlayerFireOnce ********************

// ********** Begin Class URenegadeSoldierCombatComponent Function PlayerFirePistol ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerFirePistol_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Convenience input node: selects the pistol and fires exactly one round. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convenience input node: selects the pistol and fires exactly one round." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function PlayerFirePistol constinit property declarations **********************
// ********** End Function PlayerFirePistol constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "PlayerFirePistol", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerFirePistol(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execPlayerFirePistol)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayerFirePistol();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function PlayerFirePistol ******************

// ********** Begin Class URenegadeSoldierCombatComponent Function PlayerFireRocketLauncher ********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerFireRocketLauncher_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Selects the player rocket-launcher slot and launches exactly one replicated rocket from the configured launcher muzzle. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Selects the player rocket-launcher slot and launches exactly one replicated rocket from the configured launcher muzzle." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function PlayerFireRocketLauncher constinit property declarations **************
// ********** End Function PlayerFireRocketLauncher constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "PlayerFireRocketLauncher", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerFireRocketLauncher(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execPlayerFireRocketLauncher)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayerFireRocketLauncher();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function PlayerFireRocketLauncher **********

// ********** Begin Class URenegadeSoldierCombatComponent Function PlayerLockOnToTarget ************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerLockOnToTarget_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventPlayerLockOnToTarget_Parms
	{
		AActor* NewTarget;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Lock-On" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Attempts to lock a specific hostile soldier. Returns false when the target is invalid, friendly, dead, or out of range. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attempts to lock a specific hostile soldier. Returns false when the target is invalid, friendly, dead, or out of range." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function PlayerLockOnToTarget constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTarget;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeSoldierCombatComponent_eventPlayerLockOnToTarget_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PlayerLockOnToTarget constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PlayerLockOnToTarget Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_NewTarget = { "NewTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventPlayerLockOnToTarget_Parms, NewTarget), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSoldierCombatComponent_eventPlayerLockOnToTarget_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PlayerLockOnToTarget Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "PlayerLockOnToTarget", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventPlayerLockOnToTarget_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventPlayerLockOnToTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerLockOnToTarget(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execPlayerLockOnToTarget)
{
	P_GET_OBJECT(AActor,Z_Param_NewTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PlayerLockOnToTarget(Z_Param_NewTarget);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function PlayerLockOnToTarget **************

// ********** Begin Class URenegadeSoldierCombatComponent Function PlayerReload ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerReload_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Input" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function PlayerReload constinit property declarations **************************
// ********** End Function PlayerReload constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "PlayerReload", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerReload(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execPlayerReload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayerReload();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function PlayerReload **********************

// ********** Begin Class URenegadeSoldierCombatComponent Function PlayerSetAiming *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerSetAiming_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventPlayerSetAiming_Parms
	{
		bool bNewAiming;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Starts or stops the replicated player aim state. Built-in input calls this automatically. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Starts or stops the replicated player aim state. Built-in input calls this automatically." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function PlayerSetAiming constinit property declarations ***********************
	static void NewProp_bNewAiming_SetBit(void* Obj)
	{
		((RenegadeSoldierCombatComponent_eventPlayerSetAiming_Parms*)Obj)->bNewAiming = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewAiming;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PlayerSetAiming constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PlayerSetAiming Property Definitions **********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bNewAiming = { "bNewAiming", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSoldierCombatComponent_eventPlayerSetAiming_Parms), &UHT_STATICS::NewProp_bNewAiming_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bNewAiming,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PlayerSetAiming Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "PlayerSetAiming", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventPlayerSetAiming_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventPlayerSetAiming_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerSetAiming(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execPlayerSetAiming)
{
	P_GET_UBOOL(Z_Param_bNewAiming);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayerSetAiming(Z_Param_bNewAiming);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function PlayerSetAiming *******************

// ********** Begin Class URenegadeSoldierCombatComponent Function PlayerSetLockOnHeld *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerSetLockOnHeld_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventPlayerSetLockOnHeld_Parms
	{
		bool bHeld;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Lock-On" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enhanced Input-friendly held-state node. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enhanced Input-friendly held-state node." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function PlayerSetLockOnHeld constinit property declarations *******************
	static void NewProp_bHeld_SetBit(void* Obj)
	{
		((RenegadeSoldierCombatComponent_eventPlayerSetLockOnHeld_Parms*)Obj)->bHeld = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHeld;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PlayerSetLockOnHeld constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PlayerSetLockOnHeld Property Definitions ******************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bHeld = { "bHeld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSoldierCombatComponent_eventPlayerSetLockOnHeld_Parms), &UHT_STATICS::NewProp_bHeld_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bHeld,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PlayerSetLockOnHeld Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "PlayerSetLockOnHeld", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventPlayerSetLockOnHeld_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventPlayerSetLockOnHeld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerSetLockOnHeld(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execPlayerSetLockOnHeld)
{
	P_GET_UBOOL(Z_Param_bHeld);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayerSetLockOnHeld(Z_Param_bHeld);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function PlayerSetLockOnHeld ***************

// ********** Begin Class URenegadeSoldierCombatComponent Function PlayerStartAiming ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerStartAiming_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Input" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function PlayerStartAiming constinit property declarations *********************
// ********** End Function PlayerStartAiming constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "PlayerStartAiming", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerStartAiming(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execPlayerStartAiming)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayerStartAiming();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function PlayerStartAiming *****************

// ********** Begin Class URenegadeSoldierCombatComponent Function PlayerStartAutomaticRifleFire ***
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerStartAutomaticRifleFire_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Convenience input node: selects the automatic rifle and begins held fire. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convenience input node: selects the automatic rifle and begins held fire." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function PlayerStartAutomaticRifleFire constinit property declarations *********
// ********** End Function PlayerStartAutomaticRifleFire constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "PlayerStartAutomaticRifleFire", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerStartAutomaticRifleFire(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execPlayerStartAutomaticRifleFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayerStartAutomaticRifleFire();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function PlayerStartAutomaticRifleFire *****

// ********** Begin Class URenegadeSoldierCombatComponent Function PlayerStartFire *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerStartFire_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Connect the Enhanced Input Started event for automatic-rifle fire to this node. Do not connect Triggered, because this node owns the RPM timer. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Connect the Enhanced Input Started event for automatic-rifle fire to this node. Do not connect Triggered, because this node owns the RPM timer." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function PlayerStartFire constinit property declarations ***********************
// ********** End Function PlayerStartFire constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "PlayerStartFire", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerStartFire(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execPlayerStartFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayerStartFire();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function PlayerStartFire *******************

// ********** Begin Class URenegadeSoldierCombatComponent Function PlayerStartLockOn ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerStartLockOn_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Lock-On" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Begins hold-to-lock targeting and attempts to acquire the best hostile soldier near screen centre. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Begins hold-to-lock targeting and attempts to acquire the best hostile soldier near screen centre." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function PlayerStartLockOn constinit property declarations *********************
// ********** End Function PlayerStartLockOn constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "PlayerStartLockOn", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerStartLockOn(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execPlayerStartLockOn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayerStartLockOn();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function PlayerStartLockOn *****************

// ********** Begin Class URenegadeSoldierCombatComponent Function PlayerStopAiming ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerStopAiming_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Input" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function PlayerStopAiming constinit property declarations **********************
// ********** End Function PlayerStopAiming constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "PlayerStopAiming", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerStopAiming(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execPlayerStopAiming)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayerStopAiming();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function PlayerStopAiming ******************

// ********** Begin Class URenegadeSoldierCombatComponent Function PlayerStopAutomaticRifleFire ****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerStopAutomaticRifleFire_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Input" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function PlayerStopAutomaticRifleFire constinit property declarations **********
// ********** End Function PlayerStopAutomaticRifleFire constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "PlayerStopAutomaticRifleFire", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerStopAutomaticRifleFire(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execPlayerStopAutomaticRifleFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayerStopAutomaticRifleFire();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function PlayerStopAutomaticRifleFire ******

// ********** Begin Class URenegadeSoldierCombatComponent Function PlayerStopFire ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerStopFire_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Connect Enhanced Input Completed and Canceled for automatic-rifle fire to this node. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Connect Enhanced Input Completed and Canceled for automatic-rifle fire to this node." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function PlayerStopFire constinit property declarations ************************
// ********** End Function PlayerStopFire constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "PlayerStopFire", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerStopFire(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execPlayerStopFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayerStopFire();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function PlayerStopFire ********************

// ********** Begin Class URenegadeSoldierCombatComponent Function PlayerStopLockOn ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerStopLockOn_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Lock-On" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Releases the current target immediately and restores normal camera behaviour. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Releases the current target immediately and restores normal camera behaviour." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function PlayerStopLockOn constinit property declarations **********************
// ********** End Function PlayerStopLockOn constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "PlayerStopLockOn", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerStopLockOn(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execPlayerStopLockOn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayerStopLockOn();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function PlayerStopLockOn ******************

// ********** Begin Class URenegadeSoldierCombatComponent Function PlayerSwitchLockOnTarget ********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerSwitchLockOnTarget_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventPlayerSwitchLockOnTarget_Parms
	{
		bool bSwitchRight;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Lock-On" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Selects the next valid target to the left or right of the current lock. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Selects the next valid target to the left or right of the current lock." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function PlayerSwitchLockOnTarget constinit property declarations **************
	static void NewProp_bSwitchRight_SetBit(void* Obj)
	{
		((RenegadeSoldierCombatComponent_eventPlayerSwitchLockOnTarget_Parms*)Obj)->bSwitchRight = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSwitchRight;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeSoldierCombatComponent_eventPlayerSwitchLockOnTarget_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PlayerSwitchLockOnTarget constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PlayerSwitchLockOnTarget Property Definitions *************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSwitchRight = { "bSwitchRight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSoldierCombatComponent_eventPlayerSwitchLockOnTarget_Parms), &UHT_STATICS::NewProp_bSwitchRight_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSoldierCombatComponent_eventPlayerSwitchLockOnTarget_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSwitchRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PlayerSwitchLockOnTarget Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "PlayerSwitchLockOnTarget", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventPlayerSwitchLockOnTarget_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventPlayerSwitchLockOnTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerSwitchLockOnTarget(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execPlayerSwitchLockOnTarget)
{
	P_GET_UBOOL(Z_Param_bSwitchRight);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PlayerSwitchLockOnTarget(Z_Param_bSwitchRight);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function PlayerSwitchLockOnTarget **********

// ********** Begin Class URenegadeSoldierCombatComponent Function PreviewBulletMeshFromConfiguredSpawn 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_PreviewBulletMeshFromConfiguredSpawn_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventPreviewBulletMeshFromConfiguredSpawn_Parms
	{
		FVector TraceEnd;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Combat Visuals|Bullet Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Uses the configured bullet-spawn component and previews travel to Trace End. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Uses the configured bullet-spawn component and previews travel to Trace End." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function PreviewBulletMeshFromConfiguredSpawn constinit property declarations **
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceEnd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PreviewBulletMeshFromConfiguredSpawn constinit property declarations ****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PreviewBulletMeshFromConfiguredSpawn Property Definitions *************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TraceEnd = { "TraceEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventPreviewBulletMeshFromConfiguredSpawn_Parms, TraceEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TraceEnd,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PreviewBulletMeshFromConfiguredSpawn Property Definitions ***************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "PreviewBulletMeshFromConfiguredSpawn", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventPreviewBulletMeshFromConfiguredSpawn_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventPreviewBulletMeshFromConfiguredSpawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_PreviewBulletMeshFromConfiguredSpawn(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execPreviewBulletMeshFromConfiguredSpawn)
{
	P_GET_STRUCT(FVector,Z_Param_TraceEnd);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PreviewBulletMeshFromConfiguredSpawn(Z_Param_TraceEnd);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function PreviewBulletMeshFromConfiguredSpawn 

// ********** Begin Class URenegadeSoldierCombatComponent Function PreviewBulletMeshVisual *********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_PreviewBulletMeshVisual_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventPreviewBulletMeshVisual_Parms
	{
		FVector TraceStart;
		FVector TraceEnd;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Combat Visuals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Local cosmetic preview; useful for testing the assigned bullet mesh without applying damage. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Local cosmetic preview; useful for testing the assigned bullet mesh without applying damage." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function PreviewBulletMeshVisual constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceEnd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PreviewBulletMeshVisual constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PreviewBulletMeshVisual Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TraceStart = { "TraceStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventPreviewBulletMeshVisual_Parms, TraceStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TraceEnd = { "TraceEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventPreviewBulletMeshVisual_Parms, TraceEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TraceStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TraceEnd,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PreviewBulletMeshVisual Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "PreviewBulletMeshVisual", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventPreviewBulletMeshVisual_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventPreviewBulletMeshVisual_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_PreviewBulletMeshVisual(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execPreviewBulletMeshVisual)
{
	P_GET_STRUCT(FVector,Z_Param_TraceStart);
	P_GET_STRUCT(FVector,Z_Param_TraceEnd);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PreviewBulletMeshVisual(Z_Param_TraceStart,Z_Param_TraceEnd);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function PreviewBulletMeshVisual ***********

// ********** Begin Class URenegadeSoldierCombatComponent Function PreviewGroundBloodAtLocation ****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_PreviewGroundBloodAtLocation_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventPreviewGroundBloodAtLocation_Parms
	{
		FVector BulletImpactLocation;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Combat Visuals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Traces down and places the configured ground-blood effect locally. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Traces down and places the configured ground-blood effect locally." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function PreviewGroundBloodAtLocation constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_BulletImpactLocation;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeSoldierCombatComponent_eventPreviewGroundBloodAtLocation_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PreviewGroundBloodAtLocation constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PreviewGroundBloodAtLocation Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BulletImpactLocation = { "BulletImpactLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventPreviewGroundBloodAtLocation_Parms, BulletImpactLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSoldierCombatComponent_eventPreviewGroundBloodAtLocation_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BulletImpactLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PreviewGroundBloodAtLocation Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "PreviewGroundBloodAtLocation", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventPreviewGroundBloodAtLocation_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventPreviewGroundBloodAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_PreviewGroundBloodAtLocation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execPreviewGroundBloodAtLocation)
{
	P_GET_STRUCT(FVector,Z_Param_BulletImpactLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PreviewGroundBloodAtLocation(Z_Param_BulletImpactLocation);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function PreviewGroundBloodAtLocation ******

// ********** Begin Class URenegadeSoldierCombatComponent Function PreviewRocketLauncherVisual *****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_PreviewRocketLauncherVisual_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventPreviewRocketLauncherVisual_Parms
	{
		FVector ImpactLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Rocket Launcher|Visual" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Local cosmetic preview using the active rocket-launcher settings. No damage is applied. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Local cosmetic preview using the active rocket-launcher settings. No damage is applied." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function PreviewRocketLauncherVisual constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PreviewRocketLauncherVisual constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PreviewRocketLauncherVisual Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ImpactLocation = { "ImpactLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventPreviewRocketLauncherVisual_Parms, ImpactLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ImpactLocation,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PreviewRocketLauncherVisual Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "PreviewRocketLauncherVisual", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventPreviewRocketLauncherVisual_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventPreviewRocketLauncherVisual_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_PreviewRocketLauncherVisual(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execPreviewRocketLauncherVisual)
{
	P_GET_STRUCT(FVector,Z_Param_ImpactLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PreviewRocketLauncherVisual(Z_Param_ImpactLocation);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function PreviewRocketLauncherVisual *******

// ********** Begin Class URenegadeSoldierCombatComponent Function RefreshPlayerLockOnTarget *******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_RefreshPlayerLockOnTarget_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventRefreshPlayerLockOnTarget_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Lock-On" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Re-runs the acquisition query immediately while lock input remains held. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Re-runs the acquisition query immediately while lock input remains held." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RefreshPlayerLockOnTarget constinit property declarations *************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeSoldierCombatComponent_eventRefreshPlayerLockOnTarget_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RefreshPlayerLockOnTarget constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RefreshPlayerLockOnTarget Property Definitions ************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSoldierCombatComponent_eventRefreshPlayerLockOnTarget_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RefreshPlayerLockOnTarget Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "RefreshPlayerLockOnTarget", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventRefreshPlayerLockOnTarget_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventRefreshPlayerLockOnTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_RefreshPlayerLockOnTarget(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execRefreshPlayerLockOnTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RefreshPlayerLockOnTarget();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function RefreshPlayerLockOnTarget *********

// ********** Begin Class URenegadeSoldierCombatComponent Function ResetPlayerLockOnAimOffset ******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_ResetPlayerLockOnAimOffset_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventResetPlayerLockOnAimOffset_Parms
	{
		bool bInstant;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Lock-On|Aim Offset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Clears the player-controlled left/right and up/down lock-point displacement. */" },
#endif
		{ "CPP_Default_bInstant", "false" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clears the player-controlled left/right and up/down lock-point displacement." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ResetPlayerLockOnAimOffset constinit property declarations ************
	static void NewProp_bInstant_SetBit(void* Obj)
	{
		((RenegadeSoldierCombatComponent_eventResetPlayerLockOnAimOffset_Parms*)Obj)->bInstant = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInstant;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ResetPlayerLockOnAimOffset constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ResetPlayerLockOnAimOffset Property Definitions ***********************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bInstant = { "bInstant", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSoldierCombatComponent_eventResetPlayerLockOnAimOffset_Parms), &UHT_STATICS::NewProp_bInstant_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bInstant,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ResetPlayerLockOnAimOffset Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "ResetPlayerLockOnAimOffset", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventResetPlayerLockOnAimOffset_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventResetPlayerLockOnAimOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_ResetPlayerLockOnAimOffset(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execResetPlayerLockOnAimOffset)
{
	P_GET_UBOOL(Z_Param_bInstant);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetPlayerLockOnAimOffset(Z_Param_bInstant);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function ResetPlayerLockOnAimOffset ********

// ********** Begin Class URenegadeSoldierCombatComponent Function RespawnNow **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_RespawnNow_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Respawn" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RespawnNow constinit property declarations ****************************
// ********** End Function RespawnNow constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "RespawnNow", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_RespawnNow(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execRespawnNow)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RespawnNow();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function RespawnNow ************************

// ********** Begin Class URenegadeSoldierCombatComponent Function RestorePlayerAimPresentation ****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_RestorePlayerAimPresentation_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Aiming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Immediately restores pre-aim movement flags and camera FOV. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Immediately restores pre-aim movement flags and camera FOV." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RestorePlayerAimPresentation constinit property declarations **********
// ********** End Function RestorePlayerAimPresentation constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "RestorePlayerAimPresentation", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_RestorePlayerAimPresentation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execRestorePlayerAimPresentation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RestorePlayerAimPresentation();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function RestorePlayerAimPresentation ******

// ********** Begin Class URenegadeSoldierCombatComponent Function SelectPlayerAutomaticRifle ******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_SelectPlayerAutomaticRifle_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Weapons" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SelectPlayerAutomaticRifle constinit property declarations ************
// ********** End Function SelectPlayerAutomaticRifle constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "SelectPlayerAutomaticRifle", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_SelectPlayerAutomaticRifle(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execSelectPlayerAutomaticRifle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectPlayerAutomaticRifle();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function SelectPlayerAutomaticRifle ********

// ********** Begin Class URenegadeSoldierCombatComponent Function SelectPlayerPistol **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_SelectPlayerPistol_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Weapons" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SelectPlayerPistol constinit property declarations ********************
// ********** End Function SelectPlayerPistol constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "SelectPlayerPistol", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_SelectPlayerPistol(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execSelectPlayerPistol)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectPlayerPistol();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function SelectPlayerPistol ****************

// ********** Begin Class URenegadeSoldierCombatComponent Function SelectPlayerRocketLauncher ******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_SelectPlayerRocketLauncher_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Weapons" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SelectPlayerRocketLauncher constinit property declarations ************
// ********** End Function SelectPlayerRocketLauncher constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "SelectPlayerRocketLauncher", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_SelectPlayerRocketLauncher(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execSelectPlayerRocketLauncher)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectPlayerRocketLauncher();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function SelectPlayerRocketLauncher ********

// ********** Begin Class URenegadeSoldierCombatComponent Function SelectPlayerWeapon **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_SelectPlayerWeapon_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventSelectPlayerWeapon_Parms
	{
		ERenegadePlayerWeaponSlot NewWeapon;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Weapons" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SelectPlayerWeapon constinit property declarations ********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewWeapon_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewWeapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SelectPlayerWeapon constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SelectPlayerWeapon Property Definitions *******************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_NewWeapon_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_NewWeapon = { "NewWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventSelectPlayerWeapon_Parms, NewWeapon), Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadePlayerWeaponSlot, METADATA_PARAMS(0, nullptr) }; // 3d3c6554bcaa42767edc1195d01cd72bd763897b
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewWeapon_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewWeapon,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SelectPlayerWeapon Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "SelectPlayerWeapon", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventSelectPlayerWeapon_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventSelectPlayerWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_SelectPlayerWeapon(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execSelectPlayerWeapon)
{
	P_GET_ENUM(ERenegadePlayerWeaponSlot,Z_Param_NewWeapon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectPlayerWeapon(ERenegadePlayerWeaponSlot(Z_Param_NewWeapon));
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function SelectPlayerWeapon ****************

// ********** Begin Class URenegadeSoldierCombatComponent Function ServerRequestPlayerReload *******
struct RenegadeSoldierCombatComponent_eventServerRequestPlayerReload_Parms
{
	ERenegadePlayerWeaponSlot RequestedWeapon;
};
static FName NAME_URenegadeSoldierCombatComponent_ServerRequestPlayerReload = FName(TEXT("ServerRequestPlayerReload"));
void URenegadeSoldierCombatComponent::ServerRequestPlayerReload(ERenegadePlayerWeaponSlot RequestedWeapon)
{
	RenegadeSoldierCombatComponent_eventServerRequestPlayerReload_Parms Parms;
	Parms.RequestedWeapon=RequestedWeapon;
	UFunction* Func = FindFunctionChecked(NAME_URenegadeSoldierCombatComponent_ServerRequestPlayerReload);
	ProcessEvent(Func,&Parms);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_ServerRequestPlayerReload_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ServerRequestPlayerReload constinit property declarations *************
	static const UECodeGen_Private::FBytePropertyParams NewProp_RequestedWeapon_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RequestedWeapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ServerRequestPlayerReload constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ServerRequestPlayerReload Property Definitions ************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_RequestedWeapon_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_RequestedWeapon = { "RequestedWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventServerRequestPlayerReload_Parms, RequestedWeapon), Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadePlayerWeaponSlot, METADATA_PARAMS(0, nullptr) }; // 3d3c6554bcaa42767edc1195d01cd72bd763897b
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RequestedWeapon_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RequestedWeapon,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ServerRequestPlayerReload Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "ServerRequestPlayerReload", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<RenegadeSoldierCombatComponent_eventServerRequestPlayerReload_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(RenegadeSoldierCombatComponent_eventServerRequestPlayerReload_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_ServerRequestPlayerReload(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execServerRequestPlayerReload)
{
	P_GET_ENUM(ERenegadePlayerWeaponSlot,Z_Param_RequestedWeapon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerRequestPlayerReload_Implementation(ERenegadePlayerWeaponSlot(Z_Param_RequestedWeapon));
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function ServerRequestPlayerReload *********

// ********** Begin Class URenegadeSoldierCombatComponent Function ServerRequestPlayerRocketShot ***
struct RenegadeSoldierCombatComponent_eventServerRequestPlayerRocketShot_Parms
{
	FVector_NetQuantize ClientViewLocation;
	FVector_NetQuantizeNormal ClientViewDirection;
	bool bClientAiming;
};
static FName NAME_URenegadeSoldierCombatComponent_ServerRequestPlayerRocketShot = FName(TEXT("ServerRequestPlayerRocketShot"));
void URenegadeSoldierCombatComponent::ServerRequestPlayerRocketShot(FVector_NetQuantize ClientViewLocation, FVector_NetQuantizeNormal ClientViewDirection, bool bClientAiming)
{
	RenegadeSoldierCombatComponent_eventServerRequestPlayerRocketShot_Parms Parms;
	Parms.ClientViewLocation=ClientViewLocation;
	Parms.ClientViewDirection=ClientViewDirection;
	Parms.bClientAiming=bClientAiming ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_URenegadeSoldierCombatComponent_ServerRequestPlayerRocketShot);
	ProcessEvent(Func,&Parms);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_ServerRequestPlayerRocketShot_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rockets are low-frequency and visually important, so their owning-client request is reliable. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rockets are low-frequency and visually important, so their owning-client request is reliable." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ServerRequestPlayerRocketShot constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClientViewLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClientViewDirection;
	static void NewProp_bClientAiming_SetBit(void* Obj)
	{
		((RenegadeSoldierCombatComponent_eventServerRequestPlayerRocketShot_Parms*)Obj)->bClientAiming = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClientAiming;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ServerRequestPlayerRocketShot constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ServerRequestPlayerRocketShot Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ClientViewLocation = { "ClientViewLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventServerRequestPlayerRocketShot_Parms, ClientViewLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 360b775a5cdccbf04648aaedc65b3c6a0a2c5ffc
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ClientViewDirection = { "ClientViewDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventServerRequestPlayerRocketShot_Parms, ClientViewDirection), Z_Construct_UScriptStruct_FVector_NetQuantizeNormal, METADATA_PARAMS(0, nullptr) }; // b72fc0c9329e7384dd3617558ef2e117846163f4
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bClientAiming = { "bClientAiming", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSoldierCombatComponent_eventServerRequestPlayerRocketShot_Parms), &UHT_STATICS::NewProp_bClientAiming_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ClientViewLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ClientViewDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bClientAiming,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ServerRequestPlayerRocketShot Property Definitions **********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "ServerRequestPlayerRocketShot", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<RenegadeSoldierCombatComponent_eventServerRequestPlayerRocketShot_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(RenegadeSoldierCombatComponent_eventServerRequestPlayerRocketShot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_ServerRequestPlayerRocketShot(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execServerRequestPlayerRocketShot)
{
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_ClientViewLocation);
	P_GET_STRUCT(FVector_NetQuantizeNormal,Z_Param_ClientViewDirection);
	P_GET_UBOOL(Z_Param_bClientAiming);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerRequestPlayerRocketShot_Implementation(Z_Param_ClientViewLocation,Z_Param_ClientViewDirection,Z_Param_bClientAiming);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function ServerRequestPlayerRocketShot *****

// ********** Begin Class URenegadeSoldierCombatComponent Function ServerRequestPlayerShot *********
struct RenegadeSoldierCombatComponent_eventServerRequestPlayerShot_Parms
{
	FVector_NetQuantize ClientViewLocation;
	FVector_NetQuantizeNormal ClientViewDirection;
	ERenegadePlayerWeaponSlot RequestedWeapon;
	bool bClientAiming;
};
static FName NAME_URenegadeSoldierCombatComponent_ServerRequestPlayerShot = FName(TEXT("ServerRequestPlayerShot"));
void URenegadeSoldierCombatComponent::ServerRequestPlayerShot(FVector_NetQuantize ClientViewLocation, FVector_NetQuantizeNormal ClientViewDirection, ERenegadePlayerWeaponSlot RequestedWeapon, bool bClientAiming)
{
	RenegadeSoldierCombatComponent_eventServerRequestPlayerShot_Parms Parms;
	Parms.ClientViewLocation=ClientViewLocation;
	Parms.ClientViewDirection=ClientViewDirection;
	Parms.RequestedWeapon=RequestedWeapon;
	Parms.bClientAiming=bClientAiming ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_URenegadeSoldierCombatComponent_ServerRequestPlayerShot);
	ProcessEvent(Func,&Parms);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_ServerRequestPlayerShot_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ServerRequestPlayerShot constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClientViewLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClientViewDirection;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RequestedWeapon_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RequestedWeapon;
	static void NewProp_bClientAiming_SetBit(void* Obj)
	{
		((RenegadeSoldierCombatComponent_eventServerRequestPlayerShot_Parms*)Obj)->bClientAiming = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClientAiming;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ServerRequestPlayerShot constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ServerRequestPlayerShot Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ClientViewLocation = { "ClientViewLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventServerRequestPlayerShot_Parms, ClientViewLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 360b775a5cdccbf04648aaedc65b3c6a0a2c5ffc
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ClientViewDirection = { "ClientViewDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventServerRequestPlayerShot_Parms, ClientViewDirection), Z_Construct_UScriptStruct_FVector_NetQuantizeNormal, METADATA_PARAMS(0, nullptr) }; // b72fc0c9329e7384dd3617558ef2e117846163f4
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_RequestedWeapon_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_RequestedWeapon = { "RequestedWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventServerRequestPlayerShot_Parms, RequestedWeapon), Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadePlayerWeaponSlot, METADATA_PARAMS(0, nullptr) }; // 3d3c6554bcaa42767edc1195d01cd72bd763897b
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bClientAiming = { "bClientAiming", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSoldierCombatComponent_eventServerRequestPlayerShot_Parms), &UHT_STATICS::NewProp_bClientAiming_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ClientViewLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ClientViewDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RequestedWeapon_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RequestedWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bClientAiming,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ServerRequestPlayerShot Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "ServerRequestPlayerShot", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<RenegadeSoldierCombatComponent_eventServerRequestPlayerShot_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(RenegadeSoldierCombatComponent_eventServerRequestPlayerShot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_ServerRequestPlayerShot(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execServerRequestPlayerShot)
{
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_ClientViewLocation);
	P_GET_STRUCT(FVector_NetQuantizeNormal,Z_Param_ClientViewDirection);
	P_GET_ENUM(ERenegadePlayerWeaponSlot,Z_Param_RequestedWeapon);
	P_GET_UBOOL(Z_Param_bClientAiming);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerRequestPlayerShot_Implementation(Z_Param_ClientViewLocation,Z_Param_ClientViewDirection,ERenegadePlayerWeaponSlot(Z_Param_RequestedWeapon),Z_Param_bClientAiming);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function ServerRequestPlayerShot ***********

// ********** Begin Class URenegadeSoldierCombatComponent Function ServerSelectPlayerWeapon ********
struct RenegadeSoldierCombatComponent_eventServerSelectPlayerWeapon_Parms
{
	ERenegadePlayerWeaponSlot NewWeapon;
};
static FName NAME_URenegadeSoldierCombatComponent_ServerSelectPlayerWeapon = FName(TEXT("ServerSelectPlayerWeapon"));
void URenegadeSoldierCombatComponent::ServerSelectPlayerWeapon(ERenegadePlayerWeaponSlot NewWeapon)
{
	RenegadeSoldierCombatComponent_eventServerSelectPlayerWeapon_Parms Parms;
	Parms.NewWeapon=NewWeapon;
	UFunction* Func = FindFunctionChecked(NAME_URenegadeSoldierCombatComponent_ServerSelectPlayerWeapon);
	ProcessEvent(Func,&Parms);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_ServerSelectPlayerWeapon_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ServerSelectPlayerWeapon constinit property declarations **************
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewWeapon_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewWeapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ServerSelectPlayerWeapon constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ServerSelectPlayerWeapon Property Definitions *************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_NewWeapon_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_NewWeapon = { "NewWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventServerSelectPlayerWeapon_Parms, NewWeapon), Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadePlayerWeaponSlot, METADATA_PARAMS(0, nullptr) }; // 3d3c6554bcaa42767edc1195d01cd72bd763897b
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewWeapon_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewWeapon,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ServerSelectPlayerWeapon Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "ServerSelectPlayerWeapon", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<RenegadeSoldierCombatComponent_eventServerSelectPlayerWeapon_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(RenegadeSoldierCombatComponent_eventServerSelectPlayerWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_ServerSelectPlayerWeapon(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execServerSelectPlayerWeapon)
{
	P_GET_ENUM(ERenegadePlayerWeaponSlot,Z_Param_NewWeapon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerSelectPlayerWeapon_Implementation(ERenegadePlayerWeaponSlot(Z_Param_NewWeapon));
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function ServerSelectPlayerWeapon **********

// ********** Begin Class URenegadeSoldierCombatComponent Function ServerSetPlayerAiming ***********
struct RenegadeSoldierCombatComponent_eventServerSetPlayerAiming_Parms
{
	bool bNewAiming;
};
static FName NAME_URenegadeSoldierCombatComponent_ServerSetPlayerAiming = FName(TEXT("ServerSetPlayerAiming"));
void URenegadeSoldierCombatComponent::ServerSetPlayerAiming(bool bNewAiming)
{
	RenegadeSoldierCombatComponent_eventServerSetPlayerAiming_Parms Parms;
	Parms.bNewAiming=bNewAiming ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_URenegadeSoldierCombatComponent_ServerSetPlayerAiming);
	ProcessEvent(Func,&Parms);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_ServerSetPlayerAiming_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ServerSetPlayerAiming constinit property declarations *****************
	static void NewProp_bNewAiming_SetBit(void* Obj)
	{
		((RenegadeSoldierCombatComponent_eventServerSetPlayerAiming_Parms*)Obj)->bNewAiming = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewAiming;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ServerSetPlayerAiming constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ServerSetPlayerAiming Property Definitions ****************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bNewAiming = { "bNewAiming", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSoldierCombatComponent_eventServerSetPlayerAiming_Parms), &UHT_STATICS::NewProp_bNewAiming_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bNewAiming,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ServerSetPlayerAiming Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "ServerSetPlayerAiming", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<RenegadeSoldierCombatComponent_eventServerSetPlayerAiming_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(RenegadeSoldierCombatComponent_eventServerSetPlayerAiming_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_ServerSetPlayerAiming(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execServerSetPlayerAiming)
{
	P_GET_UBOOL(Z_Param_bNewAiming);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerSetPlayerAiming_Implementation(Z_Param_bNewAiming);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function ServerSetPlayerAiming *************

// ********** Begin Class URenegadeSoldierCombatComponent Function SetBuiltInPlayerInputEnabled ****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetBuiltInPlayerInputEnabled_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventSetBuiltInPlayerInputEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Built-In Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enables or disables the self-contained FKey input polling at runtime. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables or disables the self-contained FKey input polling at runtime." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetBuiltInPlayerInputEnabled constinit property declarations **********
	static void NewProp_bEnabled_SetBit(void* Obj)
	{
		((RenegadeSoldierCombatComponent_eventSetBuiltInPlayerInputEnabled_Parms*)Obj)->bEnabled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetBuiltInPlayerInputEnabled constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetBuiltInPlayerInputEnabled Property Definitions *********************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSoldierCombatComponent_eventSetBuiltInPlayerInputEnabled_Parms), &UHT_STATICS::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetBuiltInPlayerInputEnabled Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "SetBuiltInPlayerInputEnabled", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventSetBuiltInPlayerInputEnabled_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventSetBuiltInPlayerInputEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetBuiltInPlayerInputEnabled(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execSetBuiltInPlayerInputEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBuiltInPlayerInputEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function SetBuiltInPlayerInputEnabled ******

// ********** Begin Class URenegadeSoldierCombatComponent Function SetBulletVisualSpawnComponent ***
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetBulletVisualSpawnComponent_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventSetBulletVisualSpawnComponent_Parms
	{
		USceneComponent* NewSpawnComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Combat Visuals|Bullet Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Assigns the Scene Component used as the local bullet visual origin at runtime.\n     * The component must belong to the same soldier actor. This runtime override takes priority over the Details-panel reference.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assigns the Scene Component used as the local bullet visual origin at runtime.\nThe component must belong to the same soldier actor. This runtime override takes priority over the Details-panel reference." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewSpawnComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetBulletVisualSpawnComponent constinit property declarations *********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewSpawnComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetBulletVisualSpawnComponent constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetBulletVisualSpawnComponent Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_NewSpawnComponent = { "NewSpawnComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventSetBulletVisualSpawnComponent_Parms, NewSpawnComponent), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewSpawnComponent_MetaData), NewProp_NewSpawnComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewSpawnComponent,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetBulletVisualSpawnComponent Property Definitions **********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "SetBulletVisualSpawnComponent", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventSetBulletVisualSpawnComponent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventSetBulletVisualSpawnComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetBulletVisualSpawnComponent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execSetBulletVisualSpawnComponent)
{
	P_GET_OBJECT(USceneComponent,Z_Param_NewSpawnComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBulletVisualSpawnComponent(Z_Param_NewSpawnComponent);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function SetBulletVisualSpawnComponent *****

// ********** Begin Class URenegadeSoldierCombatComponent Function SetCombatRotationLockEnabled ****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetCombatRotationLockEnabled_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventSetCombatRotationLockEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Combat Facing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enables or disables body-yaw locking to the current enemy at runtime. Call on the server. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables or disables body-yaw locking to the current enemy at runtime. Call on the server." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetCombatRotationLockEnabled constinit property declarations **********
	static void NewProp_bEnabled_SetBit(void* Obj)
	{
		((RenegadeSoldierCombatComponent_eventSetCombatRotationLockEnabled_Parms*)Obj)->bEnabled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetCombatRotationLockEnabled constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetCombatRotationLockEnabled Property Definitions *********************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSoldierCombatComponent_eventSetCombatRotationLockEnabled_Parms), &UHT_STATICS::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetCombatRotationLockEnabled Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "SetCombatRotationLockEnabled", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventSetCombatRotationLockEnabled_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventSetCombatRotationLockEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetCombatRotationLockEnabled(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execSetCombatRotationLockEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCombatRotationLockEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function SetCombatRotationLockEnabled ******

// ********** Begin Class URenegadeSoldierCombatComponent Function SetCombatTarget *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetCombatTarget_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventSetCombatTarget_Parms
	{
		AActor* NewTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Combat" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetCombatTarget constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetCombatTarget constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetCombatTarget Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_NewTarget = { "NewTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventSetCombatTarget_Parms, NewTarget), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewTarget,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetCombatTarget Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "SetCombatTarget", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventSetCombatTarget_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventSetCombatTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetCombatTarget(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execSetCombatTarget)
{
	P_GET_OBJECT(AActor,Z_Param_NewTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCombatTarget(Z_Param_NewTarget);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function SetCombatTarget *******************

// ********** Begin Class URenegadeSoldierCombatComponent Function SetCustomRespawnTransforms ******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetCustomRespawnTransforms_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventSetCustomRespawnTransforms_Parms
	{
		TArray<FTransform> NewRespawnTransforms;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Respawn" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewRespawnTransforms_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetCustomRespawnTransforms constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewRespawnTransforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewRespawnTransforms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetCustomRespawnTransforms constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetCustomRespawnTransforms Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_NewRespawnTransforms_Inner = { "NewRespawnTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_NewRespawnTransforms = { "NewRespawnTransforms", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventSetCustomRespawnTransforms_Parms, NewRespawnTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewRespawnTransforms_MetaData), NewProp_NewRespawnTransforms_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewRespawnTransforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewRespawnTransforms,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetCustomRespawnTransforms Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "SetCustomRespawnTransforms", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventSetCustomRespawnTransforms_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventSetCustomRespawnTransforms_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetCustomRespawnTransforms(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execSetCustomRespawnTransforms)
{
	P_GET_TARRAY_REF(FTransform,Z_Param_Out_NewRespawnTransforms);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCustomRespawnTransforms(Z_Param_Out_NewRespawnTransforms);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function SetCustomRespawnTransforms ********

// ********** Begin Class URenegadeSoldierCombatComponent Function SetGrenadeLauncherMuzzleComponent 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetGrenadeLauncherMuzzleComponent_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventSetGrenadeLauncherMuzzleComponent_Parms
	{
		USceneComponent* NewMuzzleComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Grenade Launcher|Muzzle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assigns the Grenadier muzzle Scene Component at runtime. It must belong to this soldier actor. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assigns the Grenadier muzzle Scene Component at runtime. It must belong to this soldier actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewMuzzleComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetGrenadeLauncherMuzzleComponent constinit property declarations *****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMuzzleComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetGrenadeLauncherMuzzleComponent constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetGrenadeLauncherMuzzleComponent Property Definitions ****************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_NewMuzzleComponent = { "NewMuzzleComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventSetGrenadeLauncherMuzzleComponent_Parms, NewMuzzleComponent), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewMuzzleComponent_MetaData), NewProp_NewMuzzleComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewMuzzleComponent,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetGrenadeLauncherMuzzleComponent Property Definitions ******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "SetGrenadeLauncherMuzzleComponent", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventSetGrenadeLauncherMuzzleComponent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventSetGrenadeLauncherMuzzleComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetGrenadeLauncherMuzzleComponent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execSetGrenadeLauncherMuzzleComponent)
{
	P_GET_OBJECT(USceneComponent,Z_Param_NewMuzzleComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGrenadeLauncherMuzzleComponent(Z_Param_NewMuzzleComponent);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function SetGrenadeLauncherMuzzleComponent *

// ********** Begin Class URenegadeSoldierCombatComponent Function SetInvulnerable *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetInvulnerable_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventSetInvulnerable_Parms
	{
		bool bNewInvulnerable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Health" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetInvulnerable constinit property declarations ***********************
	static void NewProp_bNewInvulnerable_SetBit(void* Obj)
	{
		((RenegadeSoldierCombatComponent_eventSetInvulnerable_Parms*)Obj)->bNewInvulnerable = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewInvulnerable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetInvulnerable constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetInvulnerable Property Definitions **********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bNewInvulnerable = { "bNewInvulnerable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSoldierCombatComponent_eventSetInvulnerable_Parms), &UHT_STATICS::NewProp_bNewInvulnerable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bNewInvulnerable,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetInvulnerable Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "SetInvulnerable", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventSetInvulnerable_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventSetInvulnerable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetInvulnerable(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execSetInvulnerable)
{
	P_GET_UBOOL(Z_Param_bNewInvulnerable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInvulnerable(Z_Param_bNewInvulnerable);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function SetInvulnerable *******************

// ********** Begin Class URenegadeSoldierCombatComponent Function SetPlayerAimCameraComponent *****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetPlayerAimCameraComponent_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventSetPlayerAimCameraComponent_Parms
	{
		UCameraComponent* NewCameraComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Aiming|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Runtime override for the Camera Component used by aim zoom. It must belong to the same owning actor. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Runtime override for the Camera Component used by aim zoom. It must belong to the same owning actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewCameraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetPlayerAimCameraComponent constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewCameraComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetPlayerAimCameraComponent constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetPlayerAimCameraComponent Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_NewCameraComponent = { "NewCameraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventSetPlayerAimCameraComponent_Parms, NewCameraComponent), Z_Construct_UClass_UCameraComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewCameraComponent_MetaData), NewProp_NewCameraComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewCameraComponent,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetPlayerAimCameraComponent Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "SetPlayerAimCameraComponent", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventSetPlayerAimCameraComponent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventSetPlayerAimCameraComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetPlayerAimCameraComponent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execSetPlayerAimCameraComponent)
{
	P_GET_OBJECT(UCameraComponent,Z_Param_NewCameraComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlayerAimCameraComponent(Z_Param_NewCameraComponent);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function SetPlayerAimCameraComponent *******

// ********** Begin Class URenegadeSoldierCombatComponent Function SetPlayerLockOnIndicatorColor ***
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetPlayerLockOnIndicatorColor_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventSetPlayerLockOnIndicatorColor_Parms
	{
		FLinearColor NewColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Lock-On|Indicator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Changes the RGBA tint applied to the lock-on image. Texture alpha is preserved and multiplied by Color.A. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Changes the RGBA tint applied to the lock-on image. Texture alpha is preserved and multiplied by Color.A." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetPlayerLockOnIndicatorColor constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetPlayerLockOnIndicatorColor constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetPlayerLockOnIndicatorColor Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventSetPlayerLockOnIndicatorColor_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewColor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetPlayerLockOnIndicatorColor Property Definitions **********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "SetPlayerLockOnIndicatorColor", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventSetPlayerLockOnIndicatorColor_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventSetPlayerLockOnIndicatorColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetPlayerLockOnIndicatorColor(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execSetPlayerLockOnIndicatorColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_NewColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlayerLockOnIndicatorColor(Z_Param_NewColor);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function SetPlayerLockOnIndicatorColor *****

// ********** Begin Class URenegadeSoldierCombatComponent Function SetPlayerLockOnIndicatorTexture *
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetPlayerLockOnIndicatorTexture_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventSetPlayerLockOnIndicatorTexture_Parms
	{
		UTexture2D* NewTexture;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Lock-On|Indicator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Changes the local lock indicator texture at runtime and refreshes the active visual immediately. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Changes the local lock indicator texture at runtime and refreshes the active visual immediately." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetPlayerLockOnIndicatorTexture constinit property declarations *******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetPlayerLockOnIndicatorTexture constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetPlayerLockOnIndicatorTexture Property Definitions ******************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_NewTexture = { "NewTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventSetPlayerLockOnIndicatorTexture_Parms, NewTexture), Z_Construct_UClass_UTexture2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewTexture,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetPlayerLockOnIndicatorTexture Property Definitions ********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "SetPlayerLockOnIndicatorTexture", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventSetPlayerLockOnIndicatorTexture_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventSetPlayerLockOnIndicatorTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetPlayerLockOnIndicatorTexture(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execSetPlayerLockOnIndicatorTexture)
{
	P_GET_OBJECT(UTexture2D,Z_Param_NewTexture);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlayerLockOnIndicatorTexture(Z_Param_NewTexture);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function SetPlayerLockOnIndicatorTexture ***

// ********** Begin Class URenegadeSoldierCombatComponent Function SetRocketLauncherMuzzleComponent 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetRocketLauncherMuzzleComponent_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventSetRocketLauncherMuzzleComponent_Parms
	{
		USceneComponent* NewMuzzleComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Rocket Launcher|Muzzle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assigns the rocket-launcher muzzle Scene Component at runtime. It must belong to the same soldier actor. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assigns the rocket-launcher muzzle Scene Component at runtime. It must belong to the same soldier actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewMuzzleComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetRocketLauncherMuzzleComponent constinit property declarations ******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMuzzleComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetRocketLauncherMuzzleComponent constinit property declarations ********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetRocketLauncherMuzzleComponent Property Definitions *****************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_NewMuzzleComponent = { "NewMuzzleComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventSetRocketLauncherMuzzleComponent_Parms, NewMuzzleComponent), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewMuzzleComponent_MetaData), NewProp_NewMuzzleComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewMuzzleComponent,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetRocketLauncherMuzzleComponent Property Definitions *******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "SetRocketLauncherMuzzleComponent", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventSetRocketLauncherMuzzleComponent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventSetRocketLauncherMuzzleComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetRocketLauncherMuzzleComponent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execSetRocketLauncherMuzzleComponent)
{
	P_GET_OBJECT(USceneComponent,Z_Param_NewMuzzleComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRocketLauncherMuzzleComponent(Z_Param_NewMuzzleComponent);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function SetRocketLauncherMuzzleComponent **

// ********** Begin Class URenegadeSoldierCombatComponent Function SetRuntimeRespawnTransform ******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetRuntimeRespawnTransform_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventSetRuntimeRespawnTransform_Parms
	{
		FTransform NewRespawnTransform;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Respawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Highest-priority runtime respawn transform. Use Respawn Transform Mode = Runtime Transform Override. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Highest-priority runtime respawn transform. Use Respawn Transform Mode = Runtime Transform Override." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetRuntimeRespawnTransform constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewRespawnTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetRuntimeRespawnTransform constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetRuntimeRespawnTransform Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_NewRespawnTransform = { "NewRespawnTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventSetRuntimeRespawnTransform_Parms, NewRespawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewRespawnTransform,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetRuntimeRespawnTransform Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "SetRuntimeRespawnTransform", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventSetRuntimeRespawnTransform_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventSetRuntimeRespawnTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetRuntimeRespawnTransform(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execSetRuntimeRespawnTransform)
{
	P_GET_STRUCT(FTransform,Z_Param_NewRespawnTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRuntimeRespawnTransform(Z_Param_NewRespawnTransform);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function SetRuntimeRespawnTransform ********

// ********** Begin Class URenegadeSoldierCombatComponent Function SetTeamId ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetTeamId_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventSetTeamId_Parms
	{
		FName NewTeamId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Team" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetTeamId constinit property declarations *****************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_NewTeamId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetTeamId constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetTeamId Property Definitions ****************************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_NewTeamId = { "NewTeamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventSetTeamId_Parms, NewTeamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewTeamId,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetTeamId Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "SetTeamId", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventSetTeamId_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventSetTeamId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetTeamId(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execSetTeamId)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_NewTeamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTeamId(Z_Param_NewTeamId);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function SetTeamId *************************

// ********** Begin Class URenegadeSoldierCombatComponent Function SnapPlayerCharacterToAimForward *
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_SnapPlayerCharacterToAimForward_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Aiming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Immediately aligns the Character yaw to the current local camera/controller forward direction. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Immediately aligns the Character yaw to the current local camera/controller forward direction." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SnapPlayerCharacterToAimForward constinit property declarations *******
// ********** End Function SnapPlayerCharacterToAimForward constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "SnapPlayerCharacterToAimForward", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_SnapPlayerCharacterToAimForward(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execSnapPlayerCharacterToAimForward)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SnapPlayerCharacterToAimForward();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function SnapPlayerCharacterToAimForward ***

// ********** Begin Class URenegadeSoldierCombatComponent Function StartAutoCombat *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_StartAutoCombat_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Combat" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartAutoCombat constinit property declarations ***********************
// ********** End Function StartAutoCombat constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "StartAutoCombat", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_StartAutoCombat(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execStartAutoCombat)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartAutoCombat();
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function StartAutoCombat *******************

// ********** Begin Class URenegadeSoldierCombatComponent Function StopAutoCombat ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_StopAutoCombat_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventStopAutoCombat_Parms
	{
		bool bResumeSplineMovement;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Combat" },
		{ "CPP_Default_bResumeSplineMovement", "true" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StopAutoCombat constinit property declarations ************************
	static void NewProp_bResumeSplineMovement_SetBit(void* Obj)
	{
		((RenegadeSoldierCombatComponent_eventStopAutoCombat_Parms*)Obj)->bResumeSplineMovement = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResumeSplineMovement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StopAutoCombat constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StopAutoCombat Property Definitions ***********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bResumeSplineMovement = { "bResumeSplineMovement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSoldierCombatComponent_eventStopAutoCombat_Parms), &UHT_STATICS::NewProp_bResumeSplineMovement_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bResumeSplineMovement,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function StopAutoCombat Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "StopAutoCombat", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventStopAutoCombat_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventStopAutoCombat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_StopAutoCombat(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execStopAutoCombat)
{
	P_GET_UBOOL(Z_Param_bResumeSplineMovement);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopAutoCombat(Z_Param_bResumeSplineMovement);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function StopAutoCombat ********************

// ********** Begin Class URenegadeSoldierCombatComponent Function ValidateRagdollSetup ************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeSoldierCombatComponent_ValidateRagdollSetup_Statics
struct UHT_STATICS
{
	struct RenegadeSoldierCombatComponent_eventValidateRagdollSetup_Parms
	{
		FString FailureReason;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Ragdoll" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Validates the selected ragdoll mesh and Physics Asset. FailureReason is suitable for Print String. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Validates the selected ragdoll mesh and Physics Asset. FailureReason is suitable for Print String." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ValidateRagdollSetup constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FailureReason;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeSoldierCombatComponent_eventValidateRagdollSetup_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ValidateRagdollSetup constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ValidateRagdollSetup Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_FailureReason = { "FailureReason", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeSoldierCombatComponent_eventValidateRagdollSetup_Parms, FailureReason), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeSoldierCombatComponent_eventValidateRagdollSetup_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FailureReason,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ValidateRagdollSetup Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeSoldierCombatComponent, nullptr, "ValidateRagdollSetup", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeSoldierCombatComponent_eventValidateRagdollSetup_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeSoldierCombatComponent_eventValidateRagdollSetup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeSoldierCombatComponent_ValidateRagdollSetup(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URenegadeSoldierCombatComponent::execValidateRagdollSetup)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_FailureReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ValidateRagdollSetup(Z_Param_Out_FailureReason);
	P_NATIVE_END;
}
// ********** End Class URenegadeSoldierCombatComponent Function ValidateRagdollSetup **************

// ********** Begin Class URenegadeSoldierCombatComponent ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URenegadeSoldierCombatComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "RenegadeNXT" },
		{ "IncludePath", "RenegadeSoldierCombatComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamId_MetaData[] = {
		{ "Category", "Renegade NXT|Team" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDifferentNonNeutralTeamsAreEnemies_MetaData[] = {
		{ "Category", "Renegade NXT|Team" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoCombatEnabled_MetaData[] = {
		{ "Category", "Renegade NXT|Combat" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlayerControlledCombat_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enables player/manual combat. Automatic target acquisition, AI firing and AI combat movement are disabled for this component. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables player/manual combat. Automatic target acquisition, AI firing and AI combat movement are disabled for this component." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCombat_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInput_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Built-In Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional built-in keyboard/mouse and gamepad bindings. No Input Action assets are required when enabled. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional built-in keyboard/mouse and gamepad bindings. No Input Action assets are required when enabled." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerAimPresentation_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Aiming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera-facing body rotation and camera zoom applied while Player Aiming is active. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera-facing body rotation and camera zoom applied while Player Aiming is active." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerLockOn_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Lock-On" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Hold-to-lock third-person targeting, camera tracking, target switching, and local lock indicator. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hold-to-lock third-person targeting, camera tracking, target switching, and local lock indicator." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerAimCameraComponent_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.CameraComponent" },
		{ "Category", "Renegade NXT|Player Combat|Aiming|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional exact Camera Component to zoom. The plugin auto-finds an active player camera when this is unassigned. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional exact Camera Component to zoom. The plugin auto-finds an active player camera when this is unassigned." },
#endif
		{ "UseComponentPicker", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerAimCameraComponentTag_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Aiming|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional tag fallback for finding the Camera Component used by aim zoom. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional tag fallback for finding the Camera Component used by aim zoom." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsePlayerWeaponProfiles_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Weapons" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Use separate rifle and pistol weapon profiles for player combat. When disabled, the inline settings below are used. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use separate rifle and pistol weapon profiles for player combat. When disabled, the inline settings below are used." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerAutomaticRifleProfile_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Weapons" },
		{ "EditCondition", "bUsePlayerWeaponProfiles" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerPistolProfile_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Weapons" },
		{ "EditCondition", "bUsePlayerWeaponProfiles" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerRocketLauncherProfile_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Weapons" },
		{ "EditCondition", "bUsePlayerWeaponProfiles" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InlinePlayerAutomaticRifleSettings_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Weapons" },
		{ "EditCondition", "!bUsePlayerWeaponProfiles" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InlinePlayerPistolSettings_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Weapons" },
		{ "EditCondition", "!bUsePlayerWeaponProfiles" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InlinePlayerRocketLauncherSettings_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Weapons" },
		{ "EditCondition", "!bUsePlayerWeaponProfiles" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRegisterAsCombatTarget_MetaData[] = {
		{ "Category", "Renegade NXT|Combat" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoStartOnBeginPlay_MetaData[] = {
		{ "Category", "Renegade NXT|Combat" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Targeting_MetaData[] = {
		{ "Category", "Renegade NXT|Combat" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatMovement_MetaData[] = {
		{ "Category", "Renegade NXT|Combat" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockCombatRotationToCurrentTarget_MetaData[] = {
		{ "Category", "Renegade NXT|Combat Facing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When enabled, the soldier keeps its body yaw facing the active combat target while advancing, retreating, or strafing. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When enabled, the soldier keeps its body yaw facing the active combat target while advancing, retreating, or strafing." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatTargetRotationSpeedDegrees_MetaData[] = {
		{ "Category", "Renegade NXT|Combat Facing" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum body turning speed while combat-facing is locked. Set to 0 for an instant rotation. */" },
#endif
		{ "EditCondition", "bLockCombatRotationToCurrentTarget" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum body turning speed while combat-facing is locked. Set to 0 for an instant rotation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseWeaponProfile_MetaData[] = {
		{ "Category", "Renegade NXT|Weapon" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponProfile_MetaData[] = {
		{ "Category", "Renegade NXT|Weapon" },
		{ "EditCondition", "bUseWeaponProfile" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InlineWeaponSettings_MetaData[] = {
		{ "Category", "Renegade NXT|Weapon" },
		{ "EditCondition", "!bUseWeaponProfile" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthAndRespawn_MetaData[] = {
		{ "Category", "Renegade NXT|Health and Respawn" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatVisuals_MetaData[] = {
		{ "Category", "Renegade NXT|Combat Visuals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Automatic client-side bullet mesh travel and ground blood effects. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Automatic client-side bullet mesh travel and ground blood effects." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletVisualSpawnComponent_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SceneComponent" },
		{ "Category", "Renegade NXT|Combat Visuals|Bullet Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Scene Component on this soldier used as the visible bullet-mesh origin.\n     * Add a Scene Component at the weapon muzzle, then choose it with this component picker.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scene Component on this soldier used as the visible bullet-mesh origin.\nAdd a Scene Component at the weapon muzzle, then choose it with this component picker." },
#endif
		{ "UseComponentPicker", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletVisualSpawnRelativeOffset_MetaData[] = {
		{ "Category", "Renegade NXT|Combat Visuals|Bullet Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Local-space offset from Bullet Visual Spawn Component. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Local-space offset from Bullet Visual Spawn Component." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletVisualSpawnComponentTag_MetaData[] = {
		{ "Category", "Renegade NXT|Combat Visuals|Bullet Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional tag fallback used when Bullet Visual Spawn Component is not assigned. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional tag fallback used when Bullet Visual Spawn Component is not assigned." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RocketLauncherMuzzleComponent_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SceneComponent" },
		{ "Category", "Renegade NXT|Rocket Launcher|Muzzle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Exact Scene Component used as the authoritative and visual rocket-launch point. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Exact Scene Component used as the authoritative and visual rocket-launch point." },
#endif
		{ "UseComponentPicker", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RocketLauncherMuzzleRelativeOffset_MetaData[] = {
		{ "Category", "Renegade NXT|Rocket Launcher|Muzzle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Local-space offset from Rocket Launcher Muzzle Component. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Local-space offset from Rocket Launcher Muzzle Component." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RocketLauncherMuzzleComponentTag_MetaData[] = {
		{ "Category", "Renegade NXT|Rocket Launcher|Muzzle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional component-tag fallback when no exact rocket muzzle component is assigned. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional component-tag fallback when no exact rocket muzzle component is assigned." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrenadeLauncherMuzzleComponent_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SceneComponent" },
		{ "Category", "Renegade NXT|Grenade Launcher|Muzzle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Exact Scene Component used as the authoritative and visual grenade-launch point. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Exact Scene Component used as the authoritative and visual grenade-launch point." },
#endif
		{ "UseComponentPicker", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrenadeLauncherMuzzleRelativeOffset_MetaData[] = {
		{ "Category", "Renegade NXT|Grenade Launcher|Muzzle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Local-space offset from Grenade Launcher Muzzle Component. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Local-space offset from Grenade Launcher Muzzle Component." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrenadeLauncherMuzzleComponentTag_MetaData[] = {
		{ "Category", "Renegade NXT|Grenade Launcher|Muzzle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional component-tag fallback when no exact grenade muzzle component is assigned. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional component-tag fallback when no exact grenade muzzle component is assigned." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Renegade NXT|Runtime" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDead_MetaData[] = {
		{ "Category", "Renegade NXT|Runtime" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTarget_MetaData[] = {
		{ "Category", "Renegade NXT|Runtime" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMagazineAmmo_MetaData[] = {
		{ "Category", "Renegade NXT|Runtime" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivePlayerWeapon_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Runtime" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAutomaticRifleAmmo_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Runtime" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPistolAmmo_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Runtime" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRocketLauncherAmmo_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Runtime" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPlayerAiming_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Runtime" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerLockOnTarget_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Lock-On|Runtime" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Local lock-on target. This is intentionally not replicated; server-authoritative shots still validate the submitted view. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Local lock-on target. This is intentionally not replicated; server-authoritative shots still validate the submitted view." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTargetChanged_MetaData[] = {
		{ "Category", "Renegade NXT|Events" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCombatStarted_MetaData[] = {
		{ "Category", "Renegade NXT|Events" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCombatEnded_MetaData[] = {
		{ "Category", "Renegade NXT|Events" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnShotFired_MetaData[] = {
		{ "Category", "Renegade NXT|Events" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRocketLaunched_MetaData[] = {
		{ "Category", "Renegade NXT|Rocket Launcher|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cosmetic launch event fired on every listening machine when a replicated rocket begins travel. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cosmetic launch event fired on every listening machine when a replicated rocket begins travel." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRocketImpacted_MetaData[] = {
		{ "Category", "Renegade NXT|Rocket Launcher|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cosmetic impact event fired when the locally simulated rocket reaches the authoritative impact point. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cosmetic impact event fired when the locally simulated rocket reaches the authoritative impact point." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGrenadeLaunched_MetaData[] = {
		{ "Category", "Renegade NXT|Grenade Launcher|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fired on every listening machine when an authoritative Grenadier round is launched. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fired on every listening machine when an authoritative Grenadier round is launched." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGrenadeBounced_MetaData[] = {
		{ "Category", "Renegade NXT|Grenade Launcher|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fired for authoritative corrections when a Timed Bounce grenade hits and rebounds. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fired for authoritative corrections when a Timed Bounce grenade hits and rebounds." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGrenadeExploded_MetaData[] = {
		{ "Category", "Renegade NXT|Grenade Launcher|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fired when the server detonates a Grenadier round and the local impact presentation is played. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fired when the server detonates a Grenadier round and the local impact presentation is played." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnReloadStarted_MetaData[] = {
		{ "Category", "Renegade NXT|Events" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnReloadFinished_MetaData[] = {
		{ "Category", "Renegade NXT|Events" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthChanged_MetaData[] = {
		{ "Category", "Renegade NXT|Events" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDeath_MetaData[] = {
		{ "Category", "Renegade NXT|Events" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRagdollStarted_MetaData[] = {
		{ "Category", "Renegade NXT|Events" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRespawned_MetaData[] = {
		{ "Category", "Renegade NXT|Events" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGroundBloodSpawned_MetaData[] = {
		{ "Category", "Renegade NXT|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fired after an automatic ground-blood effect is placed. DecalComponent can be null when only an effect actor is configured. */" },
#endif
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fired after an automatic ground-blood effect is placed. DecalComponent can be null when only an effect actor is configured." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerWeaponChanged_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Events" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerAmmoChanged_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Events" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerAimChanged_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Events" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerLockOnTargetChanged_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Lock-On|Events" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerLockOnStateChanged_MetaData[] = {
		{ "Category", "Renegade NXT|Player Combat|Lock-On|Events" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRespawnTransformSelected_MetaData[] = {
		{ "Category", "Renegade NXT|Respawn|Events" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCombatMoveRequested_MetaData[] = {
		{ "Category", "Renegade NXT|Events" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSplineMovementPauseRequested_MetaData[] = {
		{ "Category", "Renegade NXT|Spline Integration" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSplineMovementResumeRequested_MetaData[] = {
		{ "Category", "Renegade NXT|Spline Integration" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCapsule_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerMovement_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeBulletVisualSpawnComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional runtime Blueprint override for the visual bullet origin. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional runtime Blueprint override for the visual bullet origin." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeRocketLauncherMuzzleComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional runtime Blueprint override for the rocket-launcher muzzle. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional runtime Blueprint override for the rocket-launcher muzzle." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeGrenadeLauncherMuzzleComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional runtime Blueprint override for the grenade-launcher muzzle. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional runtime Blueprint override for the grenade-launcher muzzle." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimePlayerAimCameraComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional runtime Blueprint override for the local aim-zoom camera. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional runtime Blueprint override for the local aim-zoom camera." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerLockOnIndicatorComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Local-only screen-space widget indicator created from the exposed lock-on PNG/texture. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Local-only screen-space widget indicator created from the exposed lock-on PNG/texture." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletVisualComponents_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Per-soldier component pool; normally only one or two entries are active at a time. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Per-soldier component pool; normally only one or two entries are active at a time." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RocketVisualComponents_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pooled local rocket meshes. Flight and impact effect actors remain optional. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pooled local rocket meshes. Flight and impact effect actors remain optional." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrenadeVisualComponents_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pooled local Grenadier meshes plus authoritative server projectile states. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RenegadeSoldierCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pooled local Grenadier meshes plus authoritative server projectile states." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class URenegadeSoldierCombatComponent constinit property declarations **********
	static const UECodeGen_Private::FNamePropertyParams NewProp_TeamId;
	static void NewProp_bDifferentNonNeutralTeamsAreEnemies_SetBit(void* Obj)
	{
		((URenegadeSoldierCombatComponent*)Obj)->bDifferentNonNeutralTeamsAreEnemies = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDifferentNonNeutralTeamsAreEnemies;
	static void NewProp_bAutoCombatEnabled_SetBit(void* Obj)
	{
		((URenegadeSoldierCombatComponent*)Obj)->bAutoCombatEnabled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoCombatEnabled;
	static void NewProp_bPlayerControlledCombat_SetBit(void* Obj)
	{
		((URenegadeSoldierCombatComponent*)Obj)->bPlayerControlledCombat = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayerControlledCombat;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerCombat;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerAimPresentation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerLockOn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerAimCameraComponent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PlayerAimCameraComponentTag;
	static void NewProp_bUsePlayerWeaponProfiles_SetBit(void* Obj)
	{
		((URenegadeSoldierCombatComponent*)Obj)->bUsePlayerWeaponProfiles = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePlayerWeaponProfiles;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerAutomaticRifleProfile;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerPistolProfile;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerRocketLauncherProfile;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InlinePlayerAutomaticRifleSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InlinePlayerPistolSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InlinePlayerRocketLauncherSettings;
	static void NewProp_bRegisterAsCombatTarget_SetBit(void* Obj)
	{
		((URenegadeSoldierCombatComponent*)Obj)->bRegisterAsCombatTarget = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRegisterAsCombatTarget;
	static void NewProp_bAutoStartOnBeginPlay_SetBit(void* Obj)
	{
		((URenegadeSoldierCombatComponent*)Obj)->bAutoStartOnBeginPlay = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoStartOnBeginPlay;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Targeting;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CombatMovement;
	static void NewProp_bLockCombatRotationToCurrentTarget_SetBit(void* Obj)
	{
		((URenegadeSoldierCombatComponent*)Obj)->bLockCombatRotationToCurrentTarget = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockCombatRotationToCurrentTarget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CombatTargetRotationSpeedDegrees;
	static void NewProp_bUseWeaponProfile_SetBit(void* Obj)
	{
		((URenegadeSoldierCombatComponent*)Obj)->bUseWeaponProfile = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseWeaponProfile;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponProfile;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InlineWeaponSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HealthAndRespawn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CombatVisuals;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BulletVisualSpawnComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BulletVisualSpawnRelativeOffset;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BulletVisualSpawnComponentTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RocketLauncherMuzzleComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RocketLauncherMuzzleRelativeOffset;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RocketLauncherMuzzleComponentTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrenadeLauncherMuzzleComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrenadeLauncherMuzzleRelativeOffset;
	static const UECodeGen_Private::FNamePropertyParams NewProp_GrenadeLauncherMuzzleComponentTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
	static void NewProp_bIsDead_SetBit(void* Obj)
	{
		((URenegadeSoldierCombatComponent*)Obj)->bIsDead = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDead;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTarget;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentMagazineAmmo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActivePlayerWeapon_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActivePlayerWeapon;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentAutomaticRifleAmmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentPistolAmmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentRocketLauncherAmmo;
	static void NewProp_bIsPlayerAiming_SetBit(void* Obj)
	{
		((URenegadeSoldierCombatComponent*)Obj)->bIsPlayerAiming = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlayerAiming;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerLockOnTarget;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTargetChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCombatStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCombatEnded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnShotFired;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRocketLaunched;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRocketImpacted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGrenadeLaunched;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGrenadeBounced;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGrenadeExploded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReloadStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReloadFinished;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeath;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRagdollStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRespawned;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGroundBloodSpawned;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerWeaponChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerAmmoChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerAimChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerLockOnTargetChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerLockOnStateChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRespawnTransformSelected;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCombatMoveRequested;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSplineMovementPauseRequested;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSplineMovementResumeRequested;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerCapsule;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerMovement;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RuntimeBulletVisualSpawnComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RuntimeRocketLauncherMuzzleComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RuntimeGrenadeLauncherMuzzleComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RuntimePlayerAimCameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerLockOnIndicatorComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletVisualComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BulletVisualComponents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RocketVisualComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RocketVisualComponents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrenadeVisualComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrenadeVisualComponents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URenegadeSoldierCombatComponent constinit property declarations ************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddCustomRespawnTransform"), .Pointer = &URenegadeSoldierCombatComponent::execAddCustomRespawnTransform },
		{ .NameUTF8 = UTF8TEXT("CalculateGrenadeLaunchVelocityToLocation"), .Pointer = &URenegadeSoldierCombatComponent::execCalculateGrenadeLaunchVelocityToLocation },
		{ .NameUTF8 = UTF8TEXT("ClearBulletVisualSpawnComponent"), .Pointer = &URenegadeSoldierCombatComponent::execClearBulletVisualSpawnComponent },
		{ .NameUTF8 = UTF8TEXT("ClearCombatTarget"), .Pointer = &URenegadeSoldierCombatComponent::execClearCombatTarget },
		{ .NameUTF8 = UTF8TEXT("ClearCustomRespawnTransforms"), .Pointer = &URenegadeSoldierCombatComponent::execClearCustomRespawnTransforms },
		{ .NameUTF8 = UTF8TEXT("ClearGrenadeLauncherMuzzleComponent"), .Pointer = &URenegadeSoldierCombatComponent::execClearGrenadeLauncherMuzzleComponent },
		{ .NameUTF8 = UTF8TEXT("ClearPlayerAimCameraComponent"), .Pointer = &URenegadeSoldierCombatComponent::execClearPlayerAimCameraComponent },
		{ .NameUTF8 = UTF8TEXT("ClearRocketLauncherMuzzleComponent"), .Pointer = &URenegadeSoldierCombatComponent::execClearRocketLauncherMuzzleComponent },
		{ .NameUTF8 = UTF8TEXT("ClearRuntimeRespawnTransform"), .Pointer = &URenegadeSoldierCombatComponent::execClearRuntimeRespawnTransform },
		{ .NameUTF8 = UTF8TEXT("ForceKill"), .Pointer = &URenegadeSoldierCombatComponent::execForceKill },
		{ .NameUTF8 = UTF8TEXT("ForceTargetRefresh"), .Pointer = &URenegadeSoldierCombatComponent::execForceTargetRefresh },
		{ .NameUTF8 = UTF8TEXT("GetActiveWeaponSettings"), .Pointer = &URenegadeSoldierCombatComponent::execGetActiveWeaponSettings },
		{ .NameUTF8 = UTF8TEXT("GetBulletVisualSpawnComponent"), .Pointer = &URenegadeSoldierCombatComponent::execGetBulletVisualSpawnComponent },
		{ .NameUTF8 = UTF8TEXT("GetBulletVisualSpawnLocation"), .Pointer = &URenegadeSoldierCombatComponent::execGetBulletVisualSpawnLocation },
		{ .NameUTF8 = UTF8TEXT("GetGrenadeLauncherMuzzleComponent"), .Pointer = &URenegadeSoldierCombatComponent::execGetGrenadeLauncherMuzzleComponent },
		{ .NameUTF8 = UTF8TEXT("GetGrenadeLauncherMuzzleLocation"), .Pointer = &URenegadeSoldierCombatComponent::execGetGrenadeLauncherMuzzleLocation },
		{ .NameUTF8 = UTF8TEXT("GetHealthPercent"), .Pointer = &URenegadeSoldierCombatComponent::execGetHealthPercent },
		{ .NameUTF8 = UTF8TEXT("GetPlayerAimAlpha"), .Pointer = &URenegadeSoldierCombatComponent::execGetPlayerAimAlpha },
		{ .NameUTF8 = UTF8TEXT("GetPlayerAimCameraComponent"), .Pointer = &URenegadeSoldierCombatComponent::execGetPlayerAimCameraComponent },
		{ .NameUTF8 = UTF8TEXT("GetPlayerLockOnAimLocation"), .Pointer = &URenegadeSoldierCombatComponent::execGetPlayerLockOnAimLocation },
		{ .NameUTF8 = UTF8TEXT("GetPlayerLockOnAimOffset"), .Pointer = &URenegadeSoldierCombatComponent::execGetPlayerLockOnAimOffset },
		{ .NameUTF8 = UTF8TEXT("GetPlayerLockOnIndicatorColor"), .Pointer = &URenegadeSoldierCombatComponent::execGetPlayerLockOnIndicatorColor },
		{ .NameUTF8 = UTF8TEXT("GetPlayerLockOnIndicatorTexture"), .Pointer = &URenegadeSoldierCombatComponent::execGetPlayerLockOnIndicatorTexture },
		{ .NameUTF8 = UTF8TEXT("GetPlayerLockOnTarget"), .Pointer = &URenegadeSoldierCombatComponent::execGetPlayerLockOnTarget },
		{ .NameUTF8 = UTF8TEXT("GetPlayerWeaponAmmo"), .Pointer = &URenegadeSoldierCombatComponent::execGetPlayerWeaponAmmo },
		{ .NameUTF8 = UTF8TEXT("GetPlayerWeaponSettings"), .Pointer = &URenegadeSoldierCombatComponent::execGetPlayerWeaponSettings },
		{ .NameUTF8 = UTF8TEXT("GetResolvedRagdollMesh"), .Pointer = &URenegadeSoldierCombatComponent::execGetResolvedRagdollMesh },
		{ .NameUTF8 = UTF8TEXT("GetRocketLauncherMuzzleComponent"), .Pointer = &URenegadeSoldierCombatComponent::execGetRocketLauncherMuzzleComponent },
		{ .NameUTF8 = UTF8TEXT("GetRocketLauncherMuzzleLocation"), .Pointer = &URenegadeSoldierCombatComponent::execGetRocketLauncherMuzzleLocation },
		{ .NameUTF8 = UTF8TEXT("HandleOwnerAnyDamage"), .Pointer = &URenegadeSoldierCombatComponent::execHandleOwnerAnyDamage },
		{ .NameUTF8 = UTF8TEXT("HasRuntimeRespawnTransform"), .Pointer = &URenegadeSoldierCombatComponent::execHasRuntimeRespawnTransform },
		{ .NameUTF8 = UTF8TEXT("Heal"), .Pointer = &URenegadeSoldierCombatComponent::execHeal },
		{ .NameUTF8 = UTF8TEXT("IsBuiltInPlayerInputEnabled"), .Pointer = &URenegadeSoldierCombatComponent::execIsBuiltInPlayerInputEnabled },
		{ .NameUTF8 = UTF8TEXT("IsCombatRotationLockEnabled"), .Pointer = &URenegadeSoldierCombatComponent::execIsCombatRotationLockEnabled },
		{ .NameUTF8 = UTF8TEXT("IsHostileToActor"), .Pointer = &URenegadeSoldierCombatComponent::execIsHostileToActor },
		{ .NameUTF8 = UTF8TEXT("IsInCombat"), .Pointer = &URenegadeSoldierCombatComponent::execIsInCombat },
		{ .NameUTF8 = UTF8TEXT("IsInvulnerable"), .Pointer = &URenegadeSoldierCombatComponent::execIsInvulnerable },
		{ .NameUTF8 = UTF8TEXT("IsPlayerAiming"), .Pointer = &URenegadeSoldierCombatComponent::execIsPlayerAiming },
		{ .NameUTF8 = UTF8TEXT("IsPlayerControlledCombatant"), .Pointer = &URenegadeSoldierCombatComponent::execIsPlayerControlledCombatant },
		{ .NameUTF8 = UTF8TEXT("IsPlayerFireHeld"), .Pointer = &URenegadeSoldierCombatComponent::execIsPlayerFireHeld },
		{ .NameUTF8 = UTF8TEXT("IsPlayerLockedOn"), .Pointer = &URenegadeSoldierCombatComponent::execIsPlayerLockedOn },
		{ .NameUTF8 = UTF8TEXT("IsPlayerLockOnHeld"), .Pointer = &URenegadeSoldierCombatComponent::execIsPlayerLockOnHeld },
		{ .NameUTF8 = UTF8TEXT("IsReloading"), .Pointer = &URenegadeSoldierCombatComponent::execIsReloading },
		{ .NameUTF8 = UTF8TEXT("IsValidCombatTarget"), .Pointer = &URenegadeSoldierCombatComponent::execIsValidCombatTarget },
		{ .NameUTF8 = UTF8TEXT("MulticastBeginDeath"), .Pointer = &URenegadeSoldierCombatComponent::execMulticastBeginDeath },
		{ .NameUTF8 = UTF8TEXT("MulticastFinishRespawn"), .Pointer = &URenegadeSoldierCombatComponent::execMulticastFinishRespawn },
		{ .NameUTF8 = UTF8TEXT("MulticastGrenadeBounced"), .Pointer = &URenegadeSoldierCombatComponent::execMulticastGrenadeBounced },
		{ .NameUTF8 = UTF8TEXT("MulticastGrenadeExploded"), .Pointer = &URenegadeSoldierCombatComponent::execMulticastGrenadeExploded },
		{ .NameUTF8 = UTF8TEXT("MulticastGrenadeLaunched"), .Pointer = &URenegadeSoldierCombatComponent::execMulticastGrenadeLaunched },
		{ .NameUTF8 = UTF8TEXT("MulticastReloadFinished"), .Pointer = &URenegadeSoldierCombatComponent::execMulticastReloadFinished },
		{ .NameUTF8 = UTF8TEXT("MulticastReloadStarted"), .Pointer = &URenegadeSoldierCombatComponent::execMulticastReloadStarted },
		{ .NameUTF8 = UTF8TEXT("MulticastRocketLaunched"), .Pointer = &URenegadeSoldierCombatComponent::execMulticastRocketLaunched },
		{ .NameUTF8 = UTF8TEXT("MulticastShotFired"), .Pointer = &URenegadeSoldierCombatComponent::execMulticastShotFired },
		{ .NameUTF8 = UTF8TEXT("OnRep_ActivePlayerWeapon"), .Pointer = &URenegadeSoldierCombatComponent::execOnRep_ActivePlayerWeapon },
		{ .NameUTF8 = UTF8TEXT("OnRep_AutomaticRifleAmmo"), .Pointer = &URenegadeSoldierCombatComponent::execOnRep_AutomaticRifleAmmo },
		{ .NameUTF8 = UTF8TEXT("OnRep_CurrentHealth"), .Pointer = &URenegadeSoldierCombatComponent::execOnRep_CurrentHealth },
		{ .NameUTF8 = UTF8TEXT("OnRep_CurrentTarget"), .Pointer = &URenegadeSoldierCombatComponent::execOnRep_CurrentTarget },
		{ .NameUTF8 = UTF8TEXT("OnRep_Dead"), .Pointer = &URenegadeSoldierCombatComponent::execOnRep_Dead },
		{ .NameUTF8 = UTF8TEXT("OnRep_PistolAmmo"), .Pointer = &URenegadeSoldierCombatComponent::execOnRep_PistolAmmo },
		{ .NameUTF8 = UTF8TEXT("OnRep_PlayerAiming"), .Pointer = &URenegadeSoldierCombatComponent::execOnRep_PlayerAiming },
		{ .NameUTF8 = UTF8TEXT("OnRep_RocketLauncherAmmo"), .Pointer = &URenegadeSoldierCombatComponent::execOnRep_RocketLauncherAmmo },
		{ .NameUTF8 = UTF8TEXT("OnRep_TeamId"), .Pointer = &URenegadeSoldierCombatComponent::execOnRep_TeamId },
		{ .NameUTF8 = UTF8TEXT("PlayerAddLockOnAimInput"), .Pointer = &URenegadeSoldierCombatComponent::execPlayerAddLockOnAimInput },
		{ .NameUTF8 = UTF8TEXT("PlayerFireOnce"), .Pointer = &URenegadeSoldierCombatComponent::execPlayerFireOnce },
		{ .NameUTF8 = UTF8TEXT("PlayerFirePistol"), .Pointer = &URenegadeSoldierCombatComponent::execPlayerFirePistol },
		{ .NameUTF8 = UTF8TEXT("PlayerFireRocketLauncher"), .Pointer = &URenegadeSoldierCombatComponent::execPlayerFireRocketLauncher },
		{ .NameUTF8 = UTF8TEXT("PlayerLockOnToTarget"), .Pointer = &URenegadeSoldierCombatComponent::execPlayerLockOnToTarget },
		{ .NameUTF8 = UTF8TEXT("PlayerReload"), .Pointer = &URenegadeSoldierCombatComponent::execPlayerReload },
		{ .NameUTF8 = UTF8TEXT("PlayerSetAiming"), .Pointer = &URenegadeSoldierCombatComponent::execPlayerSetAiming },
		{ .NameUTF8 = UTF8TEXT("PlayerSetLockOnHeld"), .Pointer = &URenegadeSoldierCombatComponent::execPlayerSetLockOnHeld },
		{ .NameUTF8 = UTF8TEXT("PlayerStartAiming"), .Pointer = &URenegadeSoldierCombatComponent::execPlayerStartAiming },
		{ .NameUTF8 = UTF8TEXT("PlayerStartAutomaticRifleFire"), .Pointer = &URenegadeSoldierCombatComponent::execPlayerStartAutomaticRifleFire },
		{ .NameUTF8 = UTF8TEXT("PlayerStartFire"), .Pointer = &URenegadeSoldierCombatComponent::execPlayerStartFire },
		{ .NameUTF8 = UTF8TEXT("PlayerStartLockOn"), .Pointer = &URenegadeSoldierCombatComponent::execPlayerStartLockOn },
		{ .NameUTF8 = UTF8TEXT("PlayerStopAiming"), .Pointer = &URenegadeSoldierCombatComponent::execPlayerStopAiming },
		{ .NameUTF8 = UTF8TEXT("PlayerStopAutomaticRifleFire"), .Pointer = &URenegadeSoldierCombatComponent::execPlayerStopAutomaticRifleFire },
		{ .NameUTF8 = UTF8TEXT("PlayerStopFire"), .Pointer = &URenegadeSoldierCombatComponent::execPlayerStopFire },
		{ .NameUTF8 = UTF8TEXT("PlayerStopLockOn"), .Pointer = &URenegadeSoldierCombatComponent::execPlayerStopLockOn },
		{ .NameUTF8 = UTF8TEXT("PlayerSwitchLockOnTarget"), .Pointer = &URenegadeSoldierCombatComponent::execPlayerSwitchLockOnTarget },
		{ .NameUTF8 = UTF8TEXT("PreviewBulletMeshFromConfiguredSpawn"), .Pointer = &URenegadeSoldierCombatComponent::execPreviewBulletMeshFromConfiguredSpawn },
		{ .NameUTF8 = UTF8TEXT("PreviewBulletMeshVisual"), .Pointer = &URenegadeSoldierCombatComponent::execPreviewBulletMeshVisual },
		{ .NameUTF8 = UTF8TEXT("PreviewGroundBloodAtLocation"), .Pointer = &URenegadeSoldierCombatComponent::execPreviewGroundBloodAtLocation },
		{ .NameUTF8 = UTF8TEXT("PreviewRocketLauncherVisual"), .Pointer = &URenegadeSoldierCombatComponent::execPreviewRocketLauncherVisual },
		{ .NameUTF8 = UTF8TEXT("RefreshPlayerLockOnTarget"), .Pointer = &URenegadeSoldierCombatComponent::execRefreshPlayerLockOnTarget },
		{ .NameUTF8 = UTF8TEXT("ResetPlayerLockOnAimOffset"), .Pointer = &URenegadeSoldierCombatComponent::execResetPlayerLockOnAimOffset },
		{ .NameUTF8 = UTF8TEXT("RespawnNow"), .Pointer = &URenegadeSoldierCombatComponent::execRespawnNow },
		{ .NameUTF8 = UTF8TEXT("RestorePlayerAimPresentation"), .Pointer = &URenegadeSoldierCombatComponent::execRestorePlayerAimPresentation },
		{ .NameUTF8 = UTF8TEXT("SelectPlayerAutomaticRifle"), .Pointer = &URenegadeSoldierCombatComponent::execSelectPlayerAutomaticRifle },
		{ .NameUTF8 = UTF8TEXT("SelectPlayerPistol"), .Pointer = &URenegadeSoldierCombatComponent::execSelectPlayerPistol },
		{ .NameUTF8 = UTF8TEXT("SelectPlayerRocketLauncher"), .Pointer = &URenegadeSoldierCombatComponent::execSelectPlayerRocketLauncher },
		{ .NameUTF8 = UTF8TEXT("SelectPlayerWeapon"), .Pointer = &URenegadeSoldierCombatComponent::execSelectPlayerWeapon },
		{ .NameUTF8 = UTF8TEXT("ServerRequestPlayerReload"), .Pointer = &URenegadeSoldierCombatComponent::execServerRequestPlayerReload },
		{ .NameUTF8 = UTF8TEXT("ServerRequestPlayerRocketShot"), .Pointer = &URenegadeSoldierCombatComponent::execServerRequestPlayerRocketShot },
		{ .NameUTF8 = UTF8TEXT("ServerRequestPlayerShot"), .Pointer = &URenegadeSoldierCombatComponent::execServerRequestPlayerShot },
		{ .NameUTF8 = UTF8TEXT("ServerSelectPlayerWeapon"), .Pointer = &URenegadeSoldierCombatComponent::execServerSelectPlayerWeapon },
		{ .NameUTF8 = UTF8TEXT("ServerSetPlayerAiming"), .Pointer = &URenegadeSoldierCombatComponent::execServerSetPlayerAiming },
		{ .NameUTF8 = UTF8TEXT("SetBuiltInPlayerInputEnabled"), .Pointer = &URenegadeSoldierCombatComponent::execSetBuiltInPlayerInputEnabled },
		{ .NameUTF8 = UTF8TEXT("SetBulletVisualSpawnComponent"), .Pointer = &URenegadeSoldierCombatComponent::execSetBulletVisualSpawnComponent },
		{ .NameUTF8 = UTF8TEXT("SetCombatRotationLockEnabled"), .Pointer = &URenegadeSoldierCombatComponent::execSetCombatRotationLockEnabled },
		{ .NameUTF8 = UTF8TEXT("SetCombatTarget"), .Pointer = &URenegadeSoldierCombatComponent::execSetCombatTarget },
		{ .NameUTF8 = UTF8TEXT("SetCustomRespawnTransforms"), .Pointer = &URenegadeSoldierCombatComponent::execSetCustomRespawnTransforms },
		{ .NameUTF8 = UTF8TEXT("SetGrenadeLauncherMuzzleComponent"), .Pointer = &URenegadeSoldierCombatComponent::execSetGrenadeLauncherMuzzleComponent },
		{ .NameUTF8 = UTF8TEXT("SetInvulnerable"), .Pointer = &URenegadeSoldierCombatComponent::execSetInvulnerable },
		{ .NameUTF8 = UTF8TEXT("SetPlayerAimCameraComponent"), .Pointer = &URenegadeSoldierCombatComponent::execSetPlayerAimCameraComponent },
		{ .NameUTF8 = UTF8TEXT("SetPlayerLockOnIndicatorColor"), .Pointer = &URenegadeSoldierCombatComponent::execSetPlayerLockOnIndicatorColor },
		{ .NameUTF8 = UTF8TEXT("SetPlayerLockOnIndicatorTexture"), .Pointer = &URenegadeSoldierCombatComponent::execSetPlayerLockOnIndicatorTexture },
		{ .NameUTF8 = UTF8TEXT("SetRocketLauncherMuzzleComponent"), .Pointer = &URenegadeSoldierCombatComponent::execSetRocketLauncherMuzzleComponent },
		{ .NameUTF8 = UTF8TEXT("SetRuntimeRespawnTransform"), .Pointer = &URenegadeSoldierCombatComponent::execSetRuntimeRespawnTransform },
		{ .NameUTF8 = UTF8TEXT("SetTeamId"), .Pointer = &URenegadeSoldierCombatComponent::execSetTeamId },
		{ .NameUTF8 = UTF8TEXT("SnapPlayerCharacterToAimForward"), .Pointer = &URenegadeSoldierCombatComponent::execSnapPlayerCharacterToAimForward },
		{ .NameUTF8 = UTF8TEXT("StartAutoCombat"), .Pointer = &URenegadeSoldierCombatComponent::execStartAutoCombat },
		{ .NameUTF8 = UTF8TEXT("StopAutoCombat"), .Pointer = &URenegadeSoldierCombatComponent::execStopAutoCombat },
		{ .NameUTF8 = UTF8TEXT("ValidateRagdollSetup"), .Pointer = &URenegadeSoldierCombatComponent::execValidateRagdollSetup },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_AddCustomRespawnTransform, "AddCustomRespawnTransform" }, // d55bce2dcd526d58952938ec5188cefe88350b2d
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_CalculateGrenadeLaunchVelocityToLocation, "CalculateGrenadeLaunchVelocityToLocation" }, // 6b3e5ab87a49f601f69170f2b78715d3414b094e
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_ClearBulletVisualSpawnComponent, "ClearBulletVisualSpawnComponent" }, // b5c80c155de5ed9e131b6090a314afc9fc3829de
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_ClearCombatTarget, "ClearCombatTarget" }, // 53ad295c3b208cbd58a633f0cf71dafe9a005691
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_ClearCustomRespawnTransforms, "ClearCustomRespawnTransforms" }, // 424a9503c85b7822aad34084d6110fe16ae98741
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_ClearGrenadeLauncherMuzzleComponent, "ClearGrenadeLauncherMuzzleComponent" }, // 83528d286afe3392725ed30517f508b054801b82
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_ClearPlayerAimCameraComponent, "ClearPlayerAimCameraComponent" }, // 24ee92e57963902914ee5f64819548eb625ee73c
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_ClearRocketLauncherMuzzleComponent, "ClearRocketLauncherMuzzleComponent" }, // 16171f4f190faf8685128e3d28fb975146635055
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_ClearRuntimeRespawnTransform, "ClearRuntimeRespawnTransform" }, // f1f1935f8f28a8bb60eba4b40918159daae7eb97
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_ForceKill, "ForceKill" }, // 850f9b6b9cbccb8365a994c5c90c0347ba2b21ca
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_ForceTargetRefresh, "ForceTargetRefresh" }, // a20fc1421e2f1b8d07ea8dd6069f21b67a5a9329
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetActiveWeaponSettings, "GetActiveWeaponSettings" }, // cb075dfb3f014e3ab76093fe66e5acc085f37ee0
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetBulletVisualSpawnComponent, "GetBulletVisualSpawnComponent" }, // beb228d6a4360c01379431e697303e1f3adf7b2f
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetBulletVisualSpawnLocation, "GetBulletVisualSpawnLocation" }, // 55c031e5caa2475de4884bfe12fc24ed32a6a268
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetGrenadeLauncherMuzzleComponent, "GetGrenadeLauncherMuzzleComponent" }, // bf85632c6049fe867116cd5d8c39c6da088b4cd4
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetGrenadeLauncherMuzzleLocation, "GetGrenadeLauncherMuzzleLocation" }, // dc8f314826a17955ba658817ff1ccd90ab25dc73
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetHealthPercent, "GetHealthPercent" }, // 2f82521d095f98594e97cd44ad8af636eeb43833
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetPlayerAimAlpha, "GetPlayerAimAlpha" }, // b9258d6bfdebe9179616c3890a000b53cebed188
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetPlayerAimCameraComponent, "GetPlayerAimCameraComponent" }, // af7297cb072eeea1f51621702943127d5904255b
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetPlayerLockOnAimLocation, "GetPlayerLockOnAimLocation" }, // 0b39d66ee9236fd833456b35cbb5fdd14616b7d8
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetPlayerLockOnAimOffset, "GetPlayerLockOnAimOffset" }, // bde322a0b43bbf9b2679208dbcf5d783011d44cc
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetPlayerLockOnIndicatorColor, "GetPlayerLockOnIndicatorColor" }, // 3da81fb5f6d94c174605ffe69ee1913c698c0002
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetPlayerLockOnIndicatorTexture, "GetPlayerLockOnIndicatorTexture" }, // b539f4459e9419fdd8304a5dc7da78f55eb175a8
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetPlayerLockOnTarget, "GetPlayerLockOnTarget" }, // 758288606bc497049e9793e139a5f6ecdb09f39f
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetPlayerWeaponAmmo, "GetPlayerWeaponAmmo" }, // 11332cdb124b54404f0a18d9097c4a03eb37399d
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetPlayerWeaponSettings, "GetPlayerWeaponSettings" }, // 8b575aee86b2ac86f8ef56a137d0e153ac7e46f7
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetResolvedRagdollMesh, "GetResolvedRagdollMesh" }, // 36841be3c84129d2af62b92ad1af26f02df52d7c
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetRocketLauncherMuzzleComponent, "GetRocketLauncherMuzzleComponent" }, // 45cd0ee1b418f065b8a18ad2647dc5700a2d6c3d
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_GetRocketLauncherMuzzleLocation, "GetRocketLauncherMuzzleLocation" }, // e4443d0a100aa52b687d4af12b63492f590b5078
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_HandleOwnerAnyDamage, "HandleOwnerAnyDamage" }, // 181d257095ff7c253de0928943ba796f3c4c1208
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_HasRuntimeRespawnTransform, "HasRuntimeRespawnTransform" }, // 652910789d0689435841f25cd92547b450a3b856
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_Heal, "Heal" }, // 0933c5575c1d8edb7f6824cedb3082223a1bf21f
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsBuiltInPlayerInputEnabled, "IsBuiltInPlayerInputEnabled" }, // c445040f4895fcdfb8b977781032fa64cd702352
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsCombatRotationLockEnabled, "IsCombatRotationLockEnabled" }, // 7848a12dff7a8149dc5ab7fb14aeed1a8d1d8b31
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsHostileToActor, "IsHostileToActor" }, // 9abcdd1426dc138fa830e2bda21936a1ff39ff18
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsInCombat, "IsInCombat" }, // bc486ab9c9ebef6d38379a96bf9e67116187e448
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsInvulnerable, "IsInvulnerable" }, // 5c3ee41ec7323d20fdb1ddce98f094bfaf31f431
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsPlayerAiming, "IsPlayerAiming" }, // 337c9a96579e1e61bf2111148110f3cea01d3453
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsPlayerControlledCombatant, "IsPlayerControlledCombatant" }, // dfb5728b79c6bbb1656cb1fb144dea89f443358b
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsPlayerFireHeld, "IsPlayerFireHeld" }, // 4eb778e9026ef577bc2bd12e39d3dca2b841c116
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsPlayerLockedOn, "IsPlayerLockedOn" }, // 4e4b6751d4b5ebb9c227deffcc1dec089b634e14
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsPlayerLockOnHeld, "IsPlayerLockOnHeld" }, // 269af529773ad5687f9964f79f5c6b5e9984dc90
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsReloading, "IsReloading" }, // 2e3d134b1b5521633b458e1750aa3aec43293b6f
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_IsValidCombatTarget, "IsValidCombatTarget" }, // b0213b8c94638aaad260727cd96b1eff68af844e
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_MulticastBeginDeath, "MulticastBeginDeath" }, // 6221bdddb7c52eb795af8ad68946cb254ad0166f
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_MulticastFinishRespawn, "MulticastFinishRespawn" }, // aa44649ca8f680eadaf41bd87747c8aeaaeb562d
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_MulticastGrenadeBounced, "MulticastGrenadeBounced" }, // 7c2322a3d63d58c8835220753ff9d630de54d9fb
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_MulticastGrenadeExploded, "MulticastGrenadeExploded" }, // f5bc018b1136b7e90ff7c7846dd38111e36eb10e
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_MulticastGrenadeLaunched, "MulticastGrenadeLaunched" }, // 695fb78490795646f5210487c579314455e81817
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_MulticastReloadFinished, "MulticastReloadFinished" }, // 2e0a8c14f03fc01afa4347b0df493f2eee2bb7ea
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_MulticastReloadStarted, "MulticastReloadStarted" }, // 1fb778da69012993da0b98bd8ad555030b1d2db4
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_MulticastRocketLaunched, "MulticastRocketLaunched" }, // ae3a2f05ee224bf8ab626b59371feacf3f72ccb0
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_MulticastShotFired, "MulticastShotFired" }, // a1221bef24020a3ce0f7ca63564eba40cbd857ba
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_OnRep_ActivePlayerWeapon, "OnRep_ActivePlayerWeapon" }, // d87db41b2217e9a709662fb9ec493818dbd1383f
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_OnRep_AutomaticRifleAmmo, "OnRep_AutomaticRifleAmmo" }, // 7ebc19772cdaa9e7c953fa182e95c78983195272
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_OnRep_CurrentHealth, "OnRep_CurrentHealth" }, // ac86c90b607679f592261f0d0fc064dce8933ac9
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_OnRep_CurrentTarget, "OnRep_CurrentTarget" }, // 0c0d72f44964e6d3a0bfaa55fca6b999d564618b
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_OnRep_Dead, "OnRep_Dead" }, // d3c05d97e9e6b1e1ad24ed58279b7e41c46a32cb
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_OnRep_PistolAmmo, "OnRep_PistolAmmo" }, // 048a3c34977f85c775e3a1491672d96613b742c1
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_OnRep_PlayerAiming, "OnRep_PlayerAiming" }, // aec01c2243e6f0148a0bc222322fbf14388b5f58
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_OnRep_RocketLauncherAmmo, "OnRep_RocketLauncherAmmo" }, // 17f0e6d9c215a8db71246f1f6aa116528b170037
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_OnRep_TeamId, "OnRep_TeamId" }, // 7baede63230f963333df75a43c947d49e504247c
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerAddLockOnAimInput, "PlayerAddLockOnAimInput" }, // 0f0a50a0e283a5a2e9cd94acaf672b77af9d7c23
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerFireOnce, "PlayerFireOnce" }, // a558bcf94a876f227ef6232ffcd0ee7eebd75b34
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerFirePistol, "PlayerFirePistol" }, // 76465ebd2cf4d02fbe1b95e87a2d0abde0aea5d9
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerFireRocketLauncher, "PlayerFireRocketLauncher" }, // 3aaaf94306add3ef4be178205ee253ce47b934b0
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerLockOnToTarget, "PlayerLockOnToTarget" }, // b61343643461885589c1c28ee57cbb837761477d
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerReload, "PlayerReload" }, // 27fb1c10f12b12ae8a1e661b4781e3383972f126
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerSetAiming, "PlayerSetAiming" }, // cc0ece76c5542979574968e4b064d963bb29ef25
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerSetLockOnHeld, "PlayerSetLockOnHeld" }, // 7a31e0324b7443b7359e7a341e5efe8a9bceab1b
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerStartAiming, "PlayerStartAiming" }, // d2becf60444b9ce170f5147489bea5db7d6c3b0e
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerStartAutomaticRifleFire, "PlayerStartAutomaticRifleFire" }, // cad097163eef0aa5c00dfc75cf22ed44c2ff4edd
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerStartFire, "PlayerStartFire" }, // 3660e3ea93cd5aa996e40cd196b1085a7efff05e
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerStartLockOn, "PlayerStartLockOn" }, // e977a561886d8ee45bde791edab5223e66efeb06
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerStopAiming, "PlayerStopAiming" }, // 3ba1b844cbc5039218bc2f864e76a7f9501d48a8
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerStopAutomaticRifleFire, "PlayerStopAutomaticRifleFire" }, // d12b7ec3f6cc56aea73b8ede8c482ea34226865a
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerStopFire, "PlayerStopFire" }, // c9561c914a302d46cfeea9a8307215d72076ce21
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerStopLockOn, "PlayerStopLockOn" }, // 870f19d9c81238c470ac4a089a2a334fd6203247
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_PlayerSwitchLockOnTarget, "PlayerSwitchLockOnTarget" }, // ef53efcda89c40bb91787936e4bf55f579b094f6
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_PreviewBulletMeshFromConfiguredSpawn, "PreviewBulletMeshFromConfiguredSpawn" }, // ad80e900cd9c17496c000972a764cb60ab7ce09d
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_PreviewBulletMeshVisual, "PreviewBulletMeshVisual" }, // e0348e43d4a0d3dd00e7809ceb98e9ff5819558d
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_PreviewGroundBloodAtLocation, "PreviewGroundBloodAtLocation" }, // c136db2553ccd1504d23b36903226faaf68a9759
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_PreviewRocketLauncherVisual, "PreviewRocketLauncherVisual" }, // e68894a8440baf99bcdc4bb20fec29050fca269a
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_RefreshPlayerLockOnTarget, "RefreshPlayerLockOnTarget" }, // 0c17642f07e6dd34faf3e2be752bbc0be8e66709
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_ResetPlayerLockOnAimOffset, "ResetPlayerLockOnAimOffset" }, // a0cf776cb6609a978789ad5b4368061721440433
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_RespawnNow, "RespawnNow" }, // eef0eb0339b955eb5ffaef1b1add0484439da5fe
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_RestorePlayerAimPresentation, "RestorePlayerAimPresentation" }, // d48087f42dd08f3321ded149f950e1aff7c8c1fc
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_SelectPlayerAutomaticRifle, "SelectPlayerAutomaticRifle" }, // 178afdf7bc86455d9d37014242d04c1dbb0c6336
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_SelectPlayerPistol, "SelectPlayerPistol" }, // 648ef3f6ce509ff112884c1dff7ae312c82c9e56
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_SelectPlayerRocketLauncher, "SelectPlayerRocketLauncher" }, // 36bfed6fb896065778abe6e9bafcfa5533400bcf
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_SelectPlayerWeapon, "SelectPlayerWeapon" }, // 74b12e66553bfedd27f11cd6a4fd6adc07d2ec01
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_ServerRequestPlayerReload, "ServerRequestPlayerReload" }, // c4dc009d099b9d67259f284a773609db2fdce312
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_ServerRequestPlayerRocketShot, "ServerRequestPlayerRocketShot" }, // 202f924b1993f7ead693274913ebe0fb56215951
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_ServerRequestPlayerShot, "ServerRequestPlayerShot" }, // 7c24808179cc1c9c5b8396801d8d1f110758e203
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_ServerSelectPlayerWeapon, "ServerSelectPlayerWeapon" }, // e0d0947aaeb97066ddb0439dde344eb88737e794
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_ServerSetPlayerAiming, "ServerSetPlayerAiming" }, // 45c8842ed91e8f3956e4def536f7a18cdef7c68c
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetBuiltInPlayerInputEnabled, "SetBuiltInPlayerInputEnabled" }, // ed2e99fd1b9d2ce330692a40b12b3be191ea847c
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetBulletVisualSpawnComponent, "SetBulletVisualSpawnComponent" }, // 358818dff0069453b676cefe7c5c3210952f2fcf
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetCombatRotationLockEnabled, "SetCombatRotationLockEnabled" }, // 7a6e332b036bef6e1aa90fb7a4db43aaf047e870
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetCombatTarget, "SetCombatTarget" }, // 4889eeb8592e9eba70cbecd3a892cfef2cdcdfa3
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetCustomRespawnTransforms, "SetCustomRespawnTransforms" }, // b3dbccc266ff50d3ea672be899df3067d070ca3a
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetGrenadeLauncherMuzzleComponent, "SetGrenadeLauncherMuzzleComponent" }, // 38e229813790c8f173fd707843229c6410f8244d
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetInvulnerable, "SetInvulnerable" }, // acb8f084e19905028047c6720f329673268209fa
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetPlayerAimCameraComponent, "SetPlayerAimCameraComponent" }, // fdecfe513913e2756c0bedb142bb07ded26a73f0
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetPlayerLockOnIndicatorColor, "SetPlayerLockOnIndicatorColor" }, // 94baba07a26024d21aa3b0bfa60634b93216cf0e
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetPlayerLockOnIndicatorTexture, "SetPlayerLockOnIndicatorTexture" }, // 0fee842fcc91cddcc213e212f08224543346b7b2
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetRocketLauncherMuzzleComponent, "SetRocketLauncherMuzzleComponent" }, // 77870fa60f44735d700fe205a1648ef59c96110d
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetRuntimeRespawnTransform, "SetRuntimeRespawnTransform" }, // 66020b5a9ac3272c497e758c7b53ec7bda396e4d
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_SetTeamId, "SetTeamId" }, // 85fd3037caf0398fdf986e41434059535e00bddc
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_SnapPlayerCharacterToAimForward, "SnapPlayerCharacterToAimForward" }, // a5e6ec108ffff2d79f88a1de1de939744899a570
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_StartAutoCombat, "StartAutoCombat" }, // 17518c17b4edb5027504ce14c5f592c27d6d5868
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_StopAutoCombat, "StopAutoCombat" }, // 8a8ddd1e5e1338abe2fbcf32685fd834f48254eb
		{ &Z_Construct_UFunction_URenegadeSoldierCombatComponent_ValidateRagdollSetup, "ValidateRagdollSetup" }, // 629a5c55504c2a8fbfcca9a287abfb4470e5914b
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenegadeSoldierCombatComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class URenegadeSoldierCombatComponent Property Definitions *********************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_TeamId = { "TeamId", "OnRep_TeamId", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, TeamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamId_MetaData), NewProp_TeamId_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDifferentNonNeutralTeamsAreEnemies = { "bDifferentNonNeutralTeamsAreEnemies", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeSoldierCombatComponent), &UHT_STATICS::NewProp_bDifferentNonNeutralTeamsAreEnemies_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDifferentNonNeutralTeamsAreEnemies_MetaData), NewProp_bDifferentNonNeutralTeamsAreEnemies_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAutoCombatEnabled = { "bAutoCombatEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeSoldierCombatComponent), &UHT_STATICS::NewProp_bAutoCombatEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoCombatEnabled_MetaData), NewProp_bAutoCombatEnabled_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bPlayerControlledCombat = { "bPlayerControlledCombat", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeSoldierCombatComponent), &UHT_STATICS::NewProp_bPlayerControlledCombat_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlayerControlledCombat_MetaData), NewProp_bPlayerControlledCombat_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PlayerCombat = { "PlayerCombat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, PlayerCombat), Z_Construct_UScriptStruct_FRenegadePlayerCombatSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCombat_MetaData), NewProp_PlayerCombat_MetaData) }; // c6d9f506f10c93d8ecea55d4eb7a1253bc056cee
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PlayerInput = { "PlayerInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, PlayerInput), Z_Construct_UScriptStruct_FRenegadePlayerInputSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerInput_MetaData), NewProp_PlayerInput_MetaData) }; // fc843d5e41b50d2ee0343f225e7ee52a82e1aaaf
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PlayerAimPresentation = { "PlayerAimPresentation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, PlayerAimPresentation), Z_Construct_UScriptStruct_FRenegadePlayerAimPresentationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerAimPresentation_MetaData), NewProp_PlayerAimPresentation_MetaData) }; // a30814c671056417cb47a77cda3347d0e6d77de1
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PlayerLockOn = { "PlayerLockOn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, PlayerLockOn), Z_Construct_UScriptStruct_FRenegadePlayerLockOnSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerLockOn_MetaData), NewProp_PlayerLockOn_MetaData) }; // e3acd254023a39a6ea607b65fc2752d107c54f04
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PlayerAimCameraComponent = { "PlayerAimCameraComponent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, PlayerAimCameraComponent), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerAimCameraComponent_MetaData), NewProp_PlayerAimCameraComponent_MetaData) }; // 9b9ae5abd01cfb2cb2ece10137db004a3044215c
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_PlayerAimCameraComponentTag = { "PlayerAimCameraComponentTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, PlayerAimCameraComponentTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerAimCameraComponentTag_MetaData), NewProp_PlayerAimCameraComponentTag_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUsePlayerWeaponProfiles = { "bUsePlayerWeaponProfiles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeSoldierCombatComponent), &UHT_STATICS::NewProp_bUsePlayerWeaponProfiles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsePlayerWeaponProfiles_MetaData), NewProp_bUsePlayerWeaponProfiles_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PlayerAutomaticRifleProfile = { "PlayerAutomaticRifleProfile", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, PlayerAutomaticRifleProfile), Z_Construct_UClass_URenegadeWeaponProfile, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerAutomaticRifleProfile_MetaData), NewProp_PlayerAutomaticRifleProfile_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PlayerPistolProfile = { "PlayerPistolProfile", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, PlayerPistolProfile), Z_Construct_UClass_URenegadeWeaponProfile, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerPistolProfile_MetaData), NewProp_PlayerPistolProfile_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PlayerRocketLauncherProfile = { "PlayerRocketLauncherProfile", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, PlayerRocketLauncherProfile), Z_Construct_UClass_URenegadeWeaponProfile, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerRocketLauncherProfile_MetaData), NewProp_PlayerRocketLauncherProfile_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_InlinePlayerAutomaticRifleSettings = { "InlinePlayerAutomaticRifleSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, InlinePlayerAutomaticRifleSettings), Z_Construct_UScriptStruct_FRenegadeWeaponSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InlinePlayerAutomaticRifleSettings_MetaData), NewProp_InlinePlayerAutomaticRifleSettings_MetaData) }; // 99eb1d7bdc6f572230d4fc8d38884a3a59f036d1
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_InlinePlayerPistolSettings = { "InlinePlayerPistolSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, InlinePlayerPistolSettings), Z_Construct_UScriptStruct_FRenegadeWeaponSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InlinePlayerPistolSettings_MetaData), NewProp_InlinePlayerPistolSettings_MetaData) }; // 99eb1d7bdc6f572230d4fc8d38884a3a59f036d1
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_InlinePlayerRocketLauncherSettings = { "InlinePlayerRocketLauncherSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, InlinePlayerRocketLauncherSettings), Z_Construct_UScriptStruct_FRenegadeWeaponSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InlinePlayerRocketLauncherSettings_MetaData), NewProp_InlinePlayerRocketLauncherSettings_MetaData) }; // 99eb1d7bdc6f572230d4fc8d38884a3a59f036d1
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRegisterAsCombatTarget = { "bRegisterAsCombatTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeSoldierCombatComponent), &UHT_STATICS::NewProp_bRegisterAsCombatTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRegisterAsCombatTarget_MetaData), NewProp_bRegisterAsCombatTarget_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAutoStartOnBeginPlay = { "bAutoStartOnBeginPlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeSoldierCombatComponent), &UHT_STATICS::NewProp_bAutoStartOnBeginPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoStartOnBeginPlay_MetaData), NewProp_bAutoStartOnBeginPlay_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Targeting = { "Targeting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, Targeting), Z_Construct_UScriptStruct_FRenegadeTargetingSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Targeting_MetaData), NewProp_Targeting_MetaData) }; // b0ca101f0f7d568723dac95ac243779fa06eaebd
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CombatMovement = { "CombatMovement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, CombatMovement), Z_Construct_UScriptStruct_FRenegadeCombatMovementSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatMovement_MetaData), NewProp_CombatMovement_MetaData) }; // b5ce1d26d6f08ef16986d51ddeadc4d689d7e315
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bLockCombatRotationToCurrentTarget = { "bLockCombatRotationToCurrentTarget", nullptr, (EPropertyFlags)0x0010000000000035, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeSoldierCombatComponent), &UHT_STATICS::NewProp_bLockCombatRotationToCurrentTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockCombatRotationToCurrentTarget_MetaData), NewProp_bLockCombatRotationToCurrentTarget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CombatTargetRotationSpeedDegrees = { "CombatTargetRotationSpeedDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, CombatTargetRotationSpeedDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatTargetRotationSpeedDegrees_MetaData), NewProp_CombatTargetRotationSpeedDegrees_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseWeaponProfile = { "bUseWeaponProfile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeSoldierCombatComponent), &UHT_STATICS::NewProp_bUseWeaponProfile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseWeaponProfile_MetaData), NewProp_bUseWeaponProfile_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WeaponProfile = { "WeaponProfile", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, WeaponProfile), Z_Construct_UClass_URenegadeWeaponProfile, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponProfile_MetaData), NewProp_WeaponProfile_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_InlineWeaponSettings = { "InlineWeaponSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, InlineWeaponSettings), Z_Construct_UScriptStruct_FRenegadeWeaponSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InlineWeaponSettings_MetaData), NewProp_InlineWeaponSettings_MetaData) }; // 99eb1d7bdc6f572230d4fc8d38884a3a59f036d1
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_HealthAndRespawn = { "HealthAndRespawn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, HealthAndRespawn), Z_Construct_UScriptStruct_FRenegadeHealthRespawnSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthAndRespawn_MetaData), NewProp_HealthAndRespawn_MetaData) }; // 6a6e72877f7afdd3780be1063523fafd654bab01
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CombatVisuals = { "CombatVisuals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, CombatVisuals), Z_Construct_UScriptStruct_FRenegadeCombatVisualSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatVisuals_MetaData), NewProp_CombatVisuals_MetaData) }; // 2f52513d94db74ffb2e48c3b9974236043130c83
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BulletVisualSpawnComponent = { "BulletVisualSpawnComponent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, BulletVisualSpawnComponent), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletVisualSpawnComponent_MetaData), NewProp_BulletVisualSpawnComponent_MetaData) }; // 9b9ae5abd01cfb2cb2ece10137db004a3044215c
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BulletVisualSpawnRelativeOffset = { "BulletVisualSpawnRelativeOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, BulletVisualSpawnRelativeOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletVisualSpawnRelativeOffset_MetaData), NewProp_BulletVisualSpawnRelativeOffset_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_BulletVisualSpawnComponentTag = { "BulletVisualSpawnComponentTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, BulletVisualSpawnComponentTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletVisualSpawnComponentTag_MetaData), NewProp_BulletVisualSpawnComponentTag_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RocketLauncherMuzzleComponent = { "RocketLauncherMuzzleComponent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, RocketLauncherMuzzleComponent), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RocketLauncherMuzzleComponent_MetaData), NewProp_RocketLauncherMuzzleComponent_MetaData) }; // 9b9ae5abd01cfb2cb2ece10137db004a3044215c
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RocketLauncherMuzzleRelativeOffset = { "RocketLauncherMuzzleRelativeOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, RocketLauncherMuzzleRelativeOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RocketLauncherMuzzleRelativeOffset_MetaData), NewProp_RocketLauncherMuzzleRelativeOffset_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_RocketLauncherMuzzleComponentTag = { "RocketLauncherMuzzleComponentTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, RocketLauncherMuzzleComponentTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RocketLauncherMuzzleComponentTag_MetaData), NewProp_RocketLauncherMuzzleComponentTag_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GrenadeLauncherMuzzleComponent = { "GrenadeLauncherMuzzleComponent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, GrenadeLauncherMuzzleComponent), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrenadeLauncherMuzzleComponent_MetaData), NewProp_GrenadeLauncherMuzzleComponent_MetaData) }; // 9b9ae5abd01cfb2cb2ece10137db004a3044215c
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GrenadeLauncherMuzzleRelativeOffset = { "GrenadeLauncherMuzzleRelativeOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, GrenadeLauncherMuzzleRelativeOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrenadeLauncherMuzzleRelativeOffset_MetaData), NewProp_GrenadeLauncherMuzzleRelativeOffset_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_GrenadeLauncherMuzzleComponentTag = { "GrenadeLauncherMuzzleComponentTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, GrenadeLauncherMuzzleComponentTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrenadeLauncherMuzzleComponentTag_MetaData), NewProp_GrenadeLauncherMuzzleComponentTag_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CurrentHealth = { "CurrentHealth", "OnRep_CurrentHealth", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsDead = { "bIsDead", "OnRep_Dead", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeSoldierCombatComponent), &UHT_STATICS::NewProp_bIsDead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDead_MetaData), NewProp_bIsDead_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CurrentTarget = { "CurrentTarget", "OnRep_CurrentTarget", (EPropertyFlags)0x0114000100000034, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, CurrentTarget), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTarget_MetaData), NewProp_CurrentTarget_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_CurrentMagazineAmmo = { "CurrentMagazineAmmo", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, CurrentMagazineAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMagazineAmmo_MetaData), NewProp_CurrentMagazineAmmo_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ActivePlayerWeapon_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ActivePlayerWeapon = { "ActivePlayerWeapon", "OnRep_ActivePlayerWeapon", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, ActivePlayerWeapon), Z_Construct_UEnum_RenegadeSoldierCombat_ERenegadePlayerWeaponSlot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivePlayerWeapon_MetaData), NewProp_ActivePlayerWeapon_MetaData) }; // 3d3c6554bcaa42767edc1195d01cd72bd763897b
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_CurrentAutomaticRifleAmmo = { "CurrentAutomaticRifleAmmo", "OnRep_AutomaticRifleAmmo", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, CurrentAutomaticRifleAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentAutomaticRifleAmmo_MetaData), NewProp_CurrentAutomaticRifleAmmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_CurrentPistolAmmo = { "CurrentPistolAmmo", "OnRep_PistolAmmo", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, CurrentPistolAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPistolAmmo_MetaData), NewProp_CurrentPistolAmmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_CurrentRocketLauncherAmmo = { "CurrentRocketLauncherAmmo", "OnRep_RocketLauncherAmmo", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, CurrentRocketLauncherAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRocketLauncherAmmo_MetaData), NewProp_CurrentRocketLauncherAmmo_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsPlayerAiming = { "bIsPlayerAiming", "OnRep_PlayerAiming", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URenegadeSoldierCombatComponent), &UHT_STATICS::NewProp_bIsPlayerAiming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPlayerAiming_MetaData), NewProp_bIsPlayerAiming_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PlayerLockOnTarget = { "PlayerLockOnTarget", nullptr, (EPropertyFlags)0x0114000000002014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, PlayerLockOnTarget), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerLockOnTarget_MetaData), NewProp_PlayerLockOnTarget_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnTargetChanged = { "OnTargetChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, OnTargetChanged), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeTargetChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTargetChanged_MetaData), NewProp_OnTargetChanged_MetaData) }; // b571e1eca28629b1b2d61a6133248f685b1f40d4
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnCombatStarted = { "OnCombatStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, OnCombatStarted), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeCombatStartedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCombatStarted_MetaData), NewProp_OnCombatStarted_MetaData) }; // 64dc7839f181e5b8732183015534bf20262d2c3c
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnCombatEnded = { "OnCombatEnded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, OnCombatEnded), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeCombatEndedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCombatEnded_MetaData), NewProp_OnCombatEnded_MetaData) }; // fb77aa189c75ab1c6f849d4d459f8a6632772ab1
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnShotFired = { "OnShotFired", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, OnShotFired), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeShotFiredSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnShotFired_MetaData), NewProp_OnShotFired_MetaData) }; // 4482a1334368de87c8e11b0fdec2757d803b242e
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnRocketLaunched = { "OnRocketLaunched", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, OnRocketLaunched), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeRocketLaunchedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRocketLaunched_MetaData), NewProp_OnRocketLaunched_MetaData) }; // f822e4fe54d8fdd480ac3b2ecfb04f3783e77915
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnRocketImpacted = { "OnRocketImpacted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, OnRocketImpacted), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeRocketImpactedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRocketImpacted_MetaData), NewProp_OnRocketImpacted_MetaData) }; // 80b04fba5c3997c7201597a543b83f818df3cc72
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnGrenadeLaunched = { "OnGrenadeLaunched", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, OnGrenadeLaunched), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeGrenadeLaunchedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGrenadeLaunched_MetaData), NewProp_OnGrenadeLaunched_MetaData) }; // 700be6a21c9d8c0331a5e60b8090f100f5fef4e5
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnGrenadeBounced = { "OnGrenadeBounced", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, OnGrenadeBounced), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeGrenadeBouncedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGrenadeBounced_MetaData), NewProp_OnGrenadeBounced_MetaData) }; // 279c210fd5ddca76c5a17d78eb4540bf53bcfd51
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnGrenadeExploded = { "OnGrenadeExploded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, OnGrenadeExploded), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeGrenadeExplodedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGrenadeExploded_MetaData), NewProp_OnGrenadeExploded_MetaData) }; // b05fa93502d67d0f73d66c9a5640bf643c8e289c
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnReloadStarted = { "OnReloadStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, OnReloadStarted), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeReloadSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnReloadStarted_MetaData), NewProp_OnReloadStarted_MetaData) }; // 87e2f88bbde94b3c70e3219f948a1bfdb4f1f497
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnReloadFinished = { "OnReloadFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, OnReloadFinished), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeReloadSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnReloadFinished_MetaData), NewProp_OnReloadFinished_MetaData) }; // 87e2f88bbde94b3c70e3219f948a1bfdb4f1f497
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, OnHealthChanged), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeHealthChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHealthChanged_MetaData), NewProp_OnHealthChanged_MetaData) }; // 9acbb4fe658eff1a8946b6dfa600817140308844
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnDeath = { "OnDeath", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, OnDeath), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeDeathSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDeath_MetaData), NewProp_OnDeath_MetaData) }; // 5966d604a8b412245f56c94f71c47e5b22e738b8
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnRagdollStarted = { "OnRagdollStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, OnRagdollStarted), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeSimpleSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRagdollStarted_MetaData), NewProp_OnRagdollStarted_MetaData) }; // a8f4fb926a58c2dca9dd23d3539f783ef0cecd4a
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnRespawned = { "OnRespawned", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, OnRespawned), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeSimpleSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRespawned_MetaData), NewProp_OnRespawned_MetaData) }; // a8f4fb926a58c2dca9dd23d3539f783ef0cecd4a
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnGroundBloodSpawned = { "OnGroundBloodSpawned", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, OnGroundBloodSpawned), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeGroundBloodSpawnedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGroundBloodSpawned_MetaData), NewProp_OnGroundBloodSpawned_MetaData) }; // 78c98b2b66667072b72d9f5d6871c3cc6a2e9877
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnPlayerWeaponChanged = { "OnPlayerWeaponChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, OnPlayerWeaponChanged), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadePlayerWeaponChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayerWeaponChanged_MetaData), NewProp_OnPlayerWeaponChanged_MetaData) }; // 920f756fc1f27a5399e1ac2d0916bb23e511572f
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnPlayerAmmoChanged = { "OnPlayerAmmoChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, OnPlayerAmmoChanged), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadePlayerAmmoChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayerAmmoChanged_MetaData), NewProp_OnPlayerAmmoChanged_MetaData) }; // d248f52a1338c632089142a021c9ba0d79139bcc
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnPlayerAimChanged = { "OnPlayerAimChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, OnPlayerAimChanged), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadePlayerAimChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayerAimChanged_MetaData), NewProp_OnPlayerAimChanged_MetaData) }; // eb22dc63ced9e39f5751b41d159fcb392bfb96e5
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnPlayerLockOnTargetChanged = { "OnPlayerLockOnTargetChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, OnPlayerLockOnTargetChanged), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadePlayerLockOnTargetChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayerLockOnTargetChanged_MetaData), NewProp_OnPlayerLockOnTargetChanged_MetaData) }; // 852e83c1aaafd1d6d2a310202aada05e7286b992
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnPlayerLockOnStateChanged = { "OnPlayerLockOnStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, OnPlayerLockOnStateChanged), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadePlayerLockOnStateChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayerLockOnStateChanged_MetaData), NewProp_OnPlayerLockOnStateChanged_MetaData) }; // 2c270548a2a81880313dda07af7569cf8baeb2a4
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnRespawnTransformSelected = { "OnRespawnTransformSelected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, OnRespawnTransformSelected), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeRespawnTransformSelectedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRespawnTransformSelected_MetaData), NewProp_OnRespawnTransformSelected_MetaData) }; // ccff613ffa1cf62a48e6c1aa91c75120c46355e5
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnCombatMoveRequested = { "OnCombatMoveRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, OnCombatMoveRequested), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeCombatMoveSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCombatMoveRequested_MetaData), NewProp_OnCombatMoveRequested_MetaData) }; // 99bb38ef9d89ba601197072e0ca01dc178fd4843
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnSplineMovementPauseRequested = { "OnSplineMovementPauseRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, OnSplineMovementPauseRequested), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeSplinePauseSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSplineMovementPauseRequested_MetaData), NewProp_OnSplineMovementPauseRequested_MetaData) }; // 2722e7b1a93d2ab7e5f275dbfd9551c8dd563d43
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnSplineMovementResumeRequested = { "OnSplineMovementResumeRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, OnSplineMovementResumeRequested), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeSplineResumeSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSplineMovementResumeRequested_MetaData), NewProp_OnSplineMovementResumeRequested_MetaData) }; // fc1fbdce5c178fc997579e6591e3bed9661e7013
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, OwnerCharacter), Z_Construct_UClass_ACharacter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerCharacter_MetaData), NewProp_OwnerCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OwnerMesh = { "OwnerMesh", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, OwnerMesh), Z_Construct_UClass_USkeletalMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerMesh_MetaData), NewProp_OwnerMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OwnerCapsule = { "OwnerCapsule", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, OwnerCapsule), Z_Construct_UClass_UCapsuleComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerCapsule_MetaData), NewProp_OwnerCapsule_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OwnerMovement = { "OwnerMovement", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, OwnerMovement), Z_Construct_UClass_UCharacterMovementComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerMovement_MetaData), NewProp_OwnerMovement_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RuntimeBulletVisualSpawnComponent = { "RuntimeBulletVisualSpawnComponent", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, RuntimeBulletVisualSpawnComponent), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeBulletVisualSpawnComponent_MetaData), NewProp_RuntimeBulletVisualSpawnComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RuntimeRocketLauncherMuzzleComponent = { "RuntimeRocketLauncherMuzzleComponent", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, RuntimeRocketLauncherMuzzleComponent), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeRocketLauncherMuzzleComponent_MetaData), NewProp_RuntimeRocketLauncherMuzzleComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RuntimeGrenadeLauncherMuzzleComponent = { "RuntimeGrenadeLauncherMuzzleComponent", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, RuntimeGrenadeLauncherMuzzleComponent), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeGrenadeLauncherMuzzleComponent_MetaData), NewProp_RuntimeGrenadeLauncherMuzzleComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RuntimePlayerAimCameraComponent = { "RuntimePlayerAimCameraComponent", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, RuntimePlayerAimCameraComponent), Z_Construct_UClass_UCameraComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimePlayerAimCameraComponent_MetaData), NewProp_RuntimePlayerAimCameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PlayerLockOnIndicatorComponent = { "PlayerLockOnIndicatorComponent", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, PlayerLockOnIndicatorComponent), Z_Construct_UClass_UWidgetComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerLockOnIndicatorComponent_MetaData), NewProp_PlayerLockOnIndicatorComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_BulletVisualComponents_Inner = { "BulletVisualComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMeshComponent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_BulletVisualComponents = { "BulletVisualComponents", nullptr, (EPropertyFlags)0x0144008000002008, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, BulletVisualComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletVisualComponents_MetaData), NewProp_BulletVisualComponents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RocketVisualComponents_Inner = { "RocketVisualComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMeshComponent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_RocketVisualComponents = { "RocketVisualComponents", nullptr, (EPropertyFlags)0x0144008000002008, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, RocketVisualComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RocketVisualComponents_MetaData), NewProp_RocketVisualComponents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_GrenadeVisualComponents_Inner = { "GrenadeVisualComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMeshComponent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_GrenadeVisualComponents = { "GrenadeVisualComponents", nullptr, (EPropertyFlags)0x0144008000002008, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeSoldierCombatComponent, GrenadeVisualComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrenadeVisualComponents_MetaData), NewProp_GrenadeVisualComponents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TeamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDifferentNonNeutralTeamsAreEnemies,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAutoCombatEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bPlayerControlledCombat,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayerCombat,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayerInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayerAimPresentation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayerLockOn,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayerAimCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayerAimCameraComponentTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUsePlayerWeaponProfiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayerAutomaticRifleProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayerPistolProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayerRocketLauncherProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InlinePlayerAutomaticRifleSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InlinePlayerPistolSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InlinePlayerRocketLauncherSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRegisterAsCombatTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAutoStartOnBeginPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Targeting,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CombatMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bLockCombatRotationToCurrentTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CombatTargetRotationSpeedDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseWeaponProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WeaponProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InlineWeaponSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HealthAndRespawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CombatVisuals,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BulletVisualSpawnComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BulletVisualSpawnRelativeOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BulletVisualSpawnComponentTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RocketLauncherMuzzleComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RocketLauncherMuzzleRelativeOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RocketLauncherMuzzleComponentTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GrenadeLauncherMuzzleComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GrenadeLauncherMuzzleRelativeOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GrenadeLauncherMuzzleComponentTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsDead,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentMagazineAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActivePlayerWeapon_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActivePlayerWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentAutomaticRifleAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentPistolAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentRocketLauncherAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsPlayerAiming,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayerLockOnTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnTargetChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnCombatStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnCombatEnded,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnShotFired,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnRocketLaunched,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnRocketImpacted,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnGrenadeLaunched,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnGrenadeBounced,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnGrenadeExploded,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnReloadStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnReloadFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnHealthChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnDeath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnRagdollStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnRespawned,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnGroundBloodSpawned,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnPlayerWeaponChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnPlayerAmmoChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnPlayerAimChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnPlayerLockOnTargetChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnPlayerLockOnStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnRespawnTransformSelected,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnCombatMoveRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnSplineMovementPauseRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnSplineMovementResumeRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OwnerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OwnerMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OwnerCapsule,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OwnerMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RuntimeBulletVisualSpawnComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RuntimeRocketLauncherMuzzleComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RuntimeGrenadeLauncherMuzzleComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RuntimePlayerAimCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayerLockOnIndicatorComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BulletVisualComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BulletVisualComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RocketVisualComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RocketVisualComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GrenadeVisualComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GrenadeVisualComponents,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class URenegadeSoldierCombatComponent Property Definitions ***********************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UActorComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URenegadeSoldierCombatComponent,
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
static void URenegadeSoldierCombatComponent_StaticRegisterNativesURenegadeSoldierCombatComponent()
{
	UClass* Class = URenegadeSoldierCombatComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URenegadeSoldierCombatComponent;
UClass* Z_Construct_UClass_URenegadeSoldierCombatComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URenegadeSoldierCombatComponent;
		if (!Z_Registration_Info_UClass_URenegadeSoldierCombatComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RenegadeSoldierCombatComponent"),
				Z_Registration_Info_UClass_URenegadeSoldierCombatComponent.InnerSingleton,
				URenegadeSoldierCombatComponent_StaticRegisterNativesURenegadeSoldierCombatComponent,
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
		return Z_Registration_Info_UClass_URenegadeSoldierCombatComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URenegadeSoldierCombatComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URenegadeSoldierCombatComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URenegadeSoldierCombatComponent.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void URenegadeSoldierCombatComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_TeamId(TEXT("TeamId"));
	static FName Name_bPlayerControlledCombat(TEXT("bPlayerControlledCombat"));
	static FName Name_bLockCombatRotationToCurrentTarget(TEXT("bLockCombatRotationToCurrentTarget"));
	static FName Name_CurrentHealth(TEXT("CurrentHealth"));
	static FName Name_bIsDead(TEXT("bIsDead"));
	static FName Name_CurrentTarget(TEXT("CurrentTarget"));
	static FName Name_CurrentMagazineAmmo(TEXT("CurrentMagazineAmmo"));
	static FName Name_ActivePlayerWeapon(TEXT("ActivePlayerWeapon"));
	static FName Name_CurrentAutomaticRifleAmmo(TEXT("CurrentAutomaticRifleAmmo"));
	static FName Name_CurrentPistolAmmo(TEXT("CurrentPistolAmmo"));
	static FName Name_CurrentRocketLauncherAmmo(TEXT("CurrentRocketLauncherAmmo"));
	static FName Name_bIsPlayerAiming(TEXT("bIsPlayerAiming"));
	const bool bIsValid = true
		&& Name_TeamId == ClassReps[(int32)ENetFields_Private::TeamId].Property->GetFName()
		&& Name_bPlayerControlledCombat == ClassReps[(int32)ENetFields_Private::bPlayerControlledCombat].Property->GetFName()
		&& Name_bLockCombatRotationToCurrentTarget == ClassReps[(int32)ENetFields_Private::bLockCombatRotationToCurrentTarget].Property->GetFName()
		&& Name_CurrentHealth == ClassReps[(int32)ENetFields_Private::CurrentHealth].Property->GetFName()
		&& Name_bIsDead == ClassReps[(int32)ENetFields_Private::bIsDead].Property->GetFName()
		&& Name_CurrentTarget == ClassReps[(int32)ENetFields_Private::CurrentTarget].Property->GetFName()
		&& Name_CurrentMagazineAmmo == ClassReps[(int32)ENetFields_Private::CurrentMagazineAmmo].Property->GetFName()
		&& Name_ActivePlayerWeapon == ClassReps[(int32)ENetFields_Private::ActivePlayerWeapon].Property->GetFName()
		&& Name_CurrentAutomaticRifleAmmo == ClassReps[(int32)ENetFields_Private::CurrentAutomaticRifleAmmo].Property->GetFName()
		&& Name_CurrentPistolAmmo == ClassReps[(int32)ENetFields_Private::CurrentPistolAmmo].Property->GetFName()
		&& Name_CurrentRocketLauncherAmmo == ClassReps[(int32)ENetFields_Private::CurrentRocketLauncherAmmo].Property->GetFName()
		&& Name_bIsPlayerAiming == ClassReps[(int32)ENetFields_Private::bIsPlayerAiming].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in URenegadeSoldierCombatComponent"));
}
#endif
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URenegadeSoldierCombatComponent);
URenegadeSoldierCombatComponent::~URenegadeSoldierCombatComponent() {}
// ********** End Class URenegadeSoldierCombatComponent ********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeSoldierCombatComponent_h__Script_RenegadeSoldierCombat_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URenegadeSoldierCombatComponent, TEXT("URenegadeSoldierCombatComponent"), &Z_Registration_Info_UClass_URenegadeSoldierCombatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URenegadeSoldierCombatComponent), 1432576614U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeSoldierCombatComponent_h__Script_RenegadeSoldierCombat_291be60622b2736072820f3cbfe1d3d9eed7b908{
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
