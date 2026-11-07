// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.OperatorAIInterface
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "OperatorAIInterface.generated.h"

// Class: Class /Script/SWATCommander.OperatorAIInterface
UCLASS(Abstract, MinimalAPI, BlueprintType)
class SWATCOMMANDER_API UOperatorAIInterface : public UInterface {
    GENERATED_BODY()
public:

    // ── Methods ──
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 SetLastReceivedPlayerMessage(uint8 /*struct*/& inMessage);
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 SetCurrentWaypoint(uint8 /*struct*/& inWaypoint);
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 SetClearingV2(bool inEnabled);
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 SetBusyStatus(bool inBusy);
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 SetBombRef(UObject* inBombRef);
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 RunCantReadPositionDialog();
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 RunCantDoCommandDialog();
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 ReceiveCommand(uint8 /*struct*/& inCommand, bool inShouldOverride);
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 OnRequestWaitingOrderDialog();
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 OnRequestLightstick();
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 OnReceiveNewFocusPOI(uint8 /*struct*/& focusInfo);
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 OnDisableBuildingPower(bool inEnabled);
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    float LastTimeBusyStatusWasSet();
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 /*struct*/ GetLastReceivedPlayerMessage();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    uint8 /*struct*/ GetCurrentWaypoint();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    uint8 /*enum*/ GetCurrentTaskType();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    int32 GetCurrentCommandStep();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    uint8 /*struct*/ GetCurrentCommandDescription();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool GetClearingV2();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool GetBusyStatus();
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 ClearLastReceivedPlayerMessage();
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 BreakLinkToSubteam(TArray<uint8>& inThisSubteam);
};

