// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.TSDecorativeConfigurator
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "TSDecorativeConfigurator.generated.h"

// Class: Class /Script/SWATCommander.TSDecorativeConfigurator
UCLASS(BlueprintType)
class SWATCOMMANDER_API UTSDecorativeConfigurator : public UObject {
    GENERATED_BODY()
public:

    // ── Methods ──
    UFUNCTION(NetMulticast, Reliable)
    uint8 Configure(UObject* inCoordinator);
};

