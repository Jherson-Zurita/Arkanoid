// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arkanoid/Balll.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBalll() {}
// Cross Module References
	ARKANOID_API UClass* Z_Construct_UClass_ABalll_NoRegister();
	ARKANOID_API UClass* Z_Construct_UClass_ABalll();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Arkanoid();
// End Cross Module References
	void ABalll::StaticRegisterNativesABalll()
	{
	}
	UClass* Z_Construct_UClass_ABalll_NoRegister()
	{
		return ABalll::StaticClass();
	}
	struct Z_Construct_UClass_ABalll_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABalll_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Arkanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABalll_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Balll.h" },
		{ "ModuleRelativePath", "Balll.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABalll_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABalll>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABalll_Statics::ClassParams = {
		&ABalll::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABalll_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABalll_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABalll()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABalll_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABalll, 1875519391);
	template<> ARKANOID_API UClass* StaticClass<ABalll>()
	{
		return ABalll::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABalll(Z_Construct_UClass_ABalll, &ABalll::StaticClass, TEXT("/Script/Arkanoid"), TEXT("ABalll"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABalll);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
