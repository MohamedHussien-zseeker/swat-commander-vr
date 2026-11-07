// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.GroupFocusComponent
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UAssetUserData;

struct FActorComponentTickFunction;
struct FObjectsOfInterests;

#include "GroupFocusComponent.generated.h"

// Class: Class /Script/SWATCommander.GroupFocusComponent
UCLASS(DefaultToInstanced, Config=Engine, BlueprintType)
class SWATCOMMANDER_API UGroupFocusComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    uint8 CheckTraceChannel = 0;  // +0xB0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float TimeToIgnoreCommandDoors = 40.0f;  // +0xB4

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MaxDistanceForFocusObject = 1000.0f;  // +0xB8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MinDistanceForFocusObject = 50.0f;  // +0xBC

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MinDistanceForFocusObjectLeader = 200.0f;  // +0xC0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MinDistanceForFocusObjectPlayer = 100.0f;  // +0xC4

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float POIFocusCooldown = 5.0f;  // +0xC8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool DebugDoorTraceEnabled = false;  // +0xCC

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool DebugAimTraceEnabled = false;  // +0xCD

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool DebugCharacterTraceEnabled = false;  // +0xCE

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool DebugInvalidDoorTraceEnabled = false;  // +0xCF

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool DebugInvalidAimTraceEnabled = false;  // +0xD0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool DebugInvalidCharacterTraceEnabled = false;  // +0xD1

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool DebugAllPOIs = false;  // +0xD2

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float DebugDrawTime = 5.0f;  // +0xD4

    UPROPERTY(VisibleAnywhere)
    FObjectsOfInterests ObjectsOfInterest;  // +0xD8  // default: "<struct>"

    UPROPERTY(VisibleAnywhere)
    TMap<FActorComponentTickFunction, TArray<UAssetUserData*>> DoorsToIgnoreTimestamps;  // +0x108  // default: {
            "note": "not yet supported",
            "type": "MapProperty"
...


    // ── Methods ──
    UFUNCTION(BlueprintCallable)
    TArray<uint8> GetPointsOfInterestToFocus();
};

