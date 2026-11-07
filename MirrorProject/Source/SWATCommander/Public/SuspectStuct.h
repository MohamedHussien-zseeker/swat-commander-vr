// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.SuspectStuct
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UTexture2D;

#include "SuspectStuct.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.SuspectStuct
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FSuspectStuct {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSoftObjectPtr<UTexture2D> Image;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText Name;  // +0x30

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText Sex;  // +0x48

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText Descent;  // +0x60

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText DOB;  // +0x78

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText Age;  // +0x90

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText Description;  // +0xA8

};

