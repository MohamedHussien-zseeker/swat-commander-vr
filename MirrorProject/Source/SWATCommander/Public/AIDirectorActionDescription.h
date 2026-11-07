// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.AIDirectorActionDescription
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class AMovementZoneTrigger;
class ATSCharacterBase;

struct FVector;

enum class EAIActionMovementType : uint8;
enum class EAIActionType : uint8;

#include "AIDirectorActionDescription.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.AIDirectorActionDescription
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FIDirectorActionDescription {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EAIActionType ActionType;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EAIActionMovementType MovementType;  // +0x1

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector Location;  // +0x4

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName MovementTag;  // +0x10

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    AMovementZoneTrigger* MovementZoneRef;  // +0x18

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    ATSCharacterBase* CharacterRef;  // +0x20

};

