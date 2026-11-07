// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.MobSpawnSettings
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class AMovementZoneTrigger;

struct FMobDescriptor;

#include "MobSpawnSettings.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.MobSpawnSettings
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FMobSpawnSettings {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FMobDescriptor> MobSettings;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<TSoftObjectPtr<AMovementZoneTrigger>> ZonesToSpawn;  // +0x10

};

