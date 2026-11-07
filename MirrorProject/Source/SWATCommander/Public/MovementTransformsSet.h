// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.MovementTransformsSet
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


struct FTransform;

#include "MovementTransformsSet.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.MovementTransformsSet
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FMovementTransformsSet {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FTransform> Transforms;  // +0x0

};

