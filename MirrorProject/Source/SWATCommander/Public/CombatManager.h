// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.CombatManager
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class ATSCharacterBase;

#include "CombatManager.generated.h"

// Class: Class /Script/SWATCommander.CombatManager
UCLASS(Config=Engine, BlueprintType)
class SWATCOMMANDER_API ACombatManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float TimerTickRate = 5.0f;  // +0x220

    UPROPERTY(VisibleAnywhere, Replicated)
    TArray<ATSCharacterBase*> ShooterCharacters;  // +0x228  // default: []

    UPROPERTY(VisibleAnywhere, Replicated)
    bool IsActionMusicStarted = false;  // +0x238


    // ── Methods ──
    UFUNCTION(BlueprintCallable)
    uint8 UnregisterShooterCharacter(UObject* Shooter);
    UFUNCTION(BlueprintCallable)
    uint8 RegisterShooterCharacter(UObject* Shooter);
    UFUNCTION(BlueprintImplementableEvent)
    uint8 PerformActionMusicStop();
    UFUNCTION(BlueprintImplementableEvent)
    uint8 PerformActionMusicStart();
    UFUNCTION(NetMulticast, Reliable)
    uint8 MulticastStopActionMusic();
    UFUNCTION(NetMulticast, Reliable)
    uint8 MulticastStartActionMusic();
    UFUNCTION(BlueprintPure)
    bool HasActiveCombat();
    UFUNCTION(BlueprintPure)
    UObject* GetCombatManager(UObject* WorldContextObject);
};

