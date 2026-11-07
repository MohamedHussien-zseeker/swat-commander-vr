// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.SCCampaign
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


struct FDateTime;
struct FSCCampaignStats;
struct FTSProgression;

#include "SCCampaign.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.SCCampaign
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FSCCampaign {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 CampaignSlotID;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString CampaignName;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FDateTime LastSaved;  // +0x18

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSet<TSet<FSCCampaignStats>> CompletedMissions;  // +0x20

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSet<FSCCampaignStats> UnlockedRewards;  // +0x70

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FSCCampaignStats Stats;  // +0xC0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FTSProgression> Results;  // +0x1F0

};

