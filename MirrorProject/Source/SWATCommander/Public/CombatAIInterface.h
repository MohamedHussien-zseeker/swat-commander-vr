// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.CombatAIInterface
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "CombatAIInterface.generated.h"

// Class: Class /Script/SWATCommander.CombatAIInterface
UCLASS(Abstract, MinimalAPI, BlueprintType)
class SWATCOMMANDER_API UCombatAIInterface : public UInterface {
    GENERATED_BODY()
public:

    // ── Methods ──
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 Release();
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 Fire();
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 CheckFireConditions();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool CanFire();
};

