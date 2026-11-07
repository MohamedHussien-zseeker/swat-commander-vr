// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.OfficersSpawnLocationEntry
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class APlayerStart;

#include "OfficersSpawnLocationEntry.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.OfficersSpawnLocationEntry
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FOfficersSpawnLocationEntry {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<APlayerStart*> PlayerSpawnLocations;  // +0x0

};

