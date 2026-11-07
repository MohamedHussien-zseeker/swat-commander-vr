// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.LightConfigurationRefSource
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "LightConfigurationRefSource.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.LightConfigurationRefSource
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FLightConfigurationRefSource {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TMap<FName, FString> LightGroupRefs;  // +0x0

};

