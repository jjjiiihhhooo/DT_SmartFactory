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
FACTORY_API UFunction* Z_Construct_UDelegateFunction_Factory_OnCountChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Factory();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnCountChanged *******************************************************
struct Z_Construct_UDelegateFunction_Factory_OnCountChanged__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Managers/DataManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Factory_OnCountChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Factory, nullptr, "OnCountChanged__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Factory_OnCountChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Factory_OnCountChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_Factory_OnCountChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Factory_OnCountChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCountChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCountChanged)
{
	OnCountChanged.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnCountChanged *********************************************************

// ********** Begin Class ADataManager Function DecreaseDeliveryCount ******************************
struct Z_Construct_UFunction_ADataManager_DecreaseDeliveryCount_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Count" },
		{ "ModuleRelativePath", "Managers/DataManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADataManager_DecreaseDeliveryCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADataManager, nullptr, "DecreaseDeliveryCount", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADataManager_DecreaseDeliveryCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADataManager_DecreaseDeliveryCount_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ADataManager_DecreaseDeliveryCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADataManager_DecreaseDeliveryCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADataManager::execDecreaseDeliveryCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DecreaseDeliveryCount();
	P_NATIVE_END;
}
// ********** End Class ADataManager Function DecreaseDeliveryCount ********************************

// ********** Begin Class ADataManager Function DecreaseOrderCount *********************************
struct Z_Construct_UFunction_ADataManager_DecreaseOrderCount_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Count" },
		{ "ModuleRelativePath", "Managers/DataManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADataManager_DecreaseOrderCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADataManager, nullptr, "DecreaseOrderCount", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADataManager_DecreaseOrderCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADataManager_DecreaseOrderCount_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ADataManager_DecreaseOrderCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADataManager_DecreaseOrderCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADataManager::execDecreaseOrderCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DecreaseOrderCount();
	P_NATIVE_END;
}
// ********** End Class ADataManager Function DecreaseOrderCount ***********************************

// ********** Begin Class ADataManager Function GetCompletedCount **********************************
struct Z_Construct_UFunction_ADataManager_GetCompletedCount_Statics
{
	struct DataManager_eventGetCompletedCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Count" },
		{ "ModuleRelativePath", "Managers/DataManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADataManager_GetCompletedCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataManager_eventGetCompletedCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADataManager_GetCompletedCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADataManager_GetCompletedCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADataManager_GetCompletedCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADataManager_GetCompletedCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADataManager, nullptr, "GetCompletedCount", Z_Construct_UFunction_ADataManager_GetCompletedCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADataManager_GetCompletedCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADataManager_GetCompletedCount_Statics::DataManager_eventGetCompletedCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADataManager_GetCompletedCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADataManager_GetCompletedCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADataManager_GetCompletedCount_Statics::DataManager_eventGetCompletedCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADataManager_GetCompletedCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADataManager_GetCompletedCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADataManager::execGetCompletedCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCompletedCount();
	P_NATIVE_END;
}
// ********** End Class ADataManager Function GetCompletedCount ************************************

// ********** Begin Class ADataManager Function GetDeliveryCount ***********************************
struct Z_Construct_UFunction_ADataManager_GetDeliveryCount_Statics
{
	struct DataManager_eventGetDeliveryCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Count" },
		{ "ModuleRelativePath", "Managers/DataManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADataManager_GetDeliveryCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataManager_eventGetDeliveryCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADataManager_GetDeliveryCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADataManager_GetDeliveryCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADataManager_GetDeliveryCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADataManager_GetDeliveryCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADataManager, nullptr, "GetDeliveryCount", Z_Construct_UFunction_ADataManager_GetDeliveryCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADataManager_GetDeliveryCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADataManager_GetDeliveryCount_Statics::DataManager_eventGetDeliveryCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADataManager_GetDeliveryCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADataManager_GetDeliveryCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADataManager_GetDeliveryCount_Statics::DataManager_eventGetDeliveryCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADataManager_GetDeliveryCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADataManager_GetDeliveryCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADataManager::execGetDeliveryCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetDeliveryCount();
	P_NATIVE_END;
}
// ********** End Class ADataManager Function GetDeliveryCount *************************************

// ********** Begin Class ADataManager Function GetOrderCount **************************************
struct Z_Construct_UFunction_ADataManager_GetOrderCount_Statics
{
	struct DataManager_eventGetOrderCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Count" },
		{ "ModuleRelativePath", "Managers/DataManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADataManager_GetOrderCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataManager_eventGetOrderCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADataManager_GetOrderCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADataManager_GetOrderCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADataManager_GetOrderCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADataManager_GetOrderCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADataManager, nullptr, "GetOrderCount", Z_Construct_UFunction_ADataManager_GetOrderCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADataManager_GetOrderCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADataManager_GetOrderCount_Statics::DataManager_eventGetOrderCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADataManager_GetOrderCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADataManager_GetOrderCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADataManager_GetOrderCount_Statics::DataManager_eventGetOrderCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADataManager_GetOrderCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADataManager_GetOrderCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADataManager::execGetOrderCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetOrderCount();
	P_NATIVE_END;
}
// ********** End Class ADataManager Function GetOrderCount ****************************************

// ********** Begin Class ADataManager Function GetSellAt ******************************************
struct Z_Construct_UFunction_ADataManager_GetSellAt_Statics
{
	struct DataManager_eventGetSellAt_Parms
	{
		int32 Index;
		ASell* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sell" },
		{ "ModuleRelativePath", "Managers/DataManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADataManager_GetSellAt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataManager_eventGetSellAt_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADataManager_GetSellAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataManager_eventGetSellAt_Parms, ReturnValue), Z_Construct_UClass_ASell_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADataManager_GetSellAt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADataManager_GetSellAt_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADataManager_GetSellAt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADataManager_GetSellAt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADataManager_GetSellAt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADataManager, nullptr, "GetSellAt", Z_Construct_UFunction_ADataManager_GetSellAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADataManager_GetSellAt_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADataManager_GetSellAt_Statics::DataManager_eventGetSellAt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADataManager_GetSellAt_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADataManager_GetSellAt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADataManager_GetSellAt_Statics::DataManager_eventGetSellAt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADataManager_GetSellAt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADataManager_GetSellAt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADataManager::execGetSellAt)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ASell**)Z_Param__Result=P_THIS->GetSellAt(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class ADataManager Function GetSellAt ********************************************

// ********** Begin Class ADataManager Function IncreaseCompletedCount *****************************
struct Z_Construct_UFunction_ADataManager_IncreaseCompletedCount_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Count" },
		{ "ModuleRelativePath", "Managers/DataManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADataManager_IncreaseCompletedCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADataManager, nullptr, "IncreaseCompletedCount", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADataManager_IncreaseCompletedCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADataManager_IncreaseCompletedCount_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ADataManager_IncreaseCompletedCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADataManager_IncreaseCompletedCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADataManager::execIncreaseCompletedCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncreaseCompletedCount();
	P_NATIVE_END;
}
// ********** End Class ADataManager Function IncreaseCompletedCount *******************************

// ********** Begin Class ADataManager Function IncreaseDeliveryCount ******************************
struct Z_Construct_UFunction_ADataManager_IncreaseDeliveryCount_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Count" },
		{ "ModuleRelativePath", "Managers/DataManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADataManager_IncreaseDeliveryCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADataManager, nullptr, "IncreaseDeliveryCount", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADataManager_IncreaseDeliveryCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADataManager_IncreaseDeliveryCount_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ADataManager_IncreaseDeliveryCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADataManager_IncreaseDeliveryCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADataManager::execIncreaseDeliveryCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncreaseDeliveryCount();
	P_NATIVE_END;
}
// ********** End Class ADataManager Function IncreaseDeliveryCount ********************************

// ********** Begin Class ADataManager Function IncreaseOrderCount *********************************
struct Z_Construct_UFunction_ADataManager_IncreaseOrderCount_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Count" },
		{ "ModuleRelativePath", "Managers/DataManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADataManager_IncreaseOrderCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADataManager, nullptr, "IncreaseOrderCount", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADataManager_IncreaseOrderCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADataManager_IncreaseOrderCount_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ADataManager_IncreaseOrderCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADataManager_IncreaseOrderCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADataManager::execIncreaseOrderCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncreaseOrderCount();
	P_NATIVE_END;
}
// ********** End Class ADataManager Function IncreaseOrderCount ***********************************

// ********** Begin Class ADataManager Function ToggleSellState ************************************
struct Z_Construct_UFunction_ADataManager_ToggleSellState_Statics
{
	struct DataManager_eventToggleSellState_Parms
	{
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sell" },
		{ "ModuleRelativePath", "Managers/DataManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADataManager_ToggleSellState_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataManager_eventToggleSellState_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADataManager_ToggleSellState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADataManager_ToggleSellState_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADataManager_ToggleSellState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADataManager_ToggleSellState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADataManager, nullptr, "ToggleSellState", Z_Construct_UFunction_ADataManager_ToggleSellState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADataManager_ToggleSellState_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADataManager_ToggleSellState_Statics::DataManager_eventToggleSellState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADataManager_ToggleSellState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADataManager_ToggleSellState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADataManager_ToggleSellState_Statics::DataManager_eventToggleSellState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADataManager_ToggleSellState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADataManager_ToggleSellState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADataManager::execToggleSellState)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleSellState(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class ADataManager Function ToggleSellState **************************************

// ********** Begin Class ADataManager *************************************************************
void ADataManager::StaticRegisterNativesADataManager()
{
	UClass* Class = ADataManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DecreaseDeliveryCount", &ADataManager::execDecreaseDeliveryCount },
		{ "DecreaseOrderCount", &ADataManager::execDecreaseOrderCount },
		{ "GetCompletedCount", &ADataManager::execGetCompletedCount },
		{ "GetDeliveryCount", &ADataManager::execGetDeliveryCount },
		{ "GetOrderCount", &ADataManager::execGetOrderCount },
		{ "GetSellAt", &ADataManager::execGetSellAt },
		{ "IncreaseCompletedCount", &ADataManager::execIncreaseCompletedCount },
		{ "IncreaseDeliveryCount", &ADataManager::execIncreaseDeliveryCount },
		{ "IncreaseOrderCount", &ADataManager::execIncreaseOrderCount },
		{ "ToggleSellState", &ADataManager::execToggleSellState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnOrderCountUpdate_MetaData[] = {
		{ "Category", "DataManager IEvent" },
		{ "ModuleRelativePath", "Managers/DataManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDeliveryCountUpdate_MetaData[] = {
		{ "Category", "DataManager IEvent" },
		{ "ModuleRelativePath", "Managers/DataManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCompletedCountUpdate_MetaData[] = {
		{ "Category", "DataManager IEvent" },
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
		{ "Category", "Count" },
		{ "ModuleRelativePath", "Managers/DataManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompletedCount_MetaData[] = {
		{ "Category", "Count" },
		{ "ModuleRelativePath", "Managers/DataManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeliveryCount_MetaData[] = {
		{ "Category", "Count" },
		{ "ModuleRelativePath", "Managers/DataManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Spawner;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOrderCountUpdate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeliveryCountUpdate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompletedCountUpdate;
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
	static const UECodeGen_Private::FIntPropertyParams NewProp_CompletedCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DeliveryCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADataManager_DecreaseDeliveryCount, "DecreaseDeliveryCount" }, // 2116928913
		{ &Z_Construct_UFunction_ADataManager_DecreaseOrderCount, "DecreaseOrderCount" }, // 261092312
		{ &Z_Construct_UFunction_ADataManager_GetCompletedCount, "GetCompletedCount" }, // 2116842787
		{ &Z_Construct_UFunction_ADataManager_GetDeliveryCount, "GetDeliveryCount" }, // 2184520952
		{ &Z_Construct_UFunction_ADataManager_GetOrderCount, "GetOrderCount" }, // 1011440243
		{ &Z_Construct_UFunction_ADataManager_GetSellAt, "GetSellAt" }, // 115515708
		{ &Z_Construct_UFunction_ADataManager_IncreaseCompletedCount, "IncreaseCompletedCount" }, // 4070572963
		{ &Z_Construct_UFunction_ADataManager_IncreaseDeliveryCount, "IncreaseDeliveryCount" }, // 1083991575
		{ &Z_Construct_UFunction_ADataManager_IncreaseOrderCount, "IncreaseOrderCount" }, // 4122275551
		{ &Z_Construct_UFunction_ADataManager_ToggleSellState, "ToggleSellState" }, // 893407866
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADataManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADataManager_Statics::NewProp_Spawner = { "Spawner", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADataManager, Spawner), Z_Construct_UClass_ASpawner_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spawner_MetaData), NewProp_Spawner_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ADataManager_Statics::NewProp_OnOrderCountUpdate = { "OnOrderCountUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADataManager, OnOrderCountUpdate), Z_Construct_UDelegateFunction_Factory_OnCountChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnOrderCountUpdate_MetaData), NewProp_OnOrderCountUpdate_MetaData) }; // 2238221868
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ADataManager_Statics::NewProp_OnDeliveryCountUpdate = { "OnDeliveryCountUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADataManager, OnDeliveryCountUpdate), Z_Construct_UDelegateFunction_Factory_OnCountChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDeliveryCountUpdate_MetaData), NewProp_OnDeliveryCountUpdate_MetaData) }; // 2238221868
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ADataManager_Statics::NewProp_OnCompletedCountUpdate = { "OnCompletedCountUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADataManager, OnCompletedCountUpdate), Z_Construct_UDelegateFunction_Factory_OnCountChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCompletedCountUpdate_MetaData), NewProp_OnCompletedCountUpdate_MetaData) }; // 2238221868
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADataManager_Statics::NewProp_ItemPosArray_Inner = { "ItemPosArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AItemPos_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADataManager_Statics::NewProp_ItemPosArray = { "ItemPosArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADataManager, ItemPosArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemPosArray_MetaData), NewProp_ItemPosArray_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADataManager_Statics::NewProp_SellArray_Inner = { "SellArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ASell_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADataManager_Statics::NewProp_SellArray = { "SellArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADataManager, SellArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SellArray_MetaData), NewProp_SellArray_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADataManager_Statics::NewProp_EndArea = { "EndArea", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADataManager, EndArea), Z_Construct_UClass_ATriggerBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndArea_MetaData), NewProp_EndArea_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADataManager_Statics::NewProp_IdlePos = { "IdlePos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADataManager, IdlePos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IdlePos_MetaData), NewProp_IdlePos_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADataManager_Statics::NewProp_EndPos = { "EndPos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADataManager, EndPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndPos_MetaData), NewProp_EndPos_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADataManager_Statics::NewProp_EndOutPos = { "EndOutPos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADataManager, EndOutPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndOutPos_MetaData), NewProp_EndOutPos_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADataManager_Statics::NewProp_ReturnPos = { "ReturnPos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADataManager, ReturnPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnPos_MetaData), NewProp_ReturnPos_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADataManager_Statics::NewProp_OrderCount = { "OrderCount", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADataManager, OrderCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderCount_MetaData), NewProp_OrderCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADataManager_Statics::NewProp_CompletedCount = { "CompletedCount", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADataManager, CompletedCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompletedCount_MetaData), NewProp_CompletedCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADataManager_Statics::NewProp_DeliveryCount = { "DeliveryCount", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADataManager, DeliveryCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeliveryCount_MetaData), NewProp_DeliveryCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADataManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataManager_Statics::NewProp_Spawner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataManager_Statics::NewProp_OnOrderCountUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataManager_Statics::NewProp_OnDeliveryCountUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataManager_Statics::NewProp_OnCompletedCountUpdate,
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
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataManager_Statics::NewProp_CompletedCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataManager_Statics::NewProp_DeliveryCount,
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
	FuncInfo,
	Z_Construct_UClass_ADataManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_ADataManager, ADataManager::StaticClass, TEXT("ADataManager"), &Z_Registration_Info_UClass_ADataManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADataManager), 3605942744U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_DataManager_h__Script_Factory_998104570(TEXT("/Script/Factory"),
	Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_DataManager_h__Script_Factory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_DataManager_h__Script_Factory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
