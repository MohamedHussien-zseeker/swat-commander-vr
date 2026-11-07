// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.SPMainPlayerController
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class ATSCharacterBase;

#include "SPMainPlayerController.generated.h"

// Class: Class /Script/SWATCommander.SPMainPlayerController
UCLASS(NotPlaceable, Config=Game, BlueprintType)
class SWATCOMMANDER_API ASPMainPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    TArray<ATSCharacterBase*> RedTeam;  // +0x570  // default: []

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    TArray<ATSCharacterBase*> BlueTeam;  // +0x580  // default: []


    // ── Methods ──
    UFUNCTION(BlueprintCallable, Client, Reliable)
    uint8 ShowFadeScreen_Client();
    UFUNCTION(BlueprintCallable, Server, Reliable)
    uint8 Server_SetReady(bool bNewReady);
    UFUNCTION(Server, Reliable)
    uint8 Server_ReportMissionLevelLoaded();
    UFUNCTION(Server, Reliable)
    uint8 Server_PingRequest();
    UFUNCTION(Server, Reliable)
    uint8 RequestRespawn_SERVER();
    UFUNCTION(Server, Reliable)
    uint8 ReportClientReady_SERVER();
    UFUNCTION(BlueprintCallable)
    uint8 PingSteamHost();
    UFUNCTION(BlueprintImplementableEvent)
    uint8 OnShowFadeScreen();
    UFUNCTION(BlueprintImplementableEvent)
    uint8 OnPingResult(int32 PingInMs);
    UFUNCTION(BlueprintImplementableEvent)
    uint8 CreateLobbyUI();
    UFUNCTION(Client, Reliable)
    uint8 Client_PingResponse(uint8 /*struct*/ ServerTime);
};

