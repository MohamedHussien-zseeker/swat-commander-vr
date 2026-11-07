// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.GameplayModeListItem
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


enum class ETSGameplayModes : uint8;

#include "GameplayModeListItem.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.GameplayModeListItem
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FGameplayModeListItem {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    ETSGameplayModes GameplayModeType;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool Enabled;  // +0x1

};

