// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factory/Managers/Spawner.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSpawner() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
FACTORY_API UClass* Z_Construct_UClass_ASpawner();
FACTORY_API UClass* Z_Construct_UClass_ASpawner_NoRegister();
UPackage* Z_Construct_UPackage__Script_Factory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASpawner Function GetCount ***********************************************
struct Z_Construct_UFunction_ASpawner_GetCount_Statics
{
	struct Spawner_eventGetCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool" },
		{ "ModuleRelativePath", "Managers/Spawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASpawner_GetCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Spawner_eventGetCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawner_GetCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawner_GetCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_GetCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawner_GetCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASpawner, nullptr, "GetCount", Z_Construct_UFunction_ASpawner_GetCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_GetCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpawner_GetCount_Statics::Spawner_eventGetCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_GetCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawner_GetCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASpawner_GetCount_Statics::Spawner_eventGetCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpawner_GetCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawner_GetCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpawner::execGetCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCount();
	P_NATIVE_END;
}
// ********** End Class ASpawner Function GetCount *************************************************

// ********** Begin Class ASpawner Function GetDelivery ********************************************
struct Z_Construct_UFunction_ASpawner_GetDelivery_Statics
{
	struct Spawner_eventGetDelivery_Parms
	{
		ACharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool" },
		{ "ModuleRelativePath", "Managers/Spawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpawner_GetDelivery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Spawner_eventGetDelivery_Parms, ReturnValue), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawner_GetDelivery_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawner_GetDelivery_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_GetDelivery_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawner_GetDelivery_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASpawner, nullptr, "GetDelivery", Z_Construct_UFunction_ASpawner_GetDelivery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_GetDelivery_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpawner_GetDelivery_Statics::Spawner_eventGetDelivery_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_GetDelivery_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawner_GetDelivery_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASpawner_GetDelivery_Statics::Spawner_eventGetDelivery_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpawner_GetDelivery()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawner_GetDelivery_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpawner::execGetDelivery)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ACharacter**)Z_Param__Result=P_THIS->GetDelivery();
	P_NATIVE_END;
}
// ********** End Class ASpawner Function GetDelivery **********************************************

// ********** Begin Class ASpawner Function GetItem ************************************************
struct Z_Construct_UFunction_ASpawner_GetItem_Statics
{
	struct Spawner_eventGetItem_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool" },
		{ "ModuleRelativePath", "Managers/Spawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpawner_GetItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Spawner_eventGetItem_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawner_GetItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawner_GetItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_GetItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawner_GetItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASpawner, nullptr, "GetItem", Z_Construct_UFunction_ASpawner_GetItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_GetItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpawner_GetItem_Statics::Spawner_eventGetItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_GetItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawner_GetItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASpawner_GetItem_Statics::Spawner_eventGetItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpawner_GetItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawner_GetItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpawner::execGetItem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetItem();
	P_NATIVE_END;
}
// ********** End Class ASpawner Function GetItem **************************************************

// ********** Begin Class ASpawner Function ReturnDelivery *****************************************
struct Z_Construct_UFunction_ASpawner_ReturnDelivery_Statics
{
	struct Spawner_eventReturnDelivery_Parms
	{
		ACharacter* Delivery;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool" },
		{ "ModuleRelativePath", "Managers/Spawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Delivery;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpawner_ReturnDelivery_Statics::NewProp_Delivery = { "Delivery", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Spawner_eventReturnDelivery_Parms, Delivery), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawner_ReturnDelivery_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawner_ReturnDelivery_Statics::NewProp_Delivery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_ReturnDelivery_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawner_ReturnDelivery_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASpawner, nullptr, "ReturnDelivery", Z_Construct_UFunction_ASpawner_ReturnDelivery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_ReturnDelivery_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpawner_ReturnDelivery_Statics::Spawner_eventReturnDelivery_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_ReturnDelivery_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawner_ReturnDelivery_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASpawner_ReturnDelivery_Statics::Spawner_eventReturnDelivery_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpawner_ReturnDelivery()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawner_ReturnDelivery_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpawner::execReturnDelivery)
{
	P_GET_OBJECT(ACharacter,Z_Param_Delivery);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReturnDelivery(Z_Param_Delivery);
	P_NATIVE_END;
}
// ********** End Class ASpawner Function ReturnDelivery *******************************************

// ********** Begin Class ASpawner Function ReturnItem *********************************************
struct Z_Construct_UFunction_ASpawner_ReturnItem_Statics
{
	struct Spawner_eventReturnItem_Parms
	{
		AActor* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool" },
		{ "ModuleRelativePath", "Managers/Spawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpawner_ReturnItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Spawner_eventReturnItem_Parms, Item), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawner_ReturnItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawner_ReturnItem_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_ReturnItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawner_ReturnItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASpawner, nullptr, "ReturnItem", Z_Construct_UFunction_ASpawner_ReturnItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_ReturnItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpawner_ReturnItem_Statics::Spawner_eventReturnItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_ReturnItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawner_ReturnItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASpawner_ReturnItem_Statics::Spawner_eventReturnItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpawner_ReturnItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawner_ReturnItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpawner::execReturnItem)
{
	P_GET_OBJECT(AActor,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReturnItem(Z_Param_Item);
	P_NATIVE_END;
}
// ********** End Class ASpawner Function ReturnItem ***********************************************

// ********** Begin Class ASpawner *****************************************************************
void ASpawner::StaticRegisterNativesASpawner()
{
	UClass* Class = ASpawner::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCount", &ASpawner::execGetCount },
		{ "GetDelivery", &ASpawner::execGetDelivery },
		{ "GetItem", &ASpawner::execGetItem },
		{ "ReturnDelivery", &ASpawner::execReturnDelivery },
		{ "ReturnItem", &ASpawner::execReturnItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASpawner;
UClass* ASpawner::GetPrivateStaticClass()
{
	using TClass = ASpawner;
	if (!Z_Registration_Info_UClass_ASpawner.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Spawner"),
			Z_Registration_Info_UClass_ASpawner.InnerSingleton,
			StaticRegisterNativesASpawner,
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
	return Z_Registration_Info_UClass_ASpawner.InnerSingleton;
}
UClass* Z_Construct_UClass_ASpawner_NoRegister()
{
	return ASpawner::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Managers/Spawner.h" },
		{ "ModuleRelativePath", "Managers/Spawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeliveryAllPooled_MetaData[] = {
		{ "ModuleRelativePath", "Managers/Spawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemAllPooled_MetaData[] = {
		{ "ModuleRelativePath", "Managers/Spawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPoint_MetaData[] = {
		{ "Category", "Pool" },
		{ "ModuleRelativePath", "Managers/Spawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeliveryClass_MetaData[] = {
		{ "Category", "Pool" },
		{ "ModuleRelativePath", "Managers/Spawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemClass_MetaData[] = {
		{ "Category", "Pool" },
		{ "ModuleRelativePath", "Managers/Spawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeliveryAllPooled_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_DeliveryAllPooled;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemAllPooled_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ItemAllPooled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnPoint;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DeliveryClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpawner_GetCount, "GetCount" }, // 1585157944
		{ &Z_Construct_UFunction_ASpawner_GetDelivery, "GetDelivery" }, // 1821918016
		{ &Z_Construct_UFunction_ASpawner_GetItem, "GetItem" }, // 2954977344
		{ &Z_Construct_UFunction_ASpawner_ReturnDelivery, "ReturnDelivery" }, // 2184107334
		{ &Z_Construct_UFunction_ASpawner_ReturnItem, "ReturnItem" }, // 4051933485
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_DeliveryAllPooled_ElementProp = { "DeliveryAllPooled", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_DeliveryAllPooled = { "DeliveryAllPooled", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawner, DeliveryAllPooled), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeliveryAllPooled_MetaData), NewProp_DeliveryAllPooled_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_ItemAllPooled_ElementProp = { "ItemAllPooled", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_ItemAllPooled = { "ItemAllPooled", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawner, ItemAllPooled), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemAllPooled_MetaData), NewProp_ItemAllPooled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_SpawnPoint = { "SpawnPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawner, SpawnPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnPoint_MetaData), NewProp_SpawnPoint_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_DeliveryClass = { "DeliveryClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawner, DeliveryClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeliveryClass_MetaData), NewProp_DeliveryClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_ItemClass = { "ItemClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawner, ItemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemClass_MetaData), NewProp_ItemClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_DeliveryAllPooled_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_DeliveryAllPooled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_ItemAllPooled_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_ItemAllPooled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_SpawnPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_DeliveryClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_ItemClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Factory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpawner_Statics::ClassParams = {
	&ASpawner::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASpawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpawner()
{
	if (!Z_Registration_Info_UClass_ASpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpawner.OuterSingleton, Z_Construct_UClass_ASpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpawner.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawner);
ASpawner::~ASpawner() {}
// ********** End Class ASpawner *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_Spawner_h__Script_Factory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpawner, ASpawner::StaticClass, TEXT("ASpawner"), &Z_Registration_Info_UClass_ASpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpawner), 2740497720U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_Spawner_h__Script_Factory_1357096428(TEXT("/Script/Factory"),
	Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_Spawner_h__Script_Factory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_Spawner_h__Script_Factory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
