// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.HitSoundComponent
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class USoundAttenuation;
class USoundConcurrency;
class USoundCue;

struct FFloatRange;
struct FVector;

#include "HitSoundComponent.generated.h"

// Class: Class /Script/SWATCommander.HitSoundComponent
UCLASS(DefaultToInstanced, Config=Engine, BlueprintType)
class SWATCOMMANDER_API UHitSoundComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundCue* HitSoundCue;  // +0xB0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundAttenuation* HitSoundAttenuation;  // +0xB8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundConcurrency* HitSoundConcurrency;  // +0xC0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Volume = 1.0f;  // +0xC8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Pitch = 1.0f;  // +0xCC

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float ImpulseThrashold = 10000.0f;  // +0xD0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float VelocityThrashold = 0.949999988079071f;  // +0xD4

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector SoundSourceOffset;  // +0xD8  // default: "<struct>"

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FFloatRange TimeBetweenSound;  // +0xE4  // default: "<struct>"

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaxNumberOfHits = 3;  // +0xF4


    // ── Methods ──
    UFUNCTION(BlueprintCallable)
    uint8 ResetSoundParameters();
    UFUNCTION(BlueprintCallable)
    uint8 OnHitSound(UObject* inHitComponent, UObject* inOtherActor, uint8 /*struct*/& inHitResult, uint8 /*struct*/& inNormalImpulse);
};

