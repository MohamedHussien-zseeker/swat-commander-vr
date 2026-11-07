// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.SuspectAIInterface
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "SuspectAIInterface.generated.h"

// Class: Class /Script/SWATCommander.SuspectAIInterface
UCLASS(Abstract, MinimalAPI, BlueprintType)
class SWATCOMMANDER_API USuspectAIInterface : public UInterface {
    GENERATED_BODY()
public:

    // ── Methods ──
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 SubmitDirectorAction(uint8 /*struct*/ inDirectorActionDescription);
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 SetReactionEnded();
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 SetLastCombatPOI(uint8 /*struct*/& inPOI);
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 SetHostileBehaviorOccurance(bool inIsHostalie);
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 ResumeFakeEvent();
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 RequestMovementSpeedChange(uint8 /*enum*/ inSpeed);
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 OrderToInvestigateCarAlarm(UObject* inCarActor);
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 OrderToEnableBuildingPower(UObject* inSwitchActor);
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 OrderThrowGrenade(UObject* inDoor, uint8 /*struct*/& inTargetLocation);
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 OnUpdateMorale(float inMorale);
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 OnSwitchBuildingPower(bool inEnabled);
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 OnSetNewTarget(UObject* inTarget);
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 OnRestrained();
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 OnReceiveBehaviorParameters(uint8 /*struct*/& inParameters);
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 OnLoadMoraleSettings();
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 OnEnterMovementZone(UObject* inZone);
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 MarkFinishedDirectorOrder();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool IsSurrenderedOrRestrained();
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    bool IsReactionEndedTimeTimeoutReach(float inTimeout);
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool IsInCombat();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool IsHostileBehaviorOccured();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool IsExecutingDirectorOrder();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    float GetSurrenderMorale();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    uint8 /*struct*/ GetRoleActionProfile();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    uint8 /*struct*/ GetMovementProfile();
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 /*struct*/ GetLastCombatPOI();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    uint8 /*struct*/ GetBehaviorParameters();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool CanPerformPatrolMovement();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool CanEnableFuze();
};

