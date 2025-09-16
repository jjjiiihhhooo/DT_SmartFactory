// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factory/Sell.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSell() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
FACTORY_API UClass* Z_Construct_UClass_ADeliveryController_NoRegister();
FACTORY_API UClass* Z_Construct_UClass_ARobotArm_NoRegister();
FACTORY_API UClass* Z_Construct_UClass_ASell();
FACTORY_API UClass* Z_Construct_UClass_ASell_NoRegister();
UPackage* Z_Construct_UPackage__Script_Factory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASell ********************************************************************
void ASell::StaticRegisterNativesASell()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASell;
UClass* ASell::GetPrivateStaticClass()
{
	using TClass = ASell;
	if (!Z_Registration_Info_UClass_ASell.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Sell"),
			Z_Registration_Info_UClass_ASell.InnerSingleton,
			StaticRegisterNativesASell,
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
	return Z_Registration_Info_UClass_ASell.InnerSingleton;
}
UClass* Z_Construct_UClass_ASell_NoRegister()
{
	return ASell::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASell_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Sell.h" },
		{ "ModuleRelativePath", "Sell.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetSceneComp_MetaData[] = {
		{ "Category", "Sell" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Sell.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkSceneComp_MetaData[] = {
		{ "Category", "Sell" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Sell.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutSceneComp_MetaData[] = {
		{ "Category", "Sell" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Sell.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[] = {
		{ "Category", "Sell" },
		{ "ModuleRelativePath", "Sell.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWorking_MetaData[] = {
		{ "Category", "Sell" },
		{ "ModuleRelativePath", "Sell.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RobotArm_MetaData[] = {
		{ "Category", "Sell" },
		{ "ModuleRelativePath", "Sell.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetDelivery_MetaData[] = {
		{ "Category", "Sell" },
		{ "ModuleRelativePath", "Sell.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetSceneComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorkSceneComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutSceneComp;
	static void NewProp_bActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
	static void NewProp_bWorking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorking;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RobotArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetDelivery;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASell>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASell_Statics::NewProp_TargetSceneComp = { "TargetSceneComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASell, TargetSceneComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetSceneComp_MetaData), NewProp_TargetSceneComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASell_Statics::NewProp_WorkSceneComp = { "WorkSceneComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASell, WorkSceneComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkSceneComp_MetaData), NewProp_WorkSceneComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASell_Statics::NewProp_OutSceneComp = { "OutSceneComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASell, OutSceneComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutSceneComp_MetaData), NewProp_OutSceneComp_MetaData) };
void Z_Construct_UClass_ASell_Statics::NewProp_bActive_SetBit(void* Obj)
{
	((ASell*)Obj)->bActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASell_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASell), &Z_Construct_UClass_ASell_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bActive_MetaData), NewProp_bActive_MetaData) };
void Z_Construct_UClass_ASell_Statics::NewProp_bWorking_SetBit(void* Obj)
{
	((ASell*)Obj)->bWorking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASell_Statics::NewProp_bWorking = { "bWorking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASell), &Z_Construct_UClass_ASell_Statics::NewProp_bWorking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWorking_MetaData), NewProp_bWorking_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASell_Statics::NewProp_RobotArm = { "RobotArm", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASell, RobotArm), Z_Construct_UClass_ARobotArm_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RobotArm_MetaData), NewProp_RobotArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASell_Statics::NewProp_TargetDelivery = { "TargetDelivery", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASell, TargetDelivery), Z_Construct_UClass_ADeliveryController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetDelivery_MetaData), NewProp_TargetDelivery_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASell_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASell_Statics::NewProp_TargetSceneComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASell_Statics::NewProp_WorkSceneComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASell_Statics::NewProp_OutSceneComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASell_Statics::NewProp_bActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASell_Statics::NewProp_bWorking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASell_Statics::NewProp_RobotArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASell_Statics::NewProp_TargetDelivery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASell_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASell_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Factory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASell_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASell_Statics::ClassParams = {
	&ASell::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASell_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASell_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASell_Statics::Class_MetaDataParams), Z_Construct_UClass_ASell_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASell()
{
	if (!Z_Registration_Info_UClass_ASell.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASell.OuterSingleton, Z_Construct_UClass_ASell_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASell.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASell);
ASell::~ASell() {}
// ********** End Class ASell **********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Sell_h__Script_Factory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASell, ASell::StaticClass, TEXT("ASell"), &Z_Registration_Info_UClass_ASell, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASell), 3563608398U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Sell_h__Script_Factory_220192701(TEXT("/Script/Factory"),
	Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Sell_h__Script_Factory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Sell_h__Script_Factory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
