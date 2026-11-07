// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.DirectorAIController
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "DirectorAIController.generated.h"

// Class: Class /Script/SWATCommander.DirectorAIController
UCLASS(NotPlaceable, Config=Engine, BlueprintType)
class SWATCOMMANDER_API ADirectorAIController : public AIController {
    GENERATED_BODY()
public:

    // ── Methods ──
    UFUNCTION(BlueprintImplementableEvent)
    uint8 OnSpawnEventComplete(UObject* inDirector);
};

