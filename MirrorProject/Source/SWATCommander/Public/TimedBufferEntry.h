// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.TimedBufferEntry
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class AMovementZoneTrigger;

#include "TimedBufferEntry.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.TimedBufferEntry
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FTimedBufferEntry {
    GENERATED_BODY()
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    TWeakObjectPtr<AMovementZoneTrigger> Object;  // +0x0

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    float Timestamp;  // +0x8

};

