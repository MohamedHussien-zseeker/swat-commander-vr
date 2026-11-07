// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.RouteSplineActor
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class USplineComponent;

struct FLinearColor;

enum class ERouteSplineColor : uint8;

#include "RouteSplineActor.generated.h"

// Class: Class /Script/SWATCommander.RouteSplineActor
UCLASS(Config=Engine, BlueprintType)
class SWATCOMMANDER_API ARouteSplineActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    USplineComponent* SplineComponent;  // +0x220  // default: {
            "address": "0x299FDC575E0",
            "className": "SplineCom...

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsInUse = false;  // +0x228

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool RandomizeStartLocation = false;  // +0x229

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    int32 StartPointIndex = 0;  // +0x22C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    ERouteSplineColor SplineColor;  // +0x230  // default: {
            "enumType": "ERouteSplineColor",
            "value": 0
       ...

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FLinearColor CustomSplineColor;  // +0x234  // default: "<struct>"


    // ── Methods ──
    UFUNCTION(BlueprintPure)
    bool StartUsingForwardMovement();
    UFUNCTION(BlueprintCallable)
    uint8 RandomizeStartPoint();
    UFUNCTION(BlueprintPure)
    uint8 /*struct*/ GetStartRotation();
    UFUNCTION(BlueprintPure)
    uint8 /*struct*/ GetStartLocation();
};

