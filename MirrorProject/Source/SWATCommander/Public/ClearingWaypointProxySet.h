// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.ClearingWaypointProxySet
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class AMovementZoneProxyActor;

#include "ClearingWaypointProxySet.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.ClearingWaypointProxySet
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FClearingWaypointProxySet {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<AMovementZoneProxyActor*> WaypointProxies;  // +0x0

};

