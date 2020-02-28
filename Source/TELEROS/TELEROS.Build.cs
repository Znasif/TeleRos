// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TELEROS : ModuleRules
{
	public TELEROS(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });

        PrivateDependencyModuleNames.AddRange(
      new string[]
      {
        "Core",
        "CoreUObject",
        "Engine",
        "RenderCore",
        "Slate",
        "SlateCore",
        "Sockets",
        "Networking",
        "ROSIntegration",
        "ROSIntegrationVision"
        // ... add private dependencies that you statically link with here ...	
      }
    );
    }
}
