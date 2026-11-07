// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.ClearingWaypointAction
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


enum class EClearingPathAction : uint8;
enum class EWaypointActionSpeed : uint8;

#include "ClearingWaypointAction.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.ClearingWaypointAction
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FClearingWaypointAction {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EClearingPathAction ActionType;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool BoolValue;  // +0x1

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float FloatValue;  // +0x4

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EWaypointActionSpeed SpeedValue;  // +0x8

};

