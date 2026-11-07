// Auto-generated UHT enum. Source: Enum EAIExtremeSituationResponse
#pragma once

#include "CoreMinimal.h"

#include "EAIExtremeSituationResponse.generated.h"

UENUM(BlueprintType)
enum class EAIExtremeSituationResponse : uint8 {
    None = 0 UMETA(DisplayName="None"),
    Surrender = 1 UMETA(DisplayName="Surrender"),
    FakeSurrender = 2 UMETA(DisplayName="FakeSurrender"),
    FakeDeath = 3 UMETA(DisplayName="FakeDeath"),
    RunAndHide = 4 UMETA(DisplayName="RunAndHide"),
    TakeHostage = 5 UMETA(DisplayName="TakeHostage"),
    KillHostage = 6 UMETA(DisplayName="KillHostage"),
    HideInRoom = 7 UMETA(DisplayName="HideInRoom"),
    Attack = 8 UMETA(DisplayName="Attack"),
    EAIExtremeSituationResponse_MAX = 9 UMETA(DisplayName="EAIExtremeSituationResponse_MAX"),
};
