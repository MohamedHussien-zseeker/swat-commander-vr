// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.FastCommandResult
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


struct FHitResult;

enum class EDeploymentItem : uint8;

#include "FastCommandResult.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.FastCommandResult
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FFastCommandResult {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EDeploymentItem DeployItem;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FHitResult HitResult;  // +0x4

};

