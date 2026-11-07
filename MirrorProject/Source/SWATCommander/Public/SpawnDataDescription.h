// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.SpawnDataDescription
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class AMovementZoneTrigger;
class UTSSpawnCoordinator;

struct FCharacterSpawnData;

#include "SpawnDataDescription.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.SpawnDataDescription
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FSpawnDataDescription {
    GENERATED_BODY()
    UPROPERTY(VisibleAnywhere)
    UTSSpawnCoordinator* CoordinatorRef;  // +0x0

    UPROPERTY(VisibleAnywhere)
    FCharacterSpawnData SpawnData;  // +0x8

    UPROPERTY(VisibleAnywhere)
    AMovementZoneTrigger* MovementZoneRef;  // +0xB0

    UPROPERTY(VisibleAnywhere)
    bool IsUniqueNPC;  // +0xB8

};

