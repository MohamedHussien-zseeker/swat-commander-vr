// Auto-generated UHT-style header from UEVR-MCP. Source type: Class /Script/SWATCommander.TSHelperFunctionLibrary
// This file is intended for use inside a UE4/UE5 editor project. Drop into
// Source/<Module>/Public/ and let UnrealHeaderTool compile it.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"


#include "TSHelperFunctionLibrary.generated.h"

// Class: Class /Script/SWATCommander.TSHelperFunctionLibrary
UCLASS(BlueprintType)
class SWATCOMMANDER_API UTSHelperFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:

    // ── Methods ──
    UFUNCTION(BlueprintCallable)
    TArray<uint8> SwitchObjectiveStatus(TArray<uint8>& inObjectives, int32 inObjectiveID, uint8 /*enum*/ inStatus);
    UFUNCTION(BlueprintCallable)
    TArray<uint8> SortVectorArray(TArray<uint8> inVectorList, uint8 /*struct*/ inTargetVector, bool inAscendingOrder);
    UFUNCTION(BlueprintCallable)
    uint8 SortPlayers(TArray<uint8>& InputPlayers, TArray<uint8>& SortedPlayers);
    UFUNCTION(BlueprintCallable)
    uint8 SortMissionNames(TArray<uint8>& InputMissionNames, TArray<uint8>& SortPriority, TArray<uint8>& SortedMissionNames);
    UFUNCTION(BlueprintCallable)
    uint8 SortGamemodes(TArray<uint8>& InputModes, TArray<uint8>& SortPriority, TArray<uint8>& SortedModes);
    UFUNCTION(BlueprintCallable)
    uint8 SortFriendsByOnlineStatus(TArray<uint8>& FriendsIDList, TArray<uint8>& FriendsStatusList, TArray<uint8>& SortedFriendsList);
    UFUNCTION(BlueprintCallable)
    TArray<uint8> SortActorsByDistance(TArray<uint8> inActorsList, uint8 /*struct*/ inTargetVector, bool inAscendingOrder);
    UFUNCTION(BlueprintCallable)
    uint8 SetUIScale(float CustomUIScale);
    UFUNCTION(BlueprintCallable)
    bool SetSystemMicDevice(FString DeviceID);
    UFUNCTION(BlueprintCallable)
    bool SetSteamMicDevice(FString DeviceID);
    UFUNCTION(BlueprintCallable)
    uint8 SetGadgetUsageStatus(int32 gadgetsCount, int32 Data, int32 gadgetID, bool newStatus, int32& newData);
    UFUNCTION(BlueprintCallable)
    uint8 SetGadgetsUsageStatus(TArray<uint8> gadgetsStatus, int32& newData);
    UFUNCTION(BlueprintCallable)
    uint8 SendSignalToAI(UObject* inSender, uint8 /*enum*/ InChannel, uint8 /*enum*/ inSignalType, UObject* inSignalTargetActor);
    UFUNCTION(BlueprintCallable)
    uint8 PrintLog(FString Title, FString Data, TArray<uint8> ExtraLines, bool bToScreen, bool bToLog, uint8 /*struct*/ Color, float Duration);
    UFUNCTION(BlueprintCallable)
    bool LineOfSightToVector(UObject* inFromActor, uint8 /*struct*/ inToActor, uint8 /*struct*/ ViewPoint, bool bDrawDebug);
    UFUNCTION(BlueprintCallable)
    bool LineOfSightTo(UObject* InActor, UObject* Other, uint8 /*struct*/ ViewPoint, bool bAlternateChecks, bool bDrawDebug);
    UFUNCTION(BlueprintPure)
    bool IsCheatFlagEnabled(UObject* inWorldContextObject, uint8 /*enum*/ inFlag);
    UFUNCTION(BlueprintPure)
    bool IsCharacterAlive(UObject* InCharacter);
    UFUNCTION(BlueprintCallable)
    bool IsActorABehindActorB(UObject* inActorA, UObject* inActorB);
    UFUNCTION(BlueprintCallable)
    bool HeadToHeadTrace(UObject* inMain, UObject* inOther, FName inHeadSocket, bool bDrawDebug);
    UFUNCTION(BlueprintPure)
    bool HasOnlyOneTeamOrOfficerAlive(UObject* inWorldContextObject);
    UFUNCTION(BlueprintPure)
    bool HasAliveTeamMembers(UObject* inWorldContextObject);
    UFUNCTION(BlueprintPure)
    bool HasAliveRedTeamMembers(UObject* inWorldContextObject);
    UFUNCTION(BlueprintPure)
    bool HasAliveOrIncapasTeamMembers(UObject* inWorldContextObject);
    UFUNCTION(BlueprintPure)
    bool HasAliveOrIncapasRedTeamMembers(UObject* inWorldContextObject);
    UFUNCTION(BlueprintPure)
    bool HasAliveOrIncapasBlueTeamMembers(UObject* inWorldContextObject);
    UFUNCTION(BlueprintPure)
    bool HasAliveBlueTeamMembers(UObject* inWorldContextObject);
    UFUNCTION(BlueprintPure)
    TArray<uint8> GetWeaponStats(uint8 /*struct*/& WeaponStats);
    UFUNCTION(BlueprintCallable)
    uint8 GetVectorForLineTrace(UObject* InCharacter, float TraceDistance, bool& Success, uint8 /*struct*/& StartLocation, uint8 /*struct*/& TraceDirection, uint8 /*struct*/& EndLocation);
    UFUNCTION(BlueprintPure)
    UObject* GetTSSpawnModificationSystem(UObject* inWorldContextObject);
    UFUNCTION(BlueprintPure)
    TArray<uint8> GetOperatorStats(uint8 /*struct*/& OperatorStats);
    UFUNCTION(BlueprintPure)
    uint8 /*enum*/ GetOfficersSpawnLocationFromText(FName& InName);
    UFUNCTION(BlueprintCallable)
    TArray<uint8> GetObjectsInRadius(TArray<uint8>& Objects, uint8 /*struct*/& Center, float Radius);
    UFUNCTION(BlueprintPure)
    FName GetNoiseTagName(uint8 /*enum*/ InType);
    UFUNCTION(BlueprintPure)
    uint8 /*enum*/ GetNoiseEnumByTag(FName InTag);
    UFUNCTION(BlueprintCallable)
    float GetNavMeshPathLength(UObject* WorldContextObject, uint8 /*struct*/& StartLocation, uint8 /*struct*/& DestLocation, UObject* QuerierActor);
    UFUNCTION(BlueprintCallable)
    TArray<uint8> GetLocationsFromActors(TArray<uint8>& Actors);
    UFUNCTION(BlueprintPure)
    FString GetGameplayModePrettyName(uint8 /*enum*/ inGameplayMode);
    UFUNCTION(BlueprintPure)
    uint8 /*struct*/ GetGameplayModeDescription(UObject* inGameplayModeTable, uint8 /*enum*/ inGameplayMode);
    UFUNCTION(BlueprintPure)
    FText GetGameDifficultyPrettyName(uint8 /*enum*/ inMode);
    UFUNCTION(BlueprintPure)
    FName GetGameDifficultyName(uint8 /*enum*/ inMode);
    UFUNCTION(BlueprintPure)
    UObject* GetGameConstantsTS(UObject* inWorldContextObject);
    UFUNCTION(BlueprintCallable)
    uint8 GetGadgetsUsageStatus(int32 gadgetsCount, int32 Data, TArray<uint8>& gadgetsStatus);
    UFUNCTION(BlueprintPure)
    uint8 /*enum*/ GetDifficultyMode(UObject* inWorldContextObject);
    UFUNCTION(BlueprintCallable)
    TArray<uint8> GetConnectedZonesGraph(UObject* inStartZone, int32 InDepth, TArray<uint8>& ExcludedZones);
    UFUNCTION(BlueprintCallable)
    UObject* GetClosestCoverByLocation(TArray<uint8> inCoverPoints, uint8 /*struct*/ InLocation);
    UFUNCTION(BlueprintCallable)
    UObject* GetClosestCover(TArray<uint8> inCoverPoints, UObject* InActor);
    UFUNCTION(BlueprintCallable)
    UObject* GetClosestActorToLocation(TArray<uint8> inActors, uint8 /*struct*/ inTargetLocation);
    UFUNCTION(BlueprintCallable)
    UObject* GetClosestActor(TArray<uint8> inActors, UObject* InActor);
    UFUNCTION(BlueprintPure)
    UObject* GetCheatManagerTS(UObject* inWorldContextObject);
    UFUNCTION(BlueprintPure)
    FString GetAppVersion();
    UFUNCTION(BlueprintPure)
    TArray<uint8> GetAllOfficersAndPlayer(UObject* inWorldContextObject);
    UFUNCTION(BlueprintPure)
    TArray<uint8> GetAllOfficers(UObject* inWorldContextObject);
    UFUNCTION(BlueprintPure)
    TArray<uint8> GetAllAliveOfficersWithPlayerByTeam(UObject* inWorldContextObject, uint8 /*enum*/ inOfficersTeam);
    UFUNCTION(BlueprintPure)
    TArray<uint8> GetAllAliveOfficersMultiplayer(UObject* inWorldContextObject);
    UFUNCTION(BlueprintPure)
    TArray<uint8> GetAllAliveOfficers(UObject* inWorldContextObject);
    UFUNCTION(BlueprintPure)
    TArray<uint8> GetAliveOfficersByTeamMultiplayer(UObject* inWorldContextObject, uint8 /*enum*/ inOfficersTeam);
    UFUNCTION(BlueprintPure)
    TArray<uint8> GetAliveOfficersByTeam(UObject* inWorldContextObject, uint8 /*enum*/ inOfficersTeam);
    UFUNCTION(BlueprintCallable)
    UObject* GetAICommunicationBus(UObject* inWorldContextObject);
    UFUNCTION(BlueprintPure)
    uint8 /*enum*/ GetAICharacterMovementMode(UObject* InCharacter);
    UFUNCTION(BlueprintPure)
    uint8 GetAdditionalEquipAmount(TArray<uint8>& EquipmentArray, TMap<FName, uint8>& AmountMap);
    UFUNCTION(BlueprintCallable)
    uint8 /*struct*/ GenerateRandomEquipmentPreset(TArray<uint8> ValidPrimaryWeapons, TArray<uint8> ValidSecondaryWeapons, TArray<uint8> ValidSpecialEquipment, TArray<uint8> ValidArmorEquipment, TArray<uint8> ValidAdditionalEquipment);
    UFUNCTION(BlueprintCallable)
    uint8 GenerateRandomDirectionsInSphere(int32 DirectionCount, TArray<uint8>& OutDirections);
    UFUNCTION(BlueprintCallable)
    uint8 GenerateRandomArrayWithMaxSum(int32 Size, int32 Max, TArray<uint8>& OutArray);
    UFUNCTION(BlueprintCallable)
    uint8 GenerateEvenlyDistributedArray(int32 Size, int32 Max, TArray<uint8>& OutArray);
    UFUNCTION(BlueprintCallable)
    uint8 FlashlightUpdate(UObject* SpotLightComponent, bool bEnable, bool EnableRadius, float DefaultRadius, float DefaultAngle, bool bDebug);
    UFUNCTION(BlueprintCallable)
    bool FindNavPointAlongTrace(UObject* WorldContextObject, uint8 /*struct*/& TraceStart, uint8 /*struct*/& TraceEnd, bool bDidHitGeometry, float MaxSearchDistance, float InitialStep, float MinPrecision, uint8 /*struct*/& FloorLocation, uint8 UpTraceChannel, float MaxUpDistance, uint8 /*struct*/& OutResult, bool bDebug);
    UFUNCTION(BlueprintPure)
    UObject* FindMovementZoneToEnter(TArray<uint8>& inZones, UObject* inLastZone, int32 inLastIndex, int32& outLastIndex);
    UFUNCTION(BlueprintCallable)
    bool FindEquipmentDescription(UObject* inDataTable, uint8 /*enum*/ inEquipmentType, uint8 /*enum*/ inPrimaryType, uint8 /*enum*/ inSecondaryType, uint8 /*enum*/ inSpecialEquipmentType, uint8 /*enum*/ inAdditionalEquipmentType, uint8 /*enum*/ inAmmoType, uint8 /*enum*/ inArmorType, uint8 /*enum*/ inFaceEquipmentType, uint8 /*struct*/& OutResult);
    UFUNCTION(BlueprintCallable)
    uint8 /*struct*/ FindClosestPosition(uint8 /*struct*/& Target, TArray<uint8>& Positions, bool& bFound);
    UFUNCTION(BlueprintCallable)
    UObject* FindClosestActor(uint8 /*struct*/& TargetLocation, TArray<uint8>& Actors, bool& bFound);
    UFUNCTION(BlueprintCallable)
    bool FindApparelEquipmentDescription(UObject* inDataTable, bool inSearchArmorType, uint8 /*enum*/ inArmorType, uint8 /*enum*/ inFaceEquipmentType, uint8 /*struct*/& OutResult);
    UFUNCTION(BlueprintPure)
    uint8 FilterClosePositions(TArray<uint8>& InputPositions, float MinDistance, TArray<uint8>& FilteredPositions);
    UFUNCTION(BlueprintCallable)
    uint8 EnableAffectOnNavigationSkeletalMesh(UObject* InMesh, bool inCanAffect);
    UFUNCTION(BlueprintCallable)
    uint8 EnableAffectOnNavigationCapsule(UObject* inCapsule, bool inCanAffect);
    UFUNCTION(BlueprintCallable)
    uint8 DistributeSumByTagRules(TArray<uint8>& AllTags, TArray<uint8>& FilterTags, TArray<uint8>& Percentages, int32 Max, TArray<uint8>& OutValues);
    UFUNCTION(BlueprintCallable)
    uint8 /*enum*/ DeploymentEquipmentToSpecial(uint8 /*enum*/ inEquipment, bool& outSuccess);
    UFUNCTION(BlueprintCallable)
    uint8 /*enum*/ DeploymentEquipmentToAdditional(uint8 /*enum*/ inEquipment, bool& outSuccess);
    UFUNCTION(BlueprintCallable)
    bool CheckArraysEquality(TArray<uint8> array1, TArray<uint8> array2);
    UFUNCTION(BlueprintCallable)
    uint8 ChangeSoundClass(UObject* inSoundBase, UObject* inSoundClassObject);
    UFUNCTION(BlueprintCallable)
    uint8 ChangeSoundAttenuation(UObject* inSoundBase, UObject* InAttenuationSettings);
    UFUNCTION(BlueprintCallable)
    uint8 ChangeNavModClass(UObject* Component, UObject* NavModClass);
    UFUNCTION(BlueprintCallable)
    float CalculateBrightness(UObject* detectorTexture);
    UFUNCTION(BlueprintCallable)
    int32 CalculateAverageFPS();
    UFUNCTION(BlueprintCallable)
    uint8 AffectNavigation(UObject* Component, bool CanAffectNavigation);
};

