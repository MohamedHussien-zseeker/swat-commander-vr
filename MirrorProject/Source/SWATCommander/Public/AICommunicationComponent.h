// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.AICommunicationComponent
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


enum class EAITeams : uint8;

#include "AICommunicationComponent.generated.h"

// Class: Class /Script/SWATCommander.AICommunicationComponent
UCLASS(DefaultToInstanced, Config=Engine, BlueprintType)
class SWATCOMMANDER_API UICommunicationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<EAITeams> BroadcastChannels;  // +0xB0  // default: []

    UPROPERTY(VisibleAnywhere, BlueprintAssignable)
    FMulticastScriptDelegate OnReceiveBusMessage;  // +0xC0  // default: {
            "type": "MulticastInlineDelegateProperty"
          }


    // ── Methods ──
    UFUNCTION(BlueprintCallable)
    uint8 Unsubscribe();
    UFUNCTION(BlueprintCallable)
    uint8 ToggleRadioSilent(bool inIsSilent);
    UFUNCTION(BlueprintCallable)
    uint8 Subscribe();
    UFUNCTION(BlueprintPure)
    bool IsRadioSilentEnabled();
    UFUNCTION(BlueprintCallable)
    uint8 Broadcast(uint8 /*struct*/& inMessage);
};

