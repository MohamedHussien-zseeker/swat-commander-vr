// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.MoraleComponent
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "MoraleComponent.generated.h"

// Class: Class /Script/SWATCommander.MoraleComponent
UCLASS(DefaultToInstanced, Config=Engine, BlueprintType)
class SWATCOMMANDER_API UMoraleComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Replicated)
    float Morale = 1.0f;  // +0xB0

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Replicated)
    float MaxMorale = 3.0f;  // +0xB4

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Replicated)
    float LastTimeOrderToSurrender = 0.0f;  // +0xB8

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    float CooldownForOrderToSurrender = 5.0f;  // +0xBC

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Replicated)
    float MoraleMultiplier = 1.0f;  // +0xC0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float StandupMorale = 0.5f;  // +0xC4


    // ── Methods ──
    UFUNCTION(BlueprintCallable)
    uint8 UpdateMoraleUncomplain(float InSeconds);
    UFUNCTION(BlueprintCallable)
    uint8 UpdateMoraleKillOfficer();
    UFUNCTION(BlueprintCallable)
    uint8 UpdateMoraleDirect(float inMoraleModification, bool inIsDamage, bool inCheckLimits);
    UFUNCTION(BlueprintCallable)
    uint8 UpdateMoraleByNoise(uint8 /*enum*/ InTag);
    UFUNCTION(BlueprintCallable)
    uint8 UpdateMoraleByDamage(uint8 /*enum*/ inDamageType);
    UFUNCTION(BlueprintCallable)
    uint8 SetMoraleConstants(uint8 /*struct*/ inConstants);
    UFUNCTION(BlueprintCallable)
    uint8 SetCurrentMorale(float inMorale);
    UFUNCTION(BlueprintCallable)
    uint8 SetCharacterName(FName inCharacterName);
    UFUNCTION(BlueprintCallable)
    uint8 EraseLimits();
    UFUNCTION(BlueprintPure)
    bool CanStandUp(float InSeconds);
};

