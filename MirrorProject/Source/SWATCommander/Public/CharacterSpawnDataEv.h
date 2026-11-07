// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.CharacterSpawnDataEv
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UObject;

struct FGameplayTagContainer;

#include "CharacterSpawnDataEv.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.CharacterSpawnDataEv
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FCharacterSpawnDataEv {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<UObject> CharacterClass;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FGameplayTagContainer ZoneWhitelist;  // +0x8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FName> Archetype;  // +0x28

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName RoleActionProfile;  // +0x38

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsUnique;  // +0x40

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool CanPerformPatrolMovement;  // +0x41

};

