@class SAPersistenceManager, NSHashTable, SADeviceRecord, TALocationLite, NSDate, NSMutableDictionary, NSUUID, SAAudioAccessory, NSMutableSet;
@protocol SAFenceManagerServiceProtocol, SATimeServiceProtocol, TAEventProtocol, SAFenceManagerRequestProtocol, SATravelTypeClassifierServiceProtocol, SAGeoFenceRequestProtocol, SAWithYouDetectorServiceProtocol, SAAnalyticsServiceProtocol;

@interface SAMonitoringSessionManager : NSObject <SAMonitoringSessionManagerServiceProtocol, SAScenarioClassifierClientProtocol, SAWithYouDetectorClientProtocol, SATimeClientProtocol, SATravelTypeClassifierClientProtocol>

@property (retain, nonatomic) id<SATimeServiceProtocol> clock;
@property (retain, nonatomic) id<SAWithYouDetectorServiceProtocol> withYouDetector;
@property (retain, nonatomic) id<SAGeoFenceRequestProtocol> fenceRequestServicer;
@property (retain, nonatomic) id<SAFenceManagerServiceProtocol, SAFenceManagerRequestProtocol> fenceManager;
@property (retain, nonatomic) NSHashTable *clients;
@property (retain, nonatomic) NSMutableDictionary *deviceUUIDtoMonitoringSession;
@property (retain, nonatomic) TALocationLite *lastLocation;
@property (retain, nonatomic) SADeviceRecord *deviceRecord;
@property (retain, nonatomic) id<SAAnalyticsServiceProtocol> analytics;
@property (retain, nonatomic) id<SATravelTypeClassifierServiceProtocol> travelTypeClassifier;
@property (retain, nonatomic) NSMutableDictionary *devices;
@property (retain, nonatomic) NSMutableDictionary *safeLocations;
@property (retain, nonatomic) NSMutableDictionary *deviceUUIDtoSafeLocationUUIDs;
@property (nonatomic) BOOL requestedPeriodicScan;
@property (nonatomic) unsigned long long disabledReasons;
@property (retain, nonatomic) NSDate *caLastAlertDate;
@property (nonatomic) long long caBroughtOutOnTravel;
@property (retain, nonatomic) NSMutableDictionary *deviceUUIDtoAlertContext;
@property (nonatomic) unsigned long long caCurrentVehicularState;
@property (nonatomic) BOOL caIsVehicularBTHintOn;
@property (retain, nonatomic) SAPersistenceManager *persistenceManager;
@property (retain, nonatomic) SAAudioAccessory *audioAccessoryManager;
@property (retain, nonatomic) NSUUID *nextScheduledAlarmForPersistenceWrite;
@property (retain, nonatomic) NSUUID *scheduledAlarmForForceUpdateWithYouStatus;
@property (retain, nonatomic) id<TAEventProtocol> currentVisitOrLOIEvent;
@property (retain, nonatomic) id<TAEventProtocol> previousVisitOrLOIEvent;
@property (retain, nonatomic) NSDate *timeOfAttemptToLoadFromPersistence;
@property (nonatomic) BOOL isCompanionConnected;
@property (retain, nonatomic) NSMutableSet *devicesWithToBePopulatedTrackedTravelingStartLocation;
@property (retain, nonatomic) NSMutableSet *devicesWithPendingTransition;
@property (nonatomic) BOOL isInAirplaneMode;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL standby;

+ (id)convertSAMonitoringSessionStateToString:(unsigned long long)a0;

