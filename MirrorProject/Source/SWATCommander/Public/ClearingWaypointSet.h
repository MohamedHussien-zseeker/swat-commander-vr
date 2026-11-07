// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.ClearingWaypointSet
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


struct FClearingWaypoint;

#include "ClearingWaypointSet.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.ClearingWaypointSet
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FClearingWaypointSet {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FClearingWaypoint> Waypoints;  // +0x0

};

