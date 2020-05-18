// Copyright 1998-2020 Epic Games, Inc. All Rights Reserved.

namespace UnrealBuildTool.Rules
{
	public class DmapAsset : ModuleRules
	{
		public DmapAsset(ReadOnlyTargetRules Target) : base(Target)
		{
			PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

			PublicDependencyModuleNames.AddRange(
				new string[] {
					"Core",
					"CoreUObject",
				});

			PrivateIncludePaths.AddRange(
				new string[] {
					"DmapAsset/Private",
					"Factories/Private"
				});
		}
	}
}
