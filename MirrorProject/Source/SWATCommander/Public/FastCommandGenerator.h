// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.FastCommandGenerator
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class AActor;

enum class EAICommandSignature : uint8;

#include "FastCommandGenerator.generated.h"

// Class: Class /Script/SWATCommander.FastCommandGenerator
UCLASS(BlueprintType)
class SWATCOMMANDER_API UFastCommandGenerator : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    AActor* playerActor;  // +0x48

    UPROPERTY(VisibleAnywhere)
    EAICommandSignature DefaultCommand;  // +0x50  // default: {
            "enumType": "EAICommandSignature",
            "value": 0
     ...

    UPROPERTY(VisibleAnywhere)
    EAICommandSignature DefaultDoorCommand;  // +0x51  // default: {
            "enumType": "EAICommandSignature",
            "value": 0
     ...

    UPROPERTY(VisibleAnywhere)
    EAICommandSignature DefaultOpenDoorCommand;  // +0x52  // default: {
            "enumType": "EAICommandSignature",
            "value": 0
     ...

    UPROPERTY(VisibleAnywhere)
    EAICommandSignature DefaultLockedDoorCommand;  // +0x53  // default: {
            "enumType": "EAICommandSignature",
            "value": 0
     ...

    UPROPERTY(VisibleAnywhere)
    EAICommandSignature DefaultUnlockedDoorCommand;  // +0x54  // default: {
            "enumType": "EAICommandSignature",
            "value": 0
     ...

};

