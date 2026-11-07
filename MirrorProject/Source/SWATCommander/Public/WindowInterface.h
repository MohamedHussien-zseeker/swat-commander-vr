// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.WindowInterface
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "WindowInterface.generated.h"

// Class: Class /Script/SWATCommander.WindowInterface
UCLASS(Abstract, MinimalAPI, BlueprintType)
class SWATCOMMANDER_API UWindowInterface : public UInterface {
    GENERATED_BODY()
public:

    // ── Methods ──
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 OnDestroyWindow();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool IsForwardDeployment(UObject* InCharacter);
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    uint8 /*struct*/ GetWindowThrowEndPointLocation(UObject* InCharacter, bool inForward);
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    uint8 /*struct*/ GetWindowGrenadeImpactPoint(UObject* InCharacter, bool inForward);
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    uint8 /*struct*/ GetStandingLocation(UObject* InCharacter, bool inForward);
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool CanDeployGrenade(bool inForward);
};

