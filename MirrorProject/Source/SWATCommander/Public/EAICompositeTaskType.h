// Auto-generated UHT enum. Source: Enum EAICompositeTaskType
#pragma once

#include "CoreMinimal.h"

#include "EAICompositeTaskType.generated.h"

UENUM(BlueprintType)
enum class EAICompositeTaskType : uint8 {
    Idle = 0 UMETA(DisplayName="Idle"),
    Move = 1 UMETA(DisplayName="Move"),
    Clear = 2 UMETA(DisplayName="Clear"),
    Deploy = 3 UMETA(DisplayName="Deploy"),
    Remove = 4 UMETA(DisplayName="Remove"),
    SecureEvidence = 5 UMETA(DisplayName="SecureEvidence"),
    Mirror = 6 UMETA(DisplayName="Mirror"),
    Interact = 7 UMETA(DisplayName="Interact"),
    Request = 8 UMETA(DisplayName="Request"),
    Restrain = 9 UMETA(DisplayName="Restrain"),
    CheckLock = 10 UMETA(DisplayName="CheckLock"),
    ToggleDoorState = 11 UMETA(DisplayName="ToggleDoorState"),
    MarkPosition = 12 UMETA(DisplayName="MarkPosition"),
    Equip = 13 UMETA(DisplayName="Equip"),
    WaitSignal = 14 UMETA(DisplayName="WaitSignal"),
    WaitTime = 15 UMETA(DisplayName="WaitTime"),
    ActionMusic = 16 UMETA(DisplayName="ActionMusic"),
    EnableFlashlight = 17 UMETA(DisplayName="EnableFlashlight"),
    None = 18 UMETA(DisplayName="None"),
    MoveTo = 19 UMETA(DisplayName="MoveTo"),
    Discard = 20 UMETA(DisplayName="Discard"),
    IdleNoAutofollow = 21 UMETA(DisplayName="IdleNoAutofollow"),
    Report = 22 UMETA(DisplayName="Report"),
    OpenDoorFull = 23 UMETA(DisplayName="OpenDoorFull"),
    CompleteSearchSecure = 24 UMETA(DisplayName="CompleteSearchSecure"),
    SearchSecure = 25 UMETA(DisplayName="SearchSecure"),
    Follow = 26 UMETA(DisplayName="Follow"),
    DisableIssuingNewCommands = 27 UMETA(DisplayName="DisableIssuingNewCommands"),
    EnableIssuingNewCommands = 28 UMETA(DisplayName="EnableIssuingNewCommands"),
    ReportTarget = 29 UMETA(DisplayName="ReportTarget"),
    ReportProblemWithPrompt = 30 UMETA(DisplayName="ReportProblemWithPrompt"),
    PrepareToMoveTo = 31 UMETA(DisplayName="PrepareToMoveTo"),
    EAICompositeTaskType_MAX = 32 UMETA(DisplayName="EAICompositeTaskType_MAX"),
};
