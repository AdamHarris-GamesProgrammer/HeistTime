// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HEISTTIME_HeistTimeGameMode_generated_h
#error "HeistTimeGameMode.generated.h already included, missing '#pragma once' in HeistTimeGameMode.h"
#endif
#define HEISTTIME_HeistTimeGameMode_generated_h

#define FID_HeistTime_Source_HeistTime_HeistTimeGameMode_h_12_SPARSE_DATA
#define FID_HeistTime_Source_HeistTime_HeistTimeGameMode_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanEscape); \
	DECLARE_FUNCTION(execGetMoneyTarget); \
	DECLARE_FUNCTION(execGetCurrentMoney);


#define FID_HeistTime_Source_HeistTime_HeistTimeGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanEscape); \
	DECLARE_FUNCTION(execGetMoneyTarget); \
	DECLARE_FUNCTION(execGetCurrentMoney);


#define FID_HeistTime_Source_HeistTime_HeistTimeGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHeistTimeGameMode(); \
	friend struct Z_Construct_UClass_AHeistTimeGameMode_Statics; \
public: \
	DECLARE_CLASS(AHeistTimeGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/HeistTime"), HEISTTIME_API) \
	DECLARE_SERIALIZER(AHeistTimeGameMode)


#define FID_HeistTime_Source_HeistTime_HeistTimeGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAHeistTimeGameMode(); \
	friend struct Z_Construct_UClass_AHeistTimeGameMode_Statics; \
public: \
	DECLARE_CLASS(AHeistTimeGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/HeistTime"), HEISTTIME_API) \
	DECLARE_SERIALIZER(AHeistTimeGameMode)


#define FID_HeistTime_Source_HeistTime_HeistTimeGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HEISTTIME_API AHeistTimeGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHeistTimeGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HEISTTIME_API, AHeistTimeGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeistTimeGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	HEISTTIME_API AHeistTimeGameMode(AHeistTimeGameMode&&); \
	HEISTTIME_API AHeistTimeGameMode(const AHeistTimeGameMode&); \
public:


#define FID_HeistTime_Source_HeistTime_HeistTimeGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	HEISTTIME_API AHeistTimeGameMode(AHeistTimeGameMode&&); \
	HEISTTIME_API AHeistTimeGameMode(const AHeistTimeGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HEISTTIME_API, AHeistTimeGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeistTimeGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHeistTimeGameMode)


#define FID_HeistTime_Source_HeistTime_HeistTimeGameMode_h_9_PROLOG
#define FID_HeistTime_Source_HeistTime_HeistTimeGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HeistTime_Source_HeistTime_HeistTimeGameMode_h_12_SPARSE_DATA \
	FID_HeistTime_Source_HeistTime_HeistTimeGameMode_h_12_RPC_WRAPPERS \
	FID_HeistTime_Source_HeistTime_HeistTimeGameMode_h_12_INCLASS \
	FID_HeistTime_Source_HeistTime_HeistTimeGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HeistTime_Source_HeistTime_HeistTimeGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HeistTime_Source_HeistTime_HeistTimeGameMode_h_12_SPARSE_DATA \
	FID_HeistTime_Source_HeistTime_HeistTimeGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HeistTime_Source_HeistTime_HeistTimeGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_HeistTime_Source_HeistTime_HeistTimeGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HEISTTIME_API UClass* StaticClass<class AHeistTimeGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HeistTime_Source_HeistTime_HeistTimeGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
