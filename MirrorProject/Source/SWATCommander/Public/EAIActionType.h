// Auto-generated UHT enum. Source: Enum EAIActionType
#pragma once

#include "CoreMinimal.h"

#include "EAIActionType.generated.h"

UENUM(BlueprintType)
enum class EAIActionType : uint8 {
    Idle = 0 UMETA(DisplayName="Idle"),
    MoveTo = 1 UMETA(DisplayName="MoveTo"),
    Complain = 2 UMETA(DisplayName="Complain"),
    Cover = 3 UMETA(DisplayName="Cover"),
    FireAtObject = 4 UMETA(DisplayName="FireAtObject"),
    Approach = 5 UMETA(DisplayName="Approach"),
    Flank = 6 UMETA(DisplayName="Flank"),
    RunAndHide = 7 UMETA(DisplayName="RunAndHide"),
    Reload = 8 UMETA(DisplayName="Reload"),
    SwitchWeapon = 9 UMETA(DisplayName="SwitchWeapon"),
    ToggleFlashlight = 10 UMETA(DisplayName="ToggleFlashlight"),
    Ambush = 11 UMETA(DisplayName="Ambush"),
    KillNPC = 12 UMETA(DisplayName="KillNPC"),
    Surrender = 13 UMETA(DisplayName="Surrender"),
    FakeSurrender = 14 UMETA(DisplayName="FakeSurrender"),
    FakeDeath = 15 UMETA(DisplayName="FakeDeath"),
    StandAndEquipWeapon = 16 UMETA(DisplayName="StandAndEquipWeapon"),
    UnzipNPC = 17 UMETA(DisplayName="UnzipNPC"),
    ThrowGrenade = 18 UMETA(DisplayName="ThrowGrenade"),
    Investigate = 19 UMETA(DisplayName="Investigate"),
    Guard = 20 UMETA(DisplayName="Guard"),
    Follow = 21 UMETA(DisplayName="Follow"),
    Conversation = 22 UMETA(DisplayName="Conversation"),
    PlayDialog = 23 UMETA(DisplayName="PlayDialog"),
    Roaming = 24 UMETA(DisplayName="Roaming"),
    HitReactionMovable = 25 UMETA(DisplayName="HitReactionMovable"),
    HitReactionStanding = 26 UMETA(DisplayName="HitReactionStanding"),
    MoveToNoLoSZone = 27 UMETA(DisplayName="MoveToNoLoSZone"),
    MoveToLoSZone = 28 UMETA(DisplayName="MoveToLoSZone"),
    Incapacitated = 29 UMETA(DisplayName="Incapacitated"),
    Dead = 30 UMETA(DisplayName="Dead"),
    SwitchTarget = 31 UMETA(DisplayName="SwitchTarget"),
    InvestigateLocation = 32 UMETA(DisplayName="InvestigateLocation"),
    EAIActionType_MAX = 33 UMETA(DisplayName="EAIActionType_MAX"),
};
