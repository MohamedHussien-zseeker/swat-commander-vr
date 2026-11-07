// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.ObjectiveStuct
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


enum class EObjectiveCompletion : uint8;
enum class EObjectiveType : uint8;

#include "ObjectiveStuct.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.ObjectiveStuct
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FObjectiveStuct {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 ObjectiveID;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText ObjectiveText;  // +0x10

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText Text;  // +0x28

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FName> CharacterNames;  // +0x40

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName InteractiveActorIdentifier;  // +0x50

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EObjectiveType ObjectiveType;  // +0x58

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool FailOnDeath;  // +0x59

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsCharacterSuspect;  // +0x5A

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 NumOfObjectsToFinishObjective;  // +0x5C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 CurrentNumOfObjects;  // +0x60

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EObjectiveCompletion Status;  // +0x64

};

