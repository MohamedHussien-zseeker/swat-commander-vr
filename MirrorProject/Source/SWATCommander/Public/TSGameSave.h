// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.TSGameSave
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


struct FEquipmentStuct;
struct FSCCampaign;
struct FSCSkins;
struct FTSProgression;
struct FTSSettings;

#include "TSGameSave.generated.h"

// Class: Class /Script/SWATCommander.TSGameSave
UCLASS(BlueprintType)
class SWATCOMMANDER_API UTSGameSave : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString SaveSlotName = TEXT("SWATCommanderSave");  // +0x28

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FEquipmentStuct> OperatorsEquipment;  // +0x38  // default: []

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FEquipmentStuct> EquipmentPresets;  // +0x48  // default: []

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FText> EquipmentPresetsTitles;  // +0x58  // default: []

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 ActiveEquipmentPreset = 0;  // +0x68

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 SelectedCharacter = 0;  // +0x6C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FTSProgression> progression;  // +0x70  // default: []

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FSCCampaign> campaign;  // +0x80  // default: []

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 ActiveCampaignId = -1;  // +0x90

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSet<TArray<FSCSkins>> UnlockedCampaignRewards;  // +0x98  // default: {
            "note": "not yet supported",
            "type": "SetProperty"
...

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FSCSkins> SavedSkins;  // +0xE8  // default: {
            "count": 5,
            "innerType": "struct",
            "typ...

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    FTSSettings Settings;  // +0xF8  // default: "<struct>"

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 VersionSave = 0;  // +0x1C8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 UnixTimestampSave = 1793892397;  // +0x1CC

};

