// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.TSLightConfigurator
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "TSLightConfigurator.generated.h"

// Class: Class /Script/SWATCommander.TSLightConfigurator
UCLASS(BlueprintType)
class SWATCOMMANDER_API UTSLightConfigurator : public UObject {
    GENERATED_BODY()
public:

    // ── Methods ──
    UFUNCTION(NetMulticast, Reliable)
    uint8 Configure(UObject* inCoordinator);
};

