// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFactory_init() {}
	FACTORY_API UFunction* Z_Construct_UDelegateFunction_Factory_OnCountChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Factory;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Factory()
	{
		if (!Z_Registration_Info_UPackage__Script_Factory.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Factory_OnCountChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Factory",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x458981B2,
				0x449765B2,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Factory.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Factory.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Factory(Z_Construct_UPackage__Script_Factory, TEXT("/Script/Factory"), Z_Registration_Info_UPackage__Script_Factory, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x458981B2, 0x449765B2));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
