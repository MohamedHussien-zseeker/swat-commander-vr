// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.InteractiveDialogComponent
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UDataTable;

enum class EDialogSpeaker : uint8;

#include "InteractiveDialogComponent.generated.h"

// Class: Class /Script/SWATCommander.InteractiveDialogComponent
UCLASS(DefaultToInstanced, Config=Engine, BlueprintType)
class SWATCOMMANDER_API UInteractiveDialogComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsEnabled = true;  // +0xB0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UDataTable* DialogPalette;  // +0xB8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName CustomName = FName(TEXT("None"));  // +0xC0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EDialogSpeaker SpeakerType;  // +0xC8  // default: {
            "enumType": "EDialogSpeaker",
            "value": 2
          }

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool CheckDistanceForSubtitles = false;  // +0xC9

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MinimalDistanceForSubtitlesHorizontal = 700.0f;  // +0xCC

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MinimalDistanceForSubtitlesVertical = 300.0f;  // +0xD0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float VolumeMultiplier = 1.0f;  // +0xD4

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsPlaying = false;  // +0xD8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool LoadPaletteOnBeginPlay = false;  // +0xD9

    UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
    FMulticastScriptDelegate OnNextLineStarted;  // +0xE0  // default: {
            "type": "MulticastInlineDelegateProperty"
          }

    UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
    FMulticastScriptDelegate OnDialogFinished;  // +0xF0  // default: {
            "type": "MulticastInlineDelegateProperty"
          }


    // ── Methods ──
    UFUNCTION(BlueprintCallable)
    uint8 Stop();
    UFUNCTION(BlueprintCallable)
    uint8 StartDialogByCategory(FString inCategory);
    UFUNCTION(BlueprintCallable)
    uint8 StartDialog(uint8 /*struct*/ inDialog);
    UFUNCTION(BlueprintCallable)
    uint8 RegisterAudioComponent(UObject* inAudioComponent);
    UFUNCTION()
    uint8 OnAudioFinished();
    UFUNCTION(BlueprintCallable)
    uint8 LoadDialogMap(UObject* inDataTable);
};

