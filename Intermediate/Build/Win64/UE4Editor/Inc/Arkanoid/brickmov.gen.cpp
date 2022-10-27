// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arkanoid/brickmov.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodebrickmov() {}
// Cross Module References
	ARKANOID_API UClass* Z_Construct_UClass_Ubrickmov_NoRegister();
	ARKANOID_API UClass* Z_Construct_UClass_Ubrickmov();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Arkanoid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void Ubrickmov::StaticRegisterNativesUbrickmov()
	{
	}
	UClass* Z_Construct_UClass_Ubrickmov_NoRegister()
	{
		return Ubrickmov::StaticClass();
	}
	struct Z_Construct_UClass_Ubrickmov_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_posicion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_posicion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_velocidad_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_velocidad;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Ubrickmov_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Arkanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ubrickmov_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "brickmov.h" },
		{ "ModuleRelativePath", "brickmov.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ubrickmov_Statics::NewProp_posicion_MetaData[] = {
		{ "Category", "brickmov" },
		{ "ModuleRelativePath", "brickmov.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_Ubrickmov_Statics::NewProp_posicion = { "posicion", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ubrickmov, posicion), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_Ubrickmov_Statics::NewProp_posicion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ubrickmov_Statics::NewProp_posicion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ubrickmov_Statics::NewProp_velocidad_MetaData[] = {
		{ "Category", "brickmov" },
		{ "ModuleRelativePath", "brickmov.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_Ubrickmov_Statics::NewProp_velocidad = { "velocidad", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ubrickmov, velocidad), METADATA_PARAMS(Z_Construct_UClass_Ubrickmov_Statics::NewProp_velocidad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ubrickmov_Statics::NewProp_velocidad_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Ubrickmov_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ubrickmov_Statics::NewProp_posicion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ubrickmov_Statics::NewProp_velocidad,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Ubrickmov_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Ubrickmov>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Ubrickmov_Statics::ClassParams = {
		&Ubrickmov::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_Ubrickmov_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_Ubrickmov_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Ubrickmov_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Ubrickmov_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Ubrickmov()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Ubrickmov_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Ubrickmov, 3859557976);
	template<> ARKANOID_API UClass* StaticClass<Ubrickmov>()
	{
		return Ubrickmov::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Ubrickmov(Z_Construct_UClass_Ubrickmov, &Ubrickmov::StaticClass, TEXT("/Script/Arkanoid"), TEXT("Ubrickmov"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Ubrickmov);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
