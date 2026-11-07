// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RenegadeHarvesterWreck.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRenegadeHarvesterWreck() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USceneComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent(ETypeConstructPhase);
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_ARenegadeHarvesterWreck(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_ARenegadeHarvesterWreck(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class ARenegadeHarvesterWreck **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_ARenegadeHarvesterWreck_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Replicated lightweight Harvester wreck that persists independently of the respawned vehicle. */" },
#endif
		{ "IncludePath", "RenegadeHarvesterWreck.h" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterWreck.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replicated lightweight Harvester wreck that persists independently of the respawned vehicle." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WreckRoot_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester Wreck" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterWreck.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WreckStaticMeshComponent_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester Wreck" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterWreck.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WreckSkeletalMeshComponent_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester Wreck" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterWreck.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WreckStaticMesh_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester Wreck" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterWreck.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WreckSkeletalMesh_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester Wreck" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterWreck.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WreckRelativeLocation_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester Wreck" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterWreck.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WreckRelativeRotation_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester Wreck" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterWreck.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WreckScale_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester Wreck" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterWreck.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableWreckCollision_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester Wreck" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterWreck.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WreckCollisionProfileName_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester Wreck" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterWreck.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmokeCascade_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester Wreck|Smoke" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterWreck.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmokeNiagara_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester Wreck|Smoke" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterWreck.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmokeRelativeLocation_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester Wreck|Smoke" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterWreck.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CleanupSeconds_MetaData[] = {
		{ "Category", "Renegade NXT|Harvester Wreck" },
		{ "ModuleRelativePath", "Public/RenegadeHarvesterWreck.h" },
		{ "Units", "s" },
	};
#endif // WITH_METADATA

// ********** Begin Class ARenegadeHarvesterWreck constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WreckRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WreckStaticMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WreckSkeletalMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WreckStaticMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WreckSkeletalMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WreckRelativeLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WreckRelativeRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WreckScale;
	static void NewProp_bEnableWreckCollision_SetBit(void* Obj)
	{
		((ARenegadeHarvesterWreck*)Obj)->bEnableWreckCollision = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableWreckCollision;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WreckCollisionProfileName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SmokeCascade;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SmokeNiagara;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SmokeRelativeLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CleanupSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ARenegadeHarvesterWreck constinit property declarations ********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARenegadeHarvesterWreck>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class ARenegadeHarvesterWreck Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WreckRoot = { "WreckRoot", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ARenegadeHarvesterWreck, WreckRoot), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WreckRoot_MetaData), NewProp_WreckRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WreckStaticMeshComponent = { "WreckStaticMeshComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ARenegadeHarvesterWreck, WreckStaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WreckStaticMeshComponent_MetaData), NewProp_WreckStaticMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WreckSkeletalMeshComponent = { "WreckSkeletalMeshComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ARenegadeHarvesterWreck, WreckSkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WreckSkeletalMeshComponent_MetaData), NewProp_WreckSkeletalMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WreckStaticMesh = { "WreckStaticMesh", nullptr, (EPropertyFlags)0x0114000000000034, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ARenegadeHarvesterWreck, WreckStaticMesh), Z_Construct_UClass_UStaticMesh, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WreckStaticMesh_MetaData), NewProp_WreckStaticMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WreckSkeletalMesh = { "WreckSkeletalMesh", nullptr, (EPropertyFlags)0x0114000000000034, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ARenegadeHarvesterWreck, WreckSkeletalMesh), Z_Construct_UClass_USkeletalMesh, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WreckSkeletalMesh_MetaData), NewProp_WreckSkeletalMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WreckRelativeLocation = { "WreckRelativeLocation", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(ARenegadeHarvesterWreck, WreckRelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WreckRelativeLocation_MetaData), NewProp_WreckRelativeLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WreckRelativeRotation = { "WreckRelativeRotation", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(ARenegadeHarvesterWreck, WreckRelativeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WreckRelativeRotation_MetaData), NewProp_WreckRelativeRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WreckScale = { "WreckScale", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(ARenegadeHarvesterWreck, WreckScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WreckScale_MetaData), NewProp_WreckScale_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableWreckCollision = { "bEnableWreckCollision", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ARenegadeHarvesterWreck), &UHT_STATICS::NewProp_bEnableWreckCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableWreckCollision_MetaData), NewProp_bEnableWreckCollision_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_WreckCollisionProfileName = { "WreckCollisionProfileName", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(ARenegadeHarvesterWreck, WreckCollisionProfileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WreckCollisionProfileName_MetaData), NewProp_WreckCollisionProfileName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SmokeCascade = { "SmokeCascade", nullptr, (EPropertyFlags)0x0114000000000034, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ARenegadeHarvesterWreck, SmokeCascade), Z_Construct_UClass_UParticleSystem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmokeCascade_MetaData), NewProp_SmokeCascade_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SmokeNiagara = { "SmokeNiagara", nullptr, (EPropertyFlags)0x0114000000000034, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ARenegadeHarvesterWreck, SmokeNiagara), Z_Construct_UClass_UNiagaraSystem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmokeNiagara_MetaData), NewProp_SmokeNiagara_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SmokeRelativeLocation = { "SmokeRelativeLocation", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(ARenegadeHarvesterWreck, SmokeRelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmokeRelativeLocation_MetaData), NewProp_SmokeRelativeLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CleanupSeconds = { "CleanupSeconds", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(ARenegadeHarvesterWreck, CleanupSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CleanupSeconds_MetaData), NewProp_CleanupSeconds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WreckRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WreckStaticMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WreckSkeletalMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WreckStaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WreckSkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WreckRelativeLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WreckRelativeRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WreckScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableWreckCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WreckCollisionProfileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SmokeCascade,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SmokeNiagara,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SmokeRelativeLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CleanupSeconds,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class ARenegadeHarvesterWreck Property Definitions *******************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AActor,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_ARenegadeHarvesterWreck,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_ARenegadeHarvesterWreck;
UClass* Z_Construct_UClass_ARenegadeHarvesterWreck(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = ARenegadeHarvesterWreck;
		if (!Z_Registration_Info_UClass_ARenegadeHarvesterWreck.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RenegadeHarvesterWreck"),
				Z_Registration_Info_UClass_ARenegadeHarvesterWreck.InnerSingleton,
				nullptr,
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
		return Z_Registration_Info_UClass_ARenegadeHarvesterWreck.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_ARenegadeHarvesterWreck.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARenegadeHarvesterWreck.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_ARenegadeHarvesterWreck.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void ARenegadeHarvesterWreck::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_WreckStaticMesh(TEXT("WreckStaticMesh"));
	static FName Name_WreckSkeletalMesh(TEXT("WreckSkeletalMesh"));
	static FName Name_WreckRelativeLocation(TEXT("WreckRelativeLocation"));
	static FName Name_WreckRelativeRotation(TEXT("WreckRelativeRotation"));
	static FName Name_WreckScale(TEXT("WreckScale"));
	static FName Name_bEnableWreckCollision(TEXT("bEnableWreckCollision"));
	static FName Name_WreckCollisionProfileName(TEXT("WreckCollisionProfileName"));
	static FName Name_SmokeCascade(TEXT("SmokeCascade"));
	static FName Name_SmokeNiagara(TEXT("SmokeNiagara"));
	static FName Name_SmokeRelativeLocation(TEXT("SmokeRelativeLocation"));
	static FName Name_CleanupSeconds(TEXT("CleanupSeconds"));
	const bool bIsValid = true
		&& Name_WreckStaticMesh == ClassReps[(int32)ENetFields_Private::WreckStaticMesh].Property->GetFName()
		&& Name_WreckSkeletalMesh == ClassReps[(int32)ENetFields_Private::WreckSkeletalMesh].Property->GetFName()
		&& Name_WreckRelativeLocation == ClassReps[(int32)ENetFields_Private::WreckRelativeLocation].Property->GetFName()
		&& Name_WreckRelativeRotation == ClassReps[(int32)ENetFields_Private::WreckRelativeRotation].Property->GetFName()
		&& Name_WreckScale == ClassReps[(int32)ENetFields_Private::WreckScale].Property->GetFName()
		&& Name_bEnableWreckCollision == ClassReps[(int32)ENetFields_Private::bEnableWreckCollision].Property->GetFName()
		&& Name_WreckCollisionProfileName == ClassReps[(int32)ENetFields_Private::WreckCollisionProfileName].Property->GetFName()
		&& Name_SmokeCascade == ClassReps[(int32)ENetFields_Private::SmokeCascade].Property->GetFName()
		&& Name_SmokeNiagara == ClassReps[(int32)ENetFields_Private::SmokeNiagara].Property->GetFName()
		&& Name_SmokeRelativeLocation == ClassReps[(int32)ENetFields_Private::SmokeRelativeLocation].Property->GetFName()
		&& Name_CleanupSeconds == ClassReps[(int32)ENetFields_Private::CleanupSeconds].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ARenegadeHarvesterWreck"));
}
#endif
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ARenegadeHarvesterWreck);
ARenegadeHarvesterWreck::~ARenegadeHarvesterWreck() {}
// ********** End Class ARenegadeHarvesterWreck ****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeHarvesterWreck_h__Script_RenegadeSoldierCombat_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARenegadeHarvesterWreck, TEXT("ARenegadeHarvesterWreck"), &Z_Registration_Info_UClass_ARenegadeHarvesterWreck, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARenegadeHarvesterWreck), 649696472U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeHarvesterWreck_h__Script_RenegadeSoldierCombat_bdc3d7977a64bbc4f7ac62fc43345aed6aa93acc{
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
