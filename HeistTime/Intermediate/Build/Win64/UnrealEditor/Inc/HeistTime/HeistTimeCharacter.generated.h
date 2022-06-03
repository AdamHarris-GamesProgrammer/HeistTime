// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HEISTTIME_HeistTimeCharacter_generated_h
#error "HeistTimeCharacter.generated.h already included, missing '#pragma once' in HeistTimeCharacter.h"
#endif
#define HEISTTIME_HeistTimeCharacter_generated_h

#define FID_HeistTime_Source_HeistTime_HeistTimeCharacter_h_18_DELEGATE \
static inline void FOnUseItem_DelegateWrapper(const FMulticastScriptDelegate& OnUseItem) \
{ \
	OnUseItem.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_HeistTime_Source_HeistTime_HeistTimeCharacter_h_23_SPARSE_DATA
#define FID_HeistTime_Source_HeistTime_HeistTimeCharacter_h_23_RPC_WRAPPERS
#define FID_HeistTime_Source_HeistTime_HeistTimeCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_HeistTime_Source_HeistTime_HeistTimeCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHeistTimeCharacter(); \
	friend struct Z_Construct_UClass_AHeistTimeCharacter_Statics; \
public: \
	DECLARE_CLASS(AHeistTimeCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HeistTime"), NO_API) \
	DECLARE_SERIALIZER(AHeistTimeCharacter)


#define FID_HeistTime_Source_HeistTime_HeistTimeCharacter_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAHeistTimeCharacter(); \
	friend struct Z_Construct_UClass_AHeistTimeCharacter_Statics; \
public: \
	DECLARE_CLASS(AHeistTimeCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HeistTime"), NO_API) \
	DECLARE_SERIALIZER(AHeistTimeCharacter)


#define FID_HeistTime_Source_HeistTime_HeistTimeCharacter_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHeistTimeCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHeistTimeCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHeistTimeCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeistTimeCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHeistTimeCharacter(AHeistTimeCharacter&&); \
	NO_API AHeistTimeCharacter(const AHeistTimeCharacter&); \
public:


#define FID_HeistTime_Source_HeistTime_HeistTimeCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHeistTimeCharacter(AHeistTimeCharacter&&); \
	NO_API AHeistTimeCharacter(const AHeistTimeCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHeistTimeCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeistTimeCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHeistTimeCharacter)


#define FID_HeistTime_Source_HeistTime_HeistTimeCharacter_h_20_PROLOG
#define FID_HeistTime_Source_HeistTime_HeistTimeCharacter_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HeistTime_Source_HeistTime_HeistTimeCharacter_h_23_SPARSE_DATA \
	FID_HeistTime_Source_HeistTime_HeistTimeCharacter_h_23_RPC_WRAPPERS \
	FID_HeistTime_Source_HeistTime_HeistTimeCharacter_h_23_INCLASS \
	FID_HeistTime_Source_HeistTime_HeistTimeCharacter_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HeistTime_Source_HeistTime_HeistTimeCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HeistTime_Source_HeistTime_HeistTimeCharacter_h_23_SPARSE_DATA \
	FID_HeistTime_Source_HeistTime_HeistTimeCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HeistTime_Source_HeistTime_HeistTimeCharacter_h_23_INCLASS_NO_PURE_DECLS \
	FID_HeistTime_Source_HeistTime_HeistTimeCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HEISTTIME_API UClass* StaticClass<class AHeistTimeCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HeistTime_Source_HeistTime_HeistTimeCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
