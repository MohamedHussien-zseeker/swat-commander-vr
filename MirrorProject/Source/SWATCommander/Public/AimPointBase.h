// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.AimPointBase
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "AimPointBase.generated.h"

// Class: Class /Script/SWATCommander.AimPointBase
UCLASS(Config=Engine, BlueprintType)
class SWATCOMMANDER_API AAimPointBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Priority = 500.0f;  // +0x220

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool AimWeaponAtThread = false;  // +0x224

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float LastFocusedTime = 0.0f;  // +0x228


    // ── Methods ──
    UFUNCTION(BlueprintCallable)
    uint8 SetAimingPawn(UObject* InPawn);
    UFUNCTION(BlueprintPure)
    bool HasAimingPawn();
};

