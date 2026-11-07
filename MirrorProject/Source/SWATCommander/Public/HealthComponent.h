// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.HealthComponent
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


enum class EHealsStateEnum : uint8;

#include "HealthComponent.generated.h"

// Class: Class /Script/SWATCommander.HealthComponent
UCLASS(DefaultToInstanced, Config=Engine, BlueprintType)
class SWATCOMMANDER_API UHealthComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MaxHealth = 100.0f;  // +0xB0

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    float Health = 100.0f;  // +0xB4

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Replicated)
    bool InjuredRLeg = false;  // +0xB8

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Replicated)
    bool InjuredRHand = false;  // +0xB9

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Replicated)
    bool InjuredLLeg = false;  // +0xBA

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Replicated)
    bool InjuredLHand = false;  // +0xBB

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Replicated)
    bool InjuredHead = false;  // +0xBC

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Replicated)
    bool InjuredBody = false;  // +0xBD

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Replicated)
    EHealsStateEnum HealsStatus;  // +0xBE  // default: {
            "enumType": "HealsStateEnum",
            "value": 0
          }

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    bool ShouldIgnoreDamage = false;  // +0xBF

    UPROPERTY(VisibleAnywhere, BlueprintAssignable)
    FMulticastScriptDelegate OnDamageReceived;  // +0xC0  // default: {
            "type": "MulticastInlineDelegateProperty"
          }


    // ── Methods ──
    UFUNCTION(BlueprintCallable)
    uint8 SetIgnoreDamage(bool inIgnore);
    UFUNCTION(BlueprintCallable)
    uint8 SetHealth(float inHealth);
    UFUNCTION(BlueprintCallable)
    uint8 SetFakeDead(bool SetFakeDead);
    UFUNCTION(BlueprintCallable)
    uint8 RestoreHealth();
    UFUNCTION(BlueprintPure)
    bool IsIncapacitatedOrDead();
    UFUNCTION(BlueprintPure)
    bool IsIgnoringDamage();
    UFUNCTION(BlueprintPure)
    uint8 /*enum*/ IsAlive();
    UFUNCTION(BlueprintPure)
    bool HasInjuredRLeg();
    UFUNCTION(BlueprintPure)
    bool HasInjuredRHand();
    UFUNCTION(BlueprintPure)
    bool HasInjuredLLeg();
    UFUNCTION(BlueprintPure)
    bool HasInjuredLHand();
    UFUNCTION(BlueprintPure)
    bool HasInjuredLegs();
    UFUNCTION(BlueprintPure)
    bool HasInjuredHead();
    UFUNCTION(BlueprintPure)
    bool HasInjuredHands();
    UFUNCTION(BlueprintPure)
    bool HasInjuredBody();
    UFUNCTION(BlueprintPure)
    float GetMaxHealth();
    UFUNCTION(BlueprintPure)
    int32 GetHealthInt();
    UFUNCTION(BlueprintPure)
    float GetHealth();
    UFUNCTION(BlueprintCallable)
    uint8 ApplyDamageToLegs();
    UFUNCTION(BlueprintCallable)
    uint8 ApplyDamageToHands();
    UFUNCTION(BlueprintCallable)
    uint8 ApplyDamage(float Damage, bool IsRLeg, bool IsLLeg, bool IsRHand, bool IsLHand, bool IsHead, bool IsBody);
};

