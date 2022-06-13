// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HEISTTIME_Drill_generated_h
#error "Drill.generated.h already included, missing '#pragma once' in Drill.h"
#endif
#define HEISTTIME_Drill_generated_h

#define FID_HeistTime_Source_HeistTime_Drill_h_12_SPARSE_DATA
#define FID_HeistTime_Source_HeistTime_Drill_h_12_RPC_WRAPPERS
#define FID_HeistTime_Source_HeistTime_Drill_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_HeistTime_Source_HeistTime_Drill_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADrill(); \
	friend struct Z_Construct_UClass_ADrill_Statics; \
public: \
	DECLARE_CLASS(ADrill, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HeistTime"), NO_API) \
	DECLARE_SERIALIZER(ADrill)


#define FID_HeistTime_Source_HeistTime_Drill_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADrill(); \
	friend struct Z_Construct_UClass_ADrill_Statics; \
public: \
	DECLARE_CLASS(ADrill, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HeistTime"), NO_API) \
	DECLARE_SERIALIZER(ADrill)


#define FID_HeistTime_Source_HeistTime_Drill_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADrill(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADrill) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADrill); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADrill); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADrill(ADrill&&); \
	NO_API ADrill(const ADrill&); \
public:


#define FID_HeistTime_Source_HeistTime_Drill_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADrill(ADrill&&); \
	NO_API ADrill(const ADrill&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADrill); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADrill); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADrill)


#define FID_HeistTime_Source_HeistTime_Drill_h_9_PROLOG
#define FID_HeistTime_Source_HeistTime_Drill_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HeistTime_Source_HeistTime_Drill_h_12_SPARSE_DATA \
	FID_HeistTime_Source_HeistTime_Drill_h_12_RPC_WRAPPERS \
	FID_HeistTime_Source_HeistTime_Drill_h_12_INCLASS \
	FID_HeistTime_Source_HeistTime_Drill_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HeistTime_Source_HeistTime_Drill_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HeistTime_Source_HeistTime_Drill_h_12_SPARSE_DATA \
	FID_HeistTime_Source_HeistTime_Drill_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HeistTime_Source_HeistTime_Drill_h_12_INCLASS_NO_PURE_DECLS \
	FID_HeistTime_Source_HeistTime_Drill_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HEISTTIME_API UClass* StaticClass<class ADrill>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HeistTime_Source_HeistTime_Drill_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
