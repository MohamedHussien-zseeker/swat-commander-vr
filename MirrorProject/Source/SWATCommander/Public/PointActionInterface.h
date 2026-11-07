// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.PointActionInterface
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "PointActionInterface.generated.h"

// Class: Class /Script/SWATCommander.PointActionInterface
UCLASS(Abstract, MinimalAPI, BlueprintType)
class SWATCOMMANDER_API UPointActionInterface : public UInterface {
    GENERATED_BODY()
public:

    // ── Methods ──
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 OnStartPointAction(UObject* inAction);
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsPlayingPointAction();
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    UObject* GetCurrentPointAction();
};

