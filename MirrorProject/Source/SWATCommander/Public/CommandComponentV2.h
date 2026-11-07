// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.CommandComponentV2
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UBreachCommandGenerator;
class UCommandInfoProvider;
class UCommonCommandGenerator;
class UDataTable;
class UDeployCommandGenerator;
class UFastCommandGenerator;
class UInvestigateCommandGenerator;
class UMoveCommandGenerator;
class UOpenCommandGenerator;
class URequestCommandGenerator;

struct FActorComponentTickFunction;
struct FVector;

#include "CommandComponentV2.generated.h"

// Class: Class /Script/SWATCommander.CommandComponentV2
UCLASS(DefaultToInstanced, Config=Engine, BlueprintType)
class SWATCOMMANDER_API UCommandComponentV2 : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UDataTable* CommandNamesDataTable;  // +0xB0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UDataTable* CommandCategoryNamesDataTable;  // +0xB8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float TraceDistance = 1000.0f;  // +0xC0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MovementZoneSphereRadius = 1200.0f;  // +0xC4

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool DebugTraceEnabled = false;  // +0xC8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector TraceOffset;  // +0xCC  // default: "<struct>"

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    uint8 InteractionTraceChannel = 0;  // +0xD8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    uint8 OpenedDoorTraceChannel = 0;  // +0xD9

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    uint8 MirrorCornerTraceChannel = 0;  // +0xDA

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    uint8 MovementZoneTraceChannel = 0;  // +0xDB

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    UFastCommandGenerator* FastCommandGenerator;  // +0xE0  // default: {
            "address": "0x299FF1B8320",
            "className": "FastComma...

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    UCommandInfoProvider* CommandInfoProvider;  // +0xE8  // default: {
            "address": "0x299FF1A4BC0",
            "className": "CommandIn...

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    UInvestigateCommandGenerator* InvestigateCommandGenerator;  // +0xF0  // default: {
            "address": "0x299FB7A6700",
            "className": "Investiga...

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    UOpenCommandGenerator* OpenCommandGenerator;  // +0xF8  // default: {
            "address": "0x299FB7A6280",
            "className": "OpenComma...

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    UBreachCommandGenerator* BreachCommandGenerator;  // +0x100  // default: {
            "address": "0x299FB7A6040",
            "className": "BreachCom...

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    UCommonCommandGenerator* CommonCommandGenerator;  // +0x108  // default: {
            "address": "0x299FB7A5BC0",
            "className": "CommonCom...

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    UDeployCommandGenerator* DeployCommandGenerator;  // +0x110  // default: {
            "address": "0x299FB7A52C0",
            "className": "DeployCom...

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    URequestCommandGenerator* RequestCommandGenerator;  // +0x118  // default: {
            "address": "0x299FB7A5740",
            "className": "RequestCo...

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    UMoveCommandGenerator* MoveCommandGenerator;  // +0x120  // default: {
            "address": "0x299FB7A4E40",
            "className": "MoveComma...

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    bool CommandSystemEnabled = true;  // +0x128

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    bool FastCommandSystemEnabled = true;  // +0x129

    UPROPERTY(VisibleAnywhere)
    float LastTimeAutoCoverWasIssued = 0.0f;  // +0x12C

    UPROPERTY(VisibleAnywhere)
    float LastTimeSearchSecureWasIssued = 0.0f;  // +0x130

    UPROPERTY(VisibleAnywhere)
    float LastTimeCommandIssued = 0.0f;  // +0x134

    UPROPERTY(VisibleAnywhere)
    float LastTimeDisabledForImprotantCommand = 0.0f;  // +0x138

    UPROPERTY(VisibleAnywhere)
    TMap<FActorComponentTickFunction, FString> CommandAvailabilityMap;  // +0x140  // default: {
            "note": "not yet supported",
            "type": "MapProperty"
