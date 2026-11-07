// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.GameRankSplit
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


struct FGameRankTitle;

#include "GameRankSplit.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.GameRankSplit
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FGameRankSplit {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaximumObjectiveScore;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaximumBonusesScore;  // +0xC

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaximumSuspectsArrested;  // +0x10

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaximumSuspectsIncapacitated;  // +0x14

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaximumSuspectsNeutralized;  // +0x18

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaximumNoOfficersDown;  // +0x1C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaximumPlayerUninjured;  // +0x20

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaximumReportStatusToTOC;  // +0x24

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaximumAllEvidenceSecured;  // +0x28

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaximumAllCiviliansUnharmed;  // +0x2C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FGameRankTitle> RankTitles;  // +0x30

};

