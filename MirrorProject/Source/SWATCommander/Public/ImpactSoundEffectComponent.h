// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.ImpactSoundEffectComponent
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UAudioComponent;
class UDataTable;
class ATSCharacterBase;

struct FImpactSoundEffectPreset;

#include "ImpactSoundEffectComponent.generated.h"

// Class: Class /Script/SWATCommander.ImpactSoundEffectComponent
UCLASS(DefaultToInstanced, Config=Engine, BlueprintType)
class SWATCOMMANDER_API UImpactSoundEffectComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UDataTable* PresetsDataTable;  // +0xB0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsEnabled = true;  // +0xB8

    UPROPERTY(VisibleAnywhere)
    UAudioComponent* ImpactSoundAudioComponent;  // +0xC0

    UPROPERTY(VisibleAnywhere)
    FImpactSoundEffectPreset CurrentPreset;  // +0xC8  // default: "<struct>"

    UPROPERTY(VisibleAnywhere)
    TArray<FImpactSoundEffectPreset> Presets;  // +0x110  // default: []

    UPROPERTY(VisibleAnywhere)
    ATSCharacterBase* CharacterRef;  // +0x120


    // ── Methods ──
    UFUNCTION(BlueprintPure)
    bool IsEffectPlaying();
    UFUNCTION(BlueprintCallable)
    uint8 FinishEffectManually();
    UFUNCTION(BlueprintCallable)
    uint8 FinishEffect(int32 inEffectID);
    UFUNCTION(BlueprintCallable)
    uint8 ApplyEffect(int32 inEffectID, float inEffectStrength);
};

