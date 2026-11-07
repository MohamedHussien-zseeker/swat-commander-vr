// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.AIDirectorActor
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UDataTable;
class ATSCharacterBase;
class UPSEnemyPointAction;

struct FIDirectorNoiseTableRow;
struct FIDirectorSettings;
struct FIDirectorStatistics;

enum class ETSGameplayModes : uint8;

#include "AIDirectorActor.generated.h"

// Class: Class /Script/SWATCommander.AIDirectorActor
UCLASS(Config=Game, BlueprintType)
class SWATCOMMANDER_API AIDirectorActor : public APawn {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString CiviCompliedDialog = TEXT("AnnouncedCivilianComplied");  // +0x280

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString SuspCompliedDialog = TEXT("AnnouncedSuspectComplied");  // +0x290

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString SuspKilledDialog = TEXT("KillSuspect");  // +0x2A0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UDataTable* NoiseCoefsDataTable;  // +0x2B0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FAIDirectorSettings Settings;  // +0x2B8  // default: "<struct>"

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<UPSEnemyPointAction*> GenericActions;  // +0x328  // default: []

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MinTimeBetweenCarAlarmReaction = 60.0f;  // +0x338

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MinTimeBuildingPowerOffReaction = 60.0f;  // +0x33C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MinTimeBetweenWaitingOrderDialogRequest = 20.0f;  // +0x340

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool EnableCombatNoiseProcessing = true;  // +0x344

    UPROPERTY(VisibleAnywhere)
    FAIDirectorNoiseTableRow NoiseTableData;  // +0x348  // default: "<struct>"

    UPROPERTY(VisibleAnywhere)
    float LastTimeCarAlarmHandled = -60.0f;  // +0x3D0

    UPROPERTY(VisibleAnywhere)
    float LastTimeBuildingPowerOffHandled = -60.0f;  // +0x3D4

    UPROPERTY(VisibleAnywhere)
    float LastTimeWaitingOrderDialogHandled = -20.0f;  // +0x3D8

    UPROPERTY(VisibleAnywhere)
    float LastPlayIdleDialog = -60.0f;  // +0x3DC

    UPROPERTY(VisibleAnywhere)
    float LastTimeThrowGrenade = -50.0f;  // +0x3E0

    UPROPERTY(VisibleAnywhere)
    TArray<ATSCharacterBase*> RunningFromDanger;  // +0x3E8  // default: []

    UPROPERTY(VisibleAnywhere)
    int32 MaximumRunFromDangerNum = 0;  // +0x3F8

    UPROPERTY(VisibleAnywhere)
    TArray<ATSCharacterBase*> Suspects;  // +0x400  // default: []

    UPROPERTY(VisibleAnywhere)
    TArray<ATSCharacterBase*> Civilians;  // +0x410  // default: []

    UPROPERTY(VisibleAnywhere)
    TArray<ATSCharacterBase*> DeadSuspects;  // +0x420  // default: []

    UPROPERTY(VisibleAnywhere)
    TArray<ATSCharacterBase*> DeadCivilians;  // +0x430  // default: []

    UPROPERTY(VisibleAnywhere)
    FAIDirectorStatistics Stats;  // +0x440  // default: "<struct>"

    UPROPERTY(VisibleAnywhere)
    ETSGameplayModes CurrentGameplayMode;  // +0x4D4  // default: {
            "enumType": "ETSGameplayModes",
            "value": 0
          }

    UPROPERTY(VisibleAnywhere)
    TMap<TMap<TMap<TSet<bool>, TSet<bool>>, TMap<TSet<bool>, TSet<bool>>>, TMap<TMap<TSet<bool>, TSet<bool>>, TMap<TSet<bool>, TSet<bool>>>> CiviliansCompliedList;  // +0x4D8  // default: {
            "note": "not yet supported",
            "type": "MapProperty"
...

    UPROPERTY(VisibleAnywhere)
    TMap<TMap<TSet<bool>, TSet<bool>>, TMap<TSet<bool>, TSet<bool>>> SuspectsCompliedList;  // +0x528  // default: {
            "note": "not yet supported",
            "type": "MapProperty"
...

    UPROPERTY(VisibleAnywhere)
    TMap<TSet<bool>, TSet<bool>> SuspectsKillList;  // +0x578  // default: {
            "note": "not yet supported",
            "type": "MapProperty"
...

    UPROPERTY(VisibleAnywhere)
    TSet<bool> OfficersBusy;  // +0x5C8  // default: {
            "note": "not yet supported",
            "type": "SetProperty"
