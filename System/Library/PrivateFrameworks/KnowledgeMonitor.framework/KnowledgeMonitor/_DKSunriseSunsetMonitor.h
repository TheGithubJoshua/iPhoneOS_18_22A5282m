@class NSString, NSDictionary, CLLocationManager, NSObject;
@protocol OS_dispatch_source, OS_os_log;

@interface _DKSunriseSunsetMonitor : _DKMonitor <CLLocationManagerDelegate>

@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *updateTimer;
@property (nonatomic) unsigned long long updateInterval;
@property (retain, nonatomic) CLLocationManager *manager;
@property (retain, nonatomic) NSDictionary *previousDataDictionary;
@property (nonatomic) BOOL awaitingLocationAfterDisabledAirplaneMode;
@property (nonatomic) int authorizationStatus;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property struct __SCPreferences { } *radioPrefs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventStream;
+ (id)entitlements;

- (void)locationManager:(id)a0 didChangeAuthorizationStatus:(int)a1;
- (id)init;
- (BOOL)isAirplaneModeEnabled;
- (id)loadState;
- (void)unprotectedUpdateSunriseSunsetTime:(id)a0;
- (void)stop;
- (BOOL)isAirplaneModeEnabledWithPreferences:(struct __SCPreferences { } *)a0;
- (void)start;
- (void)saveState;
- (void)deactivate;
- (BOOL)currentSunriseSunsetTimes:(id)a0 differsFromPreviousTimes:(id)a1 byInterval:(double)a2;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)respondToTimeChange:(id)a0;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)contextDictionaryWithGeoAlmanac:(id)a0 authorizationStatus:(int)a1;
- (void)respondToAirplaneModeStatusChanged;

@end
