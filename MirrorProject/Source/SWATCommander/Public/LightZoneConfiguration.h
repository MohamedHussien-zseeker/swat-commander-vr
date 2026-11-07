// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.LightZoneConfiguration
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class AMovementZoneTrigger;

#include "LightZoneConfiguration.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.LightZoneConfiguration
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FLightZoneConfiguration {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float RandomizationPercent;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<TSoftObjectPtr<AMovementZoneTrigger>> MovementZones;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool CanTurnOffWhenNPCInRoom;  // +0x18

};

