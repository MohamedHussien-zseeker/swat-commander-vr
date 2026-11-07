// Auto-generated UHT enum. Source: Enum EAICompositeTaskFinishType
#pragma once

#include "CoreMinimal.h"

#include "EAICompositeTaskFinishType.generated.h"

UENUM(BlueprintType)
enum class EAICompositeTaskFinishType : uint8 {
    Idle = 0 UMETA(DisplayName="Idle"),
    MoveToPreviousLocation = 1 UMETA(DisplayName="MoveToPreviousLocation"),
    FindNewLocation = 2 UMETA(DisplayName="FindNewLocation"),
    Loop = 3 UMETA(DisplayName="Loop"),
    EAICompositeTaskFinishType_MAX = 4 UMETA(DisplayName="EAICompositeTaskFinishType_MAX"),
};
