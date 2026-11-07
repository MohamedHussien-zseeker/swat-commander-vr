// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.IntermediateCharacterInfo
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UBehaviorTree;
class UHTN;
class ATSCharacterBase;
class UTSSpawnCoordinator;

struct FArchetypeParameters;
struct FBehaviorParameters;
struct FCharacterSpawnData;

#include "IntermediateCharacterInfo.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.IntermediateCharacterInfo
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FIntermediateCharacterInfo {
    GENERATED_BODY()
    UPROPERTY(VisibleAnywhere)
    ATSCharacterBase* BaseCharacter;  // +0x0

    UPROPERTY(VisibleAnywhere)
    FCharacterSpawnData SpawnData;  // +0x8

    UPROPERTY(VisibleAnywhere)
    FBehaviorParameters BehaviorParams;  // +0xB0

    UPROPERTY(VisibleAnywhere)
    UBehaviorTree* BtAsset;  // +0x150

    UPROPERTY(VisibleAnywhere)
    UHTN* HtnAsset;  // +0x158

    UPROPERTY(VisibleAnywhere)
    UTSSpawnCoordinator* CoordinatorRef;  // +0x160

    UPROPERTY(VisibleAnywhere)
    FArchetypeParameters Archetype;  // +0x168

};

