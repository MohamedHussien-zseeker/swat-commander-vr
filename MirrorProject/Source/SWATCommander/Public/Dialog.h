// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.Dialog
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UAnimSequenceBase;

struct FDialogLine;

#include "Dialog.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.Dialog
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FDialog {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FDialogLine> Lines;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UAnimSequenceBase* DialogAnimation;  // +0x18

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool UseAnimationPerLine;  // +0x20

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool OneTimePlay;  // +0x21

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsLimited;  // +0x22

};

