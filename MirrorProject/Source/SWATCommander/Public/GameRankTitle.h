// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.GameRankTitle
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


enum class EGameRankPassType : uint8;

#include "GameRankTitle.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.GameRankTitle
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FGameRankTitle {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText RankTitle;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 RequiredScore;  // +0x18

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EGameRankPassType PassType;  // +0x1C

};

