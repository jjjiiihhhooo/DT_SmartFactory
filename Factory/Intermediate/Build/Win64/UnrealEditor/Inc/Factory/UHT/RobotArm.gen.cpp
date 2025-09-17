// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factory/Actors/RobotArm.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRobotArm() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
FACTORY_API UClass* Z_Construct_UClass_ARobotArm();
FACTORY_API UClass* Z_Construct_UClass_ARobotArm_NoRegister();
FACTORY_API UClass* Z_Construct_UClass_ASell_NoRegister();
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
		{ "IncludePath", "Actors/RobotArm.h" },
		{ "ModuleRelativePath", "Actors/RobotArm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[] = {
		{ "Category", "Action" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/RobotArm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPos_MetaData[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Actors/RobotArm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Actors/RobotArm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentSell_MetaData[] = {
		{ "Category", "RobotArm" },
		{ "ModuleRelativePath", "Actors/RobotArm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Point;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetPos;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentSell;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARobotArm>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARobotArm_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARobotArm, Point), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Point_MetaData), NewProp_Point_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARobotArm_Statics::NewProp_TargetPos_Inner = { "TargetPos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARobotArm_Statics::NewProp_TargetPos = { "TargetPos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARobotArm, TargetPos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPos_MetaData), NewProp_TargetPos_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARobotArm_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARobotArm, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARobotArm_Statics::NewProp_ParentSell = { "ParentSell", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARobotArm, ParentSell), Z_Construct_UClass_ASell_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentSell_MetaData), NewProp_ParentSell_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARobotArm_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobotArm_Statics::NewProp_Point,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobotArm_Statics::NewProp_TargetPos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobotArm_Statics::NewProp_TargetPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobotArm_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobotArm_Statics::NewProp_ParentSell,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARobotArm_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_ARobotArm_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARobotArm_Statics::PropPointers),
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
struct Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Actors_RobotArm_h__Script_Factory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARobotArm, ARobotArm::StaticClass, TEXT("ARobotArm"), &Z_Registration_Info_UClass_ARobotArm, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARobotArm), 1837140278U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Actors_RobotArm_h__Script_Factory_2202391002(TEXT("/Script/Factory"),
	Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Actors_RobotArm_h__Script_Factory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Actors_RobotArm_h__Script_Factory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
