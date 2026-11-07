// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.GameStatUIInterface
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "GameStatUIInterface.generated.h"

// Class: Class /Script/SWATCommander.GameStatUIInterface
UCLASS(Abstract, MinimalAPI, BlueprintType)
class SWATCOMMANDER_API UGameStatUIInterface : public UInterface {
    GENERATED_BODY()
public:

    // ── Methods ──
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 PlayROEViolationDialog();
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 DisplayPenaltyMessage(uint8 /*enum*/ inPenaltyType, int32 inPenalty);
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 DisplayMissionFailedMessage();
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 DisplayMissionCompleteMessage();
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 DisplayCompleteObjectiveMessage(int32 inBonus);
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 DisplayBonusMessage(uint8 /*enum*/ inBonusType, int32 inBonus);
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 DebriefMission(bool inShouldDelay);
};

