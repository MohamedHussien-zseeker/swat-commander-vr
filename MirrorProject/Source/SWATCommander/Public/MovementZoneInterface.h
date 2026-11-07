// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.MovementZoneInterface
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "MovementZoneInterface.generated.h"

// Class: Class /Script/SWATCommander.MovementZoneInterface
UCLASS(Abstract, MinimalAPI, BlueprintType)
class SWATCOMMANDER_API UMovementZoneInterface : public UInterface {
    GENERATED_BODY()
public:

    // ── Methods ──
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    uint8 OnEnterRoomZone(UObject* inZone);
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    UObject* GetCurrentRoomZone();
};

