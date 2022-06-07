// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AHeistTimeCharacter;
#ifdef HEISTTIME_Bag_Pickup_generated_h
#error "Bag_Pickup.generated.h already included, missing '#pragma once' in Bag_Pickup.h"
#endif
#define HEISTTIME_Bag_Pickup_generated_h

#define FID_HeistTime_Source_HeistTime_Bag_Pickup_h_17_DELEGATE \
struct _Script_HeistTime_eventOnCollectedEvent_Parms \
{ \
	AHeistTimeCharacter* PickUpCharacter; \
}; \
static inline void FOnCollectedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnCollectedEvent, AHeistTimeCharacter* PickUpCharacter) \
{ \
	_Script_HeistTime_eventOnCollectedEvent_Parms Parms; \
	Parms.PickUpCharacter=PickUpCharacter; \
	OnCollectedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HeistTime_Source_HeistTime_Bag_Pickup_h_22_SPARSE_DATA
#define FID_HeistTime_Source_HeistTime_Bag_Pickup_h_22_RPC_WRAPPERS
#define FID_HeistTime_Source_HeistTime_Bag_Pickup_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_HeistTime_Source_HeistTime_Bag_Pickup_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABag_Pickup(); \
	friend struct Z_Construct_UClass_ABag_Pickup_Statics; \
public: \
	DECLARE_CLASS(ABag_Pickup, APickupBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HeistTime"), NO_API) \
	DECLARE_SERIALIZER(ABag_Pickup)


#define FID_HeistTime_Source_HeistTime_Bag_Pickup_h_22_INCLASS \
private: \
	static void StaticRegisterNativesABag_Pickup(); \
	friend struct Z_Construct_UClass_ABag_Pickup_Statics; \
public: \
	DECLARE_CLASS(ABag_Pickup, APickupBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HeistTime"), NO_API) \
	DECLARE_SERIALIZER(ABag_Pickup)


#define FID_HeistTime_Source_HeistTime_Bag_Pickup_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABag_Pickup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABag_Pickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABag_Pickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABag_Pickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABag_Pickup(ABag_Pickup&&); \
	NO_API ABag_Pickup(const ABag_Pickup&); \
public:


#define FID_HeistTime_Source_HeistTime_Bag_Pickup_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABag_Pickup(ABag_Pickup&&); \
	NO_API ABag_Pickup(const ABag_Pickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABag_Pickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABag_Pickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABag_Pickup)


#define FID_HeistTime_Source_HeistTime_Bag_Pickup_h_18_PROLOG
#define FID_HeistTime_Source_HeistTime_Bag_Pickup_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HeistTime_Source_HeistTime_Bag_Pickup_h_22_SPARSE_DATA \
	FID_HeistTime_Source_HeistTime_Bag_Pickup_h_22_RPC_WRAPPERS \
	FID_HeistTime_Source_HeistTime_Bag_Pickup_h_22_INCLASS \
	FID_HeistTime_Source_HeistTime_Bag_Pickup_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HeistTime_Source_HeistTime_Bag_Pickup_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HeistTime_Source_HeistTime_Bag_Pickup_h_22_SPARSE_DATA \
	FID_HeistTime_Source_HeistTime_Bag_Pickup_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HeistTime_Source_HeistTime_Bag_Pickup_h_22_INCLASS_NO_PURE_DECLS \
	FID_HeistTime_Source_HeistTime_Bag_Pickup_h_22_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HEISTTIME_API UClass* StaticClass<class ABag_Pickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HeistTime_Source_HeistTime_Bag_Pickup_h


#define FOREACH_ENUM_BAGTYPE(op) \
	op(BagType::Gold) \
	op(BagType::Money) 

enum class BagType;
template<> HEISTTIME_API UEnum* StaticEnum<BagType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
