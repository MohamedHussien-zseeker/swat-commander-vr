// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.MovementActorsCache
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class AActor;

#include "MovementActorsCache.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.MovementActorsCache
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FMovementActorsCache {
    GENERATED_BODY()
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    TArray<AActor*> MovementActors;  // +0x0

};

