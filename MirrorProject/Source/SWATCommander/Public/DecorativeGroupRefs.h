// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.DecorativeGroupRefs
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class AActor;

#include "DecorativeGroupRefs.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.DecorativeGroupRefs
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FDecorativeGroupRefs {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<TSoftObjectPtr<AActor>> DecorativeGroup;  // +0x0

};

