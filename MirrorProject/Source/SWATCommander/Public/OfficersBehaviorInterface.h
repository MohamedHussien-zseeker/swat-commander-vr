// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.OfficersBehaviorInterface
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "OfficersBehaviorInterface.generated.h"

// Class: Class /Script/SWATCommander.OfficersBehaviorInterface
UCLASS(Abstract, MinimalAPI, BlueprintType)
class SWATCOMMANDER_API UOfficersBehaviorInterface : public UInterface {
    GENERATED_BODY()
public:

    // ── Methods ──
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 OnCompleteCombat();
};

