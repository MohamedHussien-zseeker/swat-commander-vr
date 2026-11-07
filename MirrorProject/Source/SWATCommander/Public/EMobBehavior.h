// Auto-generated UHT enum. Source: Enum EMobBehavior
#pragma once

#include "CoreMinimal.h"

#include "EMobBehavior.generated.h"

UENUM(BlueprintType)
enum class EMobBehavior : uint8 {
    None = 0 UMETA(DisplayName="None"),
    CLEANING = 1 UMETA(DisplayName="CLEANING"),
    COOKING = 2 UMETA(DisplayName="COOKING"),
    DANCING = 4 UMETA(DisplayName="DANCING"),
    FUCKING = 8 UMETA(DisplayName="FUCKING"),
    DRINKING = 16 UMETA(DisplayName="DRINKING"),
    WORKING = 32 UMETA(DisplayName="WORKING"),
    PACKING = 64 UMETA(DisplayName="PACKING"),
    ANY = 127 UMETA(DisplayName="ANY"),
    EMobBehavior_MAX = 128 UMETA(DisplayName="EMobBehavior_MAX"),
};
