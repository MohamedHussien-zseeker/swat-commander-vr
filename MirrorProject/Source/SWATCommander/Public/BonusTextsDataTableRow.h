// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.BonusTextsDataTableRow
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


enum class EBonusTypes : uint8;

#include "BonusTextsDataTableRow.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.BonusTextsDataTableRow
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FBonusTextsDataTableRow {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EBonusTypes BonusType;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText BonusText;  // +0x10

};

