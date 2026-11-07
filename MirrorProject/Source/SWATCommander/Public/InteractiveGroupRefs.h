// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.InteractiveGroupRefs
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class ATargetPoint;

#include "InteractiveGroupRefs.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.InteractiveGroupRefs
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FInteractiveGroupRefs {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<TSoftObjectPtr<ATargetPoint>> InteractiveGroup;  // +0x0

};

