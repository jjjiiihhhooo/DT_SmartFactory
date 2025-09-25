// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Managers/CameraManager.h"

#ifdef FACTORY_CameraManager_generated_h
#error "CameraManager.generated.h already included, missing '#pragma once' in CameraManager.h"
#endif
#define FACTORY_CameraManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACameraManager ***********************************************************
#define FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_CameraManager_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSelectCamera);


FACTORY_API UClass* Z_Construct_UClass_ACameraManager_NoRegister();

#define FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_CameraManager_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACameraManager(); \
	friend struct Z_Construct_UClass_ACameraManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FACTORY_API UClass* Z_Construct_UClass_ACameraManager_NoRegister(); \
public: \
	DECLARE_CLASS2(ACameraManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Factory"), Z_Construct_UClass_ACameraManager_NoRegister) \
	DECLARE_SERIALIZER(ACameraManager)


#define FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_CameraManager_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACameraManager(ACameraManager&&) = delete; \
	ACameraManager(const ACameraManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACameraManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACameraManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACameraManager) \
	NO_API virtual ~ACameraManager();


#define FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_CameraManager_h_8_PROLOG
#define FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_CameraManager_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_CameraManager_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_CameraManager_h_11_INCLASS_NO_PURE_DECLS \
	FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_CameraManager_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACameraManager;

// ********** End Class ACameraManager *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_CameraManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
