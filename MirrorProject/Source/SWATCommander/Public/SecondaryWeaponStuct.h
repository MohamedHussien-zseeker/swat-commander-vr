// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.SecondaryWeaponStuct
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class USkeletalMesh;
class UTexture;

enum class EAmmoTypeEnum : uint8;
enum class ESecondaryWeaponEnum : uint8;

#include "SecondaryWeaponStuct.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.SecondaryWeaponStuct
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FSecondaryWeaponStuct {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    ESecondaryWeaponEnum Weapon;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<EAmmoTypeEnum> Ammo;  // +0x10

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UTexture* Icon;  // +0x20

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USkeletalMesh* Mesh;  // +0x28

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool SmallAmmo;  // +0x30

};

