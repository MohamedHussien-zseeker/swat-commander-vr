// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.ActiveCombatComponent
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


struct FIDirectorCombatRoleInfo;

#include "ActiveCombatComponent.generated.h"

// Class: Class /Script/SWATCommander.ActiveCombatComponent
UCLASS(DefaultToInstanced, Config=Engine, BlueprintType)
class SWATCOMMANDER_API UActiveCombatComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    int32 MaximumCombatParticipants = 4;  // +0xB0

    UPROPERTY(VisibleAnywhere)
    TArray<FAIDirectorCombatRoleInfo> CurrentCombatRoles;  // +0xB8  // default: []


    // ── Methods ──
    UFUNCTION(BlueprintCallable)
    uint8 SetMaximumCombatParticipants(int32 inMaximum);
    UFUNCTION(BlueprintCallable)
    uint8 /*enum*/ RegisterForCombatRole(UObject* InCharacter);
    UFUNCTION(BlueprintPure)
    bool IsCombatGoingOn();
    UFUNCTION(BlueprintCallable)
    uint8 InvalidateCombatParticipant(UObject* InCharacter);
};

