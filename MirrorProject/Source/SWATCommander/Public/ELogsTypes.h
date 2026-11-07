// Auto-generated UHT enum. Source: Enum LogsTypes
#pragma once

#include "CoreMinimal.h"

#include "ELogsTypes.generated.h"

UENUM(BlueprintType)
enum class ELogsTypes : uint8 {
    TeamMovement = 0 UMETA(DisplayName="TeamMovement"),
    SniperActivity = 1 UMETA(DisplayName="SniperActivity"),
    LocationPing = 2 UMETA(DisplayName="LocationPing"),
    DisarmingBomb = 3 UMETA(DisplayName="DisarmingBomb"),
    BombDisarmed = 4 UMETA(DisplayName="BombDisarmed"),
    FriendlyFireIncident = 5 UMETA(DisplayName="FriendlyFireIncident"),
    FiringWeapon = 6 UMETA(DisplayName="FiringWeapon"),
    GrenadeUse = 7 UMETA(DisplayName="GrenadeUse"),
    GrenadeExplosion = 8 UMETA(DisplayName="GrenadeExplosion"),
    SuspectNeutralized = 9 UMETA(DisplayName="SuspectNeutralized"),
    OfficerDown = 10 UMETA(DisplayName="OfficerDown"),
    CivilianRescued = 11 UMETA(DisplayName="CivilianRescued"),
    CivilianInjured = 12 UMETA(DisplayName="CivilianInjured"),
    SuspectArrested = 13 UMETA(DisplayName="SuspectArrested"),
    HostageSituation = 14 UMETA(DisplayName="HostageSituation"),
    SuspectEscaped = 15 UMETA(DisplayName="SuspectEscaped"),
    RadioCommunication = 16 UMETA(DisplayName="RadioCommunication"),
    TeamOrderIssued = 17 UMETA(DisplayName="TeamOrderIssued"),
    ItemPickup = 18 UMETA(DisplayName="ItemPickup"),
    DoorBreached = 19 UMETA(DisplayName="DoorBreached"),
    EvidenceCollected = 20 UMETA(DisplayName="EvidenceCollected"),
    ObjectiveCompleted = 21 UMETA(DisplayName="ObjectiveCompleted"),
    GameStart = 22 UMETA(DisplayName="GameStart"),
    GameEnd = 23 UMETA(DisplayName="GameEnd"),
    PlayerJoined = 24 UMETA(DisplayName="PlayerJoined"),
    PlayerLeft = 25 UMETA(DisplayName="PlayerLeft"),
    LogsTypes_MAX = 26 UMETA(DisplayName="LogsTypes_MAX"),
};
