// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.NPCStandingLocations
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class AActor;

#include "NPCStandingLocations.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.NPCStandingLocations
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FNPCStandingLocations {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<AActor*> StandingLocations;  // +0x0

};

