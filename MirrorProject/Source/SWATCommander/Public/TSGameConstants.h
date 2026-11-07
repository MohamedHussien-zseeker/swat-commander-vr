// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.TSGameConstants
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "TSGameConstants.generated.h"

// Class: Class /Script/SWATCommander.TSGameConstants
UCLASS(BlueprintType)
class SWATCOMMANDER_API UTSGameConstants : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    float MinMorale = 0.0f;  // +0x28

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    float MaxMorale = 1.0f;  // +0x2C

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    float EasyMoraleComplexityMultiplier = 1.2000000476837158f;  // +0x30

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    float NormalMoraleComplexityMultiplier = 1.0f;  // +0x34

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    float HardMoraleComplexityMultiplier = 0.800000011920929f;  // +0x38

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    float NeedsOrdersTriggerTime = 8.0f;  // +0x3C

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    float MinOfficersStartMovementTime = 0.20000000298023224f;  // +0x40

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    float MaxOfficersStartMovementTime = 1.0f;  // +0x44

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    float MaxFootstepWalkNoiseRange = 900.0f;  // +0x48

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    float MaxFootstepSprintNoiseRange = 1600.0f;  // +0x4C

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    float MaxGrenadeThrowNoiseRange = 900.0f;  // +0x50

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    float MaxOrderToSurrenderNoiseRange = 1600.0f;  // +0x54

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    float MaxOfficersThreadAlertNoiseRange = 1800.0f;  // +0x58

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    float MaxEnemiesThreadAlertNoiseRange = 1800.0f;  // +0x5C

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    float MaxDoorNoiseRange = 1000.0f;  // +0x60

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    float MaxExplosionNoiseRange = 1600.0f;  // +0x64

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    float MaxGunShotNoiseRange = 1600.0f;  // +0x68

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    float MaxCivilianDeathNoiseRange = 1200.0f;  // +0x6C

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    float MaxSuspectDeathNoiseRange = 1200.0f;  // +0x70

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    float MaxOfficerDeathNoiseRange = 1200.0f;  // +0x74

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    float MaxVoiceNoiseRange = 300.0f;  // +0x78

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    float MaxAttemptToAttackRange = 1800.0f;  // +0x7C


    // ── Methods ──
    UFUNCTION(BlueprintPure)
    bool ShowPaddingTrace();
    UFUNCTION(BlueprintPure)
    bool ShowInterTriggerBoxes();
    UFUNCTION(BlueprintPure)
    bool ShowDoorTriggerBoxes();
    UFUNCTION(BlueprintPure)
    bool ShowCoverPoints();
    UFUNCTION(BlueprintPure)
    bool NoSuspects();
    UFUNCTION(BlueprintPure)
    bool NoOperators();
    UFUNCTION(BlueprintPure)
    bool NoCivilians();
};

