// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RenegadeCombatMovementBridge.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRenegadeCombatMovementBridge() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_URenegadeCombatMovementBridge(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_IRenegadeCombatMovementBridge(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_URenegadeCombatMovementBridge(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_IRenegadeCombatMovementBridge(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Interface URenegadeCombatMovementBridge Function CanCombatTakeMovementControl **
struct RenegadeCombatMovementBridge_eventCanCombatTakeMovementControl_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	RenegadeCombatMovementBridge_eventCanCombatTakeMovementControl_Parms()
		: ReturnValue(false)
	{
	}
};
bool IRenegadeCombatMovementBridge::CanCombatTakeMovementControl() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CanCombatTakeMovementControl instead.");
	RenegadeCombatMovementBridge_eventCanCombatTakeMovementControl_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_URenegadeCombatMovementBridge_CanCombatTakeMovementControl = FName(TEXT("CanCombatTakeMovementControl"));
bool IRenegadeCombatMovementBridge::Execute_CanCombatTakeMovementControl(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(URenegadeCombatMovementBridge::StaticClass()));
	RenegadeCombatMovementBridge_eventCanCombatTakeMovementControl_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_URenegadeCombatMovementBridge_CanCombatTakeMovementControl);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IRenegadeCombatMovementBridge*)(O->GetNativeInterfaceAddress(URenegadeCombatMovementBridge::StaticClass())))
	{
		Parms.ReturnValue = I->CanCombatTakeMovementControl_Implementation();
	}
	return Parms.ReturnValue;
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeCombatMovementBridge_CanCombatTakeMovementControl_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Combat|Spline Bridge" },
		{ "ModuleRelativePath", "Public/RenegadeCombatMovementBridge.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CanCombatTakeMovementControl constinit property declarations **********
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeCombatMovementBridge_eventCanCombatTakeMovementControl_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CanCombatTakeMovementControl constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CanCombatTakeMovementControl Property Definitions *********************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeCombatMovementBridge_eventCanCombatTakeMovementControl_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CanCombatTakeMovementControl Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeCombatMovementBridge, nullptr, "CanCombatTakeMovementControl", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<RenegadeCombatMovementBridge_eventCanCombatTakeMovementControl_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(RenegadeCombatMovementBridge_eventCanCombatTakeMovementControl_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeCombatMovementBridge_CanCombatTakeMovementControl(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(IRenegadeCombatMovementBridge::execCanCombatTakeMovementControl)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanCombatTakeMovementControl_Implementation();
	P_NATIVE_END;
}
// ********** End Interface URenegadeCombatMovementBridge Function CanCombatTakeMovementControl ****

// ********** Begin Interface URenegadeCombatMovementBridge Function CombatMovementInterrupted *****
struct RenegadeCombatMovementBridge_eventCombatMovementInterrupted_Parms
{
	AActor* CombatTarget;
};
void IRenegadeCombatMovementBridge::CombatMovementInterrupted(AActor* CombatTarget)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CombatMovementInterrupted instead.");
}
static FName NAME_URenegadeCombatMovementBridge_CombatMovementInterrupted = FName(TEXT("CombatMovementInterrupted"));
void IRenegadeCombatMovementBridge::Execute_CombatMovementInterrupted(UObject* O, AActor* CombatTarget)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(URenegadeCombatMovementBridge::StaticClass()));
	RenegadeCombatMovementBridge_eventCombatMovementInterrupted_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_URenegadeCombatMovementBridge_CombatMovementInterrupted);
	if (Func)
	{
		Parms.CombatTarget=std::move(CombatTarget);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IRenegadeCombatMovementBridge*)(O->GetNativeInterfaceAddress(URenegadeCombatMovementBridge::StaticClass())))
	{
		I->CombatMovementInterrupted_Implementation(CombatTarget);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeCombatMovementBridge_CombatMovementInterrupted_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Combat|Spline Bridge" },
		{ "ModuleRelativePath", "Public/RenegadeCombatMovementBridge.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CombatMovementInterrupted constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CombatMovementInterrupted constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CombatMovementInterrupted Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CombatTarget = { "CombatTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeCombatMovementBridge_eventCombatMovementInterrupted_Parms, CombatTarget), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CombatTarget,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CombatMovementInterrupted Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeCombatMovementBridge, nullptr, "CombatMovementInterrupted", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<RenegadeCombatMovementBridge_eventCombatMovementInterrupted_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(RenegadeCombatMovementBridge_eventCombatMovementInterrupted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeCombatMovementBridge_CombatMovementInterrupted(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(IRenegadeCombatMovementBridge::execCombatMovementInterrupted)
{
	P_GET_OBJECT(AActor,Z_Param_CombatTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CombatMovementInterrupted_Implementation(Z_Param_CombatTarget);
	P_NATIVE_END;
}
// ********** End Interface URenegadeCombatMovementBridge Function CombatMovementInterrupted *******

// ********** Begin Interface URenegadeCombatMovementBridge Function CombatMovementResumed *********
struct RenegadeCombatMovementBridge_eventCombatMovementResumed_Parms
{
	FVector ResumeFromWorldLocation;
};
void IRenegadeCombatMovementBridge::CombatMovementResumed(FVector ResumeFromWorldLocation)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CombatMovementResumed instead.");
}
static FName NAME_URenegadeCombatMovementBridge_CombatMovementResumed = FName(TEXT("CombatMovementResumed"));
void IRenegadeCombatMovementBridge::Execute_CombatMovementResumed(UObject* O, FVector ResumeFromWorldLocation)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(URenegadeCombatMovementBridge::StaticClass()));
	RenegadeCombatMovementBridge_eventCombatMovementResumed_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_URenegadeCombatMovementBridge_CombatMovementResumed);
	if (Func)
	{
		Parms.ResumeFromWorldLocation=std::move(ResumeFromWorldLocation);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IRenegadeCombatMovementBridge*)(O->GetNativeInterfaceAddress(URenegadeCombatMovementBridge::StaticClass())))
	{
		I->CombatMovementResumed_Implementation(ResumeFromWorldLocation);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URenegadeCombatMovementBridge_CombatMovementResumed_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Combat|Spline Bridge" },
		{ "ModuleRelativePath", "Public/RenegadeCombatMovementBridge.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CombatMovementResumed constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResumeFromWorldLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CombatMovementResumed constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CombatMovementResumed Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ResumeFromWorldLocation = { "ResumeFromWorldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeCombatMovementBridge_eventCombatMovementResumed_Parms, ResumeFromWorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ResumeFromWorldLocation,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CombatMovementResumed Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URenegadeCombatMovementBridge, nullptr, "CombatMovementResumed", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<RenegadeCombatMovementBridge_eventCombatMovementResumed_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(RenegadeCombatMovementBridge_eventCombatMovementResumed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenegadeCombatMovementBridge_CombatMovementResumed(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(IRenegadeCombatMovementBridge::execCombatMovementResumed)
{
	P_GET_STRUCT(FVector,Z_Param_ResumeFromWorldLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CombatMovementResumed_Implementation(Z_Param_ResumeFromWorldLocation);
	P_NATIVE_END;
}
// ********** End Interface URenegadeCombatMovementBridge Function CombatMovementResumed ***********

// ********** Begin Interface URenegadeCombatMovementBridge ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URenegadeCombatMovementBridge_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RenegadeCombatMovementBridge.h" },
	};
#endif // WITH_METADATA

// ********** Begin Interface URenegadeCombatMovementBridge constinit property declarations ********
// ********** End Interface URenegadeCombatMovementBridge constinit property declarations **********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CanCombatTakeMovementControl"), .Pointer = &IRenegadeCombatMovementBridge::execCanCombatTakeMovementControl },
		{ .NameUTF8 = UTF8TEXT("CombatMovementInterrupted"), .Pointer = &IRenegadeCombatMovementBridge::execCombatMovementInterrupted },
		{ .NameUTF8 = UTF8TEXT("CombatMovementResumed"), .Pointer = &IRenegadeCombatMovementBridge::execCombatMovementResumed },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URenegadeCombatMovementBridge_CanCombatTakeMovementControl, "CanCombatTakeMovementControl" }, // 01e60fca7935e234fb9edda567ec7fc8e06658cf
		{ &Z_Construct_UFunction_URenegadeCombatMovementBridge_CombatMovementInterrupted, "CombatMovementInterrupted" }, // a220fdb24164368fd6cf4ea57dd83752715a71ba
		{ &Z_Construct_UFunction_URenegadeCombatMovementBridge_CombatMovementResumed, "CombatMovementResumed" }, // b727c4f7e3a400d36b2686c8865f2d08aa34bd5f
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IRenegadeCombatMovementBridge>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UInterface,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URenegadeCombatMovementBridge,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void URenegadeCombatMovementBridge_StaticRegisterNativesURenegadeCombatMovementBridge()
{
	UClass* Class = URenegadeCombatMovementBridge::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URenegadeCombatMovementBridge;
UClass* Z_Construct_UClass_URenegadeCombatMovementBridge(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URenegadeCombatMovementBridge;
		if (!Z_Registration_Info_UClass_URenegadeCombatMovementBridge.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RenegadeCombatMovementBridge"),
				Z_Registration_Info_UClass_URenegadeCombatMovementBridge.InnerSingleton,
				URenegadeCombatMovementBridge_StaticRegisterNativesURenegadeCombatMovementBridge,
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
		return Z_Registration_Info_UClass_URenegadeCombatMovementBridge.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URenegadeCombatMovementBridge.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URenegadeCombatMovementBridge.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URenegadeCombatMovementBridge.OuterSingleton;
}
#undef UHT_STATICS
URenegadeCombatMovementBridge::URenegadeCombatMovementBridge(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URenegadeCombatMovementBridge);
// ********** End Interface URenegadeCombatMovementBridge ******************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeCombatMovementBridge_h__Script_RenegadeSoldierCombat_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URenegadeCombatMovementBridge, TEXT("URenegadeCombatMovementBridge"), &Z_Registration_Info_UClass_URenegadeCombatMovementBridge, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URenegadeCombatMovementBridge), 2583342018U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeCombatMovementBridge_h__Script_RenegadeSoldierCombat_4ebc12ce13be65b1e00e84eef737979ffe65ce8b{
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
