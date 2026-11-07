// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.MovementZoneStatus
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "MovementZoneStatus.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.MovementZoneStatus
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FMovementZoneStatus {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool HasPlayerInside;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool MarkedWithLightstick;  // +0x1

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool HasCoversForAmbush;  // +0x2

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 NumOfficersInside;  // +0x4

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 NumCiviliansInside;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 NumSuspectsInside;  // +0xC

};

