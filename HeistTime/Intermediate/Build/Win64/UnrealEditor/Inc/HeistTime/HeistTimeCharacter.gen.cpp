// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HeistTime/HeistTimeCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeistTimeCharacter() {}
// Cross Module References
	HEISTTIME_API UFunction* Z_Construct_UDelegateFunction_HeistTime_OnUseItem__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_HeistTime();
	HEISTTIME_API UClass* Z_Construct_UClass_AHeistTimeCharacter_NoRegister();
	HEISTTIME_API UClass* Z_Construct_UClass_AHeistTimeCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	HEISTTIME_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	HEISTTIME_API UClass* Z_Construct_UClass_AExitPoint_NoRegister();
	HEISTTIME_API UClass* Z_Construct_UClass_APickupBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_HeistTime_OnUseItem__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HeistTime_OnUseItem__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Declaration of the delegate that will be called when the Primary Action is triggered\n// It is declared as dynamic so it can be accessed also in Blueprints\n" },
		{ "ModuleRelativePath", "HeistTimeCharacter.h" },
		{ "ToolTip", "Declaration of the delegate that will be called when the Primary Action is triggered\nIt is declared as dynamic so it can be accessed also in Blueprints" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HeistTime_OnUseItem__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HeistTime, nullptr, "OnUseItem__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_HeistTime_OnUseItem__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HeistTime_OnUseItem__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_HeistTime_OnUseItem__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HeistTime_OnUseItem__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AHeistTimeCharacter::execGetExitPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AExitPoint**)Z_Param__Result=P_THIS->GetExitPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeistTimeCharacter::execGetNearbyPickup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APickupBase**)Z_Param__Result=P_THIS->GetNearbyPickup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeistTimeCharacter::execGetCurrentWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AWeapon**)Z_Param__Result=P_THIS->GetCurrentWeapon();
		P_NATIVE_END;
	}
	void AHeistTimeCharacter::StaticRegisterNativesAHeistTimeCharacter()
	{
		UClass* Class = AHeistTimeCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentWeapon", &AHeistTimeCharacter::execGetCurrentWeapon },
			{ "GetExitPoint", &AHeistTimeCharacter::execGetExitPoint },
			{ "GetNearbyPickup", &AHeistTimeCharacter::execGetNearbyPickup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHeistTimeCharacter_GetCurrentWeapon_Statics
	{
		struct HeistTimeCharacter_eventGetCurrentWeapon_Parms
		{
			AWeapon* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHeistTimeCharacter_GetCurrentWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeistTimeCharacter_eventGetCurrentWeapon_Parms, ReturnValue), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeistTimeCharacter_GetCurrentWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeistTimeCharacter_GetCurrentWeapon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeistTimeCharacter_GetCurrentWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HeistTimeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeistTimeCharacter_GetCurrentWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeistTimeCharacter, nullptr, "GetCurrentWeapon", nullptr, nullptr, sizeof(Z_Construct_UFunction_AHeistTimeCharacter_GetCurrentWeapon_Statics::HeistTimeCharacter_eventGetCurrentWeapon_Parms), Z_Construct_UFunction_AHeistTimeCharacter_GetCurrentWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeistTimeCharacter_GetCurrentWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeistTimeCharacter_GetCurrentWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeistTimeCharacter_GetCurrentWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeistTimeCharacter_GetCurrentWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeistTimeCharacter_GetCurrentWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeistTimeCharacter_GetExitPoint_Statics
	{
		struct HeistTimeCharacter_eventGetExitPoint_Parms
		{
			AExitPoint* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHeistTimeCharacter_GetExitPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeistTimeCharacter_eventGetExitPoint_Parms, ReturnValue), Z_Construct_UClass_AExitPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeistTimeCharacter_GetExitPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeistTimeCharacter_GetExitPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeistTimeCharacter_GetExitPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HeistTimeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeistTimeCharacter_GetExitPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeistTimeCharacter, nullptr, "GetExitPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_AHeistTimeCharacter_GetExitPoint_Statics::HeistTimeCharacter_eventGetExitPoint_Parms), Z_Construct_UFunction_AHeistTimeCharacter_GetExitPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeistTimeCharacter_GetExitPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeistTimeCharacter_GetExitPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeistTimeCharacter_GetExitPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeistTimeCharacter_GetExitPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeistTimeCharacter_GetExitPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeistTimeCharacter_GetNearbyPickup_Statics
	{
		struct HeistTimeCharacter_eventGetNearbyPickup_Parms
		{
			APickupBase* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHeistTimeCharacter_GetNearbyPickup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeistTimeCharacter_eventGetNearbyPickup_Parms, ReturnValue), Z_Construct_UClass_APickupBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeistTimeCharacter_GetNearbyPickup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeistTimeCharacter_GetNearbyPickup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeistTimeCharacter_GetNearbyPickup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HeistTimeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeistTimeCharacter_GetNearbyPickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeistTimeCharacter, nullptr, "GetNearbyPickup", nullptr, nullptr, sizeof(Z_Construct_UFunction_AHeistTimeCharacter_GetNearbyPickup_Statics::HeistTimeCharacter_eventGetNearbyPickup_Parms), Z_Construct_UFunction_AHeistTimeCharacter_GetNearbyPickup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeistTimeCharacter_GetNearbyPickup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeistTimeCharacter_GetNearbyPickup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeistTimeCharacter_GetNearbyPickup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeistTimeCharacter_GetNearbyPickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeistTimeCharacter_GetNearbyPickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHeistTimeCharacter);
	UClass* Z_Construct_UClass_AHeistTimeCharacter_NoRegister()
	{
		return AHeistTimeCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AHeistTimeCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnRateGamepad_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnRateGamepad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUseItem_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUseItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__primaryWeaponClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp__primaryWeaponClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__secondaryWeaponClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp__secondaryWeaponClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__pCurrentWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__pCurrentWeapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHeistTimeCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_HeistTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHeistTimeCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHeistTimeCharacter_GetCurrentWeapon, "GetCurrentWeapon" }, // 705091109
		{ &Z_Construct_UFunction_AHeistTimeCharacter_GetExitPoint, "GetExitPoint" }, // 267118437
		{ &Z_Construct_UFunction_AHeistTimeCharacter_GetNearbyPickup, "GetNearbyPickup" }, // 2539911509
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeistTimeCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "HeistTimeCharacter.h" },
		{ "ModuleRelativePath", "HeistTimeCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeistTimeCharacter_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HeistTimeCharacter.h" },
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeistTimeCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeistTimeCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHeistTimeCharacter_Statics::NewProp_Mesh1P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeistTimeCharacter_Statics::NewProp_Mesh1P_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeistTimeCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** First person camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HeistTimeCharacter.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeistTimeCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeistTimeCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHeistTimeCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeistTimeCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeistTimeCharacter_Statics::NewProp_TurnRateGamepad_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "HeistTimeCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHeistTimeCharacter_Statics::NewProp_TurnRateGamepad = { "TurnRateGamepad", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeistTimeCharacter, TurnRateGamepad), METADATA_PARAMS(Z_Construct_UClass_AHeistTimeCharacter_Statics::NewProp_TurnRateGamepad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeistTimeCharacter_Statics::NewProp_TurnRateGamepad_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeistTimeCharacter_Statics::NewProp_OnUseItem_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/** Delegate to whom anyone can subscribe to receive this event */" },
		{ "ModuleRelativePath", "HeistTimeCharacter.h" },
		{ "ToolTip", "Delegate to whom anyone can subscribe to receive this event" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AHeistTimeCharacter_Statics::NewProp_OnUseItem = { "OnUseItem", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeistTimeCharacter, OnUseItem), Z_Construct_UDelegateFunction_HeistTime_OnUseItem__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AHeistTimeCharacter_Statics::NewProp_OnUseItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeistTimeCharacter_Statics::NewProp_OnUseItem_MetaData)) }; // 2002365291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeistTimeCharacter_Statics::NewProp__primaryWeaponClass_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ModuleRelativePath", "HeistTimeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHeistTimeCharacter_Statics::NewProp__primaryWeaponClass = { "_primaryWeaponClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeistTimeCharacter, _primaryWeaponClass), Z_Construct_UClass_AWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AHeistTimeCharacter_Statics::NewProp__primaryWeaponClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeistTimeCharacter_Statics::NewProp__primaryWeaponClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeistTimeCharacter_Statics::NewProp__secondaryWeaponClass_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ModuleRelativePath", "HeistTimeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHeistTimeCharacter_Statics::NewProp__secondaryWeaponClass = { "_secondaryWeaponClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeistTimeCharacter, _secondaryWeaponClass), Z_Construct_UClass_AWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AHeistTimeCharacter_Statics::NewProp__secondaryWeaponClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeistTimeCharacter_Statics::NewProp__secondaryWeaponClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeistTimeCharacter_Statics::NewProp__pCurrentWeapon_MetaData[] = {
		{ "ModuleRelativePath", "HeistTimeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeistTimeCharacter_Statics::NewProp__pCurrentWeapon = { "_pCurrentWeapon", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeistTimeCharacter, _pCurrentWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHeistTimeCharacter_Statics::NewProp__pCurrentWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeistTimeCharacter_Statics::NewProp__pCurrentWeapon_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHeistTimeCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeistTimeCharacter_Statics::NewProp_Mesh1P,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeistTimeCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeistTimeCharacter_Statics::NewProp_TurnRateGamepad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeistTimeCharacter_Statics::NewProp_OnUseItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeistTimeCharacter_Statics::NewProp__primaryWeaponClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeistTimeCharacter_Statics::NewProp__secondaryWeaponClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeistTimeCharacter_Statics::NewProp__pCurrentWeapon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHeistTimeCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHeistTimeCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHeistTimeCharacter_Statics::ClassParams = {
		&AHeistTimeCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHeistTimeCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHeistTimeCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHeistTimeCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHeistTimeCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHeistTimeCharacter()
	{
		if (!Z_Registration_Info_UClass_AHeistTimeCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHeistTimeCharacter.OuterSingleton, Z_Construct_UClass_AHeistTimeCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHeistTimeCharacter.OuterSingleton;
	}
	template<> HEISTTIME_API UClass* StaticClass<AHeistTimeCharacter>()
	{
		return AHeistTimeCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHeistTimeCharacter);
	struct Z_CompiledInDeferFile_FID_HeistTime_Source_HeistTime_HeistTimeCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeistTime_Source_HeistTime_HeistTimeCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHeistTimeCharacter, AHeistTimeCharacter::StaticClass, TEXT("AHeistTimeCharacter"), &Z_Registration_Info_UClass_AHeistTimeCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHeistTimeCharacter), 2302490559U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeistTime_Source_HeistTime_HeistTimeCharacter_h_3394828566(TEXT("/Script/HeistTime"),
		Z_CompiledInDeferFile_FID_HeistTime_Source_HeistTime_HeistTimeCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HeistTime_Source_HeistTime_HeistTimeCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
