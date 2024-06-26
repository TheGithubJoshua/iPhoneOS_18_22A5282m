@class CLSLocationOfInterestCache, NSMutableSet, NSDateInterval;

@interface CLSRoutineService : NSObject

@property (retain, nonatomic) NSDateInterval *fetchDateInterval;
@property (retain, nonatomic) NSMutableSet *pendingPinningVisitIdentifiers;
@property (readonly, nonatomic) CLSLocationOfInterestCache *visitsCache;
@property (nonatomic) BOOL routineIsAvailable;
@property (readonly) struct CLSRoutineServiceStatisticsStruct { BOOL routineAvailable; unsigned long long numberOfLocationsOfInterest; unsigned long long numberOfVisits; unsigned long long numberOfTransitions; unsigned long long numberOfTimeMatches; unsigned long long numberOfCloseByLocationMatches; unsigned long long numberOfRemoteLocationMatches; unsigned long long numberOfMatchRequests; double pinningVisitsRatio; } statistics;

- (id)locationOfInterestVisitsAtLocation:(id)a0 inDateInterval:(id)a1;
- (BOOL)isRemoteLocation:(id)a0 inDateInterval:(id)a1;
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
- (id)locationOfInterestVisitsInDateInterval:(id)a0;
- (unsigned long long)_devicePlacementTypeForLocationsOfInterestVisits:(id)a0;
- (double)_disambiguationDistanceForDevicePlacementType:(unsigned long long)a0;
- (id)_fetchLocationOfInterestTransitionsWithinDateInterval:(id)a0 routineManager:(id)a1;
- (id)_placemarksFromLocationsOfInterest:(id)a0;
- (id)placemarksOfInterestOfType:(long long)a0;
- (long long)predominantTransportationModeForDateInterval:(id)a0 confidence:(double *)a1;

@end
