// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.DialogTriggerBox
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "DialogTriggerBox.generated.h"

// Class: Class /Script/SWATCommander.DialogTriggerBox
UCLASS(Config=Engine, BlueprintType)
class SWATCOMMANDER_API ADialogTriggerBox : public ATriggerBox {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TMap<float, FString> Dialogs;  // +0x228  // default: {
            "note": "not yet supported",
            "type": "MapProperty"
...

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float LastTimeDialogPlayed = 0.0f;  // +0x278

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float TimeBetweenDialogPlays = 3.0f;  // +0x27C


    // ── Methods ──
    UFUNCTION(BlueprintCallable)
    uint8 PlayDialog(UObject* InCharacter);
    UFUNCTION()
    uint8 OnOverlapBegin(UObject* OverlappedComp, UObject* OtherActor, UObject* OtherComp, int32 OtherBodyIndex, bool bFromSweep, uint8 /*struct*/& SweepResult);
};

