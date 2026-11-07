// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.TSCharacterSpawner
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "TSCharacterSpawner.generated.h"

// Class: Class /Script/SWATCommander.TSCharacterSpawner
UCLASS(BlueprintType)
class SWATCOMMANDER_API UTSCharacterSpawner : public UObject {
    GENERATED_BODY()
public:

    // ── Methods ──
    UFUNCTION(Server, Reliable)
    uint8 Spawn(UObject* inCoordinator);
};

