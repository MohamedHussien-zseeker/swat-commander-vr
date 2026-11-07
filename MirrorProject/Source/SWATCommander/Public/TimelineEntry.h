// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.TimelineEntry
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "TimelineEntry.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.TimelineEntry
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FTimelineEntry {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText Title;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText Description;  // +0x18

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText TimeDesc;  // +0x30

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float TimeFloat;  // +0x48

};

