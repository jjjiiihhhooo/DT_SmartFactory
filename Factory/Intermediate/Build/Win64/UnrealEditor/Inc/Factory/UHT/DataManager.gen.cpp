// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factory/Managers/DataManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDataManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_ATriggerBox_NoRegister();
FACTORY_API UClass* Z_Construct_UClass_ADataManager();
FACTORY_API UClass* Z_Construct_UClass_ADataManager_NoRegister();
FACTORY_API UClass* Z_Construct_UClass_AItemPos_NoRegister();
FACTORY_API UClass* Z_Construct_UClass_ASell_NoRegister();
FACTORY_API UClass* Z_Construct_UClass_ASpawner_NoRegister();
UPackage* Z_Construct_UPackage__Script_Factory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ADataManager *************************************************************
void ADataManager::StaticRegisterNativesADataManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADataManager;
UClass* ADataManager::GetPrivateStaticClass()
{
	using TClass = ADataManager;
	if (!Z_Registration_Info_UClass_ADataManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DataManager"),
			Z_Registration_Info_UClass_ADataManager.InnerSingleton,
			StaticRegisterNativesADataManager,
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
	return Z_Registration_Info_UClass_ADataManager.InnerSingleton;
}
UClass* Z_Construct_UClass_ADataManager_NoRegister()
{
	return ADataManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADataManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Managers/DataManager.h" },
		{ "ModuleRelativePath", "Managers/DataManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spawner_MetaData[] = {
		{ "Category", "DataManager" },
		{ "ModuleRelativePath", "Managers/DataManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemPosArray_MetaData[] = {
		{ "Category", "DataManager" },
		{ "ModuleRelativePath", "Managers/DataManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SellArray_MetaData[] = {
		{ "Category", "DataManager" },
		{ "ModuleRelativePath", "Managers/DataManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndArea_MetaData[] = {
		{ "Category", "Position" },
		{ "ModuleRelativePath", "Managers/DataManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IdlePos_MetaData[] = {
		{ "Category", "Position" },
		{ "ModuleRelativePath", "Managers/DataManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndPos_MetaData[] = {
		{ "Category", "Position" },
		{ "ModuleRelativePath", "Managers/DataManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndOutPos_MetaData[] = {
		{ "Category", "Position" },
		{ "ModuleRelativePath", "Managers/DataManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnPos_MetaData[] = {
		{ "Category", "Position" },
		{ "ModuleRelativePath", "Managers/DataManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderCount_MetaData[] = {
		{ "Category", "Order" },
		{ "ModuleRelativePath", "Managers/DataManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCount_MetaData[] = {
		{ "Category", "Order" },
		{ "ModuleRelativePath", "Managers/DataManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompleteCount_MetaData[] = {
		{ "Category", "Order" },
		{ "ModuleRelativePath", "Managers/DataManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Spawner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemPosArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemPosArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SellArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SellArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EndArea;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IdlePos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndPos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndOutPos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnPos;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OrderCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CompleteCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADataManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADataManager_Statics::NewProp_Spawner = { "Spawner", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADataManager, Spawner), Z_Construct_UClass_ASpawner_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spawner_MetaData), NewProp_Spawner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADataManager_Statics::NewProp_ItemPosArray_Inner = { "ItemPosArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AItemPos_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADataManager_Statics::NewProp_ItemPosArray = { "ItemPosArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADataManager, ItemPosArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemPosArray_MetaData), NewProp_ItemPosArray_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADataManager_Statics::NewProp_SellArray_Inner = { "SellArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ASell_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADataManager_Statics::NewProp_SellArray = { "SellArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADataManager, SellArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SellArray_MetaData), NewProp_SellArray_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADataManager_Statics::NewProp_EndArea = { "EndArea", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADataManager, EndArea), Z_Construct_UClass_ATriggerBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndArea_MetaData), NewProp_EndArea_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADataManager_Statics::NewProp_IdlePos = { "IdlePos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADataManager, IdlePos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IdlePos_MetaData), NewProp_IdlePos_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADataManager_Statics::NewProp_EndPos = { "EndPos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADataManager, EndPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndPos_MetaData), NewProp_EndPos_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADataManager_Statics::NewProp_EndOutPos = { "EndOutPos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADataManager, EndOutPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndOutPos_MetaData), NewProp_EndOutPos_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADataManager_Statics::NewProp_ReturnPos = { "ReturnPos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADataManager, ReturnPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnPos_MetaData), NewProp_ReturnPos_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADataManager_Statics::NewProp_OrderCount = { "OrderCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADataManager, OrderCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderCount_MetaData), NewProp_OrderCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADataManager_Statics::NewProp_CurrentCount = { "CurrentCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADataManager, CurrentCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCount_MetaData), NewProp_CurrentCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADataManager_Statics::NewProp_CompleteCount = { "CompleteCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADataManager, CompleteCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompleteCount_MetaData), NewProp_CompleteCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADataManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataManager_Statics::NewProp_Spawner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataManager_Statics::NewProp_ItemPosArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataManager_Statics::NewProp_ItemPosArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataManager_Statics::NewProp_SellArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataManager_Statics::NewProp_SellArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataManager_Statics::NewProp_EndArea,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataManager_Statics::NewProp_IdlePos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataManager_Statics::NewProp_EndPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataManager_Statics::NewProp_EndOutPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataManager_Statics::NewProp_ReturnPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataManager_Statics::NewProp_OrderCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataManager_Statics::NewProp_CurrentCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataManager_Statics::NewProp_CompleteCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADataManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADataManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Factory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADataManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADataManager_Statics::ClassParams = {
	&ADataManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADataManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADataManager_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADataManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ADataManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADataManager()
{
	if (!Z_Registration_Info_UClass_ADataManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADataManager.OuterSingleton, Z_Construct_UClass_ADataManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADataManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADataManager);
ADataManager::~ADataManager() {}
// ********** End Class ADataManager ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_DataManager_h__Script_Factory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADataManager, ADataManager::StaticClass, TEXT("ADataManager"), &Z_Registration_Info_UClass_ADataManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADataManager), 2849227668U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_DataManager_h__Script_Factory_2561688642(TEXT("/Script/Factory"),
	Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_DataManager_h__Script_Factory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_DataManager_h__Script_Factory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
