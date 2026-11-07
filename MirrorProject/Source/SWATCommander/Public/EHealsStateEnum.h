// Auto-generated UHT enum. Source: Enum HealsStateEnum
#pragma once

#include "CoreMinimal.h"

#include "EHealsStateEnum.generated.h"

UENUM(BlueprintType)
enum class EHealsStateEnum : uint8 {
    Alive = 0 UMETA(DisplayName="Alive"),
    FakeDead = 1 UMETA(DisplayName="FakeDead"),
    Incapacitated = 2 UMETA(DisplayName="Incapacitated"),
    Dead = 3 UMETA(DisplayName="Dead"),
    HealsStateEnum_MAX = 4 UMETA(DisplayName="HealsStateEnum_MAX"),
};
