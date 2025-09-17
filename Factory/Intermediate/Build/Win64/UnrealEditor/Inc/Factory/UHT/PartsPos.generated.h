// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/PartsPos.h"

#ifdef FACTORY_PartsPos_generated_h
#error "PartsPos.generated.h already included, missing '#pragma once' in PartsPos.h"
#endif
#define FACTORY_PartsPos_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APartsPos ****************************************************************
FACTORY_API UClass* Z_Construct_UClass_APartsPos_NoRegister();

#define FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Actors_PartsPos_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPartsPos(); \
	friend struct Z_Construct_UClass_APartsPos_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FACTORY_API UClass* Z_Construct_UClass_APartsPos_NoRegister(); \
public: \
	DECLARE_CLASS2(APartsPos, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Factory"), Z_Construct_UClass_APartsPos_NoRegister) \
	DECLARE_SERIALIZER(APartsPos)


#define FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Actors_PartsPos_h_10_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APartsPos(APartsPos&&) = delete; \
	APartsPos(const APartsPos&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APartsPos); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APartsPos); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APartsPos) \
	NO_API virtual ~APartsPos();


#define FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Actors_PartsPos_h_7_PROLOG
#define FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Actors_PartsPos_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Actors_PartsPos_h_10_INCLASS_NO_PURE_DECLS \
	FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Actors_PartsPos_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APartsPos;

// ********** End Class APartsPos ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Actors_PartsPos_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
