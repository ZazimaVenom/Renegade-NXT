// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RenegadeTeamCreditsManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRenegadeTeamCreditsManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AInfo(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRenegadeTeamCreditEntry(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeTeamCreditsChangedSignature__DelegateSignature(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_ARenegadeTeamCreditsManager(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_ARenegadeTeamCreditsManager(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FRenegadeTeamCreditEntry ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRenegadeTeamCreditEntry_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRenegadeTeamCreditEntry>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRenegadeTeamCreditEntry); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RenegadeTeamCreditsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamId_MetaData[] = {
		{ "Category", "Renegade NXT|Economy" },
		{ "ModuleRelativePath", "Public/RenegadeTeamCreditsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Credits_MetaData[] = {
		{ "Category", "Renegade NXT|Economy" },
		{ "ModuleRelativePath", "Public/RenegadeTeamCreditsManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRenegadeTeamCreditEntry constinit property declarations **********
	static const UECodeGen_Private::FNamePropertyParams NewProp_TeamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Credits;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRenegadeTeamCreditEntry constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenegadeTeamCreditEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRenegadeTeamCreditEntry Property Definitions *********************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_TeamId = { "TeamId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeTeamCreditEntry, TeamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamId_MetaData), NewProp_TeamId_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Credits = { "Credits", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FRenegadeTeamCreditEntry, Credits), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Credits_MetaData), NewProp_Credits_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TeamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Credits,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRenegadeTeamCreditEntry Property Definitions ***********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
	nullptr,
	&NewStructOps,
	"RenegadeTeamCreditEntry",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRenegadeTeamCreditEntry>(),
	alignof(FRenegadeTeamCreditEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRenegadeTeamCreditEntry;
UScriptStruct* Z_Construct_UScriptStruct_FRenegadeTeamCreditEntry(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRenegadeTeamCreditEntry.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRenegadeTeamCreditEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenegadeTeamCreditEntry, (UObject*)Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase::Outer), TEXT("RenegadeTeamCreditEntry"));
		}
		return Z_Registration_Info_UScriptStruct_FRenegadeTeamCreditEntry.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRenegadeTeamCreditEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRenegadeTeamCreditEntry.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRenegadeTeamCreditEntry.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRenegadeTeamCreditEntry ********************************************

// ********** Begin Delegate FRenegadeTeamCreditsChangedSignature **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeTeamCreditsChangedSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RenegadeSoldierCombat_eventRenegadeTeamCreditsChangedSignature_Parms
	{
		FName TeamId;
		int32 PreviousCredits;
		int32 NewCredits;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeTeamCreditsManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRenegadeTeamCreditsChangedSignature constinit property declarations **
	static const UECodeGen_Private::FNamePropertyParams NewProp_TeamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PreviousCredits;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewCredits;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRenegadeTeamCreditsChangedSignature constinit property declarations ****
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRenegadeTeamCreditsChangedSignature Property Definitions *************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_TeamId = { "TeamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeTeamCreditsChangedSignature_Parms, TeamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_PreviousCredits = { "PreviousCredits", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeTeamCreditsChangedSignature_Parms, PreviousCredits), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_NewCredits = { "NewCredits", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RenegadeSoldierCombat_eventRenegadeTeamCreditsChangedSignature_Parms, NewCredits), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TeamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviousCredits,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewCredits,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FRenegadeTeamCreditsChangedSignature Property Definitions ***************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat, nullptr, "RenegadeTeamCreditsChangedSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeTeamCreditsChangedSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RenegadeSoldierCombat_eventRenegadeTeamCreditsChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeTeamCreditsChangedSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FRenegadeTeamCreditsChangedSignature ************************************

// ********** Begin Class ARenegadeTeamCreditsManager Function AddTeamCredits **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ARenegadeTeamCreditsManager_AddTeamCredits_Statics
struct UHT_STATICS
{
	struct RenegadeTeamCreditsManager_eventAddTeamCredits_Parms
	{
		FName TeamId;
		int32 Amount;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Economy" },
		{ "ModuleRelativePath", "Public/RenegadeTeamCreditsManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddTeamCredits constinit property declarations ************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_TeamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddTeamCredits constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddTeamCredits Property Definitions ***********************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_TeamId = { "TeamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeTeamCreditsManager_eventAddTeamCredits_Parms, TeamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeTeamCreditsManager_eventAddTeamCredits_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeTeamCreditsManager_eventAddTeamCredits_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TeamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AddTeamCredits Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ARenegadeTeamCreditsManager, nullptr, "AddTeamCredits", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeTeamCreditsManager_eventAddTeamCredits_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeTeamCreditsManager_eventAddTeamCredits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARenegadeTeamCreditsManager_AddTeamCredits(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ARenegadeTeamCreditsManager::execAddTeamCredits)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_TeamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->AddTeamCredits(Z_Param_TeamId,Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class ARenegadeTeamCreditsManager Function AddTeamCredits ************************

// ********** Begin Class ARenegadeTeamCreditsManager Function GetTeamCredits **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ARenegadeTeamCreditsManager_GetTeamCredits_Statics
struct UHT_STATICS
{
	struct RenegadeTeamCreditsManager_eventGetTeamCredits_Parms
	{
		FName TeamId;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Economy" },
		{ "ModuleRelativePath", "Public/RenegadeTeamCreditsManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTeamCredits constinit property declarations ************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_TeamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTeamCredits constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTeamCredits Property Definitions ***********************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_TeamId = { "TeamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeTeamCreditsManager_eventGetTeamCredits_Parms, TeamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeTeamCreditsManager_eventGetTeamCredits_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TeamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetTeamCredits Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ARenegadeTeamCreditsManager, nullptr, "GetTeamCredits", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeTeamCreditsManager_eventGetTeamCredits_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeTeamCreditsManager_eventGetTeamCredits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARenegadeTeamCreditsManager_GetTeamCredits(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ARenegadeTeamCreditsManager::execGetTeamCredits)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_TeamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetTeamCredits(Z_Param_TeamId);
	P_NATIVE_END;
}
// ********** End Class ARenegadeTeamCreditsManager Function GetTeamCredits ************************

// ********** Begin Class ARenegadeTeamCreditsManager Function OnRep_TeamCredits *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ARenegadeTeamCreditsManager_OnRep_TeamCredits_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeTeamCreditsManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_TeamCredits constinit property declarations *********************
// ********** End Function OnRep_TeamCredits constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ARenegadeTeamCreditsManager, nullptr, "OnRep_TeamCredits", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_ARenegadeTeamCreditsManager_OnRep_TeamCredits(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ARenegadeTeamCreditsManager::execOnRep_TeamCredits)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_TeamCredits();
	P_NATIVE_END;
}
// ********** End Class ARenegadeTeamCreditsManager Function OnRep_TeamCredits *********************

// ********** Begin Class ARenegadeTeamCreditsManager Function ResetAllTeamCredits *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ARenegadeTeamCreditsManager_ResetAllTeamCredits_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Economy" },
		{ "ModuleRelativePath", "Public/RenegadeTeamCreditsManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ResetAllTeamCredits constinit property declarations *******************
// ********** End Function ResetAllTeamCredits constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ARenegadeTeamCreditsManager, nullptr, "ResetAllTeamCredits", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_ARenegadeTeamCreditsManager_ResetAllTeamCredits(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ARenegadeTeamCreditsManager::execResetAllTeamCredits)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetAllTeamCredits();
	P_NATIVE_END;
}
// ********** End Class ARenegadeTeamCreditsManager Function ResetAllTeamCredits *******************

// ********** Begin Class ARenegadeTeamCreditsManager Function SetTeamCredits **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ARenegadeTeamCreditsManager_SetTeamCredits_Statics
struct UHT_STATICS
{
	struct RenegadeTeamCreditsManager_eventSetTeamCredits_Parms
	{
		FName TeamId;
		int32 NewCredits;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Economy" },
		{ "ModuleRelativePath", "Public/RenegadeTeamCreditsManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetTeamCredits constinit property declarations ************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_TeamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewCredits;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetTeamCredits constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetTeamCredits Property Definitions ***********************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_TeamId = { "TeamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeTeamCreditsManager_eventSetTeamCredits_Parms, TeamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_NewCredits = { "NewCredits", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeTeamCreditsManager_eventSetTeamCredits_Parms, NewCredits), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TeamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewCredits,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetTeamCredits Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ARenegadeTeamCreditsManager, nullptr, "SetTeamCredits", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeTeamCreditsManager_eventSetTeamCredits_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeTeamCreditsManager_eventSetTeamCredits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARenegadeTeamCreditsManager_SetTeamCredits(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ARenegadeTeamCreditsManager::execSetTeamCredits)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_TeamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewCredits);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTeamCredits(Z_Param_TeamId,Z_Param_NewCredits);
	P_NATIVE_END;
}
// ********** End Class ARenegadeTeamCreditsManager Function SetTeamCredits ************************

// ********** Begin Class ARenegadeTeamCreditsManager Function TrySpendTeamCredits *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ARenegadeTeamCreditsManager_TrySpendTeamCredits_Statics
struct UHT_STATICS
{
	struct RenegadeTeamCreditsManager_eventTrySpendTeamCredits_Parms
	{
		FName TeamId;
		int32 Amount;
		int32 RemainingCredits;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Renegade NXT|Economy" },
		{ "ModuleRelativePath", "Public/RenegadeTeamCreditsManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function TrySpendTeamCredits constinit property declarations *******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_TeamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RemainingCredits;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenegadeTeamCreditsManager_eventTrySpendTeamCredits_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TrySpendTeamCredits constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TrySpendTeamCredits Property Definitions ******************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_TeamId = { "TeamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeTeamCreditsManager_eventTrySpendTeamCredits_Parms, TeamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeTeamCreditsManager_eventTrySpendTeamCredits_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_RemainingCredits = { "RemainingCredits", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(RenegadeTeamCreditsManager_eventTrySpendTeamCredits_Parms, RemainingCredits), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RenegadeTeamCreditsManager_eventTrySpendTeamCredits_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TeamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RemainingCredits,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function TrySpendTeamCredits Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ARenegadeTeamCreditsManager, nullptr, "TrySpendTeamCredits", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RenegadeTeamCreditsManager_eventTrySpendTeamCredits_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RenegadeTeamCreditsManager_eventTrySpendTeamCredits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARenegadeTeamCreditsManager_TrySpendTeamCredits(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ARenegadeTeamCreditsManager::execTrySpendTeamCredits)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_TeamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_RemainingCredits);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TrySpendTeamCredits(Z_Param_TeamId,Z_Param_Amount,Z_Param_Out_RemainingCredits);
	P_NATIVE_END;
}
// ********** End Class ARenegadeTeamCreditsManager Function TrySpendTeamCredits *******************

// ********** Begin Class ARenegadeTeamCreditsManager **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_ARenegadeTeamCreditsManager_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * One replicated match-wide credit bank. The combat world subsystem creates one automatically\n * on the authority when a Refinery or Harvester first needs the economy.\n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RenegadeTeamCreditsManager.h" },
		{ "ModuleRelativePath", "Public/RenegadeTeamCreditsManager.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "One replicated match-wide credit bank. The combat world subsystem creates one automatically\non the authority when a Refinery or Harvester first needs the economy." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamCredits_MetaData[] = {
		{ "Category", "Renegade NXT|Economy" },
		{ "ModuleRelativePath", "Public/RenegadeTeamCreditsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTeamCreditsChanged_MetaData[] = {
		{ "Category", "Renegade NXT|Economy|Events" },
		{ "ModuleRelativePath", "Public/RenegadeTeamCreditsManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ARenegadeTeamCreditsManager constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_TeamCredits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TeamCredits;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTeamCreditsChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ARenegadeTeamCreditsManager constinit property declarations ****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddTeamCredits"), .Pointer = &ARenegadeTeamCreditsManager::execAddTeamCredits },
		{ .NameUTF8 = UTF8TEXT("GetTeamCredits"), .Pointer = &ARenegadeTeamCreditsManager::execGetTeamCredits },
		{ .NameUTF8 = UTF8TEXT("OnRep_TeamCredits"), .Pointer = &ARenegadeTeamCreditsManager::execOnRep_TeamCredits },
		{ .NameUTF8 = UTF8TEXT("ResetAllTeamCredits"), .Pointer = &ARenegadeTeamCreditsManager::execResetAllTeamCredits },
		{ .NameUTF8 = UTF8TEXT("SetTeamCredits"), .Pointer = &ARenegadeTeamCreditsManager::execSetTeamCredits },
		{ .NameUTF8 = UTF8TEXT("TrySpendTeamCredits"), .Pointer = &ARenegadeTeamCreditsManager::execTrySpendTeamCredits },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARenegadeTeamCreditsManager_AddTeamCredits, "AddTeamCredits" }, // 3589180be0530e64ca75c702357d6b6ae544c536
		{ &Z_Construct_UFunction_ARenegadeTeamCreditsManager_GetTeamCredits, "GetTeamCredits" }, // c8f4ae2d85a4c338f9b6bd8f8efc8ced637d5834
		{ &Z_Construct_UFunction_ARenegadeTeamCreditsManager_OnRep_TeamCredits, "OnRep_TeamCredits" }, // bc819c1cc5c7631522175d4efd1abc820c1177a8
		{ &Z_Construct_UFunction_ARenegadeTeamCreditsManager_ResetAllTeamCredits, "ResetAllTeamCredits" }, // 2f5bc95c4c617dfad65182d034c0dc6e39167d98
		{ &Z_Construct_UFunction_ARenegadeTeamCreditsManager_SetTeamCredits, "SetTeamCredits" }, // ff117558e29255e3ef9721f5216af8269a1820ed
		{ &Z_Construct_UFunction_ARenegadeTeamCreditsManager_TrySpendTeamCredits, "TrySpendTeamCredits" }, // 6fe7bd05146cea61d117bc93d51100fa384316e9
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARenegadeTeamCreditsManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class ARenegadeTeamCreditsManager Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TeamCredits_Inner = { "TeamCredits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRenegadeTeamCreditEntry, METADATA_PARAMS(0, nullptr) }; // 5bdea15c2eb960ac512ba19b5e7be76e2564c438
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_TeamCredits = { "TeamCredits", "OnRep_TeamCredits", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ARenegadeTeamCreditsManager, TeamCredits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamCredits_MetaData), NewProp_TeamCredits_MetaData) }; // 5bdea15c2eb960ac512ba19b5e7be76e2564c438
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnTeamCreditsChanged = { "OnTeamCreditsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(ARenegadeTeamCreditsManager, OnTeamCreditsChanged), Z_Construct_UDelegateFunction_RenegadeSoldierCombat_RenegadeTeamCreditsChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTeamCreditsChanged_MetaData), NewProp_OnTeamCreditsChanged_MetaData) }; // 2970ecfc38edc600276d031a06c73c8bd9859639
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TeamCredits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TeamCredits,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnTeamCreditsChanged,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class ARenegadeTeamCreditsManager Property Definitions ***************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AInfo,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_ARenegadeTeamCreditsManager,
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
static void ARenegadeTeamCreditsManager_StaticRegisterNativesARenegadeTeamCreditsManager()
{
	UClass* Class = ARenegadeTeamCreditsManager::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ARenegadeTeamCreditsManager;
UClass* Z_Construct_UClass_ARenegadeTeamCreditsManager(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = ARenegadeTeamCreditsManager;
		if (!Z_Registration_Info_UClass_ARenegadeTeamCreditsManager.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RenegadeTeamCreditsManager"),
				Z_Registration_Info_UClass_ARenegadeTeamCreditsManager.InnerSingleton,
				ARenegadeTeamCreditsManager_StaticRegisterNativesARenegadeTeamCreditsManager,
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
		return Z_Registration_Info_UClass_ARenegadeTeamCreditsManager.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_ARenegadeTeamCreditsManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARenegadeTeamCreditsManager.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_ARenegadeTeamCreditsManager.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void ARenegadeTeamCreditsManager::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_TeamCredits(TEXT("TeamCredits"));
	const bool bIsValid = true
		&& Name_TeamCredits == ClassReps[(int32)ENetFields_Private::TeamCredits].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ARenegadeTeamCreditsManager"));
}
#endif
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ARenegadeTeamCreditsManager);
ARenegadeTeamCreditsManager::~ARenegadeTeamCreditsManager() {}
// ********** End Class ARenegadeTeamCreditsManager ************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeTeamCreditsManager_h__Script_RenegadeSoldierCombat_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FRenegadeTeamCreditEntry, Z_Construct_UScriptStruct_FRenegadeTeamCreditEntry_Statics::NewStructOps, TEXT("RenegadeTeamCreditEntry"),&Z_Registration_Info_UScriptStruct_FRenegadeTeamCreditEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenegadeTeamCreditEntry), 1541316956U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARenegadeTeamCreditsManager, TEXT("ARenegadeTeamCreditsManager"), &Z_Registration_Info_UClass_ARenegadeTeamCreditsManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARenegadeTeamCreditsManager), 2838781954U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeTeamCreditsManager_h__Script_RenegadeSoldierCombat_19298965c462d6dfc6713e3efaddec9267c427bc{
	TEXT("/Script/RenegadeSoldierCombat"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
