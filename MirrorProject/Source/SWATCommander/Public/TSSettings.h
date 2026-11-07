// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.TSSettings
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


struct FTSAudioSettings;
struct FTSControlSettings;
struct FTSDisplaySettings;
struct FTSGameplaySettings;

#include "TSSettings.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.TSSettings
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FTSSettings {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTSAudioSettings AudioSettings;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTSDisplaySettings displaySettings;  // +0x3C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTSGameplaySettings gameplaySettings;  // +0x70

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTSControlSettings controlSettings;  // +0x9C

};

