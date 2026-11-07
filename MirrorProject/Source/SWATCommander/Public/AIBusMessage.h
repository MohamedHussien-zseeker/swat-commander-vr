// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.AIBusMessage
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UObject;
class ATSCharacterBase;

enum class EAITeams : uint8;

#include "AIBusMessage.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.AIBusMessage
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FIBusMessage {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    ATSCharacterBase* Sender;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    ATSCharacterBase* Receiver;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EAITeams Channel;  // +0x10

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<UObject*> PayloadPtr;  // +0x18

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<int32> PayloadU32;  // +0x28

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<uint8> PayloadU8;  // +0x38

};

