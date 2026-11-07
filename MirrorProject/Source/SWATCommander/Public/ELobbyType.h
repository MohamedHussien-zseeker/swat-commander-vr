// Auto-generated UHT enum. Source: Enum LobbyType
#pragma once

#include "CoreMinimal.h"

#include "ELobbyType.generated.h"

UENUM(BlueprintType)
enum class ELobbyType : uint8 {
    None = 0 UMETA(DisplayName="None"),
    PrivateLobby = 1 UMETA(DisplayName="PrivateLobby"),
    PublicLobby = 2 UMETA(DisplayName="PublicLobby"),
    PrivateSession = 3 UMETA(DisplayName="PrivateSession"),
    PublicSession = 4 UMETA(DisplayName="PublicSession"),
    LobbyType_MAX = 5 UMETA(DisplayName="LobbyType_MAX"),
};
