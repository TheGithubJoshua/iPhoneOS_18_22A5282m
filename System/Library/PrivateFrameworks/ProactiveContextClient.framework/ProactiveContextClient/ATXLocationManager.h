@class NSString, GEOLocationShifter, NSDate, NSObject, _PASLock;
@protocol ATXLocationManagerGPS, ATXLocationManagerStateStore, ATXLocationParameters, ATXLocationManagerRoutine, OS_dispatch_queue;

@interface ATXLocationManager : NSObject <ATXLocationManagerGPSDelegate, ATXLocationManagerProtocol, ATXPredictedLocationsManagerProtocol, ATXLocationOfInterestManagerProtocol> {
    id<ATXLocationManagerGPS> _gps;
    id<ATXLocationManagerRoutine> _routine;
    id<ATXLocationManagerStateStore> _stateStore;
    _PASLock *_lock;
    GEOLocationShifter *_shifter;
    NSObject<OS_dispatch_queue> *_loiUpdateQueue;
    id<ATXLocationParameters> _modeGlobals;
}

@property (retain, nonatomic) NSDate *now;
@property (nonatomic) double predictedNextLOITimeout;
@property (nonatomic) double predictedExitDateTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stringForLOIType:(long long)a0;
+ (id)debugDescriptionForCLLocation:(id)a0;

- (BOOL)isTourist;
- (void)beginMonitoringRegion:(id)a0;
- (double)distanceFromHomeOfCurrentLocationInMeters;
- (id)getPredictedLocationsOfInterestFromLOIName:(id)a0 startDate:(id)a1;
- (void)stopMonitoringRegionWithIdentifier:(id)a0;
- (id)init;
- (BOOL)preciseLocationEnabled;
- (BOOL)locationEnabled;
- (void)fetchAllLocationsOfInterest:(id /* block */)a0;
- (id)_updateLocationsOfInterestWithCurrentLocation:(id)a0;
- (void)clearLocationOfInterest;
- (long long)stateForRegion:(id)a0 withTimeout:(double)a1;
- (void)getCurrentLocationWithCompletionHandler:(id /* block */)a0;
- (BOOL)isAvailableLocationOfInterestType:(long long)a0;
- (id)getPredictedExitTimesFromLOIName:(id)a0 startDate:(id)a1;
- (id)shiftedLocationForChinaFromLocation:(id)a0;
- (id)predictedExitTimes;
- (void)fetchLOILocationOfType:(long long)a0 reply:(id /* block */)a1;
- (id)getCurrentLocationWithShiftInChina;
- (unsigned long long)getCurrentRoutineModeWithCurrentDate:(id)a0;
- (void)didChangePreciseLocationEnabled:(BOOL)a0;
- (void)locationManagerGPS:(id)a0 didEnterRegionWithIdentifier:(id)a1;
- (void)updatePredictedExitTimes;
- (id)getCurrentLocation;
- (void)updateCurrentLocationOfInterestIfTimeElapsed;
- (BOOL)isNearKnownTypeLocationOfInterest;
- (void)updatePredictedLocationsOfInterest;
- (id)getCurrentLocation_RequestPreciseLocation:(BOOL)a0;
- (void)_updatePredictedExitTimesIfTimeElapsed;
- (BOOL)isTouristWithCurrentDate:(id)a0;
- (void)_handleRoutineError:(id)a0 forThing:(id)a1;
- (void)invalidateLocationOfInterestCache;
- (id)getCurrentPreciseLocation;
- (id)initWithGPS:(id)a0 routine:(id)a1 stateStore:(id)a2 now:(id)a3 modeGlobals:(id)a4;
- (id)predictedLocationsOfInterest;
- (BOOL)isNearKnownTypeOrFrequentLocationOfInterest;
- (double)distanceFromGymOfCurrentLocationInMeters;
- (id)cachedLocationOfInterestAtCurrentLocation;
- (double)distanceFromSchoolOfCurrentLocationInMeters;
- (void).cxx_destruct;
- (BOOL)isLocationNearKnownTypeLocationOfInterest:(id)a0;
- (void)updateCurrentLocationOfInterest;
- (void)_updatePredictedLocationsOfInterestIfTimeElapsed;
- (id)getCurrentPreciseLocationWithShiftInChina;
- (void)locationManagerGPS:(id)a0 didExitRegionWithIdentifier:(id)a1;
- (id)initWithStateStore:(id)a0 modeGlobals:(id)a1;
- (void)gotState:(id)a0;
- (void)updateCurrentLocationOfInterestWithCompletionHandler:(id /* block */)a0;
- (id)_currentLocationAndNeedsUpdate_RequestPreciseLocation:(BOOL)a0;
- (void)_gotLocation:(id)a0 forLocationOfInterest:(long long)a1;
- (void)_fetchLocationOfInterest:(long long)a0 inGroup:(id)a1;
- (id)locationOfInterestAtCurrentLocation;
- (double)distanceFromWorkOfCurrentLocationInMeters;
- (id)previousLOIAndCurrentLOI;
- (void)_updateCurrentLocationOfInterestIfTimeElapsedWithCompletionHandler:(id /* block */)a0;
- (void)didChangeLocationEnabled:(BOOL)a0;
- (BOOL)isNearFrequentLocationOfInterest;
- (void)fetchLocationsOfInterestVisitedDuring:(id)a0 handler:(id /* block */)a1;
- (double)_distanceOfCurrentLocationFrom:(id)a0;
- (id)shifter;
- (void)locationOfInterestAtCurrentLocationWithCompletionHandler:(id /* block */)a0;

@end
