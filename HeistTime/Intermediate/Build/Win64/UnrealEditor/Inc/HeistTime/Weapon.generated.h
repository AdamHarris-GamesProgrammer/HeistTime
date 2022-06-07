// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HEISTTIME_Weapon_generated_h
#error "Weapon.generated.h already included, missing '#pragma once' in Weapon.h"
#endif
#define HEISTTIME_Weapon_generated_h

#define FID_HeistTime_Source_HeistTime_Weapon_h_24_SPARSE_DATA
#define FID_HeistTime_Source_HeistTime_Weapon_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCollectAmmo); \
	DECLARE_FUNCTION(execGetAmmoString); \
	DECLARE_FUNCTION(execGetBulletsInClip); \
	DECLARE_FUNCTION(execGetCurrentAmmo);


#define FID_HeistTime_Source_HeistTime_Weapon_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCollectAmmo); \
	DECLARE_FUNCTION(execGetAmmoString); \
	DECLARE_FUNCTION(execGetBulletsInClip); \
	DECLARE_FUNCTION(execGetCurrentAmmo);


#define FID_HeistTime_Source_HeistTime_Weapon_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HeistTime"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define FID_HeistTime_Source_HeistTime_Weapon_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HeistTime"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define FID_HeistTime_Source_HeistTime_Weapon_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public:


#define FID_HeistTime_Source_HeistTime_Weapon_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeapon)


#define FID_HeistTime_Source_HeistTime_Weapon_h_21_PROLOG
#define FID_HeistTime_Source_HeistTime_Weapon_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HeistTime_Source_HeistTime_Weapon_h_24_SPARSE_DATA \
	FID_HeistTime_Source_HeistTime_Weapon_h_24_RPC_WRAPPERS \
	FID_HeistTime_Source_HeistTime_Weapon_h_24_INCLASS \
	FID_HeistTime_Source_HeistTime_Weapon_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HeistTime_Source_HeistTime_Weapon_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HeistTime_Source_HeistTime_Weapon_h_24_SPARSE_DATA \
	FID_HeistTime_Source_HeistTime_Weapon_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HeistTime_Source_HeistTime_Weapon_h_24_INCLASS_NO_PURE_DECLS \
	FID_HeistTime_Source_HeistTime_Weapon_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HEISTTIME_API UClass* StaticClass<class AWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HeistTime_Source_HeistTime_Weapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
