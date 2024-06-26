@interface CLIndoorCommonHooks : NSObject

+ (id)nearestVenues:(struct time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> { struct duration<long long, std::ratio<1, 1000000000>> { long long x0; } x0; })a0 availableVenues:(id)a1 latestPosition:(id)a2 availabilityZScoreConfidenceInterval:(double)a3 settings:(const struct NearestVenueSettings { id x0; double x1; id x2; BOOL x3; } *)a4 isAllowedMultipleVenues:(BOOL)a5;
+ (id)filterLocationGroups:(id)a0 isRegionalSupported:(BOOL)a1;

@end
