@class NSUUID, TASettings, TATrackingAvoidanceService, NSHashTable, NSString, TATrackingAvoidanceServiceStateContext, NSObject, TAPersistenceManager, TAAnalyticsManager, RTRoutineManager;
@protocol OS_dispatch_queue;

@interface TATrackingAvoidanceServiceManager : NSObject <TATrackingAvoidanceServiceObserver, TATrackingAvoidanceServiceProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSHashTable *dataSources;
@property (retain, nonatomic) TATrackingAvoidanceService *service;
@property (retain, nonatomic) TASettings *serviceSettings;
@property (retain, nonatomic) TATrackingAvoidanceServiceStateContext *stateContext;
@property (retain, nonatomic) TAPersistenceManager *persistenceManager;
@property (nonatomic) unsigned long long persistenceManagerLastSaveTime;
@property (retain, nonatomic) NSUUID *sessionID;
@property (retain, nonatomic) TAAnalyticsManager *analyticsManager;
@property (retain, nonatomic) RTRoutineManager *routineManager;
@property (readonly) unsigned long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)managerStateToString:(unsigned long long)a0;

- (void)addDataSource:(id)a0;
- (void)removeDataSource:(id)a0;
- (void)_fetchAndIngestNextPredictedLocationOfInterestFromLocation:(id)a0 startDate:(id)a1 interval:(double)a2;
- (void)_handleStateUpdateIfNecessary;
- (void)_registerForTATrackingAvoidanceServiceWithSettings:(id)a0;
- (void)_setState:(unsigned long long)a0;
- (void)_onHasKoreaCountryCode:(BOOL)a0;
- (void)trackingAvoidanceService:(id)a0 requestingAdditionalInformation:(id)a1;
- (void)removeObserver:(id)a0;
- (void)debugStageTADetection:(id)a0 deviceType:(unsigned long long)a1;
- (void)_onLocationServicesEnabled:(BOOL)a0;
- (void)visitStateChangedForTrackingAvoidanceService:(id)a0;
- (void)ingestTAEvent:(id)a0;
- (BOOL)_shouldTerminateService;
- (void)_onLocationAndPrivacyReset:(BOOL)a0;
- (void)_registerForAvengerScanner;
- (void)trackingAvoidanceService:(id)a0 didFindSuspiciousDevices:(id)a1;
- (void)_loadAndBootstrap;
- (void)debugForceSurfaceStagedDetections:(id)a0 deviceType:(unsigned long long)a1;
- (void)_onAllowSimulatedEvents:(BOOL)a0;
- (BOOL)_shouldSuspendAvengerScanner;
- (void)_fetchAndIngestNextPredictedLocationOfInterestWithCurrentVisitState;
- (void)fetchTAUnknownBeacon:(id)a0 withCompletion:(id /* block */)a1;
- (void)_unregisterForTATrackingAvoidanceService;
- (void)_fetchAndIngestLastVisit;
- (void).cxx_destruct;
- (void)_onLocationSimulationInProgress:(BOOL)a0;
- (void)_onHighThermalState:(BOOL)a0;
- (void)_unregisterForAvengerScanner;
- (void)_onDeviceUnlockedSinceBoot:(BOOL)a0;
- (void)_schedulePeriodicSaveAfterTimeInterval:(double)a0;
- (void)notifyObserversOfStateChangeFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (void)trackingAvoidanceService:(id)a0 didStageSuspiciousDevices:(id)a1;
- (void)_changeSession;
- (void)onUpdatedSettings:(id)a0;
- (void)trackingAvoidanceService:(id)a0 didRequestAIS:(id)a1;
- (void)_fetchStoreAndSave;
- (void)_onAirplaneMode:(BOOL)a0;
- (id)initWithQueue:(id)a0 settings:(id)a1;
- (void)addObserver:(id)a0;
- (void)_onUserLocationInsideKorea:(BOOL)a0;
- (void)_onBatterySaverMode:(BOOL)a0;
- (void)_setLastSaveTime;
- (void)trackingAvoidanceService:(id)a0 didUpdateSuspiciousDevices:(id)a1;
- (void)_onServiceEnabled:(BOOL)a0;

@end
