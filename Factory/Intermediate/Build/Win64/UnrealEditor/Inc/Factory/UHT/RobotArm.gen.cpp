// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factory/RobotArm.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRobotArm() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
FACTORY_API UClass* Z_Construct_UClass_ARobotArm();
FACTORY_API UClass* Z_Construct_UClass_ARobotArm_NoRegister();
UPackage* Z_Construct_UPackage__Script_Factory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ARobotArm ****************************************************************
void ARobotArm::StaticRegisterNativesARobotArm()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ARobotArm;
UClass* ARobotArm::GetPrivateStaticClass()
{
	using TClass = ARobotArm;
	if (!Z_Registration_Info_UClass_ARobotArm.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RobotArm"),
			Z_Registration_Info_UClass_ARobotArm.InnerSingleton,
			StaticRegisterNativesARobotArm,
			sizeof(TClass),
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
	return Z_Registration_Info_UClass_ARobotArm.InnerSingleton;
}
UClass* Z_Construct_UClass_ARobotArm_NoRegister()
{
	return ARobotArm::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARobotArm_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RobotArm.h" },
		{ "ModuleRelativePath", "RobotArm.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARobotArm>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ARobotArm_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Factory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARobotArm_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARobotArm_Statics::ClassParams = {
	&ARobotArm::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARobotArm_Statics::Class_MetaDataParams), Z_Construct_UClass_ARobotArm_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARobotArm()
{
	if (!Z_Registration_Info_UClass_ARobotArm.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARobotArm.OuterSingleton, Z_Construct_UClass_ARobotArm_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARobotArm.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARobotArm);
ARobotArm::~ARobotArm() {}
// ********** End Class ARobotArm ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_RobotArm_h__Script_Factory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARobotArm, ARobotArm::StaticClass, TEXT("ARobotArm"), &Z_Registration_Info_UClass_ARobotArm, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARobotArm), 3411803376U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_RobotArm_h__Script_Factory_2531953475(TEXT("/Script/Factory"),
	Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_RobotArm_h__Script_Factory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_RobotArm_h__Script_Factory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
