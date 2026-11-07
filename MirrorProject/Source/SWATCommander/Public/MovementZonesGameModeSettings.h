// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.MovementZonesGameModeSettings
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class AMovementZoneTrigger;

#include "MovementZonesGameModeSettings.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.MovementZonesGameModeSettings
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FMovementZonesGameModeSettings {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<TSoftObjectPtr<AMovementZoneTrigger>> ZonesToBeHigh;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<TSoftObjectPtr<AMovementZoneTrigger>> ZonesToBeMid;  // +0x10

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<TSoftObjectPtr<AMovementZoneTrigger>> ZonesToBeNoSpawn;  // +0x20

};

