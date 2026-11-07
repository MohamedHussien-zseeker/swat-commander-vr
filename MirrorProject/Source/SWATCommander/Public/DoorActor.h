// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.DoorActor
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

class UArrowComponent;
class AMovementZoneProxyActor;
class AMovementZoneTrigger;
class ANavLinkProxy;
class USoundBase;
class UStaticMesh;

struct FClearingWaypointProxySet;
struct FClearingWaypointSet;
struct FTransform;

enum class EDoorBarricadedState : uint8;
enum class EDoorLeafType : uint8;
enum class EDoorLockType : uint8;
enum class EDoorOpeningMechanism : uint8;
enum class EDoorSoundProfile : uint8;
enum class EAllowMovementGenerationFlags : uint8;

#include "DoorActor.generated.h"

// Class: Class /Script/SWATCommander.DoorActor
UCLASS(Config=Engine, BlueprintType)
class SWATCOMMANDER_API ADoorActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EDoorSoundProfile SoundProfile;  // +0x220  // default: {
            "enumType": "DoorSoundProfile",
            "value": 0
          }

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EAllowMovementGenerationFlags AllowMovementGenerationFlags;  // +0x221  // default: {
            "enumType": "EAllowMovementGenerationFlags",
            "value...

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSoftObjectPtr<AMovementZoneTrigger> FrontRoomZone;  // +0x228  // default: {
            "offset": 552,
            "type": "SoftObjectProperty"
       ...

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSoftObjectPtr<AMovementZoneTrigger> BackRoomZone;  // +0x250  // default: {
            "offset": 592,
            "type": "SoftObjectProperty"
       ...

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    ANavLinkProxy* NavLinkRef;  // +0x278

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<ANavLinkProxy*> NavLinkRefs;  // +0x280  // default: []

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EDoorOpeningMechanism OpeningMechanismType;  // +0x290  // default: {
            "enumType": "DoorOpeningMechanism",
            "value": 0
    ...

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    EDoorLeafType LeafType;  // +0x291  // default: {
            "enumType": "DoorLeafType",
            "value": 0
          }

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    EDoorLockType LockType;  // +0x292  // default: {
            "enumType": "DoorLockType",
            "value": 0
          }

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    EDoorBarricadedState BarricadedState;  // +0x293  // default: {
            "enumType": "DoorBarricadedState",
            "value": 0
     ...

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsConstantThreadForOfficers = false;  // +0x294

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool RandomizeArrowColors = false;  // +0x295

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    bool IsLocked = false;  // +0x296

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    bool IsChecked = false;  // +0x297

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    bool IsOpened = false;  // +0x298

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    bool IsOpenedBack = false;  // +0x299

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    bool IsDestroyed = false;  // +0x29A

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    bool IsLockDestroyed = false;  // +0x29B

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsFortifiedChecked = false;  // +0x29C

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    bool CanMirror = true;  // +0x29D

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    bool ShouldMakeNoise = true;  // +0x29E

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    bool IsDeployingStarted = false;  // +0x29F

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsBarricadedInFrontSide = false;  // +0x2A0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsBarricadedEmptyDoor = false;  // +0x2A1

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool CanBeUsedAsPOI = true;  // +0x2A2

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool DontCheckStackupDistances = false;  // +0x2A3

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UStaticMesh* DoorMesh;  // +0x2A8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UStaticMesh* DoorFrameMesh;  // +0x2B0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundBase* OpenSound;  // +0x2B8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundBase* CloseSound;  // +0x2C0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundBase* CheckSound;  // +0x2C8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundBase* LockedSound;  // +0x2D0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundBase* LockingSound;  // +0x2D8

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundBase* PickLockSound;  // +0x2E0

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundBase* FailedPickLockSound;  // +0x2E8

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    bool DoorWedge = false;  // +0x2F0

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    bool ExplosiveC2Back = false;  // +0x2F1

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    bool ExplosiveC2Front = false;  // +0x2F2

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
    float OpenDoorDegree = 75.0f;  // +0x2F4

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 NumEntrances = 0;  // +0x2F8

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    UArrowComponent* FrontSideCenterArrow;  // +0x300  // default: {
            "address": "0x2999FD02070",
            "className": "ArrowComp...

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    UArrowComponent* BackSideCenterArrow;  // +0x308  // default: {
            "address": "0x2999FD01BE0",
            "className": "ArrowComp...

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    UArrowComponent* FrontCommandCenterArrow;  // +0x310  // default: {
            "address": "0x2999FD01750",
            "className": "ArrowComp...

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    UArrowComponent* BackCommandCenterArrow;  // +0x318  // default: {
            "address": "0x2999FD012C0",
            "className": "ArrowComp...

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool EnableDebugGridDraw = false;  // +0x320

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float DebugGridDrawTime = 15.0f;  // +0x324

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float StackupGridSize = 800.0f;  // +0x328

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float StackupGridStepSize = 80.0f;  // +0x32C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float GridPointValidationSphereRadius = 80.0f;  // +0x330

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float GridPointNearRangeDistance = 50.0f;  // +0x334

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 GridResultFilterSeed = 3;  // +0x338

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 GridResultFilterOffset = 4;  // +0x33C

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<AMovementZoneProxyActor> MovementZoneProxyClass;  // +0x340

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<AMovementZoneTrigger> MovementZoneTriggerClass;  // +0x348

    UPROPERTY(EditAnywhere)
    float DistanceBetweenFrontAndBackRect = 100.0f;  // +0x350

    UPROPERTY(EditAnywhere)
    float HalfWidthOfRect = 100.0f;  // +0x354

    UPROPERTY(EditAnywhere)
    float LateralOffsetLR = 80.0f;  // +0x358

    UPROPERTY(EditAnywhere)
    float DepthOffsetFromWall = 10.0f;  // +0x35C

    UPROPERTY(EditAnywhere)
    TArray<FTransform> FLStackupTransforms;  // +0x360  // default: []

    UPROPERTY(EditAnywhere)
    TArray<FTransform> FRStackupTransforms;  // +0x370  // default: []

    UPROPERTY(EditAnywhere)
    TArray<FTransform> FCStackupTransforms;  // +0x380  // default: []

    UPROPERTY(EditAnywhere)
    TArray<FTransform> BLStackupTransforms;  // +0x390  // default: []

    UPROPERTY(EditAnywhere)
    TArray<FTransform> BRStackupTransforms;  // +0x3A0  // default: []

    UPROPERTY(EditAnywhere)
    TArray<FTransform> BCStackupTransforms;  // +0x3B0  // default: []

    UPROPERTY(EditAnywhere)
    TArray<FClearingWaypointSet> FCClearingWaypoints;  // +0x3C0  // default: []

    UPROPERTY(EditAnywhere)
    TArray<FClearingWaypointSet> FLClearingWaypoints;  // +0x3D0  // default: []

    UPROPERTY(EditAnywhere)
    TArray<FClearingWaypointSet> FRClearingWaypoints;  // +0x3E0  // default: []

    UPROPERTY(EditAnywhere)
    TArray<FClearingWaypointSet> BCClearingWaypoints;  // +0x3F0  // default: []

    UPROPERTY(EditAnywhere)
    TArray<FClearingWaypointSet> BLClearingWaypoints;  // +0x400  // default: []

    UPROPERTY(EditAnywhere)
    TArray<FClearingWaypointSet> BRClearingWaypoints;  // +0x410  // default: []

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    TArray<AMovementZoneProxyActor*> FLStackupProxyActors;  // +0x420  // default: []

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    TArray<AMovementZoneProxyActor*> FRStackupProxyActors;  // +0x430  // default: []

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    TArray<AMovementZoneProxyActor*> FCStackupProxyActors;  // +0x440  // default: []

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    TArray<AMovementZoneProxyActor*> BLStackupProxyActors;  // +0x450  // default: []

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    TArray<AMovementZoneProxyActor*> BRStackupProxyActors;  // +0x460  // default: []

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    TArray<AMovementZoneProxyActor*> BCStackupProxyActors;  // +0x470  // default: []

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    TArray<FClearingWaypointProxySet> FLWaypointsProxyActors;  // +0x480  // default: []

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    TArray<FClearingWaypointProxySet> FRWaypointsProxyActors;  // +0x490  // default: []

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    TArray<FClearingWaypointProxySet> FCWaypointsProxyActors;  // +0x4A0  // default: []

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    TArray<FClearingWaypointProxySet> BLWaypointsProxyActors;  // +0x4B0  // default: []

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    TArray<FClearingWaypointProxySet> BRWaypointsProxyActors;  // +0x4C0  // default: []

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    TArray<FClearingWaypointProxySet> BCWaypointsProxyActors;  // +0x4D0  // default: []

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    bool IsShownClearingProxies = false;  // +0x4E0

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    bool IsProxyVisibleA = true;  // +0x4E1

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    bool IsProxyVisibleB = true;  // +0x4E2

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    bool IsProxyVisibleC = true;  // +0x4E3

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    bool IsProxyVisibleD = true;  // +0x4E4


    // ── Methods ──
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 Unlock(bool Key, bool Wedge, UObject* Character);
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 ToggleState(bool HitMain, UObject* Character);
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 OpenAI(bool CloseBehind, bool LockBehind, UObject* Character);
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 OnSettingsUpdated(bool DoorLocked, bool DoorOpened, bool DoorOpenedBack, float DoorOpenDegree);
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 OnBarricaded();
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 Lock(bool Key, bool Wedge);
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    bool IsOpenedWideEnough(float Angle);
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    bool IsLockedFromFront();
    UFUNCTION(BlueprintPure)
    bool IsForward(uint8 /*struct*/ inPlayerLocation);
    UFUNCTION(BlueprintPure)
    bool HasWaypoints(uint8 /*enum*/ inStackupMode, bool inIsFront);
    UFUNCTION(BlueprintPure)
    uint8 /*struct*/ GetWaypoint(uint8 /*enum*/ inStackupMode, bool inIsFront, int32 inStackupIndex, int32 inWaypointIndex, bool& outSuccess);
    UFUNCTION(BlueprintPure)
    TArray<uint8> GetStackupTransformsV2(TArray<uint8>& inOfficers, uint8 /*struct*/& inPlayerLocation, uint8 /*enum*/& OutMode, bool& OutIsForward);
    UFUNCTION(BlueprintPure)
    int32 GetNumberOfWaypoints(uint8 /*enum*/ inStackupMode, bool inIsFront, int32 inStackupIndex);
    UFUNCTION(BlueprintPure)
    UObject* GetMovementZone(uint8 /*struct*/& inPlayerLocation);
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    bool GetIsRammedStatus();
    UFUNCTION(BlueprintPure)
    uint8 /*struct*/ GetCenterStandRotation(uint8 /*struct*/ inPlayerLocation);
    UFUNCTION(BlueprintPure)
    uint8 /*struct*/ GetCenterStandLocation(uint8 /*struct*/ inPlayerLocation);
    UFUNCTION(BlueprintPure)
    uint8 /*struct*/ GetCenterDoorLocation();
    UFUNCTION(BlueprintPure)
    uint8 /*struct*/ GetCenterCommandStandRotation(uint8 /*struct*/ inPlayerLocation);
    UFUNCTION(BlueprintPure)
    uint8 /*struct*/ GetCenterCommandStandLocation(uint8 /*struct*/ inPlayerLocation);
    UFUNCTION(BlueprintPure)
    UObject* GetCenterCommandStandArrow(uint8 /*struct*/ inPlayerLocation);
    UFUNCTION(BlueprintPure)
    TArray<uint8> GetAllWaypoints(uint8 /*enum*/ inStackupMode, bool inIsFront, int32 inStackupIndex);
    UFUNCTION(BlueprintPure)
    TArray<uint8> GetAllStackupTransformsForSideV2(uint8 /*struct*/& inPlayerLocation);
    UFUNCTION(BlueprintPure)
    int32 GetAllStackupNumberForSideV2(uint8 /*struct*/& inPlayerLocation);
    UFUNCTION(BlueprintPure)
    int32 FindMyStackupIndex(uint8 /*struct*/& InLocation, float inDistanceLimit);
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 Explode(UObject* inExploderCharacter, bool ForceExplosion);
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    uint8 CloseAI(UObject* InCharacter);
};

