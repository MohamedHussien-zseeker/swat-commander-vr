// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.PerceptorComponent
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class AIControllerBaseV2;

enum class EAITeams : uint8;

#include "PerceptorComponent.generated.h"

// Class: Class /Script/SWATCommander.PerceptorComponent
UCLASS(DefaultToInstanced, Config=Engine, BlueprintType)
class SWATCOMMANDER_API UPerceptorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<EAITeams> TeamsToTarget;  // +0xB0  // default: []

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float RetargetTime = 5.0f;  // +0xC0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float RetargetTimeMultiplier = 1.0f;  // +0xC4

    UPROPERTY(VisibleAnywhere, BlueprintAssignable)
    FMulticastScriptDelegate OnPerceptorSubmitTargetDelegate;  // +0xC8  // default: {
            "type": "MulticastInlineDelegateProperty"
          }

    UPROPERTY(VisibleAnywhere, BlueprintAssignable)
    FMulticastScriptDelegate OnPerceptorReceiveNoiseDelegate;  // +0xD8  // default: {
            "type": "MulticastInlineDelegateProperty"
          }

    UPROPERTY(VisibleAnywhere)
    float LastTimeRetarget = 0.0f;  // +0x100

    UPROPERTY(VisibleAnywhere)
    TWeakObjectPtr<AIControllerBaseV2> OwnerAIC;  // +0x104  // default: {
            "offset": 260,
            "type": "WeakObjectProperty"
       ...


    // ── Methods ──
    UFUNCTION(BlueprintCallable)
    uint8 ProcessIncomingPerceptionEvent(UObject* Actor, uint8 /*struct*/ Stimulus);
    UFUNCTION(BlueprintPure)
    bool IsTimeToRetarget();
    UFUNCTION(BlueprintCallable)
    uint8 ConfirmRetarget();
};

