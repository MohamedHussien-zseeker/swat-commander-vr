// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.UDetourMoveToTask
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


struct FBlackboardKeySelector;

#include "UDetourMoveToTask.generated.h"

// Class: Class /Script/SWATCommander.UDetourMoveToTask
UCLASS(BlueprintType)
class SWATCOMMANDER_API UDetourMoveToTask : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FBlackboardKeySelector EnemyKey;  // +0x70  // default: "<struct>"

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float BaseFlankDistance = 400.0f;  // +0x98

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float FlankDistanceVariance = 100.0f;  // +0x9C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float BaseFlankAngleOffset = 90.0f;  // +0xA0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float FlankAngleVariance = 30.0f;  // +0xA4

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float FlankLeftProbability = 0.5f;  // +0xA8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float FlankRightProbability = 0.5f;  // +0xAC

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float DistanceToEnemy = 450.0f;  // +0xB0

};

