// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.HairInfo
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UAnimInstance;
class UMaterialInterface;
class USkeletalMesh;
class UTexture2D;

enum class EHairType : uint8;

#include "HairInfo.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.HairInfo
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FHairInfo {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USkeletalMesh* HairMesh;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText HairName;  // +0x10

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<UMaterialInterface*> HairMaterials;  // +0x28

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<UAnimInstance> CustomAnimBP;  // +0x38

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UTexture2D* HairShadowMask;  // +0x40

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EHairType HairType;  // +0x48

};

