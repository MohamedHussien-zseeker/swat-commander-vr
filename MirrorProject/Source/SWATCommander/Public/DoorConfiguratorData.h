// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.DoorConfiguratorData
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


struct FFloatRange;

#include "DoorConfiguratorData.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.DoorConfiguratorData
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FDoorConfiguratorData {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float PercentOfLockedDoors;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float PercentOfOpenedDoors;  // +0x4

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FFloatRange OpenDoorDegreeRange;  // +0x8

};

