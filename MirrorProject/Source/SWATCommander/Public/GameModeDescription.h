// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.GameModeDescription
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UTexture;

enum class ETSGameplayModes : uint8;

#include "GameModeDescription.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.GameModeDescription
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FGameModeDescription {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText Title;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText Description;  // +0x20

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UTexture* Image;  // +0x38

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    ETSGameplayModes ModeEnum;  // +0x40

};

