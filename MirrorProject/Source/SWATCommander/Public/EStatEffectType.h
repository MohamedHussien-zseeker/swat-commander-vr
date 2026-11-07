// Auto-generated UHT enum. Source: Enum EStatEffectType
#pragma once

#include "CoreMinimal.h"

#include "EStatEffectType.generated.h"

UENUM(BlueprintType)
enum class EStatEffectType : uint8 {
    RunAway = 0 UMETA(DisplayName="RunAway"),
    SupressFire = 1 UMETA(DisplayName="SupressFire"),
    StopWalking = 2 UMETA(DisplayName="StopWalking"),
    SlowWalkingSpeed = 3 UMETA(DisplayName="SlowWalkingSpeed"),
    Cover = 4 UMETA(DisplayName="Cover"),
    DropFireAccuracy = 5 UMETA(DisplayName="DropFireAccuracy"),
    ChangeFireRate = 6 UMETA(DisplayName="ChangeFireRate"),
    ChangeRetargetTimeRate = 7 UMETA(DisplayName="ChangeRetargetTimeRate"),
    EStatEffectType_MAX = 8 UMETA(DisplayName="EStatEffectType_MAX"),
};
