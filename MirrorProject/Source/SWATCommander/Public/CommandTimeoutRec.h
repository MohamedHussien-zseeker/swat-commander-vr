// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.CommandTimeoutRec
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


enum class EOfficersTeamType : uint8;

#include "CommandTimeoutRec.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.CommandTimeoutRec
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FCommandTimeoutRec {
    GENERATED_BODY()
    UPROPERTY(VisibleAnywhere)
    EOfficersTeamType TeamType;  // +0x0

    UPROPERTY(VisibleAnywhere)
    bool EnabledCommands;  // +0x1

    UPROPERTY(VisibleAnywhere)
    float LastTimeDisabledForImprotantCommand;  // +0x4

};

