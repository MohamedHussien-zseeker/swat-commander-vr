// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.TSDebugCheatManager
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UBehaviorTree;
class UDataTable;
class ATSCharacterBase;

#include "TSDebugCheatManager.generated.h"

// Class: Class /Script/SWATCommander.TSDebugCheatManager
UCLASS(BlueprintType)
class SWATCOMMANDER_API UTSDebugCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    TMap<TSubclassOf<ATSCharacterBase>, FString> Flags;  // +0x88  // default: {
            "note": "not yet supported",
            "type": "MapProperty"
...

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<ATSCharacterBase> SubclassType;  // +0xD8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<ATSCharacterBase> CiviSubclassType;  // +0xE0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UDataTable* NPCArchetypesDataTable;  // +0xE8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UDataTable* CivilianBehaviorDataTable;  // +0xF0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UBehaviorTree* CiviliansBT;  // +0xF8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UDataTable* SuspectBehaviorDataTable;  // +0x100

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UBehaviorTree* SuspectsBT;  // +0x108

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UDataTable* CivilianDialogDataTable;  // +0x110

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UDataTable* SuspDialogDataTable;  // +0x118


    // ── Methods ──
    UFUNCTION(Exec)
    uint8 TSG(uint8 /*enum*/ inDebugGroup, int32 inEnabled);
    UFUNCTION(Exec)
    uint8 TS(uint8 /*enum*/ inFlag, int32 inArg);
    UFUNCTION(Exec)
    uint8 SurrenderAll();
    UFUNCTION(Exec)
    uint8 Suicide();
    UFUNCTION(Exec)
    uint8 SpawnSusp(float inDistance, int32 inNum);
    UFUNCTION(Exec)
    uint8 SpawnCivi(float inDistance, int32 inNum);
    UFUNCTION(Exec)
    uint8 SetHP(uint8 /*enum*/ inTeam, float inHealth);
    UFUNCTION(Exec)
    uint8 SetFireRateCoef(uint8 /*enum*/ inTeam, float inFireRate, float inFireDelay);
    UFUNCTION(Exec)
    uint8 SetDamageCoef(uint8 /*enum*/ inTeam, float InValue);
    UFUNCTION(Exec)
    uint8 SetArmorHP(float inHead, float inBody, float inArms);
    UFUNCTION(Exec)
    uint8 OneOnOne(int32 inOfficerIndex);
    UFUNCTION(Exec)
    uint8 NoSuspects();
    UFUNCTION(Exec)
    uint8 NoSightPerception();
    UFUNCTION(Exec)
    uint8 NoOperators();
    UFUNCTION(Exec)
    uint8 NoHearingPerception();
    UFUNCTION(Exec)
    uint8 NoCivilians();
    UFUNCTION(Exec)
    uint8 MagicalCreatures();
    UFUNCTION(Exec)
    uint8 LootList();
    UFUNCTION(Exec)
    uint8 InterObjWithLoc();
    UFUNCTION(Exec)
    uint8 InfAmmo();
    UFUNCTION(Exec)
    uint8 Incapac();
    UFUNCTION(BlueprintPure)
    bool HasFlag(uint8 /*enum*/ inFlag);
    UFUNCTION(Exec)
    uint8 DebugAllTS(int32 inEnabled);
    UFUNCTION(Exec)
    uint8 AutoComplete();
};

