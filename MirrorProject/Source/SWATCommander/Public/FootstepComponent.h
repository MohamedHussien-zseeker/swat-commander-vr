// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.FootstepComponent
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class USoundCue;

#include "FootstepComponent.generated.h"

// Class: Class /Script/SWATCommander.FootstepComponent
UCLASS(DefaultToInstanced, Config=Engine, BlueprintType)
class SWATCOMMANDER_API UFootstepComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool SpawnSound3D = false;  // +0xB0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundCue* SoundCue;  // +0xB8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool Enabled = true;  // +0xC0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool TraceComplex = false;  // +0xC1

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool Debug = false;  // +0xC2

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float SpeedThreshold = 10.0f;  // +0xC4

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float VolumeMultiplier = 1.0f;  // +0xC8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MinTimeBetweenSteps = 0.2800000011920929f;  // +0xCC

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool ShouldPlayArmor = false;  // +0xD0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MinStepVolume = 0.550000011920929f;  // +0xD4

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MaxStepVolume = 1.0f;  // +0xD8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MinArmorVolume = 0.20000000298023224f;  // +0xDC

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MaxArmorVolume = 1.0f;  // +0xE0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool EmmitNoiseOnStep = false;  // +0xE4

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<uint8> SurfaceTypes;  // +0xE8  // default: []

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    uint8 LastSurfaceType = 0;  // +0xF8


    // ── Methods ──
    UFUNCTION(BlueprintCallable)
    uint8 PlayStartJump();
    UFUNCTION(NetMulticast, Unreliable)
    uint8 PlayFootstepNoiseMulticast(float inSpeed);
    UFUNCTION(BlueprintCallable)
    uint8 PlayFootstepNoise(float inSpeed);
    UFUNCTION(BlueprintCallable)
    uint8 PlayFootstep();
    UFUNCTION(BlueprintCallable)
    uint8 PlayEndJump();
    UFUNCTION(BlueprintCallable)
    uint8 PlayAimSound();
};

