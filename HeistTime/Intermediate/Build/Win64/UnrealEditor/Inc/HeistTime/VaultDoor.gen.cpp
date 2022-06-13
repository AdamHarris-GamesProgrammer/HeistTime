// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HeistTime/VaultDoor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVaultDoor() {}
// Cross Module References
	HEISTTIME_API UClass* Z_Construct_UClass_AVaultDoor_NoRegister();
	HEISTTIME_API UClass* Z_Construct_UClass_AVaultDoor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_HeistTime();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AVaultDoor::StaticRegisterNativesAVaultDoor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVaultDoor);
	UClass* Z_Construct_UClass_AVaultDoor_NoRegister()
	{
		return AVaultDoor::StaticClass();
	}
	struct Z_Construct_UClass_AVaultDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__pVaultDoor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__pVaultDoor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__pVaultHandle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__pVaultHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__pVaultWall_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__pVaultWall;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVaultDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HeistTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVaultDoor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VaultDoor.h" },
		{ "ModuleRelativePath", "VaultDoor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVaultDoor_Statics::NewProp__pVaultDoor_MetaData[] = {
		{ "Category", "Vault Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VaultDoor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVaultDoor_Statics::NewProp__pVaultDoor = { "_pVaultDoor", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVaultDoor, _pVaultDoor), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVaultDoor_Statics::NewProp__pVaultDoor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVaultDoor_Statics::NewProp__pVaultDoor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVaultDoor_Statics::NewProp__pVaultHandle_MetaData[] = {
		{ "Category", "Vault Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VaultDoor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVaultDoor_Statics::NewProp__pVaultHandle = { "_pVaultHandle", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVaultDoor, _pVaultHandle), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVaultDoor_Statics::NewProp__pVaultHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVaultDoor_Statics::NewProp__pVaultHandle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVaultDoor_Statics::NewProp__pVaultWall_MetaData[] = {
		{ "Category", "Vault Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VaultDoor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVaultDoor_Statics::NewProp__pVaultWall = { "_pVaultWall", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVaultDoor, _pVaultWall), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVaultDoor_Statics::NewProp__pVaultWall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVaultDoor_Statics::NewProp__pVaultWall_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVaultDoor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVaultDoor_Statics::NewProp__pVaultDoor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVaultDoor_Statics::NewProp__pVaultHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVaultDoor_Statics::NewProp__pVaultWall,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVaultDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVaultDoor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVaultDoor_Statics::ClassParams = {
		&AVaultDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVaultDoor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVaultDoor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVaultDoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVaultDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVaultDoor()
	{
		if (!Z_Registration_Info_UClass_AVaultDoor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVaultDoor.OuterSingleton, Z_Construct_UClass_AVaultDoor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVaultDoor.OuterSingleton;
	}
	template<> HEISTTIME_API UClass* StaticClass<AVaultDoor>()
	{
		return AVaultDoor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVaultDoor);
	struct Z_CompiledInDeferFile_FID_HeistTime_Source_HeistTime_VaultDoor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeistTime_Source_HeistTime_VaultDoor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVaultDoor, AVaultDoor::StaticClass, TEXT("AVaultDoor"), &Z_Registration_Info_UClass_AVaultDoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVaultDoor), 2935091616U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeistTime_Source_HeistTime_VaultDoor_h_646022713(TEXT("/Script/HeistTime"),
		Z_CompiledInDeferFile_FID_HeistTime_Source_HeistTime_VaultDoor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HeistTime_Source_HeistTime_VaultDoor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
