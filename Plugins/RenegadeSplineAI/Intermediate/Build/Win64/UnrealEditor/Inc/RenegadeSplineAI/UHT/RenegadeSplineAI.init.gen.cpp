// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRenegadeSplineAI_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
	RENEGADESPLINEAI_API UFunction* Z_Construct_UDelegateFunction_RenegadeSplineAI_RenegadeCharacterVehicleDriveSignature__DelegateSignature(ETypeConstructPhase);
	RENEGADESPLINEAI_API UFunction* Z_Construct_UDelegateFunction_RenegadeSplineAI_RenegadeSplineExternalControlSignature__DelegateSignature(ETypeConstructPhase);
	RENEGADESPLINEAI_API UFunction* Z_Construct_UDelegateFunction_RenegadeSplineAI_RenegadeSplineMoveFailureSignature__DelegateSignature(ETypeConstructPhase);
	RENEGADESPLINEAI_API UFunction* Z_Construct_UDelegateFunction_RenegadeSplineAI_RenegadeSplinePathSignature__DelegateSignature(ETypeConstructPhase);
	RENEGADESPLINEAI_API UFunction* Z_Construct_UDelegateFunction_RenegadeSplineAI_RenegadeSplineProgressSignature__DelegateSignature(ETypeConstructPhase);
	RENEGADESPLINEAI_API UFunction* Z_Construct_UDelegateFunction_RenegadeSplineAI_RenegadeSplineStateChangedSignature__DelegateSignature(ETypeConstructPhase);
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_RenegadeSplineAI;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_RenegadeSplineAI(ETypeConstructPhase)
	{
		if (!Z_Registration_Info_UPackage__Script_RenegadeSplineAI.OuterSingleton)
		{
		static FTypeConstructFunc* SingletonFuncArray[] = {
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_RenegadeSplineAI_RenegadeCharacterVehicleDriveSignature__DelegateSignature,
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_RenegadeSplineAI_RenegadeSplineExternalControlSignature__DelegateSignature,
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_RenegadeSplineAI_RenegadeSplineMoveFailureSignature__DelegateSignature,
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_RenegadeSplineAI_RenegadeSplinePathSignature__DelegateSignature,
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_RenegadeSplineAI_RenegadeSplineProgressSignature__DelegateSignature,
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_RenegadeSplineAI_RenegadeSplineStateChangedSignature__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/RenegadeSplineAI",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0xDFC65104,
			0x0F324965,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_RenegadeSplineAI.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_RenegadeSplineAI.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_RenegadeSplineAI(Z_Construct_UPackage__Script_RenegadeSplineAI, TEXT("/Script/RenegadeSplineAI"), Z_Registration_Info_UPackage__Script_RenegadeSplineAI, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xDFC65104, 0x0F324965));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
