// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.GameModeStatInterface
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "GameModeStatInterface.generated.h"

// Class: Class /Script/SWATCommander.GameModeStatInterface
UCLASS(Abstract, MinimalAPI, BlueprintType)
class SWATCOMMANDER_API UGameModeStatInterface : public UInterface {
    GENERATED_BODY()
public:

    // ── Methods ──
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 SetupStatSystem(uint8 /*struct*/& inMissionInfo);
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 OnReportEvidence(UObject* inTarget);
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 OnReportCharacter(UObject* inTarget);
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 OnRegisterStaticEvidences(TArray<uint8>& inInteractiveActors);
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 OnGivePenalty(uint8 /*enum*/ inPenalty);
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 OnFailObjective(FName& inInteractiveActorIdentifier);
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 OnDropWeapon(UObject* inInstigator, int32 inNumWeapons);
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 OnCompleteObjective(FName& inInteractiveActorIdentifier);
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 OnChangeRestrainState(UObject* inInstigator, bool inRestrained);
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 OnChangeHealthState(UObject* inInstigator, UObject* inTarget, uint8 /*enum*/ inState, bool wasAThreat);
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 OnActivateFiring(UObject* inInstigator, UObject* inTarget);
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsCharacterPartOfObjective(FName& inCharacterName, bool& outIsCharacterSuspect);
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool CanShowDebrifingButton();
};

