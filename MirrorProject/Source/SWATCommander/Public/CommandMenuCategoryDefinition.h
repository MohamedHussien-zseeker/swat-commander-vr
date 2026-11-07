// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.CommandMenuCategoryDefinition
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UTexture2D;

struct FICommandDescription;

#include "CommandMenuCategoryDefinition.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.CommandMenuCategoryDefinition
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FCommandMenuCategoryDefinition {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText Title;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UTexture2D* Icon;  // +0x18

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FAICommandDescription CommandDescription;  // +0x20

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsEnabled;  // +0x1E0

};

