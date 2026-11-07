// Auto-generated UHT enum. Source: Enum EClearingPathAction
#pragma once

#include "CoreMinimal.h"

#include "EClearingPathAction.generated.h"

UENUM(BlueprintType)
enum class EClearingPathAction : uint8 {
    None = 0 UMETA(DisplayName="None"),
    ClearanceStatus = 1 UMETA(DisplayName="ClearanceStatus"),
    Wait = 2 UMETA(DisplayName="Wait"),
    MarkPosition = 3 UMETA(DisplayName="MarkPosition"),
    LowerRaiseWeapon = 4 UMETA(DisplayName="LowerRaiseWeapon"),
    EClearingPathAction_MAX = 5 UMETA(DisplayName="EClearingPathAction_MAX"),
};
