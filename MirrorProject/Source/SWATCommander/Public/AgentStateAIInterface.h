// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.AgentStateAIInterface
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "AgentStateAIInterface.generated.h"

// Class: Class /Script/SWATCommander.AgentStateAIInterface
UCLASS(Abstract, MinimalAPI, BlueprintType)
class SWATCOMMANDER_API UAgentStateAIInterface : public UInterface {
    GENERATED_BODY()
public:

    // ── Methods ──
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 AIS_SetRetargetTimeRate(float inNewRate);
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 AIS_SetMovementSpeed(uint8 /*enum*/ inNewSpeed);
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 AIS_SetFireRate(float inNewRate);
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    float AIS_SetFireAccuracy(float inNewAccuracy);
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 AIS_RequestNewTarget();
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 AIS_RequestAction(uint8 /*enum*/ inAction);
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool AIS_IsSurrendering();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool AIS_IsRestrained();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool AIS_IsIncapacitated();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool AIS_IsFakingDeath();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool AIS_IsFakeSurrendering();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool AIS_IsDead();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool AIS_IsAlive();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool AIS_HasActiveSuspectTarget();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    float AIS_GetRetargetTimeRate();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    uint8 /*enum*/ AIS_GetMovementSpeed();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    float AIS_GetFireRate();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    float AIS_GetFireAccuracy();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    UObject* AIS_GetCurrentTargetActor();
};

