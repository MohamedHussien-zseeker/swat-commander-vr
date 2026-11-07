using UnrealBuildTool;
using System.Collections.Generic;

public class SWATCommanderPrologueEditorTarget : TargetRules
{
    public SWATCommanderPrologueEditorTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Editor;
        DefaultBuildSettings = BuildSettingsVersion.V2;
        ExtraModuleNames.AddRange(new string[] { "SWATCommander" });
    }
}