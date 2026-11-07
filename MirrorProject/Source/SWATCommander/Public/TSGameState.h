// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.TSGameState
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class AActor;
class AMovementZoneTrigger;
class APawn;
class ATacticalSquadGameModeBase;

struct FVector;

#include "TSGameState.generated.h"

// Class: Class /Script/SWATCommander.TSGameState
UCLASS(NotPlaceable, Config=Game, BlueprintType)
class SWATCOMMANDER_API ATSGameState : public AGameState {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TSet<TSet<bool>> ReadyPlayers;  // +0x290  // default: {
            "note": "not yet supported",
            "type": "SetProperty"
...

    UPROPERTY(VisibleAnywhere)
    TSet<bool> ReadyPlayerIds;  // +0x2E0  // default: {
            "note": "not yet supported",
            "type": "SetProperty"
...

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    bool bIsMissionRestart = false;  // +0x331

    UPROPERTY(VisibleAnywhere)
    TMap<TArray<AMovementZoneTrigger*>, TArray<AMovementZoneTrigger*>> ActivatedSuspects;  // +0x338  // default: {
            "note": "not yet supported",
            "type": "MapProperty"
...

    UPROPERTY(VisibleAnywhere)
    TArray<AMovementZoneTrigger*> DirtyZonesForSearchAndSecure;  // +0x388  // default: []

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 CurrentUnreportedCharactersCount = 0;  // +0x398

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 CurrentUnreportedWeaponsCount = 0;  // +0x39C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 CurrentUnreportedEvidencesCount = 0;  // +0x3A0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<AActor*> AllStaticEvidencesActors;  // +0x3A8  // default: []

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<AActor*> StaticEvidencesActors;  // +0x3B8  // default: []

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    AActor* ClosestCharacterActor;  // +0x3C8

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    AActor* ClosestUnreportedWeaponActor;  // +0x3D0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector ClosestStaticEvidencePosition;  // +0x3D8  // default: "<struct>"

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<AActor*> CharactersHints;  // +0x3E8  // default: []

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<AActor*> WeaponsHints;  // +0x3F8  // default: []

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<AActor*> StaticEvidencesHints;  // +0x408  // default: []

    UPROPERTY(VisibleAnywhere)
    APawn* PlayerPawn;  // +0x418

    UPROPERTY(VisibleAnywhere)
    ATacticalSquadGameModeBase* GameMode;  // +0x420


    // ── Methods ──
    UFUNCTION(BlueprintImplementableEvent)
    uint8 TrySpawnHint();
    UFUNCTION(BlueprintCallable)
    uint8 ResetReadiness();
    UFUNCTION(BlueprintCallable)
    uint8 ProcessHintsWeapons();
    UFUNCTION(BlueprintCallable)
    uint8 ProcessHintsEvidences();
    UFUNCTION(BlueprintCallable)
    uint8 ProcessHintsCharacters();
    UFUNCTION(BlueprintPure)
    bool IsZoneDirty(UObject* inZone);
    UFUNCTION(BlueprintPure)
    bool IsSuspectInActiveCombat(UObject* inSuspect);
    UFUNCTION(BlueprintPure)
    bool IsCombatGoing();
    UFUNCTION(BlueprintPure)
    uint8 GetUnreportedWeapons(TArray<uint8>& WeaponActors);
    UFUNCTION(BlueprintPure)
    TArray<uint8> GetDirtyMovementZonesForSerachAndSecure();
    UFUNCTION(BlueprintCallable)
    uint8 FindClosestSourceForHint(uint8 /*struct*/& Target, bool& bFound, uint8 /*enum*/& ClosestSource);
    UFUNCTION(BlueprintCallable)
    uint8 DeactivateSuspectForCombat(UObject* inSuspect);
    UFUNCTION(BlueprintCallable)
    uint8 ClearWeaponsHints();
    UFUNCTION(BlueprintCallable)
    uint8 ClearStaticEvidencesHints();
    UFUNCTION(BlueprintCallable)
    uint8 ClearDirtyZones();
    UFUNCTION(BlueprintCallable)
    uint8 ClearCharactersHints();
    UFUNCTION(BlueprintPure)
    bool AreHintsAvailable();
    UFUNCTION(BlueprintCallable)
    uint8 ActivateSuspectForCombat(UObject* inSuspect);
};

