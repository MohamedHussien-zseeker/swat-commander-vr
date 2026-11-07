// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.WeaponSoundComponent
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UDataTable;
class USoundAttenuation;
class USoundConcurrency;
class ATSCharacterBase;

struct FWeaponSoundInfo;

#include "WeaponSoundComponent.generated.h"

// Class: Class /Script/SWATCommander.WeaponSoundComponent
UCLASS(DefaultToInstanced, Config=Engine, BlueprintType)
class SWATCOMMANDER_API UWeaponSoundComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    FName WeaponSoundProfile = FName(TEXT("None"));  // +0xB0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UDataTable* SoundDataTable;  // +0xB8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundAttenuation* FireAttenuation;  // +0xC0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundConcurrency* FireConcurrency;  // +0xC8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundAttenuation* MechanicalAttenuation;  // +0xD0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundConcurrency* MechanicalConcurrency;  // +0xD8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundAttenuation* ImpactAttenuation;  // +0xE0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundConcurrency* ImpactConcurrency;  // +0xE8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundAttenuation* ShellAttenuation;  // +0xF0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundConcurrency* ShellConcurrency;  // +0xF8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FWeaponSoundInfo SoundInfo;  // +0x100  // default: "<struct>"

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool HasValidAudio = false;  // +0x4A8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float CurrentMechAlpha = 0.0f;  // +0x4AC

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool Debug = false;  // +0x4B0

    UPROPERTY(VisibleAnywhere, Replicated)
    ATSCharacterBase* WeaponHandlerCharacter;  // +0x4B8


    // ── Methods ──
    UFUNCTION(BlueprintCallable)
    uint8 ToggleLaser(bool inEnabled, uint8 /*struct*/& InLocation);
    UFUNCTION(BlueprintCallable)
    uint8 ToggleFlashlight(bool inEnabled, uint8 /*struct*/& InLocation);
    UFUNCTION(BlueprintCallable)
    uint8 SwitchFireMode(uint8 /*struct*/& InLocation);
    UFUNCTION(BlueprintCallable)
    uint8 StartFire(UObject* inAudioComponent, uint8 /*enum*/ inMode, uint8 /*struct*/& InLocation, bool inIsSuppressed, bool inUseTail);
    UFUNCTION(BlueprintCallable)
    uint8 SingleShotFadeOut(UObject* inAudioComponent, uint8 /*struct*/& InLocation, bool inIsSuppressed);
    UFUNCTION(BlueprintCallable)
    uint8 SetAmmoInfo(UObject* inAudioComponent, int32 CurrentAmmo);
    UFUNCTION(BlueprintCallable)
    uint8 RiseWeapon(bool inEnabled, uint8 /*struct*/& InLocation);
    UFUNCTION(BlueprintCallable)
    uint8 PlaySingleFireTale(float inTailStartOffsetSec, uint8 /*struct*/& InLocation, bool inIsSuppressed, bool LastSinglShot);
    UFUNCTION(BlueprintCallable)
    uint8 PlayAutoFireTale(UObject* inAudioComponent, uint8 /*struct*/& InLocation, bool inIsSuppressed);
    UFUNCTION(BlueprintCallable)
    uint8 NoAmmoFire(uint8 /*struct*/& InLocation);
    UFUNCTION(BlueprintCallable)
    uint8 MakeShellSound();
    UFUNCTION(BlueprintCallable)
    uint8 MakeMeleePunch(uint8 /*struct*/& inHitLocation);
    UFUNCTION(BlueprintCallable)
    uint8 MakeHitSound(UObject* InActor, UObject* inPhysMaterial, uint8 /*struct*/& inHitLocation);
    UFUNCTION(BlueprintCallable)
    bool GetUseMultiTailsSelection();
    UFUNCTION(BlueprintCallable)
    uint8 FadeInFireTale(UObject* inSingleShotFadeOutAudioComponent, UObject* inAutoQueueFadeOutAudioComponent, bool inIsSuppressed, float inAlpha);
    UFUNCTION(BlueprintCallable)
    uint8 EndFire(UObject* inAudioComponent, float inTailStartOffsetSec, uint8 /*enum*/ inMode, uint8 /*struct*/& InLocation, bool inIsSuppressed, bool inUseTale);
    UFUNCTION(BlueprintCallable)
    uint8 DoADS(bool inEnabled, uint8 /*struct*/& InLocation);
};

