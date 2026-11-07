// Auto-generated UHT enum. Source: Enum EAICurrentResponseBranch
#pragma once

#include "CoreMinimal.h"

#include "EAICurrentResponseBranch.generated.h"

UENUM(BlueprintType)
enum class EAICurrentResponseBranch : uint8 {
    LowMorale = 0 UMETA(DisplayName="LowMorale"),
    LowHealth = 1 UMETA(DisplayName="LowHealth"),
    NoAmmo = 2 UMETA(DisplayName="NoAmmo"),
    NpcDeath = 3 UMETA(DisplayName="NpcDeath"),
    UnawareOrderToSurrender = 4 UMETA(DisplayName="UnawareOrderToSurrender"),
    None = 5 UMETA(DisplayName="None"),
    EAICurrentResponseBranch_MAX = 6 UMETA(DisplayName="EAICurrentResponseBranch_MAX"),
};
