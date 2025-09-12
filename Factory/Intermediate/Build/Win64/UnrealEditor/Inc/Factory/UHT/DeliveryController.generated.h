// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DeliveryController.h"

#ifdef FACTORY_DeliveryController_generated_h
#error "DeliveryController.generated.h already included, missing '#pragma once' in DeliveryController.h"
#endif
#define FACTORY_DeliveryController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ADeliveryController ******************************************************
FACTORY_API UClass* Z_Construct_UClass_ADeliveryController_NoRegister();

#define FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_DeliveryController_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADeliveryController(); \
	friend struct Z_Construct_UClass_ADeliveryController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FACTORY_API UClass* Z_Construct_UClass_ADeliveryController_NoRegister(); \
public: \
	DECLARE_CLASS2(ADeliveryController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Factory"), Z_Construct_UClass_ADeliveryController_NoRegister) \
	DECLARE_SERIALIZER(ADeliveryController)


#define FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_DeliveryController_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADeliveryController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADeliveryController(ADeliveryController&&) = delete; \
	ADeliveryController(const ADeliveryController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADeliveryController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADeliveryController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADeliveryController) \
	NO_API virtual ~ADeliveryController();


#define FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_DeliveryController_h_7_PROLOG
#define FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_DeliveryController_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_DeliveryController_h_10_INCLASS_NO_PURE_DECLS \
	FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_DeliveryController_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADeliveryController;

// ********** End Class ADeliveryController ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_DeliveryController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
