// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.AIControllerBaseV2
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UICommunicationComponent;
class UIPerceptionComponent;
class UISenseConfig_Hearing;
class UISenseConfig_Sight;
class UCombatSettingsComponent;
class UHTN;

#include "AIControllerBaseV2.generated.h"

// Class: Class /Script/SWATCommander.AIControllerBaseV2
UCLASS(NotPlaceable, Config=Engine, BlueprintType)
class SWATCOMMANDER_API AIControllerBaseV2 : public AIController {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    UIPerceptionComponent* AIPerceptionComponent;  // +0x328  // default: {
            "address": "0x299FF1A5100",
            "className": "AIPercept...

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    UISenseConfig_Sight* AIConfigSight;  // +0x330  // default: {
            "address": "0x299FF175170",
            "className": "AISenseCo...

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    UISenseConfig_Hearing* AIConfigHearing;  // +0x338  // default: {
            "address": "0x299FF1B84A0",
            "className": "AISenseCo...

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsSightSenseEnabled = true;  // +0x340

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsHearingConfigEnabled = true;  // +0x341

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UICommunicationComponent* CommunicationComponent;  // +0x348  // default: {
            "address": "0x299A4000B00",
            "className": "AICommuni...

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UCombatSettingsComponent* CombatSettingsComponent;  // +0x350  // default: {
            "address": "0x2999FA38F80",
            "className": "CombatSet...

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName HitTargetSocketName = FName(TEXT("spine_02"));  // +0x358

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    UHTN* HtnAsset;  // +0x360

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    bool OverrideCrowdSettings = false;  // +0x368

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    bool bCrowdAnticipateTurns = false;  // +0x369

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    bool bCrowdObstacleAvoidance = true;  // +0x36A

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    bool bCrowdSeparation = false;  // +0x36B

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    bool bCrowdOptimizeVisibility = true;  // +0x36C

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    bool bCrowdOptimizeTopology = true;  // +0x36D

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    bool bCrowdPathOffset = false;  // +0x36E

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    bool bCrowdSlowdownAtGoal = true;  // +0x36F

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    float fSeparationWeights = 2.0f;  // +0x370

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    float fCrowdCollisionQueryRange = 400.0f;  // +0x374

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    float fCrowdPathOptimizationRange = 1000.0f;  // +0x378

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    float fCrowdAvoidanceRangeMultiplier = 1.0f;  // +0x37C

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    bool bCrowdAffectFallingVelocity = false;  // +0x380

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    bool bBlockDetection = false;  // +0x381

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    bool bCrowdRotateToVelocity = true;  // +0x382

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsLockPitch = true;  // +0x383

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float AimPitch = 0.0f;  // +0x384


    // ── Methods ──
    UFUNCTION(BlueprintCallable)
    uint8 UnregisterFromCrowdManager(bool inUnregister);
    UFUNCTION(BlueprintCallable)
    uint8 SetCrowdGroupToIgnore(int32 InGroup);
    UFUNCTION(BlueprintCallable)
    uint8 SetCrowdGroupToAvoid(int32 InGroup);
    UFUNCTION(BlueprintCallable)
    uint8 SetCrowdGroup(int32 InGroup);
    UFUNCTION(BlueprintCallable)
    uint8 RestoreSightRadius();
    UFUNCTION(BlueprintCallable)
    uint8 RestoreHearingRadius();
    UFUNCTION(BlueprintCallable)
    bool LoadMoraleCoeficients(UObject* inMoraleComponent, UObject* inCoeficientsDataTable);
    UFUNCTION(BlueprintCallable)
    bool IsMovementLocked();
    UFUNCTION(BlueprintCallable)
    bool IsLogicLocked();
    UFUNCTION(BlueprintCallable)
    FString GetCurrentTaskTitle(UObject* BTComp);
    UFUNCTION(BlueprintCallable)
    uint8 ForceUnlockAIResources(bool inLogic, bool inMovement);
    UFUNCTION(BlueprintCallable)
    uint8 DisableSight(bool inEnabled);
    UFUNCTION(BlueprintCallable)
    uint8 DisablePerception(bool inEnabled);
    UFUNCTION(BlueprintCallable)
    uint8 DisableHearding(bool inEnabled);
    UFUNCTION(BlueprintCallable)
    uint8 DisableCrowd(bool inDisable);
    UFUNCTION(BlueprintCallable)
    uint8 DeactivatePerceptionStimulusGeneration();
    UFUNCTION(BlueprintCallable)
    uint8 ChangeSightRadius(float inNewRadius);
    UFUNCTION(BlueprintCallable)
    uint8 ChangeHearingRadius(float inNewRadius);
    UFUNCTION(BlueprintImplementableEvent)
    uint8 ApplyDebugMorale(float inMorale);
};

