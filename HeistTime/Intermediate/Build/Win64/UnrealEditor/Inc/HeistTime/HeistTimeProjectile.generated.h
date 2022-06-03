// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef HEISTTIME_HeistTimeProjectile_generated_h
#error "HeistTimeProjectile.generated.h already included, missing '#pragma once' in HeistTimeProjectile.h"
#endif
#define HEISTTIME_HeistTimeProjectile_generated_h

#define FID_HeistTime_Source_HeistTime_HeistTimeProjectile_h_15_SPARSE_DATA
#define FID_HeistTime_Source_HeistTime_HeistTimeProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_HeistTime_Source_HeistTime_HeistTimeProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_HeistTime_Source_HeistTime_HeistTimeProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHeistTimeProjectile(); \
	friend struct Z_Construct_UClass_AHeistTimeProjectile_Statics; \
public: \
	DECLARE_CLASS(AHeistTimeProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HeistTime"), NO_API) \
	DECLARE_SERIALIZER(AHeistTimeProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_HeistTime_Source_HeistTime_HeistTimeProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAHeistTimeProjectile(); \
	friend struct Z_Construct_UClass_AHeistTimeProjectile_Statics; \
public: \
	DECLARE_CLASS(AHeistTimeProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HeistTime"), NO_API) \
	DECLARE_SERIALIZER(AHeistTimeProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_HeistTime_Source_HeistTime_HeistTimeProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHeistTimeProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHeistTimeProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHeistTimeProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeistTimeProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHeistTimeProjectile(AHeistTimeProjectile&&); \
	NO_API AHeistTimeProjectile(const AHeistTimeProjectile&); \
public:


#define FID_HeistTime_Source_HeistTime_HeistTimeProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHeistTimeProjectile(AHeistTimeProjectile&&); \
	NO_API AHeistTimeProjectile(const AHeistTimeProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHeistTimeProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeistTimeProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHeistTimeProjectile)


#define FID_HeistTime_Source_HeistTime_HeistTimeProjectile_h_12_PROLOG
#define FID_HeistTime_Source_HeistTime_HeistTimeProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HeistTime_Source_HeistTime_HeistTimeProjectile_h_15_SPARSE_DATA \
	FID_HeistTime_Source_HeistTime_HeistTimeProjectile_h_15_RPC_WRAPPERS \
	FID_HeistTime_Source_HeistTime_HeistTimeProjectile_h_15_INCLASS \
	FID_HeistTime_Source_HeistTime_HeistTimeProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HeistTime_Source_HeistTime_HeistTimeProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HeistTime_Source_HeistTime_HeistTimeProjectile_h_15_SPARSE_DATA \
	FID_HeistTime_Source_HeistTime_HeistTimeProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HeistTime_Source_HeistTime_HeistTimeProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_HeistTime_Source_HeistTime_HeistTimeProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HEISTTIME_API UClass* StaticClass<class AHeistTimeProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HeistTime_Source_HeistTime_HeistTimeProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
