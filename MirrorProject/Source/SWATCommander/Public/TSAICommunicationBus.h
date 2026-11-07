// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.TSAICommunicationBus
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "TSAICommunicationBus.generated.h"

// Class: Class /Script/SWATCommander.TSAICommunicationBus
UCLASS(BlueprintType)
class SWATCOMMANDER_API UTSAICommunicationBus : public UObject {
    GENERATED_BODY()
public:

    // ── Methods ──
    UFUNCTION(BlueprintCallable)
    uint8 UnsubscribeAll();
    UFUNCTION(BlueprintCallable)
    uint8 Unsubscribe(uint8 /*enum*/ inTeamType, UObject* inSubscriber);
    UFUNCTION(BlueprintCallable)
    bool SubscribeToChannel(uint8 /*enum*/ inTeamType, UObject* inSubscriber);
    UFUNCTION(BlueprintCallable)
    uint8 Broadcast(uint8 /*struct*/& inMessage);
};

