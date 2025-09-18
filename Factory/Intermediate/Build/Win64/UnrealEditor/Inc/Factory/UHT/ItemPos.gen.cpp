// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factory/Actors/ItemPos.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeItemPos() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
FACTORY_API UClass* Z_Construct_UClass_AItemPos();
FACTORY_API UClass* Z_Construct_UClass_AItemPos_NoRegister();
UPackage* Z_Construct_UPackage__Script_Factory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AItemPos *****************************************************************
void AItemPos::StaticRegisterNativesAItemPos()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AItemPos;
UClass* AItemPos::GetPrivateStaticClass()
{
	using TClass = AItemPos;
	if (!Z_Registration_Info_UClass_AItemPos.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ItemPos"),
			Z_Registration_Info_UClass_AItemPos.InnerSingleton,
			StaticRegisterNativesAItemPos,
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
	return Z_Registration_Info_UClass_AItemPos.InnerSingleton;
}
UClass* Z_Construct_UClass_AItemPos_NoRegister()
{
	return AItemPos::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AItemPos_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/ItemPos.h" },
		{ "ModuleRelativePath", "Actors/ItemPos.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPos_MetaData[] = {
		{ "Category", "ItemPos" },
		{ "ModuleRelativePath", "Actors/ItemPos.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IdlePos_MetaData[] = {
		{ "Category", "ItemPos" },
		{ "ModuleRelativePath", "Actors/ItemPos.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "ItemPos" },
		{ "ModuleRelativePath", "Actors/ItemPos.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSelect_MetaData[] = {
		{ "Category", "ItemPos" },
		{ "ModuleRelativePath", "Actors/ItemPos.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReady_MetaData[] = {
		{ "Category", "ItemPos" },
		{ "ModuleRelativePath", "Actors/ItemPos.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnPos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IdlePos;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static void NewProp_bSelect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelect;
	static void NewProp_bReady_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReady;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItemPos>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AItemPos_Statics::NewProp_SpawnPos = { "SpawnPos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemPos, SpawnPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnPos_MetaData), NewProp_SpawnPos_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AItemPos_Statics::NewProp_IdlePos = { "IdlePos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemPos, IdlePos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IdlePos_MetaData), NewProp_IdlePos_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemPos_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemPos, Item), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
void Z_Construct_UClass_AItemPos_Statics::NewProp_bSelect_SetBit(void* Obj)
{
	((AItemPos*)Obj)->bSelect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AItemPos_Statics::NewProp_bSelect = { "bSelect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AItemPos), &Z_Construct_UClass_AItemPos_Statics::NewProp_bSelect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSelect_MetaData), NewProp_bSelect_MetaData) };
void Z_Construct_UClass_AItemPos_Statics::NewProp_bReady_SetBit(void* Obj)
{
	((AItemPos*)Obj)->bReady = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AItemPos_Statics::NewProp_bReady = { "bReady", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AItemPos), &Z_Construct_UClass_AItemPos_Statics::NewProp_bReady_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReady_MetaData), NewProp_bReady_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItemPos_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemPos_Statics::NewProp_SpawnPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemPos_Statics::NewProp_IdlePos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemPos_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemPos_Statics::NewProp_bSelect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemPos_Statics::NewProp_bReady,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemPos_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AItemPos_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Factory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemPos_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AItemPos_Statics::ClassParams = {
	&AItemPos::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AItemPos_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AItemPos_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemPos_Statics::Class_MetaDataParams), Z_Construct_UClass_AItemPos_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AItemPos()
{
	if (!Z_Registration_Info_UClass_AItemPos.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AItemPos.OuterSingleton, Z_Construct_UClass_AItemPos_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AItemPos.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AItemPos);
AItemPos::~AItemPos() {}
// ********** End Class AItemPos *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Actors_ItemPos_h__Script_Factory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AItemPos, AItemPos::StaticClass, TEXT("AItemPos"), &Z_Registration_Info_UClass_AItemPos, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItemPos), 3233328564U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Actors_ItemPos_h__Script_Factory_3823382504(TEXT("/Script/Factory"),
	Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Actors_ItemPos_h__Script_Factory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_Actors_ItemPos_h__Script_Factory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
