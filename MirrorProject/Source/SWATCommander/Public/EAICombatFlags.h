// Auto-generated UHT enum. Source: Enum EAICombatFlags
#pragma once

#include "CoreMinimal.h"

#include "EAICombatFlags.generated.h"

UENUM(BlueprintType)
enum class EAICombatFlags : uint8 {
    NoCombat = 0 UMETA(DisplayName="NoCombat"),
    NoInterruptAllowCombat = 1 UMETA(DisplayName="NoInterruptAllowCombat"),
    InterruptAllowCombat = 2 UMETA(DisplayName="InterruptAllowCombat"),
    EAICombatFlags_MAX = 3 UMETA(DisplayName="EAICombatFlags_MAX"),
};
