// Auto-generated UHT enum. Source: Enum EObjectiveType
#pragma once

#include "CoreMinimal.h"

#include "EObjectiveType.generated.h"

UENUM(BlueprintType)
enum class EObjectiveType : uint8 {
    Restrain = 0 UMETA(DisplayName="Restrain"),
    UseObject = 1 UMETA(DisplayName="UseObject"),
    AliveCivilians = 2 UMETA(DisplayName="AliveCivilians"),
    OrderToChaos = 3 UMETA(DisplayName="OrderToChaos"),
    Neutralize = 4 UMETA(DisplayName="Neutralize"),
    FinishTutorial = 5 UMETA(DisplayName="FinishTutorial"),
    RestrainOrUse = 6 UMETA(DisplayName="RestrainOrUse"),
    Max = 7 UMETA(DisplayName="Max"),
};
