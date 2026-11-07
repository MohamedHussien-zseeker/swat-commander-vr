// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.TSGameSaveFunctionLibrary
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "TSGameSaveFunctionLibrary.generated.h"

// Class: Class /Script/SWATCommander.TSGameSaveFunctionLibrary
UCLASS(BlueprintType)
class SWATCOMMANDER_API UTSGameSaveFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:

    // ── Methods ──
    UFUNCTION(BlueprintCallable)
    uint8 SetSecondaryWeaponSkin(int32 CharacterIndex, uint8 /*enum*/ Weapon, FName SkinName);
    UFUNCTION(BlueprintCallable)
    uint8 SetPrimaryWeaponSkin(int32 CharacterIndex, uint8 /*enum*/ Weapon, FName SkinName);
    UFUNCTION(BlueprintCallable)
    uint8 SetMagsDistribution(int32 PrimarySlots, int32 SecondarySlots);
    UFUNCTION(BlueprintCallable)
    uint8 SetCharacterSkin(int32 CharacterIndex, FName SkinName);
    UFUNCTION(BlueprintCallable)
    uint8 SetCampaignStats(uint8 /*struct*/& NewStats);
    UFUNCTION(BlueprintCallable)
    bool SetActiveCampaignID(int32 campaignID);
    UFUNCTION(BlueprintCallable)
    uint8 SaveUnlockedRewardToCampaign(uint8 /*struct*/& campaign, FName RewardID);
    UFUNCTION(BlueprintCallable)
    uint8 SaveUnlockedRewardsToCampaign(uint8 /*struct*/& campaign, TArray<uint8> RewardIDs);
    UFUNCTION(BlueprintCallable)
    uint8 SaveUnlockedRewards(TArray<uint8> RewardIDs);
    UFUNCTION(BlueprintCallable)
    uint8 SaveUnlockedReward(FName RewardID);
    UFUNCTION(BlueprintCallable)
    bool SaveGameplaySettings(uint8 /*struct*/ gameplay);
    UFUNCTION(BlueprintCallable)
    bool SaveDisplaySettings(uint8 /*struct*/ Display);
    UFUNCTION(BlueprintCallable)
    bool SaveControlSettings(uint8 /*struct*/ Control);
    UFUNCTION(BlueprintCallable)
    uint8 SaveCompletedMission(uint8 /*struct*/& campaign, FName MissionID);
    UFUNCTION(BlueprintCallable)
    bool SaveAudioSettings(uint8 /*struct*/ Audio);
    UFUNCTION(BlueprintCallable)
    uint8 ResaveGameSaveUnixTimestamp();
    UFUNCTION(BlueprintCallable)
    bool ResaveCampaign(uint8 /*struct*/& UpdatedCampaign);
    UFUNCTION(BlueprintCallable)
    bool RemoveCampaign(int32 CampaignSlotID);
    UFUNCTION(BlueprintPure)
    uint8 /*struct*/ LoadGameplaySettings();
    UFUNCTION(BlueprintPure)
    uint8 /*struct*/ LoadDisplaySettings();
    UFUNCTION(BlueprintPure)
    uint8 /*struct*/ LoadControlSettings();
    UFUNCTION(BlueprintPure)
    uint8 /*struct*/ LoadAudioSettings();
    UFUNCTION(BlueprintCallable)
    bool IsSaveDatesEqual(uint8 /*struct*/& CloudTime, uint8 /*struct*/& LocalTime, float ToleranceSeconds);
    UFUNCTION(BlueprintPure)
    bool IsRewardUnlockedInCampaign(uint8 /*struct*/& campaign, FName RewardID);
    UFUNCTION(BlueprintPure)
    bool IsRewardUnlocked(FName RewardID);
    UFUNCTION(BlueprintPure)
    bool IsMissionCompleted(uint8 /*struct*/& campaign, FName MissionID);
    UFUNCTION(BlueprintCallable)
    uint8 InitLocalGameSave();
    UFUNCTION(BlueprintCallable)
    uint8 InitCharacterSkins(TArray<uint8>& NewSavedSkins);
    UFUNCTION(BlueprintCallable)
    uint8 IncrementMissionSessions(uint8 /*struct*/& Stats, FName MissionID);
    UFUNCTION(BlueprintCallable)
    uint8 IncrementGameModesSessions(uint8 /*struct*/& Stats, uint8 /*enum*/ GameMode);
    UFUNCTION(BlueprintCallable)
    uint8 IncrementDifficultyModesSessions(uint8 /*struct*/& Stats, uint8 /*enum*/ DifficultyMode);
    UFUNCTION(BlueprintPure)
    int32 GetUnlockedRewardsCountFromCampaign(uint8 /*struct*/& campaign);
    UFUNCTION(BlueprintPure)
    int32 GetUnlockedRewardsCount();
    UFUNCTION(BlueprintPure)
    uint8 GetSkinsByCharacter(uint8 /*struct*/& SavedSkins, int32 CharacterIndex);
    UFUNCTION(BlueprintPure)
    uint8 GetSkins(TArray<uint8>& SavedSkins);
    UFUNCTION(BlueprintPure)
    FName GetSecondaryWeaponSkin(int32 CharacterIndex, uint8 /*enum*/ Weapon);
    UFUNCTION(BlueprintPure)
    FName GetPrimaryWeaponSkin(int32 CharacterIndex, uint8 /*enum*/ Weapon);
    UFUNCTION(BlueprintCallable)
    uint8 GetMagsDistribution(int32& PrimarySlots, int32& SecondarySlots);
    UFUNCTION(BlueprintPure)
    int32 GetLocalGameSaveUnixTimestamp();
    UFUNCTION(BlueprintPure)
    uint8 /*struct*/ GetLocalFileSystemTimestamp(FString Path);
    UFUNCTION(BlueprintPure)
    FString GetGameSavePath();
    UFUNCTION(BlueprintPure)
    uint8 GetDefaultGameplaySettings(uint8 /*struct*/& gameplay);
    UFUNCTION(BlueprintPure)
    uint8 GetDefaultDisplaySettings(uint8 /*struct*/& Display);
    UFUNCTION(BlueprintPure)
    uint8 GetDefaultControlSettings(uint8 /*struct*/& Control);
    UFUNCTION(BlueprintPure)
    uint8 GetDefaultAudioSettings(uint8 /*struct*/& Audio);
    UFUNCTION(BlueprintPure)
    int32 GetCompletedMissionsCount(uint8 /*struct*/& campaign);
    UFUNCTION(BlueprintPure)
    uint8 /*struct*/ GetCampaignStatsByID(int32 campaignID);
    UFUNCTION(BlueprintPure)
    uint8 /*struct*/ GetCampaignStats();
    UFUNCTION(BlueprintCallable)
    TArray<uint8> GetCampaignFromSave();
    UFUNCTION(BlueprintPure)
    TArray<uint8> GetAllUnlockedRewardsFromCampaign(uint8 /*struct*/& campaign);
    UFUNCTION(BlueprintPure)
    TArray<uint8> GetAllUnlockedRewards();
    UFUNCTION(BlueprintCallable)
    int32 GetActiveCampaignID();
    UFUNCTION(BlueprintCallable)
    bool DoesLocalGameSaveExist();
    UFUNCTION(BlueprintCallable)
    bool CompleteMissionAndUnlockRewardsForCampaign(uint8 /*struct*/& campaign, FName MissionID, TArray<uint8>& RewardsToUnlock);
    UFUNCTION(BlueprintCallable)
    bool CompleteMissionAndUnlockRewards(FName MissionID, TArray<uint8>& RewardsToUnlock);
    UFUNCTION(BlueprintCallable)
    bool CheckLocalGameSaveVersion(int32 gameSaveVersion);
    UFUNCTION(BlueprintCallable)
    TArray<uint8> AddOrUpdateMissionResult(TArray<uint8> Results, uint8 /*struct*/& NewResult);
    UFUNCTION(BlueprintCallable)
    bool AddNewCampaign(uint8 /*struct*/& NewCampaign);
};

