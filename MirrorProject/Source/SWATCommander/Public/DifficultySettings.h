// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.DifficultySettings
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "DifficultySettings.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.DifficultySettings
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FDifficultySettings {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MoraleDamageMultiplier;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float AutoFireDistanceMultiplier;  // +0xC

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float FireAccuracyMultiplier;  // +0x10

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float SurrenderUnexpectedMultiplier;  // +0x14

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float LockingDoorsPercent;  // +0x18

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float SuspectsCombatReactionFireTime;  // +0x1C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float SuspectsCombatReactionRaiseTime;  // +0x20

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MinLegHitForDamage;  // +0x24

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool ShowBonusesAndMap;  // +0x28

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool ShowCrosshair;  // +0x29

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool ShowHealthIndicator;  // +0x2A

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool ShowHitIndicator;  // +0x2B

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool ShowAmmoAndWeaponIndicator;  // +0x2C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float OfficerDamageMultiplier;  // +0x30

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float SuspectDamageMultiplier;  // +0x34

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float FireRateMultiplier;  // +0x38

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float DelayBetweenFireQueueMultiplier;  // +0x3C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MoraleMultiplier;  // +0x40

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float IntelligenceMultiplier;  // +0x44

};

