// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arkanoid/brickmover.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodebrickmover() {}
// Cross Module References
	ARKANOID_API UClass* Z_Construct_UClass_Ubrickmover_NoRegister();
	ARKANOID_API UClass* Z_Construct_UClass_Ubrickmover();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Arkanoid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void Ubrickmover::StaticRegisterNativesUbrickmover()
	{
	}
	UClass* Z_Construct_UClass_Ubrickmover_NoRegister()
	{
		return Ubrickmover::StaticClass();
	}
	struct Z_Construct_UClass_Ubrickmover_Statics
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
	UObject* (*const Z_Construct_UClass_Ubrickmover_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Arkanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ubrickmover_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "brickmover.h" },
		{ "ModuleRelativePath", "brickmover.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ubrickmover_Statics::NewProp_posicion_MetaData[] = {
		{ "Category", "brickmover" },
		{ "ModuleRelativePath", "brickmover.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_Ubrickmover_Statics::NewProp_posicion = { "posicion", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ubrickmover, posicion), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_Ubrickmover_Statics::NewProp_posicion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ubrickmover_Statics::NewProp_posicion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ubrickmover_Statics::NewProp_velocidad_MetaData[] = {
		{ "Category", "brickmover" },
		{ "ModuleRelativePath", "brickmover.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_Ubrickmover_Statics::NewProp_velocidad = { "velocidad", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ubrickmover, velocidad), METADATA_PARAMS(Z_Construct_UClass_Ubrickmover_Statics::NewProp_velocidad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ubrickmover_Statics::NewProp_velocidad_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Ubrickmover_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ubrickmover_Statics::NewProp_posicion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ubrickmover_Statics::NewProp_velocidad,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Ubrickmover_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Ubrickmover>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Ubrickmover_Statics::ClassParams = {
		&Ubrickmover::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_Ubrickmover_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_Ubrickmover_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Ubrickmover_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Ubrickmover_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Ubrickmover()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Ubrickmover_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Ubrickmover, 2634104023);
	template<> ARKANOID_API UClass* StaticClass<Ubrickmover>()
	{
		return Ubrickmover::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Ubrickmover(Z_Construct_UClass_Ubrickmover, &Ubrickmover::StaticClass, TEXT("/Script/Arkanoid"), TEXT("Ubrickmover"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Ubrickmover);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
