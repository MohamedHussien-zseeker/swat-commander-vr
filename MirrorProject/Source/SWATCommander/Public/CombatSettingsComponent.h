// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.CombatSettingsComponent
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UDataTable;

struct FActorComponentTickFunction;
struct FFloatRange;

#include "CombatSettingsComponent.generated.h"

// Class: Class /Script/SWATCommander.CombatSettingsComponent
UCLASS(DefaultToInstanced, Config=Engine, BlueprintType)
class SWATCOMMANDER_API UCombatSettingsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UDataTable* WeaponInfoDataTable;  // +0xB0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FFloatRange DefaultAutoFireTime;  // +0xB8  // default: "<struct>"

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FFloatRange DefaultSingleFireTime;  // +0xC8  // default: "<struct>"

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FFloatRange DefaultDelayBetweenAutoFire;  // +0xD8  // default: "<struct>"

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FFloatRange DefaultDelayBetweenSingleFire;  // +0xE8  // default: "<struct>"

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float ObstacleFireRateMultiplier = 0.5f;  // +0xF8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float ObstacleDelayRateMultiplier = 5.0f;  // +0xFC

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float DefaultDistanceForSingleFire = 600.0f;  // +0x100

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float DefaultMaximumFireDistance = 10000.0f;  // +0x104

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float FireDistanceMultiplier = 1.0f;  // +0x108

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool EnableDebug = false;  // +0x10C

    UPROPERTY(VisibleAnywhere)
    TMap<FActorComponentTickFunction, FString> WeaponSettingsInfo;  // +0x110  // default: {
            "note": "not yet supported",
            "type": "MapProperty"
...


    // ── Methods ──
    UFUNCTION(BlueprintCallable)
    uint8 SetFireRateMultiplier(float inMultiplier);
    UFUNCTION(BlueprintCallable)
    uint8 SetFireDelayMultiplier(float inMultiplier);
    UFUNCTION(BlueprintPure)
    bool IsFiring();
    UFUNCTION(BlueprintPure)
    bool IsFireDistanceCorrect(UObject* inSelfActor, UObject* inTargetActor, FName& inUniqueWeaponIdentifier);
    UFUNCTION(BlueprintCallable)
    uint8 /*enum*/ GetTriggerResult(UObject* inTargetCharacter, UObject* inSelfCharacter, uint8 /*enum*/ inCurrentFireMode, FName& inUniqueWeaponIdentifier, UObject* inWeapon);
    UFUNCTION(BlueprintPure)
    float GetTimeForShooting();
    UFUNCTION(BlueprintPure)
    float GetTimeForDelay();
    UFUNCTION(BlueprintPure)
    float GetFireRateMultiplier();
    UFUNCTION(BlueprintPure)
    float GetFireDelayMultiplier();
    UFUNCTION(BlueprintPure)
    uint8 /*enum*/ FindFireModeAccordingToDistance(UObject* inSelfActor, UObject* inTargetActor, FName& inUniqueWeaponIdentifier);
    UFUNCTION(BlueprintCallable)
    uint8 ApplyObstacleFireRate(bool inEnabled);
};

