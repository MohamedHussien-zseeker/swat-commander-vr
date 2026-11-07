// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.TSCustomNavLinkProxy
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class USphereComponent;

#include "TSCustomNavLinkProxy.generated.h"

// Class: Class /Script/SWATCommander.TSCustomNavLinkProxy
UCLASS(Config=Engine, BlueprintType)
class SWATCOMMANDER_API ATSCustomNavLinkProxy : public ANavLinkProxy {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USphereComponent* StartEditorComp;  // +0x270  // default: {
            "address": "0x2999FD00510",
            "className": "SphereCom...

    UPROPERTY(EditAnywhere)
    USphereComponent* EndEditorComp;  // +0x278  // default: {
            "address": "0x2999FD00080",
            "className": "SphereCom...


    // ── Methods ──
    UFUNCTION(BlueprintCallable)
    uint8 SetEditorCompRelativeLocation(uint8 /*struct*/& StartCompLoc, uint8 /*struct*/& EndCompLoc);
};

