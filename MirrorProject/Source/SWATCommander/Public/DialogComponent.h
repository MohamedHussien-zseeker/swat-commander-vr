// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.DialogComponent
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UDataTable;

enum class EDialogSpeaker : uint8;

#include "DialogComponent.generated.h"

// Class: Class /Script/SWATCommander.DialogComponent
UCLASS(DefaultToInstanced, Config=Engine, BlueprintType)
class SWATCOMMANDER_API UDialogComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsEnabled = true;  // +0xB0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UDataTable* DialogPalette;  // +0xB8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UDataTable* ReactionDialogPalette;  // +0xC0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString ScreamDialogCategory = TEXT("RScreamed");  // +0xC8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool UseCustomName = false;  // +0xD8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName CustomName = FName(TEXT("None"));  // +0xDC

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EDialogSpeaker SpeakerType;  // +0xE4  // default: {
            "enumType": "EDialogSpeaker",
            "value": 10
          }

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float VolumeMultiplier = 1.0f;  // +0xE8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsPlaying = false;  // +0xEC

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool LoadPaletteOnBeginPlay = false;  // +0xED

    UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
    FMulticastScriptDelegate OnApplyDialogAnimation;  // +0xF0  // default: {
            "type": "MulticastInlineDelegateProperty"
          }

    UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
    FMulticastScriptDelegate OnNextLineStarted;  // +0x100  // default: {
            "type": "MulticastInlineDelegateProperty"
          }

    UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
    FMulticastScriptDelegate OnDialogFinished;  // +0x110  // default: {
            "type": "MulticastInlineDelegateProperty"
          }

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MinimalDistanceForSubtitlesHorizontal = 700.0f;  // +0x120

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MinimalDistanceForSubtitlesVertical = 300.0f;  // +0x124

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString MultiplayerName = TEXT("");  // +0x128


    // ── Methods ──
    UFUNCTION(BlueprintCallable)
    uint8 Stop();
    UFUNCTION(BlueprintCallable)
    uint8 StartDialogByCategoryUnique(FString inCategory, bool inPlayAnimation, bool inShouldStopPrevious);
    UFUNCTION(BlueprintCallable)
    uint8 StartDialogByCategoryOnce(FString inCategory, bool inPlayAnimation, bool inShouldStopPrevious);
    UFUNCTION(BlueprintCallable)
    uint8 StartDialogByCategory(FString inCategory, bool inPlayAnimation, bool inShouldStopPrevious);
    UFUNCTION(BlueprintCallable)
    uint8 StartDialog(uint8 /*struct*/ inDialog, bool inPlayAnimation, bool inShouldStopPrevious);
    UFUNCTION(BlueprintCallable)
    uint8 RegisterAudioComponent(UObject* inAudioComponent);
    UFUNCTION(BlueprintCallable)
    uint8 PlayScreamDialog(bool inShouldStopPrevious);
    UFUNCTION(BlueprintCallable)
    uint8 PlayDamageReactionDialog(float Damage, bool IsRLeg, bool IsLLeg, bool IsRHand, bool IsLHand, bool IsHead, bool IsBody, float inHealth, FName& inDamageType, bool inShouldStopPrevious);
    UFUNCTION(BlueprintCallable)
    uint8 PlayDamageDialogConcat(FString dialogA, FString dialogB, bool inShouldStopPrevious);
    UFUNCTION()
    uint8 OnAudioFinished();
    UFUNCTION(BlueprintCallable)
    uint8 LoadDialogMap(UObject* inDataTable);
    UFUNCTION(BlueprintPure)
    bool IsCurrentlyPlayingDialog(FString inDialogCategory);
    UFUNCTION(BlueprintPure)
    bool HasDialogCategory(FString inCategory);
};

