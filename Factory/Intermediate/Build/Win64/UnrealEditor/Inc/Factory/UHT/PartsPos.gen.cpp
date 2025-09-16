// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factory/PartsPos.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePartsPos() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
FACTORY_API UClass* Z_Construct_UClass_APartsPos();
FACTORY_API UClass* Z_Construct_UClass_APartsPos_NoRegister();
UPackage* Z_Construct_UPackage__Script_Factory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APartsPos ****************************************************************
void APartsPos::StaticRegisterNativesAPartsPos()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_APartsPos;
UClass* APartsPos::GetPrivateStaticClass()
{
	using TClass = APartsPos;
	if (!Z_Registration_Info_UClass_APartsPos.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PartsPos"),
			Z_Registration_Info_UClass_APartsPos.InnerSingleton,
			StaticRegisterNativesAPartsPos,
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
	return Z_Registration_Info_UClass_APartsPos.InnerSingleton;
}
UClass* Z_Construct_UClass_APartsPos_NoRegister()
{
	return APartsPos::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APartsPos_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PartsPos.h" },
		{ "ModuleRelativePath", "PartsPos.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPos_MetaData[] = {
		{ "Category", "PartsPos" },
		{ "ModuleRelativePath", "PartsPos.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IdlePos_MetaData[] = {
		{ "Category", "PartsPos" },
		{ "ModuleRelativePath", "PartsPos.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parts_MetaData[] = {
		{ "Category", "PartsPos" },
		{ "ModuleRelativePath", "PartsPos.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSelect_MetaData[] = {
		{ "Category", "PartsPos" },
		{ "ModuleRelativePath", "PartsPos.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReady_MetaData[] = {
		{ "Category", "PartsPos" },
		{ "ModuleRelativePath", "PartsPos.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnPos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IdlePos;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parts;
	static void NewProp_bSelect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelect;
	static void NewProp_bReady_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReady;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APartsPos>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APartsPos_Statics::NewProp_SpawnPos = { "SpawnPos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APartsPos, SpawnPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnPos_MetaData), NewProp_SpawnPos_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APartsPos_Statics::NewProp_IdlePos = { "IdlePos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APartsPos, IdlePos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IdlePos_MetaData), NewProp_IdlePos_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APartsPos_Statics::NewProp_Parts = { "Parts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APartsPos, Parts), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parts_MetaData), NewProp_Parts_MetaData) };
void Z_Construct_UClass_APartsPos_Statics::NewProp_bSelect_SetBit(void* Obj)
{
	((APartsPos*)Obj)->bSelect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APartsPos_Statics::NewProp_bSelect = { "bSelect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APartsPos), &Z_Construct_UClass_APartsPos_Statics::NewProp_bSelect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSelect_MetaData), NewProp_bSelect_MetaData) };
void Z_Construct_UClass_APartsPos_Statics::NewProp_bReady_SetBit(void* Obj)
{
	((APartsPos*)Obj)->bReady = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APartsPos_Statics::NewProp_bReady = { "bReady", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APartsPos), &Z_Construct_UClass_APartsPos_Statics::NewProp_bReady_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReady_MetaData), NewProp_bReady_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APartsPos_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartsPos_Statics::NewProp_SpawnPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartsPos_Statics::NewProp_IdlePos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartsPos_Statics::NewProp_Parts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartsPos_Statics::NewProp_bSelect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartsPos_Statics::NewProp_bReady,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APartsPos_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APartsPos_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Factory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APartsPos_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APartsPos_Statics::ClassParams = {
	&APartsPos::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APartsPos_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APartsPos_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APartsPos_Statics::Class_MetaDataParams), Z_Construct_UClass_APartsPos_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APartsPos()
{
	if (!Z_Registration_Info_UClass_APartsPos.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APartsPos.OuterSingleton, Z_Construct_UClass_APartsPos_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APartsPos.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APartsPos);
APartsPos::~APartsPos() {}
// ********** End Class APartsPos ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_PartsPos_h__Script_Factory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APartsPos, APartsPos::StaticClass, TEXT("APartsPos"), &Z_Registration_Info_UClass_APartsPos, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APartsPos), 1616164491U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_PartsPos_h__Script_Factory_2789845296(TEXT("/Script/Factory"),
	Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_PartsPos_h__Script_Factory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_JIHO_UE5_DT_SmartFactory_Factory_Source_Factory_PartsPos_h__Script_Factory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
