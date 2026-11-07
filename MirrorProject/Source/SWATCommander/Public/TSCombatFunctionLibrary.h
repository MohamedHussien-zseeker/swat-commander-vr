// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.TSCombatFunctionLibrary
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "TSCombatFunctionLibrary.generated.h"

// Class: Class /Script/SWATCommander.TSCombatFunctionLibrary
UCLASS(BlueprintType)
class SWATCOMMANDER_API UTSCombatFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:

    // ── Methods ──
    UFUNCTION(BlueprintCallable)
    TMap<FName, uint8> GetCombatCommandDescriptors();
};

