@class _PASLock, _ATXDuetHelper;
@protocol ATXLocationManagerProtocol;

@interface _ATXAppLaunchLocation : NSObject {
    id<ATXLocationManagerProtocol> _locationManager;
    _ATXDuetHelper *_duetHelper;
    _PASLock *_lock;
}

+ (void)writeModel:(id)a0;
+ (id)sortTimeIntervals:(id)a0;
+ (id)defaultPath;
+ (id)visitsWithLOI:(id)a0 startDate:(id)a1;
+ (void)joinLaunchEvents:(id)a0 withVisits:(id)a1 block:(id /* block */)a2;

- (void)train;
- (id)init;
- (void)resetAppIntentLocationData;
- (id)locationManager;
- (unsigned long long)loadModelAtPath:(id)a0;
- (double)launchProbabilityAtLOI:(id)a0 bundleId:(id)a1;
- (id)initWithDuetHelper:(id)a0 locationManager:(id)a1;
- (int)launchCountAtLOI:(id)a0 bundleId:(id)a1;
- (double)launchProbabilityAtLOI:(id)a0 appIntent:(id)a1;
- (void).cxx_destruct;
- (void)_trainModelWithLOI:(id)a0 startDate:(id)a1;
- (double)launchProbabilityAtLOI:(id)a0 appForAllIntentsBundleId:(id)a1;
- (unsigned long long)loadModel;
- (void)trainWithCallback:(id /* block */)a0;

@end
