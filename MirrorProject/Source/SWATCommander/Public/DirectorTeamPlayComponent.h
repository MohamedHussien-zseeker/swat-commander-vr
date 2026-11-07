// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.DirectorTeamPlayComponent
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class ADoorActor;
class AMovementZoneTrigger;

#include "DirectorTeamPlayComponent.generated.h"

// Class: Class /Script/SWATCommander.DirectorTeamPlayComponent
UCLASS(DefaultToInstanced, Config=Engine, BlueprintType)
class SWATCOMMANDER_API UDirectorTeamPlayComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Timeout = 20.0f;  // +0xB0

    UPROPERTY(VisibleAnywhere)
    float LastTimeIssuedCommand = 0.0f;  // +0xB4

    UPROPERTY(VisibleAnywhere)
    AMovementZoneTrigger* LastMovementZone;  // +0xB8

    UPROPERTY(VisibleAnywhere)
    ADoorActor* LastDoor;  // +0xC0

    UPROPERTY(VisibleAnywhere)
    TArray<AMovementZoneTrigger*> VisitedZones;  // +0xC8  // default: []

    UPROPERTY(VisibleAnywhere)
    TArray<ADoorActor*> VisitedDoors;  // +0xD8  // default: []

    UPROPERTY(VisibleAnywhere)
    TArray<AMovementZoneTrigger*> ZonesWeCanVisit;  // +0xE8  // default: []

    UPROPERTY(VisibleAnywhere)
    TArray<ADoorActor*> DoorsWeCanVisit;  // +0xF8  // default: []


    // ── Methods ──
    UFUNCTION(BlueprintCallable)
    bool PerformSearchAndSecure(UObject* inZone);
    UFUNCTION(BlueprintCallable)
    uint8 PerformNextMove();
    UFUNCTION(BlueprintCallable)
    uint8 PerformBreachTheDoor(UObject* inDoor);
    UFUNCTION(BlueprintCallable)
    uint8 AddVisitedZone(UObject* inZone);
    UFUNCTION(BlueprintCallable)
    uint8 AddVisitedDoor(UObject* inDoor);
};

