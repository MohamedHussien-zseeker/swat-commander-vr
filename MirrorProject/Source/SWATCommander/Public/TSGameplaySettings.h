// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.TSGameplaySettings
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


enum class EGameDifficultyMode : uint8;

#include "TSGameplaySettings.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.TSGameplaySettings
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FTSGameplaySettings {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EGameDifficultyMode GameDifficulty;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool Permadeath;  // +0x1

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool DynamicWeather;  // +0x2

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool Autofollow;  // +0x3

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool InGameHints;  // +0x4

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool BodyCamera;  // +0x5

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool BodyCameraCrosshair;  // +0x6

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool BodyCameraInteractionCrosshair;  // +0x7

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 CommandMenuType;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 AdditionalMenuType;  // +0xC

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool ShowHUD;  // +0x10

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float HUDOpacity;  // +0x14

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool ShowCrosshair;  // +0x18

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool ShowHealth;  // +0x19

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool ShowAmmo;  // +0x1A

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool ShowHitIndicator;  // +0x1B

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool GrenadeIndicator;  // +0x1C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool SubtitlesEnable;  // +0x1D

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool ShowLogs;  // +0x1E

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool ShowPlayerNames;  // +0x1F

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool ShowDefaultCommands;  // +0x20

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool ShowHotkeyIcons;  // +0x21

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool ShowFPS;  // +0x22

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool ShowLatency;  // +0x23

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool ShowTutorialsMessage;  // +0x24

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool LaunchTutorialScreenDisplayed;  // +0x25

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool FeedbackScreenDisplayed;  // +0x26

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    uint8 DefaultCommand;  // +0x27

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    uint8 DefaultDoorCommand;  // +0x28

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    uint8 DefaultOpenDoorCommand;  // +0x29

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    uint8 DefaultLockedDoorCommand;  // +0x2A

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    uint8 DefaultUnlockedDoorCommand;  // +0x2B

};

