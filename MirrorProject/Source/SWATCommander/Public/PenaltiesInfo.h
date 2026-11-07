// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.PenaltiesInfo
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "PenaltiesInfo.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.PenaltiesInfo
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FPenaltiesInfo {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 UnauthorizedUseOfForce;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 UnauthorizedUseOfDeadlyForce;  // +0xC

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 FailedReportDownedOfficer;  // +0x10

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 InjuredFellowOfficer;  // +0x14

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 IncapacitatedAFellowOfficer;  // +0x18

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 IncapacitatedAHostage;  // +0x1C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 KilledAHostage;  // +0x20

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 FailedToReportDownedCivilian;  // +0x24

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 FailedToReportDownedSuspect;  // +0x28

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 FailedToApprehendFleeingSuspect;  // +0x2C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 FailedToPreventDestructionOfEvidence;  // +0x30

};

