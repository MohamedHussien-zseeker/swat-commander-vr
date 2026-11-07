// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.TacticalSquadGameModeBase
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UDataTable;
class UGameModeStatInterface;
class UGameStatUIInterface;
class APlayerController;

struct FGameRankInfo;
struct FGameRankSplit;
struct FGameStatCharacterInfo;
struct FInitialMissionInfo;
struct FObjectiveStuct;
struct FPenaltiesInfo;

enum class ETSNetworkMode : uint8;

#include "TacticalSquadGameModeBase.generated.h"

// Class: Class /Script/SWATCommander.TacticalSquadGameModeBase
UCLASS(NotPlaceable, Transient, Config=Game, BlueprintType)
class SWATCOMMANDER_API ATacticalSquadGameModeBase : public AGameMode, public IGameModeStatInterface, public IGameStatUIInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<APlayerController*> PlayerControllers;  // +0x318  // default: []

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    ETSNetworkMode CurrentNetworkMode;  // +0x328  // default: {
            "enumType": "ETSNetworkMode",
            "value": 0
          }

    UPROPERTY(EditDefaultsOnly)
    float PlayerReadyTimeout = 50.0f;  // +0x32C

    UPROPERTY(EditDefaultsOnly)
    bool bForceSpawnOnTimeout = true;  // +0x334

    UPROPERTY(VisibleAnywhere)
    float WaitTime = 0.0f;  // +0x338

    UPROPERTY(EditDefaultsOnly)
    float MaxWaitTime = 60.0f;  // +0x33C

    UPROPERTY(VisibleAnywhere)
    TArray<FGameStatCharacterInfo> SuspectsInfo;  // +0x340  // default: []

    UPROPERTY(VisibleAnywhere)
    TArray<FGameStatCharacterInfo> CiviliansInfo;  // +0x350  // default: []

    UPROPERTY(VisibleAnywhere)
    TArray<FGameStatCharacterInfo> OfficersInfo;  // +0x360  // default: []

    UPROPERTY(VisibleAnywhere)
    FInitialMissionInfo InitialMissionInfo;  // +0x370  // default: "<struct>"

    UPROPERTY(VisibleAnywhere)
    FInitialMissionInfo ProgressMissionInfo;  // +0x3B8  // default: "<struct>"

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UDataTable* RankSplitDataTable;  // +0x400

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UDataTable* PenaltiesDataTable;  // +0x408

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UDataTable* MissionsDataTable;  // +0x410

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MinTimeSuspectSurrender = 4.5f;  // +0x418

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MinTimeSuspectIncapacitated = 3.5f;  // +0x41C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MinTimeSuspectDropWeapon = 2.0f;  // +0x420

    UPROPERTY(VisibleAnywhere)
    FGameRankSplit RankSplitInfo;  // +0x428  // default: "<struct>"

    UPROPERTY(VisibleAnywhere)
    FGameRankInfo CurrentRankInfo;  // +0x468  // default: "<struct>"

    UPROPERTY(VisibleAnywhere)
    FPenaltiesInfo PenaltyInfo;  // +0x4F0  // default: "<struct>"

    UPROPERTY(VisibleAnywhere)
    FPenaltiesInfo CurrentPenalties;  // +0x528  // default: "<struct>"

    UPROPERTY(VisibleAnywhere)
    FPenaltiesInfo CalculatedPenalties;  // +0x560  // default: "<struct>"

    UPROPERTY(VisibleAnywhere)
    TArray<FObjectiveStuct> Objectives;  // +0x598  // default: []

    UPROPERTY(VisibleAnywhere)
    int32 RequiredScore = 0;  // +0x5A8

    UPROPERTY(VisibleAnywhere)
    int32 MaximumObjectiveScore = 0;  // +0x5AC

    UPROPERTY(VisibleAnywhere)
    bool IsMissionEnabled = false;  // +0x5B0

    UPROPERTY(VisibleAnywhere)
    bool IsMissionTutorial = false;  // +0x5B1

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsDebugEnable = false;  // +0x5B2


    // ── Methods ──
    UFUNCTION(BlueprintCallable)
    uint8 UpdateOfficersInfoMultiplayer();
    UFUNCTION(BlueprintImplementableEvent)
    uint8 SpawnAndPossess(UObject* PC);
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 SetupStatSystem(uint8 /*struct*/& inMissionInfo);
    UFUNCTION(BlueprintCallable)
    uint8 SetGameNetworkMode(uint8 /*enum*/ NetMode);
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 PlayROEViolationDialog();
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 OnReportEvidence(UObject* inTarget);
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 OnReportCharacter(UObject* inTarget);
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 OnRegisterStaticEvidences(TArray<uint8>& inInteractiveActors);
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 OnGivePenalty(uint8 /*enum*/ inPenalty);
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 OnFailObjective(FName& inInteractiveActorIdentifier);
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 OnDropWeapon(UObject* inInstigator, int32 inNumWeapons);
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 OnCompleteObjective(FName& inInteractiveActorIdentifier);
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 OnChangeRestrainState(UObject* inInstigator, bool inRestrained);
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 OnChangeHealthState(UObject* inInstigator, UObject* inTarget, uint8 /*enum*/ inState, bool wasAThreat);
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 OnActivateFiring(UObject* inInstigator, UObject* inTarget);
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsCharacterPartOfObjective(FName& inCharacterName, bool& outIsCharacterSuspect);
    UFUNCTION(BlueprintPure)
    TArray<uint8> GetOfficersControllersFromGameState(bool inShouldBeAlive);
    UFUNCTION(BlueprintImplementableEvent)
    TArray<uint8> GetOfficersControllers();
    UFUNCTION(BlueprintPure)
    uint8 /*struct*/ GetInitialMissionInfo();
    UFUNCTION(BlueprintPure)
    uint8 /*enum*/ GetGameNetworkMode();
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 GetCurrentMissionStateInfo(TArray<uint8>& OutCivilians, TArray<uint8>& OutSuspects, TArray<uint8>& OutOfficers);
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    uint8 GetCharactersProgressionInfo(TArray<uint8>& Characters);
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 DisplayPenaltyMessage(uint8 /*enum*/ inPenaltyType, int32 inPenalty);
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 DisplayMissionFailedMessage();
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 DisplayMissionCompleteMessage();
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 DisplayCompleteObjectiveMessage(int32 inBonus);
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 DisplayBonusMessage(uint8 /*enum*/ inBonusType, int32 inBonus);
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 DebriefMission(bool inShouldDelay);
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool CanShowDebrifingButton();
    UFUNCTION(BlueprintImplementableEvent)
    uint8 AllowSpawn();
};

