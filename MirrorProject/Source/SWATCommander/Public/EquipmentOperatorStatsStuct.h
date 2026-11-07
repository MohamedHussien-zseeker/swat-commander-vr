// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.EquipmentOperatorStatsStuct
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "EquipmentOperatorStatsStuct.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.EquipmentOperatorStatsStuct
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FEquipmentOperatorStatsStuct {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Protection;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MovementSpeed;  // +0x4

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Vision;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Weight;  // +0xC

};

