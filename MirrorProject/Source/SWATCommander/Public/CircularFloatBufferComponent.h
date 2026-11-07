// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.CircularFloatBufferComponent
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "CircularFloatBufferComponent.generated.h"

// Class: Class /Script/SWATCommander.CircularFloatBufferComponent
UCLASS(DefaultToInstanced, Config=Engine, BlueprintType)
class SWATCOMMANDER_API UCircularFloatBufferComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TMap<int32, FString> Buffers;  // +0xB0  // default: {
            "note": "not yet supported",
            "type": "MapProperty"
...

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 DefaultBufferSize = 6;  // +0x100


    // ── Methods ──
    UFUNCTION(BlueprintCallable)
    uint8 SubmitFloatArray(int32 BufferID, TArray<uint8>& InFloatArray);
    UFUNCTION(BlueprintCallable)
    uint8 SubmitFloat(int32 BufferID, float InFloat);
    UFUNCTION(BlueprintCallable)
    uint8 SetDefaultBufferSize(int32 InSize);
    UFUNCTION(BlueprintCallable)
    uint8 RemoveBuffer(int32 BufferID);
    UFUNCTION(BlueprintPure)
    float GetSumOfAllBuffers();
    UFUNCTION(BlueprintPure)
    float GetSum(int32 BufferID);
    UFUNCTION(BlueprintPure)
    int32 GetBufferWithMaxSum();
    UFUNCTION(BlueprintPure)
    float GetArraySum(TArray<uint8>& inArray);
    UFUNCTION(BlueprintCallable)
    uint8 CreateBuffer(int32 BufferID, bool bResetIfExists);
    UFUNCTION(BlueprintCallable)
    uint8 ClearBuffer(int32 BufferID);
    UFUNCTION(BlueprintCallable)
    uint8 ClearAllBuffers();
};

