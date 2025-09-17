// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Managers/Manager.h"

#ifdef FACTORY_Manager_generated_h
#error "Manager.generated.h already included, missing '#pragma once' in Manager.h"
#endif
#define FACTORY_Manager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AManager *****************************************************************
#define FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_Manager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetReady); \
	DECLARE_FUNCTION(execRun);


FACTORY_API UClass* Z_Construct_UClass_AManager_NoRegister();

#define FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_Manager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAManager(); \
	friend struct Z_Construct_UClass_AManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FACTORY_API UClass* Z_Construct_UClass_AManager_NoRegister(); \
public: \
	DECLARE_CLASS2(AManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Factory"), Z_Construct_UClass_AManager_NoRegister) \
	DECLARE_SERIALIZER(AManager)


#define FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_Manager_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AManager(AManager&&) = delete; \
	AManager(const AManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AManager) \
	NO_API virtual ~AManager();


#define FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_Manager_h_13_PROLOG
#define FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_Manager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_Manager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_Manager_h_16_INCLASS_NO_PURE_DECLS \
	FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_Manager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AManager;

// ********** End Class AManager *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_Manager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
