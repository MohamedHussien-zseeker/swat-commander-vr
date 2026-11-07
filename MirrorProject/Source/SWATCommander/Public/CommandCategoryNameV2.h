// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.CommandCategoryNameV2
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


enum class EAICommandCategory : uint8;

#include "CommandCategoryNameV2.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.CommandCategoryNameV2
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FCommandCategoryNameV2 {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EAICommandCategory Category;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText Name;  // +0x10

};

