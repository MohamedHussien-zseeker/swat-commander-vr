// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.EntryStuct
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UTexture2D;

enum class ETSSpawnLocationTypes : uint8;

#include "EntryStuct.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.EntryStuct
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FEntryStuct {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText Name;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSoftObjectPtr<UTexture2D> Image;  // +0x20

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    ETSSpawnLocationTypes Type;  // +0x48

};

