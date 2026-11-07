// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.CoverPose
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


struct FRotator;
struct FVector;

enum class ELeanSide : uint8;

#include "CoverPose.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.CoverPose
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FCoverPose {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FVector Offset;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FRotator RelativeRot;  // +0xC

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    bool bAvailable;  // +0x18

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    bool bIsCrouched;  // +0x19

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    bool bIsStanding;  // +0x1A

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    bool bIsLeaning;  // +0x1B

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    float LeanRoll;  // +0x1C

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    ELeanSide LeanSide;  // +0x20

};

