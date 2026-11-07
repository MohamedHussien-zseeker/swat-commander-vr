// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.AICompositeTaskParallel
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


struct FICompositeTask;

#include "AICompositeTaskParallel.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.AICompositeTaskParallel
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FICompositeTaskParallel {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FAICompositeTask> Chain;  // +0x0

};

