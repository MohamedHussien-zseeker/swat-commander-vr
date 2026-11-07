// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.DetourPathZones
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class AMovementZoneTrigger;

#include "DetourPathZones.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.DetourPathZones
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FDetourPathZones {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<AMovementZoneTrigger*> Zones;  // +0x0

};

