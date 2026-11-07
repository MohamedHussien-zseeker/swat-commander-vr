// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.CornerTriggerBox
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class AMovementZoneProxyActor;
class AMovementZoneTrigger;
class ATargetPoint;

struct FTransform;

#include "CornerTriggerBox.generated.h"

// Class: Class /Script/SWATCommander.CornerTriggerBox
UCLASS(Config=Engine, BlueprintType)
class SWATCOMMANDER_API ACornerTriggerBox : public ATriggerBox {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<TSoftObjectPtr<AMovementZoneTrigger>> MovementZonesForMirroring;  // +0x228  // default: []

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<AMovementZoneProxyActor> MovementZoneProxyClass;  // +0x238

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FTransform> OfficersTransforms;  // +0x240  // default: []

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTransform MirrorPOI;  // +0x250  // default: "<struct>"

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float OfficersOffset = 150.0f;  // +0x280

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsDoubleSidedMirror = false;  // +0x284

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsOccupied = false;  // +0x285

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<TSoftObjectPtr<AMovementZoneProxyActor>> MovementZoneProxies;  // +0x288  // default: []

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSoftObjectPtr<ATargetPoint> MirrorPOITargetPoint;  // +0x298  // default: {
            "offset": 664,
            "type": "SoftObjectProperty"
       ...


    // ── Methods ──
    UFUNCTION(BlueprintPure)
    TArray<uint8> GetOfficersLocations();
    UFUNCTION(BlueprintImplementableEvent)
    TArray<uint8> GetBlockTriggerBoxes();
};

