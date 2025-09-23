// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/Item.h"

#ifdef FACTORY_Item_generated_h
#error "Item.generated.h already included, missing '#pragma once' in Item.h"
#endif
#define FACTORY_Item_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AItem ********************************************************************
FACTORY_API UClass* Z_Construct_UClass_AItem_NoRegister();

#define FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Actors_Item_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend struct Z_Construct_UClass_AItem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FACTORY_API UClass* Z_Construct_UClass_AItem_NoRegister(); \
public: \
	DECLARE_CLASS2(AItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Factory"), Z_Construct_UClass_AItem_NoRegister) \
	DECLARE_SERIALIZER(AItem)


#define FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Actors_Item_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AItem(AItem&&) = delete; \
	AItem(const AItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItem) \
	NO_API virtual ~AItem();


#define FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Actors_Item_h_10_PROLOG
#define FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Actors_Item_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Actors_Item_h_13_INCLASS_NO_PURE_DECLS \
	FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Actors_Item_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AItem;

// ********** End Class AItem **********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Actors_Item_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
