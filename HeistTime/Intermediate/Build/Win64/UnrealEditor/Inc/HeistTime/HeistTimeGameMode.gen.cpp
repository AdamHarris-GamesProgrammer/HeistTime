// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HeistTime/HeistTimeGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeistTimeGameMode() {}
// Cross Module References
	HEISTTIME_API UClass* Z_Construct_UClass_AHeistTimeGameMode_NoRegister();
	HEISTTIME_API UClass* Z_Construct_UClass_AHeistTimeGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_HeistTime();
// End Cross Module References
	void AHeistTimeGameMode::StaticRegisterNativesAHeistTimeGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHeistTimeGameMode);
	UClass* Z_Construct_UClass_AHeistTimeGameMode_NoRegister()
	{
		return AHeistTimeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AHeistTimeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHeistTimeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HeistTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeistTimeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "HeistTimeGameMode.h" },
		{ "ModuleRelativePath", "HeistTimeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHeistTimeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHeistTimeGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHeistTimeGameMode_Statics::ClassParams = {
		&AHeistTimeGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AHeistTimeGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHeistTimeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHeistTimeGameMode()
	{
		if (!Z_Registration_Info_UClass_AHeistTimeGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHeistTimeGameMode.OuterSingleton, Z_Construct_UClass_AHeistTimeGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHeistTimeGameMode.OuterSingleton;
	}
	template<> HEISTTIME_API UClass* StaticClass<AHeistTimeGameMode>()
	{
		return AHeistTimeGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHeistTimeGameMode);
	struct Z_CompiledInDeferFile_FID_HeistTime_Source_HeistTime_HeistTimeGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeistTime_Source_HeistTime_HeistTimeGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHeistTimeGameMode, AHeistTimeGameMode::StaticClass, TEXT("AHeistTimeGameMode"), &Z_Registration_Info_UClass_AHeistTimeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHeistTimeGameMode), 1593112487U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeistTime_Source_HeistTime_HeistTimeGameMode_h_28453588(TEXT("/Script/HeistTime"),
		Z_CompiledInDeferFile_FID_HeistTime_Source_HeistTime_HeistTimeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HeistTime_Source_HeistTime_HeistTimeGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
