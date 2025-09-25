// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factory/Managers/CameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCameraManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
FACTORY_API UClass* Z_Construct_UClass_ACameraManager();
FACTORY_API UClass* Z_Construct_UClass_ACameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_Factory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACameraManager Function SelectCamera *************************************
struct Z_Construct_UFunction_ACameraManager_SelectCamera_Statics
{
	struct CameraManager_eventSelectCamera_Parms
	{
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Managers/CameraManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACameraManager_SelectCamera_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraManager_eventSelectCamera_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACameraManager_SelectCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraManager_SelectCamera_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraManager_SelectCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACameraManager_SelectCamera_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACameraManager, nullptr, "SelectCamera", Z_Construct_UFunction_ACameraManager_SelectCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraManager_SelectCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACameraManager_SelectCamera_Statics::CameraManager_eventSelectCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraManager_SelectCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACameraManager_SelectCamera_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACameraManager_SelectCamera_Statics::CameraManager_eventSelectCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACameraManager_SelectCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACameraManager_SelectCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACameraManager::execSelectCamera)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectCamera(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class ACameraManager Function SelectCamera ***************************************

// ********** Begin Class ACameraManager ***********************************************************
void ACameraManager::StaticRegisterNativesACameraManager()
{
	UClass* Class = ACameraManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SelectCamera", &ACameraManager::execSelectCamera },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACameraManager;
UClass* ACameraManager::GetPrivateStaticClass()
{
	using TClass = ACameraManager;
	if (!Z_Registration_Info_UClass_ACameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CameraManager"),
			Z_Registration_Info_UClass_ACameraManager.InnerSingleton,
			StaticRegisterNativesACameraManager,
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
	return Z_Registration_Info_UClass_ACameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_ACameraManager_NoRegister()
{
	return ACameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Managers/CameraManager.h" },
		{ "ModuleRelativePath", "Managers/CameraManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cameras_MetaData[] = {
		{ "Category", "CameraManager" },
		{ "ModuleRelativePath", "Managers/CameraManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBlendTime_MetaData[] = {
		{ "Category", "CameraManager" },
		{ "ModuleRelativePath", "Managers/CameraManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Cameras_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Cameras;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraBlendTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACameraManager_SelectCamera, "SelectCamera" }, // 2233509588
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraManager_Statics::NewProp_Cameras_Inner = { "Cameras", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACameraManager_Statics::NewProp_Cameras = { "Cameras", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraManager, Cameras), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cameras_MetaData), NewProp_Cameras_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraManager_Statics::NewProp_CameraBlendTime = { "CameraBlendTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraManager, CameraBlendTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBlendTime_MetaData), NewProp_CameraBlendTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACameraManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraManager_Statics::NewProp_Cameras_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraManager_Statics::NewProp_Cameras,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraManager_Statics::NewProp_CameraBlendTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACameraManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Factory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACameraManager_Statics::ClassParams = {
	&ACameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACameraManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACameraManager_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ACameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACameraManager()
{
	if (!Z_Registration_Info_UClass_ACameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACameraManager.OuterSingleton, Z_Construct_UClass_ACameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraManager);
ACameraManager::~ACameraManager() {}
// ********** End Class ACameraManager *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_CameraManager_h__Script_Factory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACameraManager, ACameraManager::StaticClass, TEXT("ACameraManager"), &Z_Registration_Info_UClass_ACameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACameraManager), 3910875767U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_CameraManager_h__Script_Factory_3138535064(TEXT("/Script/Factory"),
	Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_CameraManager_h__Script_Factory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_CameraManager_h__Script_Factory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
