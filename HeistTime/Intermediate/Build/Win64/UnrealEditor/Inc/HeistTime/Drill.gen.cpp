// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HeistTime/Drill.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDrill() {}
// Cross Module References
	HEISTTIME_API UClass* Z_Construct_UClass_ADrill_NoRegister();
	HEISTTIME_API UClass* Z_Construct_UClass_ADrill();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_HeistTime();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ADrill::StaticRegisterNativesADrill()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADrill);
	UClass* Z_Construct_UClass_ADrill_NoRegister()
	{
		return ADrill::StaticClass();
	}
	struct Z_Construct_UClass_ADrill_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__drillDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__drillDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__remainingTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__remainingTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__chanceToFail_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__chanceToFail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__pDrillMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__pDrillMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADrill_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HeistTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrill_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Drill.h" },
		{ "ModuleRelativePath", "Drill.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrill_Statics::NewProp__drillDuration_MetaData[] = {
		{ "Category", "Drill Settings" },
		{ "ModuleRelativePath", "Drill.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADrill_Statics::NewProp__drillDuration = { "_drillDuration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADrill, _drillDuration), METADATA_PARAMS(Z_Construct_UClass_ADrill_Statics::NewProp__drillDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADrill_Statics::NewProp__drillDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrill_Statics::NewProp__remainingTime_MetaData[] = {
		{ "Category", "Drill Settings" },
		{ "ModuleRelativePath", "Drill.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADrill_Statics::NewProp__remainingTime = { "_remainingTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADrill, _remainingTime), METADATA_PARAMS(Z_Construct_UClass_ADrill_Statics::NewProp__remainingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADrill_Statics::NewProp__remainingTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrill_Statics::NewProp__chanceToFail_MetaData[] = {
		{ "Category", "Drill Settings" },
		{ "ModuleRelativePath", "Drill.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADrill_Statics::NewProp__chanceToFail = { "_chanceToFail", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADrill, _chanceToFail), METADATA_PARAMS(Z_Construct_UClass_ADrill_Statics::NewProp__chanceToFail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADrill_Statics::NewProp__chanceToFail_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrill_Statics::NewProp__pDrillMesh_MetaData[] = {
		{ "Category", "Drill Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Drill.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrill_Statics::NewProp__pDrillMesh = { "_pDrillMesh", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADrill, _pDrillMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADrill_Statics::NewProp__pDrillMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADrill_Statics::NewProp__pDrillMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADrill_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrill_Statics::NewProp__drillDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrill_Statics::NewProp__remainingTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrill_Statics::NewProp__chanceToFail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrill_Statics::NewProp__pDrillMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADrill_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADrill>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADrill_Statics::ClassParams = {
		&ADrill::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADrill_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADrill_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADrill_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADrill_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADrill()
	{
		if (!Z_Registration_Info_UClass_ADrill.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADrill.OuterSingleton, Z_Construct_UClass_ADrill_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADrill.OuterSingleton;
	}
	template<> HEISTTIME_API UClass* StaticClass<ADrill>()
	{
		return ADrill::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADrill);
	struct Z_CompiledInDeferFile_FID_HeistTime_Source_HeistTime_Drill_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeistTime_Source_HeistTime_Drill_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADrill, ADrill::StaticClass, TEXT("ADrill"), &Z_Registration_Info_UClass_ADrill, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADrill), 2992183933U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeistTime_Source_HeistTime_Drill_h_3156996018(TEXT("/Script/HeistTime"),
		Z_CompiledInDeferFile_FID_HeistTime_Source_HeistTime_Drill_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HeistTime_Source_HeistTime_Drill_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
