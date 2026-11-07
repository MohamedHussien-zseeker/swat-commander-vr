// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.WeaponBase
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UMaterialInterface;

struct FVector;

enum class EWeaponType : uint8;

#include "WeaponBase.generated.h"

// Class: Class /Script/SWATCommander.WeaponBase
UCLASS(Config=Engine, BlueprintType)
class SWATCOMMANDER_API AWeaponBase : public AEquipmentBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    float FireRate = 0.0f;  // +0x5A8

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    int32 UnloadedAmmo = 0;  // +0x5AC

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    int32 InMagAmmo = 0;  // +0x5B0

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    int32 InChamberAmmo = 1;  // +0x5B4

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    TArray<int32> MagsWithAmmo;  // +0x5B8  // default: []

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    int32 CurrentMag = 0;  // +0x5C8

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    int32 MagCapacity = 30;  // +0x5CC

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    bool BuiltinMag = false;  // +0x5D0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName WeaponSoundProfile = FName(TEXT("None"));  // +0x5D4

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UMaterialInterface* BulletHoleDecalMat;  // +0x5E0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector DecalSize;  // +0x5E8  // default: "<struct>"

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName WeaponUniqueIdentifier = FName(TEXT("None"));  // +0x5F4

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EWeaponType WeaponType;  // +0x5FC  // default: {
            "enumType": "EWeaponType",
            "value": 0
          }


    // ── Methods ──
    UFUNCTION(BlueprintCallable)
    uint8 TraceExitLocation(uint8 /*struct*/ EnterLocation, uint8 /*struct*/ Direction, UObject* HitActor, bool Debug, bool& IsHit, uint8 /*struct*/& HitResult);
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 Reload();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool IsWeaponCurrentlyReloading();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool IsInHand();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool HasFlashlight();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    UObject* GetWeaponHandlerCharacter();
    UFUNCTION(BlueprintCallable)
    int32 GetAmmoInMag();
    UFUNCTION(BlueprintCallable)
    int32 GetAmmoAmount();
};

