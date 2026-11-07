// Auto-generated UHT enum. Source: Enum ETSGameplayModes
#pragma once

#include "CoreMinimal.h"

#include "ETSGameplayModes.generated.h"

UENUM(BlueprintType)
enum class ETSGameplayModes : uint8 {
    None = 0 UMETA(DisplayName="None"),
    HighRiskWarrent = 1 UMETA(DisplayName="HighRiskWarrent"),
    BarricadedSuspect = 2 UMETA(DisplayName="BarricadedSuspect"),
    HostageRescue = 3 UMETA(DisplayName="HostageRescue"),
    BombThread = 4 UMETA(DisplayName="BombThread"),
    NightOps = 5 UMETA(DisplayName="NightOps"),
    Evacuation = 6 UMETA(DisplayName="Evacuation"),
    RandomRange = 7 UMETA(DisplayName="RandomRange"),
    TankOnTank = 8 UMETA(DisplayName="TankOnTank"),
    GangArrival = 9 UMETA(DisplayName="GangArrival"),
    SniperParty = 10 UMETA(DisplayName="SniperParty"),
    Afterlife = 11 UMETA(DisplayName="Afterlife"),
    LowAmmo = 12 UMETA(DisplayName="LowAmmo"),
    SWATCombatPractice = 13 UMETA(DisplayName="SWATCombatPractice"),
    CustomGame = 14 UMETA(DisplayName="CustomGame"),
    ETSGameplayModes_MAX = 15 UMETA(DisplayName="ETSGameplayModes_MAX"),
};
