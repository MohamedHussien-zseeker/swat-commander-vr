// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.LightConfiguratorData
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "LightConfiguratorData.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.LightConfiguratorData
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FLightConfiguratorData {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName LightGroupName;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Chance;  // +0x10

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool Enabled;  // +0x14

};

