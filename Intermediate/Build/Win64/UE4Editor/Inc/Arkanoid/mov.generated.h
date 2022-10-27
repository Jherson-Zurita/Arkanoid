// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARKANOID_mov_generated_h
#error "mov.generated.h already included, missing '#pragma once' in mov.h"
#endif
#define ARKANOID_mov_generated_h

#define Arkanoid_Source_Arkanoid_mov_h_13_SPARSE_DATA
#define Arkanoid_Source_Arkanoid_mov_h_13_RPC_WRAPPERS
#define Arkanoid_Source_Arkanoid_mov_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Arkanoid_Source_Arkanoid_mov_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUmov(); \
	friend struct Z_Construct_UClass_Umov_Statics; \
public: \
	DECLARE_CLASS(Umov, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arkanoid"), NO_API) \
	DECLARE_SERIALIZER(Umov)


#define Arkanoid_Source_Arkanoid_mov_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUmov(); \
	friend struct Z_Construct_UClass_Umov_Statics; \
public: \
	DECLARE_CLASS(Umov, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arkanoid"), NO_API) \
	DECLARE_SERIALIZER(Umov)


#define Arkanoid_Source_Arkanoid_mov_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Umov(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Umov) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Umov); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Umov); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Umov(Umov&&); \
	NO_API Umov(const Umov&); \
public:


#define Arkanoid_Source_Arkanoid_mov_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Umov(Umov&&); \
	NO_API Umov(const Umov&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Umov); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Umov); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Umov)


#define Arkanoid_Source_Arkanoid_mov_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__posicion() { return STRUCT_OFFSET(Umov, posicion); } \
	FORCEINLINE static uint32 __PPO__velocidad() { return STRUCT_OFFSET(Umov, velocidad); }


#define Arkanoid_Source_Arkanoid_mov_h_10_PROLOG
#define Arkanoid_Source_Arkanoid_mov_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Arkanoid_Source_Arkanoid_mov_h_13_PRIVATE_PROPERTY_OFFSET \
	Arkanoid_Source_Arkanoid_mov_h_13_SPARSE_DATA \
	Arkanoid_Source_Arkanoid_mov_h_13_RPC_WRAPPERS \
	Arkanoid_Source_Arkanoid_mov_h_13_INCLASS \
	Arkanoid_Source_Arkanoid_mov_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Arkanoid_Source_Arkanoid_mov_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Arkanoid_Source_Arkanoid_mov_h_13_PRIVATE_PROPERTY_OFFSET \
	Arkanoid_Source_Arkanoid_mov_h_13_SPARSE_DATA \
	Arkanoid_Source_Arkanoid_mov_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Arkanoid_Source_Arkanoid_mov_h_13_INCLASS_NO_PURE_DECLS \
	Arkanoid_Source_Arkanoid_mov_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARKANOID_API UClass* StaticClass<class Umov>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Arkanoid_Source_Arkanoid_mov_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
