// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/ItemPos.h"

#ifdef FACTORY_ItemPos_generated_h
#error "ItemPos.generated.h already included, missing '#pragma once' in ItemPos.h"
#endif
#define FACTORY_ItemPos_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AItemPos *****************************************************************
FACTORY_API UClass* Z_Construct_UClass_AItemPos_NoRegister();

#define FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Actors_ItemPos_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItemPos(); \
	friend struct Z_Construct_UClass_AItemPos_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FACTORY_API UClass* Z_Construct_UClass_AItemPos_NoRegister(); \
public: \
	DECLARE_CLASS2(AItemPos, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Factory"), Z_Construct_UClass_AItemPos_NoRegister) \
	DECLARE_SERIALIZER(AItemPos)


#define FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Actors_ItemPos_h_10_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AItemPos(AItemPos&&) = delete; \
	AItemPos(const AItemPos&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItemPos); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItemPos); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItemPos) \
	NO_API virtual ~AItemPos();


#define FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Actors_ItemPos_h_7_PROLOG
#define FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Actors_ItemPos_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Actors_ItemPos_h_10_INCLASS_NO_PURE_DECLS \
	FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Actors_ItemPos_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AItemPos;

// ********** End Class AItemPos *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Actors_ItemPos_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
