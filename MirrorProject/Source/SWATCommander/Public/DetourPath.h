// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.DetourPath
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class AMovementZoneTrigger;

struct FDetourPathZones;

#include "DetourPath.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.DetourPath
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FDetourPath {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    AMovementZoneTrigger* StartZone;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    AMovementZoneTrigger* EndZone;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FDetourPathZones> Paths;  // +0x10

};

