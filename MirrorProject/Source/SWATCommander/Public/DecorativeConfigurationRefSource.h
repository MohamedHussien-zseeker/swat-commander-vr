// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.DecorativeConfigurationRefSource
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "DecorativeConfigurationRefSource.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.DecorativeConfigurationRefSource
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FDecorativeConfigurationRefSource {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TMap<FName, FString> DecorativeGroupRefs;  // +0x0

};

