// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.DialogSettings
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


struct FDialogRecord;

#include "DialogSettings.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.DialogSettings
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FDialogSettings {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FDialogRecord> Records;  // +0x0

};

