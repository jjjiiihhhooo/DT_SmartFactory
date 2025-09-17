// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/RobotArm.h"

#ifdef FACTORY_RobotArm_generated_h
#error "RobotArm.generated.h already included, missing '#pragma once' in RobotArm.h"
#endif
#define FACTORY_RobotArm_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ARobotArm ****************************************************************
FACTORY_API UClass* Z_Construct_UClass_ARobotArm_NoRegister();

#define FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Actors_RobotArm_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARobotArm(); \
	friend struct Z_Construct_UClass_ARobotArm_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FACTORY_API UClass* Z_Construct_UClass_ARobotArm_NoRegister(); \
public: \
	DECLARE_CLASS2(ARobotArm, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Factory"), Z_Construct_UClass_ARobotArm_NoRegister) \
	DECLARE_SERIALIZER(ARobotArm)


#define FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Actors_RobotArm_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARobotArm(ARobotArm&&) = delete; \
	ARobotArm(const ARobotArm&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARobotArm); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARobotArm); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARobotArm) \
	NO_API virtual ~ARobotArm();


#define FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Actors_RobotArm_h_10_PROLOG
#define FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Actors_RobotArm_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Actors_RobotArm_h_13_INCLASS_NO_PURE_DECLS \
	FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Actors_RobotArm_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARobotArm;

// ********** End Class ARobotArm ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Actors_RobotArm_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