- (void)removeAndStopSafeLocationsForDeviceUUID:(id)a0;
- (void)removeSafeLocationsIfNeededPerNewSet:(id)a0 forDevice:(id)a1;
- (id)createLocationFromCircularRegion:(id)a0 forDevice:(id)a1 withContext:(unsigned long long)a2;
- (void)updatedWithYouStatusFrom:(unsigned long long)a0 to:(unsigned long long)a1 forDeviceWithUUID:(id)a2;
- (void)startSafeLocation:(id)a0 forDevice:(id)a1;
- (void)scheduleNextForceUpdateWithYouStatusFromReferenceDate:(id)a0 forAlertForDevice:(id)a1 alertType:(unsigned long long)a2;
- (BOOL)isWithinCurrentVisitOrLOI:(id)a0;
- (void)addDevice:(id)a0 isLastDeviceEvent:(BOOL)a1;
- (double)timeDelayForRetryScanForAlertForDeviceUUID:(id)a0 alertType:(unsigned long long)a1;
- (void)ingestTAEvent:(id)a0;
- (void)addClient:(id)a0;
- (unsigned long long)getMoreSpecificSADeviceType:(id)a0;
- (void)handleGeofenceExitedForDeviceUUID:(id)a0;
- (void)forceStandbyMode:(id)a0;
- (id)getLastScenarioChangeDateAmongAllDevices;
- (void)attemptToPopulateTrackedTravelingStartLocationForDevice:(id)a0;
- (void)removeDevicesIfNeededPerEvent:(id)a0;
- (void)scheduleNextPersistenceWrite;
- (BOOL)deviceShouldTransitionWithLastScenarioChangeDate:(id)a0 lastWithYouDate:(id)a1;
- (void)stopSafeLocation:(id)a0 forDevice:(id)a1;
- (void)removeClient:(id)a0;
- (void)handleSeparationForDeviceUUID:(id)a0 withSafeLocationRecommendation:(id)a1 context:(id)a2;
- (void)bootstrapMonitoringSessionRecord:(id)a0;
- (BOOL)anyDeviceInUnsafeLocation;
- (void)stopPeriodicScans;
- (BOOL)_isOnlyMonitoringCompanionDevice;
- (void)updateLocation:(id)a0;
- (void)startPeriodicScans;
- (double)minimumTimeSinceScenarioTransitionForAlertForDeviceUUID:(id)a0 alertType:(unsigned long long)a1;
- (void)requestToStartBackgroundScanning;
- (id)computeRemovedSafeLocations:(id)a0;
- (void)removeTravelFenceForDevice:(id)a0;
- (BOOL)enoughTimeHasPassedBeforeSurfacingAlert:(id)a0 forAlertForDevice:(id)a1 alertType:(unsigned long long)a2;
- (unsigned long long)stateForDeviceUUID:(id)a0;
- (BOOL)shouldIssueBookendedNotificationBasedOnTimeForDevice:(id)a0;
- (BOOL)shouldIssueBookendedNotificationForDevice:(id)a0;
- (void)handleModifiedSafeLocation:(id)a0;
- (void)setUpTravelingGeofencesOnAirplaneModeToggleOffIfNeeded;
- (void)configureBackgroundScanning;
- (void)checkReunion:(unsigned long long)a0 to:(unsigned long long)a1 forDeviceWithUUID:(id)a2;
- (void)requestToFetchLastVisit;
- (void)requestToStopBackgroundScanning;
- (void)addSafeLocationsIfNeededPerNewSet:(id)a0 forDevice:(id)a1;
- (void)handleSystemStateChanged:(id)a0;
- (void)setSafeLocations:(id)a0 forDeviceUUID:(id)a1;
- (void)handleModifiedSafeLocation:(id)a0 forDeviceUUID:(id)a1;
- (void)didForceUpdateWithYouStatus;
- (void)updateSafeLocations:(id)a0;
- (void).cxx_destruct;
- (long long)determineTrackedTravelingCount;
- (void)removeSafeLocation:(id)a0 forDeviceUUID:(id)a1;
- (BOOL)addTravelFenceForDevice:(id)a0;
- (id)initWithWithYouDetector:(id)a0 fenceRequestServicer:(id)a1 fenceManager:(id)a2 travelTypeClassifier:(id)a3 clock:(id)a4 deviceRecord:(id)a5 analytics:(id)a6 persistenceManager:(id)a7 audioAccessoryManager:(id)a8;
- (unsigned long long)scenarioClassForDeviceUUID:(id)a0;
- (void)changeMonitoringSessionState:(id)a0 toState:(unsigned long long)a1;
- (void)addDisableReason:(unsigned long long)a0;
- (void)storeSeparationLocation:(id)a0;
- (void)notifyEarlyLeftBehind:(id)a0;
- (BOOL)isAnyTrackedWhileTraveling;
- (void)cancelMonitoringDevice:(id)a0;
- (void)addSafeLocation:(id)a0 forDeviceUUID:(id)a1;
- (void)alarmFiredForUUID:(id)a0;
- (long long)earlyVehicularTriggerForDeviceUUID:(id)a0;
- (BOOL)monitoringSessionState:(unsigned long long)a0 matchesWithScenarioClass:(unsigned long long)a1;
- (void)startPeriodicScansIfNeeded;
- (BOOL)shouldIssueBookendedNotificationBasedOnLocationForDevice:(id)a0;
- (void)removeDeviceWithUUID:(id)a0 isLastDeviceEvent:(BOOL)a1;
- (BOOL)needPeriodicScan;
- (void)handleRemovedSafeLocation:(id)a0;
- (BOOL)allDevicesInSafeLocation;
- (void)modifyDevice:(id)a0;
- (BOOL)_isOnlyMonitoringDisconnectedCompanionDevice;
- (void)addDevicesIfNeededPerEvent:(id)a0;
- (void)createMonitoringDevice:(id)a0;
- (void)removeDisableReason:(unsigned long long)a0;
- (void)didChangeScenarioClassFrom:(unsigned long long)a0 to:(unsigned long long)a1 forDevice:(id)a2;
- (void)checkForDevicesNeedingTransition;
- (void)notifyLeftBehind:(id)a0 withRegion:(id)a1 isEarlyVehicularTrigger:(BOOL)a2;
- (void)notifyWhileTraveling:(id)a0 isBookendingTravel:(BOOL)a1;
- (long long)checkInEarStatus:(id)a0;
- (void)handleGeofenceEvent:(id)a0;
- (void)didChangeTravelTypeFrom:(unsigned long long)a0 to:(unsigned long long)a1 hints:(unsigned long long)a2;
- (BOOL)isAnyInTrackedInUnsafeLocation;
- (void)handleNewSafeLocation:(id)a0;
- (void)notifyWhenLeftBehind:(id)a0;
- (void)stopPeriodicScansIfNotNeeded;
- (void)updateDevicesWithSafeLocations:(id)a0;

@end
