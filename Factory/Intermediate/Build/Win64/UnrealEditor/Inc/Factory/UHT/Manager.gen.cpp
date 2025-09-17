// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factory/Managers/Manager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
FACTORY_API UClass* Z_Construct_UClass_AManager();
FACTORY_API UClass* Z_Construct_UClass_AManager_NoRegister();
FACTORY_API UClass* Z_Construct_UClass_APartsPos_NoRegister();
FACTORY_API UClass* Z_Construct_UClass_ASell_NoRegister();
FACTORY_API UClass* Z_Construct_UClass_ASpawner_NoRegister();
UPackage* Z_Construct_UPackage__Script_Factory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AManager Function Run ****************************************************
struct Z_Construct_UFunction_AManager_Run_Statics
{
	struct Manager_eventRun_Parms
	{
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Managers/Manager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AManager_Run_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Manager_eventRun_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AManager_Run_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AManager_Run_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AManager_Run_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AManager_Run_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AManager, nullptr, "Run", Z_Construct_UFunction_AManager_Run_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AManager_Run_Statics::PropPointers), sizeof(Z_Construct_UFunction_AManager_Run_Statics::Manager_eventRun_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AManager_Run_Statics::Function_MetaDataParams), Z_Construct_UFunction_AManager_Run_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AManager_Run_Statics::Manager_eventRun_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AManager_Run()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AManager_Run_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AManager::execRun)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Run(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// ********** End Class AManager Function Run ******************************************************

// ********** Begin Class AManager Function SetReady ***********************************************
struct Z_Construct_UFunction_AManager_SetReady_Statics
{
	struct Manager_eventSetReady_Parms
	{
		bool Ready;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Managers/Manager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Ready_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Ready;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AManager_SetReady_Statics::NewProp_Ready_SetBit(void* Obj)
{
	((Manager_eventSetReady_Parms*)Obj)->Ready = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AManager_SetReady_Statics::NewProp_Ready = { "Ready", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Manager_eventSetReady_Parms), &Z_Construct_UFunction_AManager_SetReady_Statics::NewProp_Ready_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AManager_SetReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AManager_SetReady_Statics::NewProp_Ready,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AManager_SetReady_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AManager_SetReady_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AManager, nullptr, "SetReady", Z_Construct_UFunction_AManager_SetReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AManager_SetReady_Statics::PropPointers), sizeof(Z_Construct_UFunction_AManager_SetReady_Statics::Manager_eventSetReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AManager_SetReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_AManager_SetReady_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AManager_SetReady_Statics::Manager_eventSetReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AManager_SetReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AManager_SetReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AManager::execSetReady)
{
	P_GET_UBOOL(Z_Param_Ready);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetReady(Z_Param_Ready);
	P_NATIVE_END;
}
// ********** End Class AManager Function SetReady *************************************************

// ********** Begin Class AManager *****************************************************************
void AManager::StaticRegisterNativesAManager()
{
	UClass* Class = AManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Run", &AManager::execRun },
		{ "SetReady", &AManager::execSetReady },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AManager;
UClass* AManager::GetPrivateStaticClass()
{
	using TClass = AManager;
	if (!Z_Registration_Info_UClass_AManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Manager"),
			Z_Registration_Info_UClass_AManager.InnerSingleton,
			StaticRegisterNativesAManager,
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
	return Z_Registration_Info_UClass_AManager.InnerSingleton;
}
UClass* Z_Construct_UClass_AManager_NoRegister()
{
	return AManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Managers/Manager.h" },
		{ "ModuleRelativePath", "Managers/Manager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderCount_MetaData[] = {
		{ "Category", "Manager" },
		{ "ModuleRelativePath", "Managers/Manager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCount_MetaData[] = {
		{ "Category", "Manager" },
		{ "ModuleRelativePath", "Managers/Manager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompleteCount_MetaData[] = {
		{ "Category", "Manager" },
		{ "ModuleRelativePath", "Managers/Manager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartsPosArray_MetaData[] = {
		{ "Category", "Manager" },
		{ "ModuleRelativePath", "Managers/Manager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SellArray_MetaData[] = {
		{ "Category", "Manager" },
		{ "ModuleRelativePath", "Managers/Manager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spawner_MetaData[] = {
		{ "Category", "Manager" },
		{ "ModuleRelativePath", "Managers/Manager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IdlePos_MetaData[] = {
		{ "Category", "Manager" },
		{ "ModuleRelativePath", "Managers/Manager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndPos_MetaData[] = {
		{ "Category", "Manager" },
		{ "ModuleRelativePath", "Managers/Manager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndOutPos_MetaData[] = {
		{ "Category", "Manager" },
		{ "ModuleRelativePath", "Managers/Manager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnPos_MetaData[] = {
		{ "Category", "Manager" },
		{ "ModuleRelativePath", "Managers/Manager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestSpeed_MetaData[] = {
		{ "Category", "Manager" },
		{ "ModuleRelativePath", "Managers/Manager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OrderCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CompleteCount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PartsPosArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PartsPosArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SellArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SellArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Spawner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IdlePos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndPos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndOutPos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnPos;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TestSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AManager_Run, "Run" }, // 3774912784
		{ &Z_Construct_UFunction_AManager_SetReady, "SetReady" }, // 2950801141
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AManager_Statics::NewProp_OrderCount = { "OrderCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AManager, OrderCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderCount_MetaData), NewProp_OrderCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AManager_Statics::NewProp_CurrentCount = { "CurrentCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AManager, CurrentCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCount_MetaData), NewProp_CurrentCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AManager_Statics::NewProp_CompleteCount = { "CompleteCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AManager, CompleteCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompleteCount_MetaData), NewProp_CompleteCount_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AManager_Statics::NewProp_PartsPosArray_Inner = { "PartsPosArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APartsPos_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AManager_Statics::NewProp_PartsPosArray = { "PartsPosArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AManager, PartsPosArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartsPosArray_MetaData), NewProp_PartsPosArray_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AManager_Statics::NewProp_SellArray_Inner = { "SellArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ASell_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AManager_Statics::NewProp_SellArray = { "SellArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AManager, SellArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SellArray_MetaData), NewProp_SellArray_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AManager_Statics::NewProp_Spawner = { "Spawner", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AManager, Spawner), Z_Construct_UClass_ASpawner_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spawner_MetaData), NewProp_Spawner_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AManager_Statics::NewProp_IdlePos = { "IdlePos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AManager, IdlePos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IdlePos_MetaData), NewProp_IdlePos_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AManager_Statics::NewProp_EndPos = { "EndPos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AManager, EndPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndPos_MetaData), NewProp_EndPos_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AManager_Statics::NewProp_EndOutPos = { "EndOutPos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AManager, EndOutPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndOutPos_MetaData), NewProp_EndOutPos_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AManager_Statics::NewProp_ReturnPos = { "ReturnPos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AManager, ReturnPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnPos_MetaData), NewProp_ReturnPos_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AManager_Statics::NewProp_TestSpeed = { "TestSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AManager, TestSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestSpeed_MetaData), NewProp_TestSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManager_Statics::NewProp_OrderCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManager_Statics::NewProp_CurrentCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManager_Statics::NewProp_CompleteCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManager_Statics::NewProp_PartsPosArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManager_Statics::NewProp_PartsPosArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManager_Statics::NewProp_SellArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManager_Statics::NewProp_SellArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManager_Statics::NewProp_Spawner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManager_Statics::NewProp_IdlePos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManager_Statics::NewProp_EndPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManager_Statics::NewProp_EndOutPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManager_Statics::NewProp_ReturnPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManager_Statics::NewProp_TestSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Factory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AManager_Statics::ClassParams = {
	&AManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AManager_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AManager()
{
	if (!Z_Registration_Info_UClass_AManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AManager.OuterSingleton, Z_Construct_UClass_AManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AManager);
AManager::~AManager() {}
// ********** End Class AManager *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_Manager_h__Script_Factory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AManager, AManager::StaticClass, TEXT("AManager"), &Z_Registration_Info_UClass_AManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AManager), 3952583122U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_Manager_h__Script_Factory_3009951023(TEXT("/Script/Factory"),
	Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_Manager_h__Script_Factory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_Manager_h__Script_Factory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
