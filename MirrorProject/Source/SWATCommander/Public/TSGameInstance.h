// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.TSGameInstance
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UDataTable;
class UTSAICommunicationBus;
class UTSDialogManager;
class UTSGameConstants;
class UTSSpawnModificationSystem;
class UUserWidget;

struct FBuildSettings;
struct FLinearColor;

enum class ELoadingScreenMoviePlaybackType : uint8;
enum class EPlayMode : uint8;
enum class ETSGameplayModes : uint8;
enum class ETSSpawnLocationTypes : uint8;

#include "TSGameInstance.generated.h"

// Class: Class /Script/SWATCommander.TSGameInstance
UCLASS(Transient, BlueprintType)
class SWATCOMMANDER_API UTSGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    UTSSpawnModificationSystem* SpawnModificationSystem;  // +0x1B8  // default: {
            "address": "0x299FF24B300",
            "className": "TSSpawnMo...

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    UTSGameConstants* Constants;  // +0x1C0  // default: {
            "address": "0x299A2B2EA80",
            "className": "TSGameCon...

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    UTSDialogManager* DialogManager;  // +0x1C8  // default: {
            "address": "0x299FF193220",
            "className": "TSDialogM...

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    UTSAICommunicationBus* AICommunicationBus;  // +0x1D0  // default: {
            "address": "0x2999EA34340",
            "className": "TSAICommu...

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UDataTable* MissionsDataTable;  // +0x1D8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UDataTable* DifficultySettingsDataTable;  // +0x1E0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName CurrentMissionName = FName(TEXT("None"));  // +0x1E8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    ETSGameplayModes CurrentGameplayMode;  // +0x1F0  // default: {
            "enumType": "ETSGameplayModes",
            "value": 0
          }

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    ETSSpawnLocationTypes CurrentSpawnLocation;  // +0x1F1  // default: {
            "enumType": "ETSSpawnLocationTypes",
            "value": 0
   ...

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EPlayMode playMode;  // +0x1F2  // default: {
            "enumType": "EPlayMode",
            "value": 0
          }

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TMap<int32, FString> SelectedEntrance;  // +0x1F8  // default: {
            "note": "not yet supported",
            "type": "MapProperty"
...

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 OfficersBehaviorModeAI = 0;  // +0x248

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FBuildSettings BuildSettings;  // +0x24C  // default: "<struct>"

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsPrologueGame = false;  // +0x253

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsDemoGame = false;  // +0x254

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsEA = false;  // +0x255

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsTestingMode = false;  // +0x256

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool DebugAIMode = false;  // +0x257

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool ShowWIP = false;  // +0x258

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool ShowHUDVersion = false;  // +0x259

    UPROPERTY(VisibleAnywhere, BlueprintAssignable)
    FMulticastScriptDelegate ControllerStatusChanged;  // +0x260  // default: {
            "type": "MulticastInlineDelegateProperty"
          }

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<UUserWidget> WidgetClass;  // +0x270

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FString> MoviePaths;  // +0x278  // default: []

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    ELoadingScreenMoviePlaybackType PlaybackType;  // +0x288  // default: {
            "enumType": "ELoadingScreenMoviePlaybackType",
            "val...

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bAllowEngineTick = true;  // +0x289

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bAllowInEarlyStartup = false;  // +0x28A

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bAutoCompleteWhenLoadingCompletes = true;  // +0x28B

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bMoviesAreSkippable = false;  // +0x28C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bWaitForManualStop = false;  // +0x28D

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MinimumLoadingScreenDisplayTime = -1.0f;  // +0x290

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float FadeInDuration = -1.0f;  // +0x294

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float FadeOutDuration = -1.0f;  // +0x298

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bFadeIn = false;  // +0x29C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bFadeOut = false;  // +0x29D

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FLinearColor FadeColor;  // +0x2A0  // default: "<struct>"


    // ── Methods ──
    UFUNCTION(BlueprintCallable)
    float UpdateLoadingProgress(float DeltaTime, TArray<uint8> LoadingStepRanges, float& OutProgressPercentage);
    UFUNCTION(BlueprintCallable)
    uint8 SetupLoadingScreen();
    UFUNCTION(BlueprintCallable)
    uint8 SetPlayMode(uint8 /*enum*/ playMode);
    UFUNCTION(BlueprintCallable)
    uint8 ResetLoadingProgress();
    UFUNCTION(BlueprintPure)
    uint8 /*enum*/ GetPlayMode();
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    TArray<uint8> GetOfficersEquipmentData();
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    uint8 /*enum*/ GetGameDifficultyMode();
    UFUNCTION(BlueprintPure)
    uint8 /*struct*/ GetDifficultySettings();
    UFUNCTION(BlueprintPure)
    uint8 /*enum*/ GetCurrentGameplayMode();
    UFUNCTION(BlueprintCallable)
    uint8 EndupLoadingScreen(bool Force);
    UFUNCTION(BlueprintNativeEvent)
    uint8 EndLoadingScreen(UObject* World);
    UFUNCTION(BlueprintNativeEvent)
    uint8 BeginLoadingScreen(FString MapName);
};

