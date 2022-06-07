// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HeistTime/Bag_Pickup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBag_Pickup() {}
// Cross Module References
	HEISTTIME_API UEnum* Z_Construct_UEnum_HeistTime_BagType();
	UPackage* Z_Construct_UPackage__Script_HeistTime();
	HEISTTIME_API UFunction* Z_Construct_UDelegateFunction_HeistTime_OnCollectedEvent__DelegateSignature();
	HEISTTIME_API UClass* Z_Construct_UClass_AHeistTimeCharacter_NoRegister();
	HEISTTIME_API UClass* Z_Construct_UClass_ABag_Pickup_NoRegister();
	HEISTTIME_API UClass* Z_Construct_UClass_ABag_Pickup();
	HEISTTIME_API UClass* Z_Construct_UClass_APickupBase();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_BagType;
	static UEnum* BagType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_BagType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_BagType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HeistTime_BagType, Z_Construct_UPackage__Script_HeistTime(), TEXT("BagType"));
		}
		return Z_Registration_Info_UEnum_BagType.OuterSingleton;
	}
	template<> HEISTTIME_API UEnum* StaticEnum<BagType>()
	{
		return BagType_StaticEnum();
	}
	struct Z_Construct_UEnum_HeistTime_BagType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HeistTime_BagType_Statics::Enumerators[] = {
		{ "BagType::Gold", (int64)BagType::Gold },
		{ "BagType::Money", (int64)BagType::Money },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HeistTime_BagType_Statics::Enum_MetaDataParams[] = {
		{ "Gold.Name", "BagType::Gold" },
		{ "ModuleRelativePath", "Bag_Pickup.h" },
		{ "Money.Name", "BagType::Money" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HeistTime_BagType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HeistTime,
		nullptr,
		"BagType",
		"BagType",
		Z_Construct_UEnum_HeistTime_BagType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HeistTime_BagType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HeistTime_BagType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HeistTime_BagType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HeistTime_BagType()
	{
		if (!Z_Registration_Info_UEnum_BagType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_BagType.InnerSingleton, Z_Construct_UEnum_HeistTime_BagType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_BagType.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_HeistTime_OnCollectedEvent__DelegateSignature_Statics
	{
		struct _Script_HeistTime_eventOnCollectedEvent_Parms
		{
			AHeistTimeCharacter* PickUpCharacter;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PickUpCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_HeistTime_OnCollectedEvent__DelegateSignature_Statics::NewProp_PickUpCharacter = { "PickUpCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_HeistTime_eventOnCollectedEvent_Parms, PickUpCharacter), Z_Construct_UClass_AHeistTimeCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HeistTime_OnCollectedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HeistTime_OnCollectedEvent__DelegateSignature_Statics::NewProp_PickUpCharacter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HeistTime_OnCollectedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Bag_Pickup.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HeistTime_OnCollectedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HeistTime, nullptr, "OnCollectedEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_HeistTime_OnCollectedEvent__DelegateSignature_Statics::_Script_HeistTime_eventOnCollectedEvent_Parms), Z_Construct_UDelegateFunction_HeistTime_OnCollectedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HeistTime_OnCollectedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_HeistTime_OnCollectedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HeistTime_OnCollectedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_HeistTime_OnCollectedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HeistTime_OnCollectedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void ABag_Pickup::StaticRegisterNativesABag_Pickup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABag_Pickup);
	UClass* Z_Construct_UClass_ABag_Pickup_NoRegister()
	{
		return ABag_Pickup::StaticClass();
	}
	struct Z_Construct_UClass_ABag_Pickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCollected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCollected;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp__type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp__type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABag_Pickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickupBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HeistTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABag_Pickup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Bag_Pickup.h" },
		{ "ModuleRelativePath", "Bag_Pickup.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABag_Pickup_Statics::NewProp_OnCollected_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Bag_Pickup.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABag_Pickup_Statics::NewProp_OnCollected = { "OnCollected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABag_Pickup, OnCollected), Z_Construct_UDelegateFunction_HeistTime_OnCollectedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ABag_Pickup_Statics::NewProp_OnCollected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABag_Pickup_Statics::NewProp_OnCollected_MetaData)) }; // 452355029
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABag_Pickup_Statics::NewProp__type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABag_Pickup_Statics::NewProp__type_MetaData[] = {
		{ "Category", "Pickup Base" },
		{ "ModuleRelativePath", "Bag_Pickup.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABag_Pickup_Statics::NewProp__type = { "_type", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABag_Pickup, _type), Z_Construct_UEnum_HeistTime_BagType, METADATA_PARAMS(Z_Construct_UClass_ABag_Pickup_Statics::NewProp__type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABag_Pickup_Statics::NewProp__type_MetaData)) }; // 4026731006
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABag_Pickup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABag_Pickup_Statics::NewProp_OnCollected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABag_Pickup_Statics::NewProp__type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABag_Pickup_Statics::NewProp__type,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABag_Pickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABag_Pickup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABag_Pickup_Statics::ClassParams = {
		&ABag_Pickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABag_Pickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABag_Pickup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABag_Pickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABag_Pickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABag_Pickup()
	{
		if (!Z_Registration_Info_UClass_ABag_Pickup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABag_Pickup.OuterSingleton, Z_Construct_UClass_ABag_Pickup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABag_Pickup.OuterSingleton;
	}
	template<> HEISTTIME_API UClass* StaticClass<ABag_Pickup>()
	{
		return ABag_Pickup::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABag_Pickup);
	struct Z_CompiledInDeferFile_FID_HeistTime_Source_HeistTime_Bag_Pickup_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeistTime_Source_HeistTime_Bag_Pickup_h_Statics::EnumInfo[] = {
		{ BagType_StaticEnum, TEXT("BagType"), &Z_Registration_Info_UEnum_BagType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4026731006U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeistTime_Source_HeistTime_Bag_Pickup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABag_Pickup, ABag_Pickup::StaticClass, TEXT("ABag_Pickup"), &Z_Registration_Info_UClass_ABag_Pickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABag_Pickup), 1871070430U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeistTime_Source_HeistTime_Bag_Pickup_h_115393746(TEXT("/Script/HeistTime"),
		Z_CompiledInDeferFile_FID_HeistTime_Source_HeistTime_Bag_Pickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HeistTime_Source_HeistTime_Bag_Pickup_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HeistTime_Source_HeistTime_Bag_Pickup_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HeistTime_Source_HeistTime_Bag_Pickup_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
