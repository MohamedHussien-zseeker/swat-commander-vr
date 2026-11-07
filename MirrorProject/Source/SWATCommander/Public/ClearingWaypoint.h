// Auto-generated UHT-style header from UEVR-MCP. Source type: ScriptStruct /Script/SWATCommander.ClearingWaypoint
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class AActor;

struct FClearingWaypointAction;
struct FTransform;
struct FVector;

enum class EWaypointActionSpeed : uint8;

#include "ClearingWaypoint.generated.h"

// ScriptStruct: ScriptStruct /Script/SWATCommander.ClearingWaypoint
USTRUCT(BlueprintType)
struct SWATCOMMANDER_API FClearingWaypoint {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTransform Waypoint;  // +0x0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FClearingWaypointAction> EnterWaypointActions;  // +0x30

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EWaypointActionSpeed Speed;  // +0x40

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool ShouldAimAtLocation;  // +0x41

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool ShouldEnableADS;  // +0x42

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSoftObjectPtr<AActor> Editor_AimActorRef;  // +0x48

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector Editor_VirtualAimPoint;  // +0x70

};

