// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.TSProgression
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


enum class EGameDifficultyMode : uint8;
enum class ETSGameplayModes : uint8;

#include "TSProgression.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.TSProgression
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FTSProgression {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName MissionName;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    ETSGameplayModes MissionMode;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EGameDifficultyMode MissionDifficulty;  // +0x9

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MissionScore;  // +0xC

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MissionTime;  // +0x10

};

