// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.TSAudioSettings
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "TSAudioSettings.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.TSAudioSettings
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FTSAudioSettings {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool EnableAudio;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MasterVolume;  // +0x4

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool EnableMusic;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MusicVolume;  // +0xC

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool EnableDialogue;  // +0x10

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float DialogueVolume;  // +0x14

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool EnableSoundEffects;  // +0x18

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float SoundEffectsVolume;  // +0x1C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool EnableUISounds;  // +0x20

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float UIVolume;  // +0x24

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 OutputProfile;  // +0x28

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float VoiceChatVolume;  // +0x2C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float VoiceChatInputVolume;  // +0x30

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float VoiceChatOutputVolume;  // +0x34

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 VoiceChatInputDevice;  // +0x38

};