...


    // ── Methods ──
    UFUNCTION(BlueprintCallable)
    uint8 UnregisterStartRunning(UObject* InCharacter);
    UFUNCTION(BlueprintCallable)
    uint8 ThrowGrenadeAction(UObject* InCharacter, UObject* inDoor, uint8 /*struct*/& inTargetLocation);
    UFUNCTION(BlueprintCallable)
    uint8 SwitchBuildingPower(UObject* inSwitchActor, bool inEnabled);
    UFUNCTION(BlueprintImplementableEvent)
    uint8 SubmitVisuallySpotPlayer(UObject* inSenderAI, UObject* inTarget);
    UFUNCTION(BlueprintCallable)
    uint8 SubmitSuspCompliedDialog(UObject* inSuspect, UObject* inOfficerReporting);
    UFUNCTION(BlueprintCallable)
    uint8 SubmitKillSuspectDialog(UObject* inSuspect, UObject* inOfficerReporting);
    UFUNCTION(BlueprintCallable)
    uint8 SubmitDirectorAction(UObject* InCharacter, uint8 /*struct*/& inDescription);
    UFUNCTION(BlueprintCallable)
    uint8 SubmitCiviCompliedDialog(UObject* inCivilian, UObject* inOfficerReporting);
    UFUNCTION(BlueprintCallable)
    uint8 SetGameplayMode(uint8 /*enum*/ inMode);
    UFUNCTION(BlueprintCallable)
    uint8 RequestWaitingOrderDialog(uint8 /*struct*/& inExecutingCommand);
    UFUNCTION(BlueprintCallable)
    bool RequestPermission(uint8 /*enum*/ InType);
    UFUNCTION(BlueprintCallable)
    uint8 RequestMarkPosition(uint8 /*struct*/& inExecutingCommand);
    UFUNCTION(BlueprintCallable)
    uint8 RemoveAllCharacters();
    UFUNCTION(BlueprintCallable)
    uint8 RegisterSuspect(UObject* inSuspect);
    UFUNCTION(BlueprintCallable)
    uint8 RegisterStartRunning(UObject* InCharacter);
    UFUNCTION(BlueprintCallable)
    uint8 RegisterCivilian(UObject* inCivilian);
    UFUNCTION(BlueprintCallable)
    uint8 RegisterCharacterDeath(UObject* InCharacter, UObject* inKiller);
    UFUNCTION(BlueprintCallable)
    uint8 PlayNextOfficerDialog();
    UFUNCTION(BlueprintCallable)
    uint8 OnSpawnEventComplete();
    UFUNCTION(BlueprintCallable)
    uint8 OnSpawnerConfiguredMission(uint8 /*struct*/& inInitalMissionInfo);
    UFUNCTION(BlueprintCallable)
    uint8 LoadNoiseDataTable();
    UFUNCTION(BlueprintPure)
    bool IsSomebodyRunningFromDanger();
    UFUNCTION(BlueprintPure)
    bool HasCharactersNamed(TArray<uint8>& InName);
    UFUNCTION(BlueprintCallable)
    uint8 HandleCarAlarmNoise(UObject* inCarActor);
    UFUNCTION(BlueprintPure)
    TArray<uint8> GetUnreportedCharactersForCamera();
    UFUNCTION(BlueprintPure)
    float GetStingerGrenadeNoiseCoef();
    UFUNCTION(BlueprintPure)
    float GetShoutGrenadeNoiseCoef();
    UFUNCTION(BlueprintPure)
    float GetSecondaryWeaponNoiseCoef(uint8 /*enum*/ inWeaponType, bool inIsSupressed);
    UFUNCTION(BlueprintPure)
    uint8 /*enum*/ GetRandomResponseForIntensityLevel(int32 inIntensityLevel);
    UFUNCTION(BlueprintPure)
    float GetPrimaryWeaponNoiseCoef(uint8 /*enum*/ inWeaponType, bool inIsSupressed);
    UFUNCTION(BlueprintPure)
    float GetNoiseThrasholdValue();
    UFUNCTION(BlueprintPure)
    float GetNoiseResponseCooldownTime();
    UFUNCTION(BlueprintPure)
    float GetNoiseCheckTime();
    UFUNCTION(BlueprintPure)
    float GetGasGrenadeNoiseCoef();
    UFUNCTION(BlueprintPure)
    float GetFlashGrenadeNoiseCoef();
    UFUNCTION(BlueprintPure)
    float GetExplosiveNoiseCoef();
    UFUNCTION(BlueprintPure)
    float GetBatteringRamNoiseCoef();
    UFUNCTION(BlueprintPure)
    TArray<uint8> GetAllSuspects(bool inReturnOnlyAlive);
    UFUNCTION(BlueprintPure)
    TArray<uint8> GetAllCivilians(bool inReturnOnlyAlive);
    UFUNCTION(BlueprintPure)
    UObject* GetAIDirector(UObject* WorldContextObject);
    UFUNCTION(BlueprintCallable)
    TArray<uint8> FindSuspectsOutsideRange(uint8 /*struct*/& inOriginVector, float inDistance, int32 inNumSuspects);
    UFUNCTION(BlueprintPure)
    TArray<uint8> FindGenericActionsForNPC(UObject* inAIC);
    UFUNCTION(BlueprintCallable)
    TArray<uint8> FindCiviliansOutsideRange(uint8 /*struct*/& inOriginVector, float inDistance, int32 inNumCivilians);
    UFUNCTION(BlueprintPure)
    bool CanRunFromDanager(UObject* InCharacter);
    UFUNCTION(BlueprintCallable)
    bool CanPlayIdleDialog();
};

