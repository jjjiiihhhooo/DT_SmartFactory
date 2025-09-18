// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factory/AIController/DeliveryController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDeliveryController() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
FACTORY_API UClass* Z_Construct_UClass_ADeliveryController();
FACTORY_API UClass* Z_Construct_UClass_ADeliveryController_NoRegister();
FACTORY_API UClass* Z_Construct_UClass_AItemPos_NoRegister();
FACTORY_API UClass* Z_Construct_UClass_ASell_NoRegister();
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
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AIController/DeliveryController.h" },
		{ "ModuleRelativePath", "AIController/DeliveryController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetArray_MetaData[] = {
		{ "Category", "Position" },
		{ "ModuleRelativePath", "AIController/DeliveryController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetItemPos_MetaData[] = {
		{ "ModuleRelativePath", "AIController/DeliveryController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurAttachedItem_MetaData[] = {
		{ "ModuleRelativePath", "AIController/DeliveryController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetSell_MetaData[] = {
		{ "ModuleRelativePath", "AIController/DeliveryController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetItemPos;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurAttachedItem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetSell;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADeliveryController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADeliveryController_Statics::NewProp_TargetArray_Inner = { "TargetArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADeliveryController_Statics::NewProp_TargetArray = { "TargetArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADeliveryController, TargetArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetArray_MetaData), NewProp_TargetArray_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADeliveryController_Statics::NewProp_TargetItemPos = { "TargetItemPos", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADeliveryController, TargetItemPos), Z_Construct_UClass_AItemPos_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetItemPos_MetaData), NewProp_TargetItemPos_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADeliveryController_Statics::NewProp_CurAttachedItem = { "CurAttachedItem", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADeliveryController, CurAttachedItem), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurAttachedItem_MetaData), NewProp_CurAttachedItem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADeliveryController_Statics::NewProp_TargetSell = { "TargetSell", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADeliveryController, TargetSell), Z_Construct_UClass_ASell_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetSell_MetaData), NewProp_TargetSell_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADeliveryController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeliveryController_Statics::NewProp_TargetArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeliveryController_Statics::NewProp_TargetArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeliveryController_Statics::NewProp_TargetItemPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeliveryController_Statics::NewProp_CurAttachedItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeliveryController_Statics::NewProp_TargetSell,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADeliveryController_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_ADeliveryController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADeliveryController_Statics::PropPointers),
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
DEFINE_VTABLE_PTR_HELPER_CTOR(ADeliveryController);
ADeliveryController::~ADeliveryController() {}
// ********** End Class ADeliveryController ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_AIController_DeliveryController_h__Script_Factory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADeliveryController, ADeliveryController::StaticClass, TEXT("ADeliveryController"), &Z_Registration_Info_UClass_ADeliveryController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADeliveryController), 3269747791U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_AIController_DeliveryController_h__Script_Factory_596911117(TEXT("/Script/Factory"),
	Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_AIController_DeliveryController_h__Script_Factory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_AIController_DeliveryController_h__Script_Factory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
