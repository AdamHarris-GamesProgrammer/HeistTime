// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HeistTime/Weapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon() {}
// Cross Module References
	HEISTTIME_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	HEISTTIME_API UClass* Z_Construct_UClass_AWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_HeistTime();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	void AWeapon::StaticRegisterNativesAWeapon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeapon);
	UClass* Z_Construct_UClass_AWeapon_NoRegister()
	{
		return AWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pRootComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_pRootComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_pMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pMuzzleFlash_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_pMuzzleFlash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pImpactEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_pImpactEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pSfx_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_pSfx;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__range_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__range;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__damage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HeistTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon.h" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_pRootComponent_MetaData[] = {
		{ "Category", "Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_pRootComponent = { "pRootComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, pRootComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_pRootComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_pRootComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_pMeshComponent_MetaData[] = {
		{ "Category", "Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_pMeshComponent = { "pMeshComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, pMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_pMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_pMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_pMuzzleFlash_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_pMuzzleFlash = { "pMuzzleFlash", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, pMuzzleFlash), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_pMuzzleFlash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_pMuzzleFlash_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_pImpactEffect_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_pImpactEffect = { "pImpactEffect", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, pImpactEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_pImpactEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_pImpactEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_pSfx_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_pSfx = { "pSfx", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, pSfx), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_pSfx_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_pSfx_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp__range_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp__range = { "_range", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, _range), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp__range_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp__range_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp__damage_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp__damage = { "_damage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, _damage), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp__damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp__damage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_pRootComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_pMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_pMuzzleFlash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_pImpactEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_pSfx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp__range,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp__damage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeapon_Statics::ClassParams = {
		&AWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeapon()
	{
		if (!Z_Registration_Info_UClass_AWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeapon.OuterSingleton, Z_Construct_UClass_AWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWeapon.OuterSingleton;
	}
	template<> HEISTTIME_API UClass* StaticClass<AWeapon>()
	{
		return AWeapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon);
	struct Z_CompiledInDeferFile_FID_HeistTime_Source_HeistTime_Weapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeistTime_Source_HeistTime_Weapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWeapon, AWeapon::StaticClass, TEXT("AWeapon"), &Z_Registration_Info_UClass_AWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeapon), 3235699558U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeistTime_Source_HeistTime_Weapon_h_2389065123(TEXT("/Script/HeistTime"),
		Z_CompiledInDeferFile_FID_HeistTime_Source_HeistTime_Weapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HeistTime_Source_HeistTime_Weapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
