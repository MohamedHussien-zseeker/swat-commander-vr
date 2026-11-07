// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.BarricadesList
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class ABarricadeConfigurationActor;

#include "BarricadesList.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.BarricadesList
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FBarricadesList {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<ABarricadeConfigurationActor*> BarricadeSourceRefs;  // +0x0

};

