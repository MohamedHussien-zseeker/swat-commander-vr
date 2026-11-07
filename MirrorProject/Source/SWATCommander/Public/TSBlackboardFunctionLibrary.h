// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.TSBlackboardFunctionLibrary
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "TSBlackboardFunctionLibrary.generated.h"

// Class: Class /Script/SWATCommander.TSBlackboardFunctionLibrary
UCLASS(BlueprintType)
class SWATCOMMANDER_API UTSBlackboardFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:

    // ── Methods ──
    UFUNCTION(BlueprintCallable)
    uint8 SubmitTaskToBB(UObject* inWorldContextObject, UObject* inBB, uint8 /*struct*/& inCompositeTask);
    UFUNCTION(BlueprintCallable)
    uint8 SubmitCommandToBB(UObject* inWorldContextObject, UObject* inBB, UObject* InPawn, uint8 /*struct*/& inCommandDescription);
    UFUNCTION(BlueprintCallable)
    uint8 SetVectorBB(UObject* inWorldContextObject, FName InName, uint8 /*struct*/& InVector);
    UFUNCTION(BlueprintCallable)
    uint8 SetRotatorBB(UObject* inWorldContextObject, FName InName, uint8 /*struct*/& inRotator);
    UFUNCTION(BlueprintCallable)
    uint8 SetObjectBB(UObject* inWorldContextObject, FName InName, UObject* InObject);
    UFUNCTION(BlueprintCallable)
    uint8 SetIntBB(UObject* inWorldContextObject, FName InName, int32 inInt);
    UFUNCTION(BlueprintCallable)
    uint8 SetFloatBB(UObject* inWorldContextObject, FName InName, float InFloat);
    UFUNCTION(BlueprintCallable)
    uint8 SetEnumBB(UObject* inWorldContextObject, FName InName, uint8 inEnum);
    UFUNCTION(BlueprintCallable)
    uint8 SetBoolBB(UObject* inWorldContextObject, FName InName, bool InBool);
    UFUNCTION(BlueprintCallable)
    bool HasAllObjectValueBB(UObject* inWorldContextObject, TArray<uint8>& inCharacters, FName& inKeyName, UObject* InValue);
    UFUNCTION(BlueprintCallable)
    bool HasAllEnumValueBB(UObject* inWorldContextObject, TArray<uint8>& inCharacters, FName& inKeyName, uint8 InValue);
    UFUNCTION(BlueprintCallable)
    bool HasAllBoolValueBB(UObject* inWorldContextObject, TArray<uint8>& inCharacters, FName& inKeyName, bool InValue);
    UFUNCTION(BlueprintCallable)
    uint8 /*struct*/ GetVectorBB(UObject* inWorldContextObject, FName InName, bool& OutResult);
    UFUNCTION(BlueprintCallable)
    uint8 /*struct*/ GetRotatorBB(UObject* inWorldContextObject, FName InName, bool& OutResult);
    UFUNCTION(BlueprintCallable)
    UObject* GetObjectBB(UObject* inWorldContextObject, FName InName, bool& OutResult);
    UFUNCTION(BlueprintCallable)
    int32 GetIntBB(UObject* inWorldContextObject, FName InName, bool& OutResult);
    UFUNCTION(BlueprintCallable)
    float GetFloatBB(UObject* inWorldContextObject, FName InName, bool& OutResult);
    UFUNCTION(BlueprintCallable)
    uint8 GetEnumBB(UObject* inWorldContextObject, FName InName, bool& OutResult);
    UFUNCTION(BlueprintCallable)
    UObject* GetCharacterTSBB(UObject* inWorldContextObject, FName InName, bool& OutResult);
    UFUNCTION(BlueprintCallable)
    UObject* GetCaracterBB(UObject* inWorldContextObject, FName InName, bool& OutResult);
    UFUNCTION(BlueprintCallable)
    bool GetBoolBB(UObject* inWorldContextObject, FName InName, bool& OutResult);
    UFUNCTION(BlueprintCallable)
    UObject* GetActorBB(UObject* inWorldContextObject, FName InName, bool& OutResult);
};

