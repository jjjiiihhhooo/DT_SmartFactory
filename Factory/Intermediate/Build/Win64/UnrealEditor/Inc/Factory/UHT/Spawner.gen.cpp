// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factory/Spawner.h"

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
		{ "ModuleRelativePath", "Spawner.h" },
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
		{ "ModuleRelativePath", "Spawner.h" },
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

// ********** Begin Class ASpawner Function GetParts ***********************************************
struct Z_Construct_UFunction_ASpawner_GetParts_Statics
{
	struct Spawner_eventGetParts_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool" },
		{ "ModuleRelativePath", "Spawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpawner_GetParts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Spawner_eventGetParts_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawner_GetParts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawner_GetParts_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_GetParts_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawner_GetParts_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASpawner, nullptr, "GetParts", Z_Construct_UFunction_ASpawner_GetParts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_GetParts_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpawner_GetParts_Statics::Spawner_eventGetParts_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_GetParts_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawner_GetParts_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASpawner_GetParts_Statics::Spawner_eventGetParts_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpawner_GetParts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawner_GetParts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpawner::execGetParts)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetParts();
	P_NATIVE_END;
}
// ********** End Class ASpawner Function GetParts *************************************************

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
		{ "ModuleRelativePath", "Spawner.h" },
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

// ********** Begin Class ASpawner Function ReturnParts ********************************************
struct Z_Construct_UFunction_ASpawner_ReturnParts_Statics
{
	struct Spawner_eventReturnParts_Parms
	{
		AActor* Parts;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool" },
		{ "ModuleRelativePath", "Spawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpawner_ReturnParts_Statics::NewProp_Parts = { "Parts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Spawner_eventReturnParts_Parms, Parts), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawner_ReturnParts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawner_ReturnParts_Statics::NewProp_Parts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_ReturnParts_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawner_ReturnParts_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASpawner, nullptr, "ReturnParts", Z_Construct_UFunction_ASpawner_ReturnParts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_ReturnParts_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpawner_ReturnParts_Statics::Spawner_eventReturnParts_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_ReturnParts_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawner_ReturnParts_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASpawner_ReturnParts_Statics::Spawner_eventReturnParts_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpawner_ReturnParts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawner_ReturnParts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpawner::execReturnParts)
{
	P_GET_OBJECT(AActor,Z_Param_Parts);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReturnParts(Z_Param_Parts);
	P_NATIVE_END;
}
// ********** End Class ASpawner Function ReturnParts **********************************************

// ********** Begin Class ASpawner *****************************************************************
void ASpawner::StaticRegisterNativesASpawner()
{
	UClass* Class = ASpawner::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCount", &ASpawner::execGetCount },
		{ "GetDelivery", &ASpawner::execGetDelivery },
		{ "GetParts", &ASpawner::execGetParts },
		{ "ReturnDelivery", &ASpawner::execReturnDelivery },
		{ "ReturnParts", &ASpawner::execReturnParts },
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
		{ "IncludePath", "Spawner.h" },
		{ "ModuleRelativePath", "Spawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeliveryAllPooled_MetaData[] = {
		{ "ModuleRelativePath", "Spawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartsAllPooled_MetaData[] = {
		{ "ModuleRelativePath", "Spawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPoint_MetaData[] = {
		{ "Category", "Pool" },
		{ "ModuleRelativePath", "Spawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeliveryClass_MetaData[] = {
		{ "Category", "Pool" },
		{ "ModuleRelativePath", "Spawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartsClass_MetaData[] = {
		{ "Category", "Pool" },
		{ "ModuleRelativePath", "Spawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeliveryAllPooled_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_DeliveryAllPooled;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PartsAllPooled_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_PartsAllPooled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnPoint;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DeliveryClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PartsClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpawner_GetCount, "GetCount" }, // 913938767
		{ &Z_Construct_UFunction_ASpawner_GetDelivery, "GetDelivery" }, // 1463966605
		{ &Z_Construct_UFunction_ASpawner_GetParts, "GetParts" }, // 2130037606
		{ &Z_Construct_UFunction_ASpawner_ReturnDelivery, "ReturnDelivery" }, // 1438569318
		{ &Z_Construct_UFunction_ASpawner_ReturnParts, "ReturnParts" }, // 2267075
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_DeliveryAllPooled_ElementProp = { "DeliveryAllPooled", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_DeliveryAllPooled = { "DeliveryAllPooled", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawner, DeliveryAllPooled), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeliveryAllPooled_MetaData), NewProp_DeliveryAllPooled_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_PartsAllPooled_ElementProp = { "PartsAllPooled", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_PartsAllPooled = { "PartsAllPooled", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawner, PartsAllPooled), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartsAllPooled_MetaData), NewProp_PartsAllPooled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_SpawnPoint = { "SpawnPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawner, SpawnPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnPoint_MetaData), NewProp_SpawnPoint_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_DeliveryClass = { "DeliveryClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawner, DeliveryClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeliveryClass_MetaData), NewProp_DeliveryClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_PartsClass = { "PartsClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawner, PartsClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartsClass_MetaData), NewProp_PartsClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_DeliveryAllPooled_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_DeliveryAllPooled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_PartsAllPooled_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_PartsAllPooled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_SpawnPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_DeliveryClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_PartsClass,
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
struct Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Spawner_h__Script_Factory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpawner, ASpawner::StaticClass, TEXT("ASpawner"), &Z_Registration_Info_UClass_ASpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpawner), 2725467697U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Spawner_h__Script_Factory_929083659(TEXT("/Script/Factory"),
	Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Spawner_h__Script_Factory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Spawner_h__Script_Factory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
