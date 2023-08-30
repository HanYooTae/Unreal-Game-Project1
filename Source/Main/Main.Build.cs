// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Main : ModuleRules
{
	public Main(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicIncludePaths.Add(ModuleDirectory);
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "Paper2D", "UMG", "OnlineSubsystem" });

		//PrivateDependencyModuleNames.AddRange(new string[] { "Paper2D" });


	}
}
