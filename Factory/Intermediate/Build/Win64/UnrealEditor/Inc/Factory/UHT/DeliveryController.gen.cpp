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
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
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
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "DeliveryController.h" },
		{ "ModuleRelativePath", "DeliveryController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartsPickPos_MetaData[] = {
		{ "Category", "Position" },
		{ "ModuleRelativePath", "DeliveryController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPos_MetaData[] = {
		{ "Category", "Position" },
		{ "ModuleRelativePath", "DeliveryController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkPos_MetaData[] = {
		{ "Category", "Position" },
		{ "ModuleRelativePath", "DeliveryController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkOutPos_MetaData[] = {
		{ "Category", "Position" },
		{ "ModuleRelativePath", "DeliveryController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndPos_MetaData[] = {
		{ "Category", "Position" },
		{ "ModuleRelativePath", "DeliveryController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndOutPos_MetaData[] = {
		{ "Category", "Position" },
		{ "ModuleRelativePath", "DeliveryController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnPos_MetaData[] = {
		{ "Category", "Position" },
		{ "ModuleRelativePath", "DeliveryController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurTargetPos_MetaData[] = {
		{ "Category", "Position" },
		{ "ModuleRelativePath", "DeliveryController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PartsPickPos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorkPos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorkOutPos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndPos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndOutPos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnPos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurTargetPos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADeliveryController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADeliveryController_Statics::NewProp_PartsPickPos = { "PartsPickPos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADeliveryController, PartsPickPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartsPickPos_MetaData), NewProp_PartsPickPos_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADeliveryController_Statics::NewProp_TargetPos = { "TargetPos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADeliveryController, TargetPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPos_MetaData), NewProp_TargetPos_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADeliveryController_Statics::NewProp_WorkPos = { "WorkPos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADeliveryController, WorkPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkPos_MetaData), NewProp_WorkPos_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADeliveryController_Statics::NewProp_WorkOutPos = { "WorkOutPos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADeliveryController, WorkOutPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkOutPos_MetaData), NewProp_WorkOutPos_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADeliveryController_Statics::NewProp_EndPos = { "EndPos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADeliveryController, EndPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndPos_MetaData), NewProp_EndPos_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADeliveryController_Statics::NewProp_EndOutPos = { "EndOutPos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADeliveryController, EndOutPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndOutPos_MetaData), NewProp_EndOutPos_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADeliveryController_Statics::NewProp_ReturnPos = { "ReturnPos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADeliveryController, ReturnPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnPos_MetaData), NewProp_ReturnPos_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADeliveryController_Statics::NewProp_CurTargetPos = { "CurTargetPos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADeliveryController, CurTargetPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurTargetPos_MetaData), NewProp_CurTargetPos_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADeliveryController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeliveryController_Statics::NewProp_PartsPickPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeliveryController_Statics::NewProp_TargetPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeliveryController_Statics::NewProp_WorkPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeliveryController_Statics::NewProp_WorkOutPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeliveryController_Statics::NewProp_EndPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeliveryController_Statics::NewProp_EndOutPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeliveryController_Statics::NewProp_ReturnPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeliveryController_Statics::NewProp_CurTargetPos,
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
ADeliveryController::ADeliveryController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADeliveryController);
ADeliveryController::~ADeliveryController() {}
// ********** End Class ADeliveryController ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_DeliveryController_h__Script_Factory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADeliveryController, ADeliveryController::StaticClass, TEXT("ADeliveryController"), &Z_Registration_Info_UClass_ADeliveryController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADeliveryController), 1810019239U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_DeliveryController_h__Script_Factory_3646085010(TEXT("/Script/Factory"),
	Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_DeliveryController_h__Script_Factory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_DeliveryController_h__Script_Factory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
