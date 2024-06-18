@class NSSet, NSDateInterval, NSMutableSet, PLLocationOfInterestCache;

@interface PLRoutineService : NSObject

@property (retain, nonatomic) NSDateInterval *fetchDateInterval;
@property (retain, nonatomic) NSMutableSet *pendingPinningVisitIdentifiers;
@property (retain, nonatomic) PLLocationOfInterestCache *visitsCache;
@property (readonly, nonatomic) NSSet *allLocationsOfInterest;
@property (readonly, nonatomic) NSSet *homeLocations;
@property (readonly, nonatomic) NSSet *workLocations;
@property (readonly, nonatomic) BOOL routineIsAvailable;

- (id)lastLocationOfInterestVisit;
- (id)locationOfInterestVisitsAtLocation:(id)a0 inDateInterval:(id)a1;
- (BOOL)isRemoteLocation:(id)a0 inDateInterval:(id)a1;
- (void)fetchLocationsOfInterestIfNeeded;
- (void)_invalidateLocationsOfInterest;
- (id)_fetchHomeAndWorkLocationsOfInterestWithRoutineManager:(id)a0;
- (void).cxx_destruct;
- (void)invalidateLocationsOfInterest;
- (id)locationsOfInterestOfType:(long long)a0;
- (void)_pinPendingVisits;
- (id)_fetchLocationsOfInterestWithinDateInterval:(id)a0 routineManager:(id)a1;
- (void)postProcessLocationsOfInterest;
- (id)locationOfInterestAtLocation:(id)a0;
- (id)initWithFetchDateInterval:(id)a0;
- (BOOL)hasLocationsOfInterestInformation;
- (id)locationOfInterestCloseToLocation:(id)a0 inDateInterval:(id)a1;
- (void)_buildLocationsOfInterestCache;

@end
