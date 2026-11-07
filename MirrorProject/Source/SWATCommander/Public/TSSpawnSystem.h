// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.TSSpawnSystem
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UDataTable;
class UTSBarricadeConfigurator;
class UTSBombSpawnConfigurator;
class UTSCharacterSpawner;
class UTSDecorativeConfigurator;
class UTSDependencyConfigurator;
class UTSDoorConfigurator;
class UTSEvidenceSpawner;
class UTSInteractiveSpawner;
class UTSLightConfigurator;
class UTSMobSpawner;
class UTSMovementZonesConfigurator;
class UTSOfficersSpawner;
class UTSSpawnCoordinator;
class UTSWindowConfigurator;

struct FMissionSpawnDataCollection;
struct FSpawnSystemLevelRefs;

enum class ETSGameplayModes : uint8;
enum class ETSSpawnLocationTypes : uint8;

#include "TSSpawnSystem.generated.h"

// Class: Class /Script/SWATCommander.TSSpawnSystem
UCLASS(Config=Engine, BlueprintType)
class SWATCOMMANDER_API ATSSpawnSystem : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UDataTable* MissionSpawnDataTable;  // +0x220

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName MissionName = FName(TEXT("None"));  // +0x228

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    ETSGameplayModes GameplayMode;  // +0x230  // default: {
            "enumType": "ETSGameplayModes",
            "value": 0
          }

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    ETSSpawnLocationTypes OfficersSpawnLocation;  // +0x231  // default: {
            "enumType": "ETSSpawnLocationTypes",
            "value": 0
   ...

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool SpawnAtBeginPlay = true;  // +0x232

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float SurrenderUnexpectedMultiplier = 1.0f;  // +0x234

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FSpawnSystemLevelRefs SpawnLevelRefs;  // +0x238  // default: "<struct>"

    UPROPERTY(VisibleAnywhere)
    FMissionSpawnDataCollection SpawnInfo;  // +0x5F8  // default: "<struct>"

    UPROPERTY(VisibleAnywhere, Replicated)
    UTSCharacterSpawner* CharacterSpawner;  // +0x810  // default: {
            "address": "0x299FF16DB40",
            "className": "TSCharact...

    UPROPERTY(VisibleAnywhere)
    UTSInteractiveSpawner* InteractiveSpawner;  // +0x818  // default: {
            "address": "0x299FDC90310",
            "className": "TSInterac...

    UPROPERTY(VisibleAnywhere)
    UTSEvidenceSpawner* EvidenceSpawner;  // +0x820  // default: {
            "address": "0x299FDC902E0",
            "className": "TSEvidenc...

    UPROPERTY(VisibleAnywhere)
    UTSOfficersSpawner* OfficersSpawner;  // +0x828  // default: {
            "address": "0x299FDC902B0",
            "className": "TSOfficer...

    UPROPERTY(VisibleAnywhere)
    UTSMobSpawner* MobsSpawner;  // +0x830  // default: {
            "address": "0x299FDC90280",
            "className": "TSMobSpaw...

    UPROPERTY(VisibleAnywhere)
    UTSDoorConfigurator* DoorConfigurator;  // +0x838  // default: {
            "address": "0x299FDC90220",
            "className": "TSDoorCon...

    UPROPERTY(VisibleAnywhere)
    UTSDecorativeConfigurator* DecorativeConfigurator;  // +0x840  // default: {
            "address": "0x299FDC901C0",
            "className": "TSDecorat...

    UPROPERTY(VisibleAnywhere)
    UTSLightConfigurator* LightConfigurator;  // +0x848  // default: {
            "address": "0x299FDC901F0",
            "className": "TSLightCo...

    UPROPERTY(VisibleAnywhere)
    UTSBarricadeConfigurator* BarricadeConfigurator;  // +0x850  // default: {
            "address": "0x299FDC90250",
            "className": "TSBarrica...

    UPROPERTY(VisibleAnywhere)
    UTSDependencyConfigurator* DependencyConfigurator;  // +0x858  // default: {
            "address": "0x299FDC90190",
            "className": "TSDepende...

    UPROPERTY(VisibleAnywhere)
    UTSMovementZonesConfigurator* MovementZonesConfigurator;  // +0x860  // default: {
            "address": "0x299FDC90160",
            "className": "TSMovemen...

    UPROPERTY(VisibleAnywhere)
    UTSBombSpawnConfigurator* BombSpawnConfigurator;  // +0x868  // default: {
            "address": "0x299FDC90130",
            "className": "TSBombSpa...

    UPROPERTY(VisibleAnywhere)
    UTSWindowConfigurator* WindowConfigurator;  // +0x870  // default: {
            "address": "0x299FDC90100",
            "className": "TSWindowC...

    UPROPERTY(VisibleAnywhere)
    UTSSpawnCoordinator* Coordinator;  // +0x878  // default: {
            "address": "0x299A75809F0",
            "className": "TSSpawnCo...


    // ── Methods ──
    UFUNCTION(BlueprintCallable)
    uint8 SpawnOnlySuspCivi();
    UFUNCTION(BlueprintCallable)
    uint8 SpawnOnlyOfficers();
    UFUNCTION(BlueprintCallable)
    uint8 SpawnNPCManually();
    UFUNCTION(BlueprintCallable)
    uint8 SpawnManually();
    UFUNCTION(BlueprintCallable)
    uint8 SetSpawnSettingsOfficers(uint8 /*struct*/ Settings);
    UFUNCTION(BlueprintPure)
    float NumUnexpectedSurrenderSuspectsCooldown();
    UFUNCTION(BlueprintPure)
    int32 NumUnexpectedSurrenderSuspectsAllowed();
    UFUNCTION(BlueprintCallable)
    bool IsGrenadeThrowingEnabled();
    UFUNCTION(BlueprintPure)
    TArray<uint8> GetValidCoversInRangeSortedByPath(UObject* Pawn, float MaxRange);
    UFUNCTION(BlueprintPure)
    UObject* GetTSSpawnerInstance(UObject* WorldContextObject);
    UFUNCTION(BlueprintCallable)
    uint8 /*struct*/ GetSpawnSettingsOfficers();
    UFUNCTION(BlueprintCallable)
    uint8 ConvertSoftRefsToHardRefs();
    UFUNCTION(BlueprintCallable)
    uint8 ClearSpawnerState();
};

