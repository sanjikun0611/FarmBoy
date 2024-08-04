// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FarmBoy : ModuleRules
{
	public FarmBoy(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });

	}
}
