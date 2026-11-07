// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.SCSkins
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "SCSkins.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.SCSkins
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FSCSkins {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName CharacterSkin;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TMap<TMap<FName, FString>, FString> PrimaryWeaponsSkins;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TMap<FName, FString> SecondaryWeaponsSkins;  // +0x58

};

