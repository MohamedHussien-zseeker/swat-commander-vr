// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.OfficersDialogReport
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class ATSCharacterBase;

#include "OfficersDialogReport.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.OfficersDialogReport
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FOfficersDialogReport {
    GENERATED_BODY()
    UPROPERTY(VisibleAnywhere)
    ATSCharacterBase* OfficerReporting;  // +0x0

    UPROPERTY(VisibleAnywhere)
    float ReportingTime;  // +0x8

    UPROPERTY(VisibleAnywhere)
    float StartedDialogTime;  // +0xC

};

