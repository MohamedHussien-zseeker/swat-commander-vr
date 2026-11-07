// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.AppearanceComponent
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UDataTable;
class ATSCharacterBase;

struct FCharacterAppearance;

#include "AppearanceComponent.generated.h"

// Class: Class /Script/SWATCommander.AppearanceComponent
UCLASS(DefaultToInstanced, Config=Engine, BlueprintType)
class SWATCOMMANDER_API UAppearanceComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UDataTable* AppearanceDataTable;  // +0xB0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCharacterAppearance Appearance;  // +0xB8  // default: "<struct>"

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool LoadOnBeginPlay = false;  // +0x258

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    ATSCharacterBase* CharacterRef;  // +0x260


    // ── Methods ──
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 LoadAppearance();
};

