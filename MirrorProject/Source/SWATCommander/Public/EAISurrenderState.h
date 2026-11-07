// Auto-generated UHT enum. Source: Enum EAISurrenderState
#pragma once

#include "CoreMinimal.h"

#include "EAISurrenderState.generated.h"

UENUM(BlueprintType)
enum class EAISurrenderState : uint8 {
    None = 0 UMETA(DisplayName="None"),
    Start = 1 UMETA(DisplayName="Start"),
    Loop = 2 UMETA(DisplayName="Loop"),
    Caff = 3 UMETA(DisplayName="Caff"),
    StandUp = 4 UMETA(DisplayName="StandUp"),
    PickUpStandUp = 5 UMETA(DisplayName="PickUpStandUp"),
    MoveLocation = 6 UMETA(DisplayName="MoveLocation"),
    FakeMoveToLocation = 7 UMETA(DisplayName="FakeMoveToLocation"),
    FakePDropMoveToLocation = 8 UMETA(DisplayName="FakePDropMoveToLocation"),
    FakeOnKnees = 9 UMETA(DisplayName="FakeOnKnees"),
    FakePDropOnKnees = 10 UMETA(DisplayName="FakePDropOnKnees"),
    Max = 11 UMETA(DisplayName="Max"),
};
