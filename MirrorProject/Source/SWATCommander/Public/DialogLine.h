// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.DialogLine
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UAnimSequenceBase;
class UDataTable;
class USoundBase;

enum class EDialogSpeaker : uint8;

#include "DialogLine.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.DialogLine
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FDialogLine {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EDialogSpeaker OverrideSpeaker;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText Line;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundBase* LineSound;  // +0x20

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UDataTable* LinesDataTableRef;  // +0x28

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UAnimSequenceBase* DialogAnimation;  // +0x30

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float StartDelay;  // +0x38

};

