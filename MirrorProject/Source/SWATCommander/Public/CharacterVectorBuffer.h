// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.CharacterVectorBuffer
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


struct FVector;

#include "CharacterVectorBuffer.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.CharacterVectorBuffer
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FCharacterVectorBuffer {
    GENERATED_BODY()
    UPROPERTY(VisibleAnywhere)
    TArray<FVector> Buffer;  // +0x0

};

