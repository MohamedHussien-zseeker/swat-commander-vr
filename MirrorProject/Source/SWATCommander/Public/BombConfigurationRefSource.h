// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.BombConfigurationRefSource
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class AInteractiveActor;
class AMovementZoneTrigger;

#include "BombConfigurationRefSource.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.BombConfigurationRefSource
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FBombConfigurationRefSource {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<TSoftObjectPtr<AInteractiveActor>> BombRefs;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<TSoftObjectPtr<AMovementZoneTrigger>> ZonesToTriggerBombRefs;  // +0x10

};

