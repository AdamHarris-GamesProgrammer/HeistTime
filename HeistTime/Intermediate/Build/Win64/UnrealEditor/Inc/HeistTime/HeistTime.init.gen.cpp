// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeistTime_init() {}
	HEISTTIME_API UFunction* Z_Construct_UDelegateFunction_HeistTime_OnPickUp__DelegateSignature();
	HEISTTIME_API UFunction* Z_Construct_UDelegateFunction_HeistTime_OnPickUpEvent__DelegateSignature();
	HEISTTIME_API UFunction* Z_Construct_UDelegateFunction_HeistTime_OnUseItem__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_HeistTime;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_HeistTime()
	{
		if (!Z_Registration_Info_UPackage__Script_HeistTime.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_HeistTime_OnPickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_HeistTime_OnPickUpEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_HeistTime_OnUseItem__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/HeistTime",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x155E0F91,
				0xAFBB033A,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_HeistTime.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_HeistTime.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_HeistTime(Z_Construct_UPackage__Script_HeistTime, TEXT("/Script/HeistTime"), Z_Registration_Info_UPackage__Script_HeistTime, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x155E0F91, 0xAFBB033A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
