// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class firstproject_2 : ModuleRules
{
    public firstproject_2(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "HeadMountedDisplay",
            "XRBase",
            "AssetRegistry",
            "RenderCore",
    "RHI" });

        //PublicIncludePaths.AddRange(
            //new string[] {
				// ... add public include paths required here ...
        //        "Runtime/Engine/Public",
        //"Runtime/Engine/Classes",
        //"Runtime/CoreUObject/Public",
        //"Runtime/InputCore/Classes"
            //}
            //);

        //PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
    }
}
