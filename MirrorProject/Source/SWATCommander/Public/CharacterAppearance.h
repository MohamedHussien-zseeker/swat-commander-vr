// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.CharacterAppearance
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UAnimSequenceBase;
class UMaterialInterface;
class USkeletalMesh;
class UTexture;

struct FLinearColor;
struct FVector;

#include "CharacterAppearance.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.CharacterAppearance
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FCharacterAppearance {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsMale;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<float> MorphValues;  // +0x10

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FName> MorphNames;  // +0x20

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<int32> MaterialParameterIndex;  // +0x30

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<float> MaterialParameterValues;  // +0x40

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FName> MaterialParameterNames;  // +0x50

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FLinearColor> Colors;  // +0x60

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UTexture* SkinTexture;  // +0x70

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UTexture* EyebrowTexture;  // +0x78

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FLinearColor HairColor;  // +0x80

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName HairName;  // +0x90

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName BeardName;  // +0x98

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName MustacheName;  // +0xA0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<UMaterialInterface*> ApparelMaterials;  // +0xA8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<UMaterialInterface*> ApparelSecondMaterials;  // +0xB8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FName> ApparelNames;  // +0xC8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USkeletalMesh* FullBodyMesh;  // +0xD8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool UseFullBodyMesh;  // +0xE0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool SetSkinAndEyesMaterials;  // +0xE1

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector FootOffset;  // +0xE4

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TMap<TMap<TArray<UAnimSequenceBase*>, FString>, FString> ApparelOffsetMap;  // +0xF0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TMap<TArray<UAnimSequenceBase*>, FString> HairOffsetMap;  // +0x140

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<UAnimSequenceBase*> IdleAnimationList;  // +0x190

};

