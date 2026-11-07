// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.MultiplayerCommandComponent
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UBreachCommandGenerator;
class UCommandComponentV2;
class UCommandInfoProvider;
class UCommonCommandGenerator;
class UDataTable;
class UDeployCommandGenerator;
class UFastCommandGenerator;
class UInvestigateCommandGenerator;
class UMoveCommandGenerator;
class UOpenCommandGenerator;

struct FVector;

#include "MultiplayerCommandComponent.generated.h"

// Class: Class /Script/SWATCommander.MultiplayerCommandComponent
UCLASS(DefaultToInstanced, Config=Engine, BlueprintType)
class SWATCOMMANDER_API UMultiplayerCommandComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UDataTable* CommandCategoryNamesDataTable;  // +0xB0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float TraceDistance = 1000.0f;  // +0xB8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool DebugTraceEnabled = false;  // +0xBC

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector TraceOffset;  // +0xC0  // default: "<struct>"

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    uint8 InteractionTraceChannel = 0;  // +0xCC

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    uint8 OpenedDoorTraceChannel = 0;  // +0xCD

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    uint8 MirrorCornerTraceChannel = 0;  // +0xCE

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    uint8 MovementZoneTraceChannel = 0;  // +0xCF

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    UFastCommandGenerator* FastCommandGenerator;  // +0xD0  // default: {
            "address": "0x299FF1B81A0",
            "className": "FastComma...

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    UCommandInfoProvider* CommandInfoProvider;  // +0xD8  // default: {
            "address": "0x299FF1A4840",
            "className": "CommandIn...

    UPROPERTY(VisibleAnywhere)
    TWeakObjectPtr<UCommandComponentV2> RefCommandComponentV2;  // +0xE0  // default: {
            "offset": 224,
            "type": "WeakObjectProperty"
       ...

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    UInvestigateCommandGenerator* InvestigateCommandGenerator;  // +0xE8  // default: {
            "address": "0x299FB7ADE40",
            "className": "Investiga...

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    UOpenCommandGenerator* OpenCommandGenerator;  // +0xF0  // default: {
            "address": "0x299FB7ADC00",
            "className": "OpenComma...

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    UBreachCommandGenerator* BreachCommandGenerator;  // +0xF8  // default: {
            "address": "0x299FB7AD9C0",
            "className": "BreachCom...

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    UCommonCommandGenerator* CommonCommandGenerator;  // +0x100  // default: {
            "address": "0x299FB7AD780",
            "className": "CommonCom...

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    UDeployCommandGenerator* DeployCommandGenerator;  // +0x108  // default: {
            "address": "0x299FB7AD540",
            "className": "DeployCom...

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    UMoveCommandGenerator* MoveCommandGenerator;  // +0x110  // default: {
            "address": "0x299FB7AD300",
            "className": "MoveComma...


    // ── Methods ──
    UFUNCTION(BlueprintCallable)
    uint8 UpdateFastCommandTeamMembers(uint8 /*enum*/ inTeam);
    UFUNCTION(BlueprintCallable)
    uint8 UpdateFastCommandEquipmentContext(uint8 /*enum*/ inTeam);
    UFUNCTION(BlueprintCallable)
    uint8 SetCommandComponentV2(UObject* inOwner);
    UFUNCTION(BlueprintCallable)
    uint8 /*struct*/ ProvideFastCommand(uint8 /*enum*/ inTeam, bool& outSuccess);
    UFUNCTION(BlueprintCallable)
    uint8 /*struct*/ PrepareFastCommand(uint8 /*enum*/ inTeam, uint8 /*struct*/& inCommandDescription, bool& outSuccess);
    UFUNCTION(BlueprintCallable)
    uint8 /*struct*/ PrepareCommandContext(bool& outSuccess);
    UFUNCTION(BlueprintCallable)
    TArray<uint8> GenerateCommandList(uint8 /*enum*/ inTeam, uint8 /*struct*/& inContext);
};