...


    // ── Methods ──
    UFUNCTION(BlueprintCallable)
    uint8 UpdateFastCommandTeamMembers(uint8 /*enum*/ inTeam);
    UFUNCTION(BlueprintCallable)
    uint8 UpdateFastCommandEquipmentContext(uint8 /*enum*/ inTeam);
    UFUNCTION(BlueprintCallable)
    uint8 UnlockCommandSystemForTeam(uint8 /*enum*/ InType);
    UFUNCTION(BlueprintCallable)
    uint8 ShowWholeCommandMenu();
    UFUNCTION(BlueprintCallable)
    bool RunSearchAndSecureORCover(uint8 /*enum*/ inTeamType);
    UFUNCTION(BlueprintCallable)
    bool RunSearchAndSecureCommand(uint8 /*enum*/ inTeamType);
    UFUNCTION(BlueprintCallable)
    uint8 RunInjectPlayerCommand();
    UFUNCTION(BlueprintCallable)
    uint8 RunIdleCommand(uint8 /*enum*/ inTeamType);
    UFUNCTION(BlueprintCallable)
    uint8 RunFollowCommand(uint8 /*enum*/ inTeamType, UObject* inDoorActor);
    UFUNCTION(BlueprintCallable)
    bool RunCoverCommandIfNoCombat(uint8 /*enum*/ inTeamType);
    UFUNCTION(BlueprintCallable)
    uint8 /*struct*/ ProvideFastCommand(uint8 /*enum*/ inTeam, bool& outSuccess);
    UFUNCTION(BlueprintCallable)
    uint8 /*struct*/ PrepareFastCommand(uint8 /*enum*/ inTeam, uint8 /*struct*/& inCommandDescription, bool& outSuccess);
    UFUNCTION(BlueprintCallable)
    uint8 /*struct*/ PrepareCommandContext(bool& outSuccess);
    UFUNCTION(BlueprintCallable)
    uint8 ObtainDefaultCommandFromSettings();
    UFUNCTION(BlueprintCallable)
    uint8 LockCommandSystemForTeam(uint8 /*enum*/ InType);
    UFUNCTION(BlueprintPure)
    bool IsRequestCommand(uint8 /*enum*/ inSignature);
    UFUNCTION(BlueprintPure)
    bool IsCommandSystemEnabledForTeam(uint8 /*enum*/ InType);
    UFUNCTION(BlueprintPure)
    bool IsAtomicCommand(uint8 /*struct*/& inCommand);
    UFUNCTION(BlueprintCallable)
    uint8 HideCommandMenuCategory(uint8 /*enum*/ inCategory, bool inHide);
    UFUNCTION(BlueprintPure)
    float GetLastTimeIssueCommandForTeam(uint8 /*enum*/ InType);
    UFUNCTION(BlueprintPure)
    float GetLastTimeCommandIssued();
    UFUNCTION(BlueprintPure)
    FText GetFastCommandTitle(uint8 /*enum*/ inCommandType);
    UFUNCTION(BlueprintPure)
    FText GetCommandTitle(uint8 /*enum*/ inCommandType);
    UFUNCTION(BlueprintPure)
    FText GetCommandCategoryName(uint8 /*enum*/ inCategory);
    UFUNCTION(BlueprintCallable)
    TArray<uint8> GenerateCommandList(uint8 /*enum*/ inTeam, uint8 /*struct*/& inContext);
    UFUNCTION(BlueprintCallable)
    uint8 ExecuteCommand(uint8 /*struct*/& inCommand, bool inPlayDialog, bool inOverride);
    UFUNCTION(BlueprintCallable)
    uint8 EnableWholeCommandMenu();
    UFUNCTION(BlueprintCallable)
    uint8 EnableFastCommandSystem(bool inEnabled);
    UFUNCTION(BlueprintCallable)
    uint8 EnableCommandSystem(bool inEnabled);
    UFUNCTION(BlueprintCallable)
    uint8 EnableCommandMenuCategory(uint8 /*enum*/ inCategory, bool inEnabled);
    UFUNCTION(BlueprintCallable)
    bool CanRunInjectPlayerCommand();
    UFUNCTION(BlueprintPure)
    bool AreOfficersExecutingSearchAndSecure();
    UFUNCTION(BlueprintPure)
    bool AreOfficersExecutingFallIn();
};

