// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.MovementZonesToggleSettings
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class AMovementZoneTrigger;

enum class EMovementZoneSpawnPriority : uint8;
enum class ETSSpawnLocationTypes : uint8;

#include "MovementZonesToggleSettings.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.MovementZonesToggleSettings
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FMovementZonesToggleSettings {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    ETSSpawnLocationTypes SpawnLocation;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<TSoftObjectPtr<AMovementZoneTrigger>> ZonesToEnableSpawn;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<TSoftObjectPtr<AMovementZoneTrigger>> ZonesToDisableSpawn;  // +0x18

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<TSoftObjectPtr<AMovementZoneTrigger>> ZonesToEnableWithChance;  // +0x28

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<TSoftObjectPtr<AMovementZoneTrigger>> ZonesToDisableWithChance;  // +0x38

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<TSoftObjectPtr<AMovementZoneTrigger>> ZonesToDisableSuspectSpawn;  // +0x48

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float ChanceToSpawn;  // +0x58

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EMovementZoneSpawnPriority ZonesPriorityToEnable;  // +0x5C

};

