// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.StunEffectComponent
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class AIControllerBaseV2;

struct FStunEffectCollection;

#include "StunEffectComponent.generated.h"

// Class: Class /Script/SWATCommander.StunEffectComponent
UCLASS(DefaultToInstanced, Config=Engine, BlueprintType)
class SWATCOMMANDER_API UStunEffectComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere, BlueprintAssignable)
    FMulticastScriptDelegate OnStunEffectStartDelegate;  // +0xB0  // default: {
            "type": "MulticastInlineDelegateProperty"
          }

    UPROPERTY(VisibleAnywhere, BlueprintAssignable)
    FMulticastScriptDelegate OnStunEffectEndDelegate;  // +0xC0  // default: {
            "type": "MulticastInlineDelegateProperty"
          }

    UPROPERTY(VisibleAnywhere)
    float StunEffectStarted = 0.0f;  // +0xD0

    UPROPERTY(VisibleAnywhere)
    FStunEffectCollection CurrentStunEffect;  // +0xD8  // default: "<struct>"

    UPROPERTY(VisibleAnywhere)
    TWeakObjectPtr<AIControllerBaseV2> OwnerAIC;  // +0xF8  // default: {
            "offset": 248,
            "type": "WeakObjectProperty"
       ...

    UPROPERTY(VisibleAnywhere)
    bool HasStunStarted = false;  // +0x100

    UPROPERTY(VisibleAnywhere)
    float PrevFireRate = 0.0f;  // +0x104

    UPROPERTY(VisibleAnywhere)
    float PrevFireAccuracy = 0.0f;  // +0x108

    UPROPERTY(VisibleAnywhere)
    float PrevRetargetTimeRate = 0.0f;  // +0x10C


    // ── Methods ──
    UFUNCTION(BlueprintCallable)
    uint8 UpdateStunComponent();
    UFUNCTION(BlueprintPure)
    bool IsStunEffectFinished();
    UFUNCTION(BlueprintCallable)
    uint8 EndStunEffect();
    UFUNCTION(BlueprintCallable)
    uint8 ApplyStunEffect(uint8 /*enum*/ inDamageType, uint8 /*struct*/& inStunEffect);
};

