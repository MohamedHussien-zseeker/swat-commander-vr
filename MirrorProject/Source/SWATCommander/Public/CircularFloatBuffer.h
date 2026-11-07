// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.CircularFloatBuffer
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "CircularFloatBuffer.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.CircularFloatBuffer
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FCircularFloatBuffer {
    GENERATED_BODY()
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    int32 BufferSize;  // +0x0

    UPROPERTY(VisibleAnywhere)
    TArray<float> Buffer;  // +0x8

    UPROPERTY(VisibleAnywhere)
    int32 WriteIndex;  // +0x18

};

