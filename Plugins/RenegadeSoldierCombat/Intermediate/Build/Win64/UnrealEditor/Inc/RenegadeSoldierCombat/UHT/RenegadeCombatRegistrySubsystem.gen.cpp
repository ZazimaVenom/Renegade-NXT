// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RenegadeCombatRegistrySubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRenegadeCombatRegistrySubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RenegadeSoldierCombat(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_URenegadeCombatRegistrySubsystem(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_URenegadeBuildingCombatComponent(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_URenegadeCombatRegistrySubsystem(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_URenegadeHarvesterCombatComponent(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_URenegadeSoldierCombatComponent(ETypeConstructPhase);
RENEGADESOLDIERCOMBAT_API UClass* Z_Construct_UClass_ARenegadeTeamCreditsManager(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class URenegadeCombatRegistrySubsystem *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URenegadeCombatRegistrySubsystem_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "RenegadeCombatRegistrySubsystem.h" },
		{ "ModuleRelativePath", "Public/RenegadeCombatRegistrySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredCombatants_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeCombatRegistrySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredBuildings_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeCombatRegistrySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredHarvesters_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeCombatRegistrySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedTeamCreditsManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenegadeCombatRegistrySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveBuildingEvaAudio_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RenegadeCombatRegistrySubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URenegadeCombatRegistrySubsystem constinit property declarations *********
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_RegisteredCombatants_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisteredCombatants;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_RegisteredBuildings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisteredBuildings;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_RegisteredHarvesters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisteredHarvesters;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedTeamCreditsManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveBuildingEvaAudio;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URenegadeCombatRegistrySubsystem constinit property declarations ***********
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenegadeCombatRegistrySubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class URenegadeCombatRegistrySubsystem Property Definitions ********************
const UECodeGen_Private::FWeakObjectPropertyParams UHT_STATICS::NewProp_RegisteredCombatants_Inner = { "RegisteredCombatants", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, nullptr, nullptr, 1, 0, Z_Construct_UClass_URenegadeSoldierCombatComponent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_RegisteredCombatants = { "RegisteredCombatants", nullptr, (EPropertyFlags)0x0044008000002008, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeCombatRegistrySubsystem, RegisteredCombatants), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredCombatants_MetaData), NewProp_RegisteredCombatants_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams UHT_STATICS::NewProp_RegisteredBuildings_Inner = { "RegisteredBuildings", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, nullptr, nullptr, 1, 0, Z_Construct_UClass_URenegadeBuildingCombatComponent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_RegisteredBuildings = { "RegisteredBuildings", nullptr, (EPropertyFlags)0x0044008000002008, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeCombatRegistrySubsystem, RegisteredBuildings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredBuildings_MetaData), NewProp_RegisteredBuildings_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams UHT_STATICS::NewProp_RegisteredHarvesters_Inner = { "RegisteredHarvesters", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, nullptr, nullptr, 1, 0, Z_Construct_UClass_URenegadeHarvesterCombatComponent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_RegisteredHarvesters = { "RegisteredHarvesters", nullptr, (EPropertyFlags)0x0044008000002008, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeCombatRegistrySubsystem, RegisteredHarvesters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredHarvesters_MetaData), NewProp_RegisteredHarvesters_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CachedTeamCreditsManager = { "CachedTeamCreditsManager", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeCombatRegistrySubsystem, CachedTeamCreditsManager), Z_Construct_UClass_ARenegadeTeamCreditsManager, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedTeamCreditsManager_MetaData), NewProp_CachedTeamCreditsManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ActiveBuildingEvaAudio = { "ActiveBuildingEvaAudio", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URenegadeCombatRegistrySubsystem, ActiveBuildingEvaAudio), Z_Construct_UClass_UAudioComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveBuildingEvaAudio_MetaData), NewProp_ActiveBuildingEvaAudio_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RegisteredCombatants_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RegisteredCombatants,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RegisteredBuildings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RegisteredBuildings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RegisteredHarvesters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RegisteredHarvesters,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CachedTeamCreditsManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveBuildingEvaAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class URenegadeCombatRegistrySubsystem Property Definitions **********************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UWorldSubsystem,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RenegadeSoldierCombat,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URenegadeCombatRegistrySubsystem,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_URenegadeCombatRegistrySubsystem;
UClass* Z_Construct_UClass_URenegadeCombatRegistrySubsystem(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URenegadeCombatRegistrySubsystem;
		if (!Z_Registration_Info_UClass_URenegadeCombatRegistrySubsystem.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RenegadeCombatRegistrySubsystem"),
				Z_Registration_Info_UClass_URenegadeCombatRegistrySubsystem.InnerSingleton,
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
		return Z_Registration_Info_UClass_URenegadeCombatRegistrySubsystem.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URenegadeCombatRegistrySubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URenegadeCombatRegistrySubsystem.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URenegadeCombatRegistrySubsystem.OuterSingleton;
}
#undef UHT_STATICS
URenegadeCombatRegistrySubsystem::URenegadeCombatRegistrySubsystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URenegadeCombatRegistrySubsystem);
URenegadeCombatRegistrySubsystem::~URenegadeCombatRegistrySubsystem() {}
// ********** End Class URenegadeCombatRegistrySubsystem *******************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeCombatRegistrySubsystem_h__Script_RenegadeSoldierCombat_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URenegadeCombatRegistrySubsystem, TEXT("URenegadeCombatRegistrySubsystem"), &Z_Registration_Info_UClass_URenegadeCombatRegistrySubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URenegadeCombatRegistrySubsystem), 2570273306U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Zer_Documents_Unreal_Projects_Renegade_NXT_Plugins_RenegadeSoldierCombat_Source_RenegadeSoldierCombat_Public_RenegadeCombatRegistrySubsystem_h__Script_RenegadeSoldierCombat_8d23bb887a2c8077132a175607f9c9b68f0cd1de{
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
