// Auto-generated UHT enum. Source: Enum EAICommandCategory
#pragma once

#include "CoreMinimal.h"

#include "EAICommandCategory.generated.h"

UENUM(BlueprintType)
enum class EAICommandCategory : uint8 {
    None = 0 UMETA(DisplayName="None"),
    Common = 1 UMETA(DisplayName="Common"),
    Investigate = 2 UMETA(DisplayName="Investigate"),
    Move = 3 UMETA(DisplayName="Move"),
    Open = 4 UMETA(DisplayName="Open"),
    Breach = 5 UMETA(DisplayName="Breach"),
    Deploy = 6 UMETA(DisplayName="Deploy"),
    Request = 7 UMETA(DisplayName="Request"),
    Max = 8 UMETA(DisplayName="Max"),
};
