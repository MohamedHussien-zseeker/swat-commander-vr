// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.FakeSurrenderAIInterface
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "FakeSurrenderAIInterface.generated.h"

// Class: Class /Script/SWATCommander.FakeSurrenderAIInterface
UCLASS(Abstract, MinimalAPI, BlueprintType)
class SWATCOMMANDER_API UFakeSurrenderAIInterface : public UInterface {
    GENERATED_BODY()
public:

    // ── Methods ──
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 PickupWeapon(uint8 /*enum*/ inWeaponType);
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 EquipWeapon(uint8 /*enum*/ inWeaponType);
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 DropWeapon(uint8 /*enum*/ inWeaponType);
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 CheckMorale(uint8 /*enum*/ inStateForSurrender, uint8 /*enum*/ inStateForAttack);
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 ChangeState(uint8 /*enum*/ inNewState);
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 Attack();
};

