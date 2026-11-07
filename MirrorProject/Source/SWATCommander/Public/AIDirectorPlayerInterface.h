// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.AIDirectorPlayerInterface
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "AIDirectorPlayerInterface.generated.h"

// Class: Class /Script/SWATCommander.AIDirectorPlayerInterface
UCLASS(Abstract, MinimalAPI, BlueprintType)
class SWATCOMMANDER_API UIDirectorPlayerInterface : public UInterface {
    GENERATED_BODY()
public:

    // ── Methods ──
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 RegisterPlayerStingerGrenadeEvent();
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 RegisterPlayerSmokeGrenadeEvent();
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 RegisterPlayerShoutEvent();
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 RegisterPlayerSecondaryFireNoise(uint8 /*enum*/ inWeaponType, float inSupressCoef, bool inIsSupressed);
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 RegisterPlayerRamNoise();
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 RegisterPlayerPrimaryFireNoise(uint8 /*enum*/ inWeaponType, float inSupressCoef, bool inIsSupressed);
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 RegisterPlayerFlashGrenadeEvent();
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 RegisterPlayerExplosionNoise();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    TArray<uint8> GetPlayerRegisteredNoises();
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 ClearPlayerRegisteredNoises();
};

