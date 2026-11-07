// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.DecorativeConfiguratorData
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UMaterialInterface;

struct FTransform;

enum class ETSDecorativeTypes : uint8;

#include "DecorativeConfiguratorData.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.DecorativeConfiguratorData
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FDecorativeConfiguratorData {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName DecorativeGroupName;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool Enabled;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float ChanceToHide;  // +0xC

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    ETSDecorativeTypes DecorationType;  // +0x10

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FTransform> PossibleTransforms;  // +0x18

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UMaterialInterface* DecalMaterial;  // +0x28

};

