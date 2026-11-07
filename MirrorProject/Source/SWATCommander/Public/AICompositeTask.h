// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.AICompositeTask
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class AActor;

struct FTransform;

enum class EAICompositeTaskFinishType : uint8;
enum class EAICompositeTaskType : uint8;
enum class EAIMovementGoalType : uint8;
enum class EAISignalType : uint8;
enum class EAIToggleState : uint8;
enum class EDeploymentItem : uint8;

#include "AICompositeTask.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.AICompositeTask
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FICompositeTask {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EAICompositeTaskType Type;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EAIMovementGoalType GoalType;  // +0x1

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EAICompositeTaskFinishType FinishType;  // +0x2

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EAIToggleState ToggleState;  // +0x3

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 ExecutiveIndex;  // +0x4

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTransform Transform;  // +0x10

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EDeploymentItem DeploymentItem;  // +0x40

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    AActor* SpecificTargetActor;  // +0x48

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float DistanceToTarget;  // +0x50

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float FocusDistance;  // +0x54

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float WaitTime;  // +0x58

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EAISignalType SignalType;  // +0x5C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EAISignalType SignalTypeB;  // +0x5D

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    AActor* SignalTargetActor;  // +0x60

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    AActor* SignalSender;  // +0x68

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool CanFocusOnEnemy;  // +0x70

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool CanInteruptCommandForCombat;  // +0x71

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool ShouldFocusOnTarget;  // +0x72

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IncrementStepOnCounter;  // +0x73

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool UseCustomTeamArray;  // +0x74

};

