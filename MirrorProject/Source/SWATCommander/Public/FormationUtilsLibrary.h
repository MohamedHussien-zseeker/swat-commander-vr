// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.FormationUtilsLibrary
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "FormationUtilsLibrary.generated.h"

// Class: Class /Script/SWATCommander.FormationUtilsLibrary
UCLASS(BlueprintType)
class SWATCOMMANDER_API UFormationUtilsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:

    // ── Methods ──
    UFUNCTION(BlueprintCallable)
    TArray<uint8> CalculateNavAwareOfficerFormation(UObject* playerActor, UObject* SightTarget, int32 Rows, int32 Cols, float LateralSpacing, float LongitudinalSpacing, float NavSearchRadius, int32 MaxSearchAttempts);
};

