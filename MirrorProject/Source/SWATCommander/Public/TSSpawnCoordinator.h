// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.TSSpawnCoordinator
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class ATSSpawnSystem;

struct FMissionSpawnDataCollection;
struct FOfficersNameData;
struct FSpawnSystemLevelRefs;
struct FSpawnSystemSettings;

enum class ETSSpawnLocationTypes : uint8;

#include "TSSpawnCoordinator.generated.h"

// Class: Class /Script/SWATCommander.TSSpawnCoordinator
UCLASS(BlueprintType)
class SWATCOMMANDER_API UTSSpawnCoordinator : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FMissionSpawnDataCollection SpawnData;  // +0x28  // default: "<struct>"

    UPROPERTY(VisibleAnywhere)
    FSpawnSystemSettings SpawnSettings;  // +0x240  // default: "<struct>"

    UPROPERTY(VisibleAnywhere)
    FSpawnSystemLevelRefs SpawnLevelRefs;  // +0x260  // default: "<struct>"

    UPROPERTY(VisibleAnywhere)
    ETSSpawnLocationTypes OfficersSpawnLocation;  // +0x620  // default: {
            "enumType": "ETSSpawnLocationTypes",
            "value": 0
   ...

    UPROPERTY(VisibleAnywhere)
    TArray<FOfficersNameData> OfficersInfo;  // +0x628  // default: []

    UPROPERTY(VisibleAnywhere)
    ATSSpawnSystem* OwnerActorRef;  // +0x638

};

