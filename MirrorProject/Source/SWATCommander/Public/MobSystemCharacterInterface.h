// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.MobSystemCharacterInterface
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "MobSystemCharacterInterface.generated.h"

// Class: Class /Script/SWATCommander.MobSystemCharacterInterface
UCLASS(Abstract, MinimalAPI, BlueprintType)
class SWATCOMMANDER_API UMobSystemCharacterInterface : public UInterface {
    GENERATED_BODY()
public:

    // ── Methods ──
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    uint8 GetMobBehavior();
};

