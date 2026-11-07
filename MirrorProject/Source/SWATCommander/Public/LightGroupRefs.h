// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.LightGroupRefs
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class AInteractiveActor;

#include "LightGroupRefs.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.LightGroupRefs
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FLightGroupRefs {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<TSoftObjectPtr<AInteractiveActor>> LightGroup;  // +0x0

};

