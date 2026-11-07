// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.EquipmentPermissions
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "EquipmentPermissions.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.EquipmentPermissions
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FEquipmentPermissions {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsPrimaryWeaponAllowed;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsSecondaryWeaponAllowed;  // +0x1

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsSpecialWeaponAllowed;  // +0x2

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsAdditionalWeaponAllowed;  // +0x3

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsTabletAllowed;  // +0x4

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsMasterKeyAllowed;  // +0x5

};

