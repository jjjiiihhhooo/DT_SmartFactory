// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Managers/Spawner.h"

#ifdef FACTORY_Spawner_generated_h
#error "Spawner.generated.h already included, missing '#pragma once' in Spawner.h"
#endif
#define FACTORY_Spawner_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASpawner *****************************************************************
FACTORY_API UClass* Z_Construct_UClass_ASpawner_NoRegister();

#define FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_Spawner_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpawner(); \
	friend struct Z_Construct_UClass_ASpawner_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FACTORY_API UClass* Z_Construct_UClass_ASpawner_NoRegister(); \
public: \
	DECLARE_CLASS2(ASpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Factory"), Z_Construct_UClass_ASpawner_NoRegister) \
	DECLARE_SERIALIZER(ASpawner)


#define FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_Spawner_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASpawner(ASpawner&&) = delete; \
	ASpawner(const ASpawner&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpawner) \
	NO_API virtual ~ASpawner();


#define FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_Spawner_h_11_PROLOG
#define FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_Spawner_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_Spawner_h_14_INCLASS_NO_PURE_DECLS \
	FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_Spawner_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASpawner;

// ********** End Class ASpawner *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Managers_Spawner_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
