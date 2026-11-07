// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.MovementZoneRoutePath
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class AMovementZoneTrigger;

#include "MovementZoneRoutePath.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.MovementZoneRoutePath
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FMovementZoneRoutePath {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<TSoftObjectPtr<AMovementZoneTrigger>> PathZones;  // +0x0

};

