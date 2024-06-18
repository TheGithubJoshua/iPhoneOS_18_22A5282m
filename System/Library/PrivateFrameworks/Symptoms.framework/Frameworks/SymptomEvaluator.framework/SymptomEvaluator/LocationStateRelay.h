@class NSObject, NSArray, NSString, RTRoutineManager, NSBundle, CLLocationManager, NSMutableDictionary;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface LocationStateRelay : NSObject <CLLocationManagerDelegate> {
    void *coreLocationDyLibHandle;
    void *coreRoutineDyLibHandle;
    RTRoutineManager *routineManager;
    NSBundle *mobileWiFiBundle;
    CLLocationManager *mobileWiFiLocationManager;
    Class CLLocationManagerClassRef;
    NSMutableDictionary *pendingLOIBlocks;
    NSObject<OS_dispatch_source> *locationRequestTimer;
    void /* function */ *clCopyTechnologiesInUseFunc;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (retain) NSArray *allLOIs;
@property (nonatomic) BOOL gpsInUse;
@property (nonatomic) BOOL LOIUseAuthorized;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)init;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (long long)preflightFrameworks;
- (void)getLocationTechnologyStateForInitialState:(BOOL)a0;
- (void)determineIfLocationOfInterestIsKnownOfType:(long long)a0 queue:(id)a1 reply:(id /* block */)a2;
- (void)fetchCurrentLocationLOIOnQueue:(id)a0 desiredAccuracy:(double)a1 reply:(id /* block */)a2;
- (unsigned long long)addPendingLOIBlocks:(id /* block */)a0;
- (void)callPendingLOIBlocksWithCLLocation:(id)a0 LOI:(id)a1 andError:(id)a2;
- (void)showLocationArrow;
- (BOOL)loadCoreLocation;
- (void)cleanUpPendingLOIBlocks;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;
- (id)mobileWiFiLocationManager;
- (void)dealloc;
- (BOOL)authorizedToUseCoreRoutine;
- (void)unloadFrameworks;
- (BOOL)loadCoreRoutine;
- (id)rtLOITypeToString:(long long)a0;

@end
