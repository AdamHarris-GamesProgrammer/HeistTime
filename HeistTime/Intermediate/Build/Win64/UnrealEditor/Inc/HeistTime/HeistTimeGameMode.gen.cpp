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
	DEFINE_FUNCTION(AHeistTimeGameMode::execCanEscape)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanEscape();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeistTimeGameMode::execGetMoneyTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMoneyTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeistTimeGameMode::execGetCurrentMoney)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentMoney();
		P_NATIVE_END;
	}
	void AHeistTimeGameMode::StaticRegisterNativesAHeistTimeGameMode()
	{
		UClass* Class = AHeistTimeGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanEscape", &AHeistTimeGameMode::execCanEscape },
			{ "GetCurrentMoney", &AHeistTimeGameMode::execGetCurrentMoney },
			{ "GetMoneyTarget", &AHeistTimeGameMode::execGetMoneyTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHeistTimeGameMode_CanEscape_Statics
	{
		struct HeistTimeGameMode_eventCanEscape_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AHeistTimeGameMode_CanEscape_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HeistTimeGameMode_eventCanEscape_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHeistTimeGameMode_CanEscape_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HeistTimeGameMode_eventCanEscape_Parms), &Z_Construct_UFunction_AHeistTimeGameMode_CanEscape_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeistTimeGameMode_CanEscape_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeistTimeGameMode_CanEscape_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeistTimeGameMode_CanEscape_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HeistTimeGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeistTimeGameMode_CanEscape_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeistTimeGameMode, nullptr, "CanEscape", nullptr, nullptr, sizeof(Z_Construct_UFunction_AHeistTimeGameMode_CanEscape_Statics::HeistTimeGameMode_eventCanEscape_Parms), Z_Construct_UFunction_AHeistTimeGameMode_CanEscape_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeistTimeGameMode_CanEscape_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeistTimeGameMode_CanEscape_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeistTimeGameMode_CanEscape_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeistTimeGameMode_CanEscape()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeistTimeGameMode_CanEscape_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeistTimeGameMode_GetCurrentMoney_Statics
	{
		struct HeistTimeGameMode_eventGetCurrentMoney_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AHeistTimeGameMode_GetCurrentMoney_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeistTimeGameMode_eventGetCurrentMoney_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeistTimeGameMode_GetCurrentMoney_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeistTimeGameMode_GetCurrentMoney_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeistTimeGameMode_GetCurrentMoney_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HeistTimeGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeistTimeGameMode_GetCurrentMoney_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeistTimeGameMode, nullptr, "GetCurrentMoney", nullptr, nullptr, sizeof(Z_Construct_UFunction_AHeistTimeGameMode_GetCurrentMoney_Statics::HeistTimeGameMode_eventGetCurrentMoney_Parms), Z_Construct_UFunction_AHeistTimeGameMode_GetCurrentMoney_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeistTimeGameMode_GetCurrentMoney_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeistTimeGameMode_GetCurrentMoney_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeistTimeGameMode_GetCurrentMoney_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeistTimeGameMode_GetCurrentMoney()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeistTimeGameMode_GetCurrentMoney_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeistTimeGameMode_GetMoneyTarget_Statics
	{
		struct HeistTimeGameMode_eventGetMoneyTarget_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AHeistTimeGameMode_GetMoneyTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeistTimeGameMode_eventGetMoneyTarget_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeistTimeGameMode_GetMoneyTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeistTimeGameMode_GetMoneyTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeistTimeGameMode_GetMoneyTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HeistTimeGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeistTimeGameMode_GetMoneyTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeistTimeGameMode, nullptr, "GetMoneyTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_AHeistTimeGameMode_GetMoneyTarget_Statics::HeistTimeGameMode_eventGetMoneyTarget_Parms), Z_Construct_UFunction_AHeistTimeGameMode_GetMoneyTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeistTimeGameMode_GetMoneyTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeistTimeGameMode_GetMoneyTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeistTimeGameMode_GetMoneyTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeistTimeGameMode_GetMoneyTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeistTimeGameMode_GetMoneyTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHeistTimeGameMode);
	UClass* Z_Construct_UClass_AHeistTimeGameMode_NoRegister()
	{
		return AHeistTimeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AHeistTimeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__moneyTarget_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp__moneyTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHeistTimeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HeistTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHeistTimeGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHeistTimeGameMode_CanEscape, "CanEscape" }, // 494769794
		{ &Z_Construct_UFunction_AHeistTimeGameMode_GetCurrentMoney, "GetCurrentMoney" }, // 4200956254
		{ &Z_Construct_UFunction_AHeistTimeGameMode_GetMoneyTarget, "GetMoneyTarget" }, // 747630034
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeistTimeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "HeistTimeGameMode.h" },
		{ "ModuleRelativePath", "HeistTimeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeistTimeGameMode_Statics::NewProp__moneyTarget_MetaData[] = {
		{ "Category", "Level Settings" },
		{ "ModuleRelativePath", "HeistTimeGameMode.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AHeistTimeGameMode_Statics::NewProp__moneyTarget = { "_moneyTarget", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeistTimeGameMode, _moneyTarget), METADATA_PARAMS(Z_Construct_UClass_AHeistTimeGameMode_Statics::NewProp__moneyTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeistTimeGameMode_Statics::NewProp__moneyTarget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHeistTimeGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeistTimeGameMode_Statics::NewProp__moneyTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHeistTimeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHeistTimeGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHeistTimeGameMode_Statics::ClassParams = {
		&AHeistTimeGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHeistTimeGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHeistTimeGameMode_Statics::PropPointers),
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
		{ Z_Construct_UClass_AHeistTimeGameMode, AHeistTimeGameMode::StaticClass, TEXT("AHeistTimeGameMode"), &Z_Registration_Info_UClass_AHeistTimeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHeistTimeGameMode), 239471166U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeistTime_Source_HeistTime_HeistTimeGameMode_h_235713909(TEXT("/Script/HeistTime"),
		Z_CompiledInDeferFile_FID_HeistTime_Source_HeistTime_HeistTimeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HeistTime_Source_HeistTime_HeistTimeGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
