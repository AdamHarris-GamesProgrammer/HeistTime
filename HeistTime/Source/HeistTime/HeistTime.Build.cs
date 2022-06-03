// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class HeistTime : ModuleRules
{
	public HeistTime(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
