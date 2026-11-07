// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.CommandMenuCategory
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UTexture2D;

struct FICommandDescription;
struct FCommandMenuCategoryDefinition;

#include "CommandMenuCategory.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.CommandMenuCategory
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FCommandMenuCategory {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText Title;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UTexture2D* Icon;  // +0x18

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FCommandMenuCategoryDefinition> Items;  // +0x20

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FAICommandDescription CommandDescription;  // +0x30

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsEnabled;  // +0x1F0

};

