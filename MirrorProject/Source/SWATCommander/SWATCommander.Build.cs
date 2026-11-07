using UnrealBuildTool;

public class SWATCommander : ModuleRules {
    public SWATCommander(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] {
            "Core", "CoreUObject", "Engine", "InputCore",
            "UMG", "SlateCore", "Slate", "AIModule",
        });
    }
}
