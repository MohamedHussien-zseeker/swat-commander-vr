// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.InteractiveConfigurationRefSource
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "InteractiveConfigurationRefSource.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.InteractiveConfigurationRefSource
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FInteractiveConfigurationRefSource {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TMap<FName, FString> InteractiveGroupRefs;  // +0x0

};

