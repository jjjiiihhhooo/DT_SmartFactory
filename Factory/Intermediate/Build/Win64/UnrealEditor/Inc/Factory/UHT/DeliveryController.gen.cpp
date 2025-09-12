// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factory/DeliveryController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDeliveryController() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
FACTORY_API UClass* Z_Construct_UClass_ADeliveryController();
FACTORY_API UClass* Z_Construct_UClass_ADeliveryController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Factory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ADeliveryController ******************************************************
void ADeliveryController::StaticRegisterNativesADeliveryController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADeliveryController;
UClass* ADeliveryController::GetPrivateStaticClass()
{
	using TClass = ADeliveryController;
	if (!Z_Registration_Info_UClass_ADeliveryController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DeliveryController"),
			Z_Registration_Info_UClass_ADeliveryController.InnerSingleton,
			StaticRegisterNativesADeliveryController,
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
	return Z_Registration_Info_UClass_ADeliveryController.InnerSingleton;
}
UClass* Z_Construct_UClass_ADeliveryController_NoRegister()
{
	return ADeliveryController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADeliveryController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "DeliveryController.h" },
		{ "ModuleRelativePath", "DeliveryController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADeliveryController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADeliveryController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_Factory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADeliveryController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADeliveryController_Statics::ClassParams = {
	&ADeliveryController::StaticClass,
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
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADeliveryController_Statics::Class_MetaDataParams), Z_Construct_UClass_ADeliveryController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADeliveryController()
{
	if (!Z_Registration_Info_UClass_ADeliveryController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADeliveryController.OuterSingleton, Z_Construct_UClass_ADeliveryController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADeliveryController.OuterSingleton;
}
ADeliveryController::ADeliveryController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADeliveryController);
ADeliveryController::~ADeliveryController() {}
// ********** End Class ADeliveryController ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_DeliveryController_h__Script_Factory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADeliveryController, ADeliveryController::StaticClass, TEXT("ADeliveryController"), &Z_Registration_Info_UClass_ADeliveryController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADeliveryController), 1103887021U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_DeliveryController_h__Script_Factory_4213592139(TEXT("/Script/Factory"),
	Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_DeliveryController_h__Script_Factory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_DeliveryController_h__Script_Factory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
