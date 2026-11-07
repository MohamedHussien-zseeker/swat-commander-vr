// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.BarricadeInterface
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "BarricadeInterface.generated.h"

// Class: Class /Script/SWATCommander.BarricadeInterface
UCLASS(Abstract, MinimalAPI, BlueprintType)
class SWATCOMMANDER_API UBarricadeInterface : public UInterface {
    GENERATED_BODY()
public:

    // ── Methods ──
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 OnBarricaded();
};

