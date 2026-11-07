// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.DialogRecord
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "DialogRecord.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.DialogRecord
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FDialogRecord {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName CharacterName;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString DialogCategory;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool PlayAnimation;  // +0x18

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool StopPrevious;  // +0x19

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool PlayOnce;  // +0x1A

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool Used;  // +0x1B

};

