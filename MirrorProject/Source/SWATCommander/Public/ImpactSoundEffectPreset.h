// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.ImpactSoundEffectPreset
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class USoundCue;
class USoundSubmix;

#include "ImpactSoundEffectPreset.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.ImpactSoundEffectPreset
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FImpactSoundEffectPreset {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 EffectID;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundCue* ImpactSound;  // +0x10

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool SupposeToPlayImpactSFX;  // +0x18

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float SoundFadeInTime;  // +0x1C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float SoundFadeOutTime;  // +0x20

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float SoundVolume;  // +0x24

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float SoundStartOffset;  // +0x28

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundSubmix* SoundMixToReplace;  // +0x30

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundSubmix* ImpactSoundMix;  // +0x38

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float SoundMixFadeInTime;  // +0x40

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float SoundMixFadeOutTime;  // +0x44

};

