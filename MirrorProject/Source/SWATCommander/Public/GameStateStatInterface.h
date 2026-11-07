// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.GameStateStatInterface
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "GameStateStatInterface.generated.h"

// Class: Class /Script/SWATCommander.GameStateStatInterface
UCLASS(Abstract, MinimalAPI, BlueprintType)
class SWATCOMMANDER_API UGameStateStatInterface : public UInterface {
    GENERATED_BODY()
public:

    // ── Methods ──
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 OnReceivObjectiveStat(TArray<uint8>& inObjectiveStatuses);
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 OnReceiveRanksList(TArray<uint8>& inRanksList);
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 OnReceiveRankIndex(int32 inRankIndex);
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 OnReceivePenaltyStat(uint8 /*struct*/& inPenaltyInfo);
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 OnReceiveObjectivesTitles(TArray<uint8>& inObjectiveTitles);
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 OnReceiveMissionScore(int32 inMissionScore);
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 OnReceiveMissionRequiredScore(int32 inRequiredScore);
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 OnReceiveBonusStat(uint8 /*struct*/& inBonusInfo);
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    TArray<uint8> GetRanksList();
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    int32 GetRankIndex();
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    uint8 /*struct*/ GetPenaltyStat();
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    TArray<uint8> GetObjectiveTitles();
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    TArray<uint8> GetObjectiveStatuses();
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    int32 GetMissionScore();
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    int32 GetMissionRequiredScore();
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    uint8 /*struct*/ GetBonusStat();
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    TArray<uint8> GetAllPlayersCharacters();
};

