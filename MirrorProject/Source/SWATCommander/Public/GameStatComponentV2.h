// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.GameStatComponentV2
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "GameStatComponentV2.generated.h"

// Class: Class /Script/SWATCommander.GameStatComponentV2
UCLASS(DefaultToInstanced, Config=Engine, BlueprintType)
class SWATCOMMANDER_API UGameStatComponentV2 : public UActorComponent {
    GENERATED_BODY()
public:

    // ── Methods ──
    UFUNCTION(BlueprintCallable, Server, Reliable)
    uint8 OnReportEvidence(UObject* inTarget);
    UFUNCTION(BlueprintCallable, Server, Reliable)
    uint8 OnReportCharacter(UObject* inTarget);
    UFUNCTION(BlueprintCallable, Server, Reliable)
    uint8 OnGivePenalty(uint8 /*enum*/ inPenaltyType);
    UFUNCTION(BlueprintCallable, Server, Reliable)
    uint8 OnFailObjective(FName inObjectiveName);
    UFUNCTION(BlueprintCallable, Server, Reliable)
    uint8 OnDropWeapon(UObject* inInstigator, int32 inNumWeapons);
    UFUNCTION(BlueprintCallable, Server, Reliable)
    uint8 OnCompleteObjective(FName inObjectiveName);
    UFUNCTION(BlueprintCallable, Server, Reliable)
    uint8 OnChangeRestrainState(UObject* inInstigator, bool inRestrained);
    UFUNCTION(BlueprintCallable, Server, Reliable)
    uint8 OnChangeHealthState(UObject* inInstigator, UObject* inTarget, uint8 /*enum*/ inState, bool wasAThreat);
    UFUNCTION(BlueprintCallable, Server, Reliable)
    uint8 OnActivateFiring(UObject* inInstigator, UObject* inTarget);
};

