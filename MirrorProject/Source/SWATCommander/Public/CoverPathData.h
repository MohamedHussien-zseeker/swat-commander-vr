// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.CoverPathData
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class ACoverPointActor;

#include "CoverPathData.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.CoverPathData
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FCoverPathData {
    GENERATED_BODY()
    UPROPERTY(VisibleAnywhere)
    ACoverPointActor* Cover;  // +0x0

    UPROPERTY(VisibleAnywhere)
    float PathDistance;  // +0x8

    UPROPERTY(VisibleAnywhere)
    float BehindFactor;  // +0xC

};

