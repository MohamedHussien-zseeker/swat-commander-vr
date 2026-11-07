// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.InitialMissionInfo
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class AInteractiveActor;
class ATSCharacterBase;

#include "InitialMissionInfo.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.InitialMissionInfo
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FInitialMissionInfo {
    GENERATED_BODY()
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    TArray<ATSCharacterBase*> Civilians;  // +0x0

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    TArray<ATSCharacterBase*> Suspects;  // +0x10

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    TArray<TSoftObjectPtr<AInteractiveActor>> StaticEvidences;  // +0x20

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    int32 NumEvidences;  // +0x30

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    int32 NumAlreadyDeadBodies;  // +0x34

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    int32 NumAlreadyIncapacitatedBodies;  // +0x38

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    int32 NumBombs;  // +0x3C

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    int32 NumWeapon;  // +0x40

};

