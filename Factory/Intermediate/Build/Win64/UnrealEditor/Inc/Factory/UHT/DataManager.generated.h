// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Managers/DataManager.h"

#ifdef FACTORY_DataManager_generated_h
#error "DataManager.generated.h already included, missing '#pragma once' in DataManager.h"
#endif
#define FACTORY_DataManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ASell;

// ********** Begin Delegate FOnCountChanged *******************************************************
#define FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_DataManager_h_14_DELEGATE \
FACTORY_API void FOnCountChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCountChanged);


// ********** End Delegate FOnCountChanged *********************************************************

// ********** Begin Class ADataManager *************************************************************
#define FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_DataManager_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIncreaseCompletedCount); \
	DECLARE_FUNCTION(execDecreaseDeliveryCount); \
	DECLARE_FUNCTION(execIncreaseDeliveryCount); \
	DECLARE_FUNCTION(execDecreaseOrderCount); \
	DECLARE_FUNCTION(execIncreaseOrderCount); \
	DECLARE_FUNCTION(execGetDeliveryCount); \
	DECLARE_FUNCTION(execGetCompletedCount); \
	DECLARE_FUNCTION(execGetOrderCount); \
	DECLARE_FUNCTION(execToggleSellState); \
	DECLARE_FUNCTION(execGetSellAt);


FACTORY_API UClass* Z_Construct_UClass_ADataManager_NoRegister();

#define FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_DataManager_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADataManager(); \
	friend struct Z_Construct_UClass_ADataManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FACTORY_API UClass* Z_Construct_UClass_ADataManager_NoRegister(); \
public: \
	DECLARE_CLASS2(ADataManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Factory"), Z_Construct_UClass_ADataManager_NoRegister) \
	DECLARE_SERIALIZER(ADataManager)


#define FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_DataManager_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADataManager(ADataManager&&) = delete; \
	ADataManager(const ADataManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADataManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADataManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADataManager) \
	NO_API virtual ~ADataManager();


#define FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_DataManager_h_16_PROLOG
#define FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_DataManager_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_DataManager_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_DataManager_h_19_INCLASS_NO_PURE_DECLS \
	FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_DataManager_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADataManager;

// ********** End Class ADataManager ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_DataManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
