// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.TSSpawnModificationSystem
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UDataTable;

struct FFloatRange;
struct FMissionSpawnDataCollection;

#include "TSSpawnModificationSystem.generated.h"

// Class: Class /Script/SWATCommander.TSSpawnModificationSystem
UCLASS(BlueprintType)
class SWATCOMMANDER_API UTSSpawnModificationSystem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FMissionSpawnDataCollection SpawnInfo;  // +0x28  // default: "<struct>"

    UPROPERTY(VisibleAnywhere)
    TArray<UDataTable*> AdditionalArchetypeTables;  // +0x240  // default: []

    UPROPERTY(VisibleAnywhere)
    bool HasModification = false;  // +0x250

    UPROPERTY(VisibleAnywhere)
    bool ShouldChangeMoraleForSuspects = false;  // +0x251

    UPROPERTY(VisibleAnywhere)
    bool ShouldChangeMoraleForCivilians = false;  // +0x252

    UPROPERTY(VisibleAnywhere)
    FFloatRange MoraleRangeSusp;  // +0x254  // default: "<struct>"

    UPROPERTY(VisibleAnywhere)
    FFloatRange MoraleRangeCivi;  // +0x264  // default: "<struct>"

    UPROPERTY(VisibleAnywhere)
    bool ShouldChangeHealthForSuspects = false;  // +0x274

    UPROPERTY(VisibleAnywhere)
    bool ShouldChangeHealthForCivilians = false;  // +0x275

    UPROPERTY(VisibleAnywhere)
    FFloatRange HealthRangeSusp;  // +0x278  // default: "<struct>"

    UPROPERTY(VisibleAnywhere)
    FFloatRange HealthRangeCivi;  // +0x288  // default: "<struct>"


    // ── Methods ──
    UFUNCTION(BlueprintCallable)
    uint8 SetSpawnSystemSettings(uint8 /*struct*/& inSystemSettings);
    UFUNCTION(BlueprintCallable)
    uint8 SetShouldChangeMoraleForSuspects(bool inShould);
    UFUNCTION(BlueprintCallable)
    uint8 SetShouldChangeMoraleForCivilians(bool inShould);
    UFUNCTION(BlueprintCallable)
    uint8 SetShouldChangeHealthForSuspects(bool inShould);
    UFUNCTION(BlueprintCallable)
    uint8 SetShouldChangeHealthForCivilians(bool inShould);
    UFUNCTION(BlueprintCallable)
    uint8 SetModificationFlag();
    UFUNCTION(BlueprintCallable)
    uint8 SetMinMaxMoraleForSuspects(float inMinMorale, float inMaxMorale);
    UFUNCTION(BlueprintCallable)
    uint8 SetMinMaxMoraleForCivilians(float inMinMorale, float inMaxMorale);
    UFUNCTION(BlueprintCallable)
    uint8 SetMinMaxHealthForSuspects(float inMinHealth, float inMaxHealth);
    UFUNCTION(BlueprintCallable)
    uint8 SetMinMaxHealthForCivilians(float inMinHealth, float inMaxHealth);
    UFUNCTION(BlueprintCallable)
    uint8 SetDoorConfigSettings(float inLockedDoorPercentage, float inOpenedDoorPercentage);
    UFUNCTION(BlueprintCallable)
    uint8 SetAdditionalArchetypesTables(TArray<uint8> inDataTables);
    UFUNCTION(BlueprintCallable)
    uint8 RemoveAllCharactersExeptObjective();
    UFUNCTION(BlueprintCallable)
    bool LoadMissionData(UObject* inMissionDataTable, uint8 /*enum*/ inGameplayMode);
    UFUNCTION(BlueprintCallable)
    bool LoadCharactersFromMission(UObject* inMissionDataTable, bool inIsSuspect, TArray<uint8>& outCharactersSpawnData);
    UFUNCTION(BlueprintCallable)
    TArray<uint8> GetUniqueCharacterTypes(TArray<uint8>& inCharactersSpawnData);
    UFUNCTION(BlueprintCallable)
    uint8 /*struct*/ GetSpawnInfoReference();
    UFUNCTION(BlueprintPure)
    int32 GetNumberOfObjectiveCharacters();
    UFUNCTION(BlueprintPure)
    bool GetModificationFlag();
    UFUNCTION(BlueprintCallable)
    uint8 ClearWhitelistFlags(TArray<uint8>& inCharactersSpawn);
    UFUNCTION(BlueprintCallable)
    uint8 ClearHasModificationFlag();
    UFUNCTION(BlueprintCallable)
    uint8 AssignCharactersToMission(TArray<uint8>& inCharacterSpawnData, TArray<uint8>& inSpawnDataContainers, TArray<uint8>& inNumberOfCharactersToSpawn);
};

