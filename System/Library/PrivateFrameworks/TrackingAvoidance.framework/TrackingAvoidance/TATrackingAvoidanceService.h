@class NSString, TAOutgoingRequests, TASettings, NSHashTable, NSDate, TATrackingAvoidanceServiceSettings, TAStore;

@interface TATrackingAvoidanceService : NSObject <TAStoreObserver, TATrackingAvoidanceServiceProtocol>

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSDate *latestClassificationDate;
@property (retain, nonatomic) TATrackingAvoidanceServiceSettings *serviceSettings;
@property (retain, nonatomic) TAOutgoingRequests *stagedIntervisitMetrics;
@property (readonly, nonatomic) TAStore *store;
@property (readonly, nonatomic) TASettings *settings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createRandomBytes:(unsigned long long)a0;

- (id)initWithSettings:(id)a0;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)debugStageTADetection:(id)a0 deviceType:(unsigned long long)a1;
- (BOOL)shouldPerformDetection;
- (void)ingestTAEvent:(id)a0;
- (void)visitState:(id)a0 didIssueMetricsSubmissionHint:(unsigned long long)a1;
- (void)debugForceSurfaceStagedDetections:(id)a0 deviceType:(unsigned long long)a1;
- (void)didRequestAIS:(id)a0;
- (void)bootstrapDeviceRecord:(id)a0;
- (void)notifyObserversOfSuspiciousDevices:(id)a0;
- (void)fetchTAUnknownBeacon:(id)a0 withCompletion:(id /* block */)a1;
- (void)bootstrapVisitState:(id)a0;
- (id)initWithTASettings:(id)a0;
- (void).cxx_destruct;
- (void)notifyObserversOfStagedSuspiciousDevices:(id)a0;
- (void)notifyObserversOfVisitStateChange;
- (void)visitState:(id)a0 didChangeStateFromType:(unsigned long long)a1 toType:(unsigned long long)a2;
- (void)_performDetection;
- (void)filterAndStageDetectionResults:(id)a0;
- (void)_performUpdateIfNecessary:(id)a0;
- (void)addObserver:(id)a0;
- (void)notifyObserversOfSuspiciousDeviceUpdate:(id)a0;
- (void)notifyObserversOfRequests:(id)a0;

@end
