@class CLAssertion, NSString, PCPersistentTimer, CLLocationManager, CLLocation, NSObject;
@protocol OS_dispatch_queue, SOSPersistentTimerLocationManagerDelegate;

@interface SOSPersistentTimerLocationManager : NSObject <CLLocationManagerDelegate> {
    CLLocationManager *_locationManager;
    NSObject<OS_dispatch_queue> *_locationUpdateStartQueue;
    PCPersistentTimer *_locationUpdateTimer;
    PCPersistentTimer *_requestLocationsTimer;
    double _ti;
    PCPersistentTimer *_initalRequestTimer;
    PCPersistentTimer *_assertionTimer;
}

@property (nonatomic, getter=isRequestingLocation) BOOL requestingLocation;
@property (retain, nonatomic) CLAssertion *forceEnableLocationAssertion;
@property (retain, nonatomic) CLLocation *lastLocation;
@property (weak) id<SOSPersistentTimerLocationManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)_emergencyLocationAssertionTimeOut:(id)a0;
- (void)_sosPersistentTimerLocationManagerTic:(id)a0;
- (void)stopRequestingLocationUpdates;
- (void)_sosPersistentTimerInitialRequest:(id)a0;
- (void)_startTimer;
- (BOOL)shouldStopRequestingLocationAfterCallback;
- (void)requestLocation;
- (BOOL)isValid;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)invalidateInitialTimer;
- (void).cxx_destruct;
- (void)_requestLocationsTimeout:(id)a0;
- (void)fireAndStartTimertWithTimeInterval:(double)a0;
- (void)invalidateRequestLocationsTimer;
- (void)dealloc;
- (void)invalidateTimer;
- (void)warmUpLocationRequest;

@end
