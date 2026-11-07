// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.SCCampaignStats
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "SCCampaignStats.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.SCCampaignStats
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FSCCampaignStats {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 TotalMissionsCompleted;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 TotalObjectivesCompleted;  // +0x4

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 TotalReportsToTOC;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 SuspectsArrested;  // +0xC

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 SuspectsIncapacitated;  // +0x10

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 SuspectsCasualties;  // +0x14

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 CiviliansRescued;  // +0x18

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 CivilianCasualties;  // +0x1C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 EvidenceSecured;  // +0x20

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 TotalDeaths;  // +0x24

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 OfficersDeaths;  // +0x28

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 TotalShots;  // +0x2C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 ShotsInTarget;  // +0x30

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 OneShotModePlayCount;  // +0x34

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float SingleplayerPlaytime;  // +0x38

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float CooperativePlaytime;  // +0x3C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TMap<TMap<TMap<FName, FString>, FString>, FString> SessionsPerMission;  // +0x40

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TMap<TMap<FName, FString>, FString> SessionsPerGameMode;  // +0x90

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TMap<FName, FString> SessionsPerDifficultyMode;  // +0xE0

};

