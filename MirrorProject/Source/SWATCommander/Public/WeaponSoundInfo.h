// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.WeaponSoundInfo
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class USoundCue;

struct FRuntimeFloatCurve;

#include "WeaponSoundInfo.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.WeaponSoundInfo
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FWeaponSoundInfo {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool UseAutoAsSingle;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool UseSingleAsAuto;  // +0x9

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MechIncreaseForNumberOfBullets;  // +0xC

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FRuntimeFloatCurve MechCurve;  // +0x10

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool UseMultiSingleShotSelection;  // +0x98

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool UseTimeBasedAutoTails;  // +0x99

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool UseMultiTailsSelection;  // +0x9A

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundCue* AutoFireCue;  // +0xA0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundCue* AutoFireTailCue;  // +0xA8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TMap<float, USoundCue*> AutoFireTailsMap;  // +0xB0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float AutoPitch;  // +0x100

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float AutoTailVolume;  // +0x104

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float AutoTailPitch;  // +0x108

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float AutoFireStartOffsetSec;  // +0x10C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float AutoFadeOutTailOffset;  // +0x110

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float AutoFireStartTailOffsetSec;  // +0x114

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundCue* AutoSuppressedFireCue;  // +0x118

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundCue* AutoSuppressedFireTailCue;  // +0x120

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TMap<float, USoundCue*> AutoSupressedFireTailsMap;  // +0x128

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float AutoSupressedPitch;  // +0x178

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float AutoSuppressedTailVolume;  // +0x17C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float AutoSuppressedTailPitch;  // +0x180

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float AutoSuppressedFireStartOffsetSec;  // +0x184

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float AutoSuppressedFadeOutTailOffset;  // +0x188

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float AutoSuppressedFireStartTailOffsetSec;  // +0x18C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundCue* SingleFireCue;  // +0x190

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float SingleFireStartOffset;  // +0x198

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TMap<USoundCue*, USoundCue*> DistanceSingleFireCue;  // +0x1A0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundCue* SingleSuppressedFireCue;  // +0x1F0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float SingleSuppressedFireStartOffset;  // +0x1F8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TMap<USoundCue*, USoundCue*> DistanceSingleSuppressedFireCue;  // +0x200

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundCue* BurstFireCue;  // +0x250

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundCue* BurstFireTailCue;  // +0x258

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float BurstPitch;  // +0x260

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float BurstTailVolume;  // +0x264

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float BurstTailPitch;  // +0x268

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float BurstFireStartOffsetSec;  // +0x26C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float BurstFadeOutTailOffset;  // +0x270

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundCue* BurstSuppressedFireCue;  // +0x278

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundCue* BurstSuppressedFireTailCue;  // +0x280

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float BurstSuppressedPitch;  // +0x288

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float BurstSuppressedTailVolume;  // +0x28C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float BurstSuppressedTailPitch;  // +0x290

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float BurstSuppressedFireStartOffsetSec;  // +0x294

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float BurstSuppressedFadeOutTailOffset;  // +0x298

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundCue* EmptyShotSoundCue;  // +0x2A0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundCue* EnableFlashlightSoundCue;  // +0x2A8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundCue* DisableFlashlightSoundCue;  // +0x2B0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundCue* EnableLaserSoundCue;  // +0x2B8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundCue* DisableLaserSoundCue;  // +0x2C0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundCue* FireModeSwitchSoundCue;  // +0x2C8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundCue* ADSOnSoundCue;  // +0x2D0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundCue* ADSOffSoundCue;  // +0x2D8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundCue* WeaponRiseSoundCue;  // +0x2E0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundCue* WeaponHolsterSoundCue;  // +0x2E8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundCue* MeleePunchSoundCue;  // +0x2F0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundCue* MeleeImpactSoundCue;  // +0x2F8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundCue* GenericBulletHitCue;  // +0x300

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TMap<TMap<FName, FString>, TMap<FName, FString>> MeleeHitSoundMap;  // +0x308

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TMap<FName, FString> ShellHitSoundMap;  // +0x358

};

