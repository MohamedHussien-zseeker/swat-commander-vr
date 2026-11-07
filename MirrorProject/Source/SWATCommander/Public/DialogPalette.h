// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.DialogPalette
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "DialogPalette.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.DialogPalette
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FDialogPalette {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName ReactionRowName;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TMap<FName, FString> DialogsMap;  // +0x10

};

