// Auto-generated UHT enum. Source: Enum EMobActionType
#pragma once

#include "CoreMinimal.h"

#include "EMobActionType.generated.h"

UENUM(BlueprintType)
enum class EMobActionType : uint8 {
    PlayAnimation = 0 UMETA(DisplayName="PlayAnimation"),
    PlayDialog = 1 UMETA(DisplayName="PlayDialog"),
    Sit = 2 UMETA(DisplayName="Sit"),
    Standup = 3 UMETA(DisplayName="Standup"),
    Surrender = 4 UMETA(DisplayName="Surrender"),
    RunToLocation = 5 UMETA(DisplayName="RunToLocation"),
    MoveToLocation = 6 UMETA(DisplayName="MoveToLocation"),
    Attack = 7 UMETA(DisplayName="Attack"),
    EMobActionType_MAX = 8 UMETA(DisplayName="EMobActionType_MAX"),
};
