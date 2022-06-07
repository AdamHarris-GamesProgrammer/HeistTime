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
#ifdef HEISTTIME_ExitPoint_generated_h
#error "ExitPoint.generated.h already included, missing '#pragma once' in ExitPoint.h"
#endif
#define HEISTTIME_ExitPoint_generated_h

#define FID_HeistTime_Source_HeistTime_ExitPoint_h_12_SPARSE_DATA
#define FID_HeistTime_Source_HeistTime_ExitPoint_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnSphereEndOverlap); \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_HeistTime_Source_HeistTime_ExitPoint_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSphereEndOverlap); \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_HeistTime_Source_HeistTime_ExitPoint_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAExitPoint(); \
	friend struct Z_Construct_UClass_AExitPoint_Statics; \
public: \
	DECLARE_CLASS(AExitPoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HeistTime"), NO_API) \
	DECLARE_SERIALIZER(AExitPoint)


#define FID_HeistTime_Source_HeistTime_ExitPoint_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAExitPoint(); \
	friend struct Z_Construct_UClass_AExitPoint_Statics; \
public: \
	DECLARE_CLASS(AExitPoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HeistTime"), NO_API) \
	DECLARE_SERIALIZER(AExitPoint)


#define FID_HeistTime_Source_HeistTime_ExitPoint_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AExitPoint(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AExitPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExitPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExitPoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExitPoint(AExitPoint&&); \
	NO_API AExitPoint(const AExitPoint&); \
public:


#define FID_HeistTime_Source_HeistTime_ExitPoint_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExitPoint(AExitPoint&&); \
	NO_API AExitPoint(const AExitPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExitPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExitPoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AExitPoint)


#define FID_HeistTime_Source_HeistTime_ExitPoint_h_9_PROLOG
#define FID_HeistTime_Source_HeistTime_ExitPoint_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HeistTime_Source_HeistTime_ExitPoint_h_12_SPARSE_DATA \
	FID_HeistTime_Source_HeistTime_ExitPoint_h_12_RPC_WRAPPERS \
	FID_HeistTime_Source_HeistTime_ExitPoint_h_12_INCLASS \
	FID_HeistTime_Source_HeistTime_ExitPoint_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HeistTime_Source_HeistTime_ExitPoint_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HeistTime_Source_HeistTime_ExitPoint_h_12_SPARSE_DATA \
	FID_HeistTime_Source_HeistTime_ExitPoint_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HeistTime_Source_HeistTime_ExitPoint_h_12_INCLASS_NO_PURE_DECLS \
	FID_HeistTime_Source_HeistTime_ExitPoint_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HEISTTIME_API UClass* StaticClass<class AExitPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HeistTime_Source_HeistTime_ExitPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
