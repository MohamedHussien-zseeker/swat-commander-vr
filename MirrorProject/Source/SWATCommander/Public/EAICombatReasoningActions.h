// Auto-generated UHT enum. Source: Enum EAICombatReasoningActions
#pragma once

#include "CoreMinimal.h"

#include "EAICombatReasoningActions.generated.h"

UENUM(BlueprintType)
enum class EAICombatReasoningActions : uint8 {
    None = 0 UMETA(DisplayName="None"),
    PerformRegularLogic = 1 UMETA(DisplayName="PerformRegularLogic"),
    ChangePositionInZone = 2 UMETA(DisplayName="ChangePositionInZone"),
    ApproachEnemy = 3 UMETA(DisplayName="ApproachEnemy"),
    RunToAnotherZone = 4 UMETA(DisplayName="RunToAnotherZone"),
    FindLoS = 5 UMETA(DisplayName="FindLoS"),
    TakeHostage = 6 UMETA(DisplayName="TakeHostage"),
    KillHostage = 7 UMETA(DisplayName="KillHostage"),
    RPGInvestigation = 8 UMETA(DisplayName="RPGInvestigation"),
    ToggleBuildingPower = 9 UMETA(DisplayName="ToggleBuildingPower"),
    TakeCoverInZone = 10 UMETA(DisplayName="TakeCoverInZone"),
    Flank = 11 UMETA(DisplayName="Flank"),
    MAX = 12 UMETA(DisplayName="MAX"),
};
