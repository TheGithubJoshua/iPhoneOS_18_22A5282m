@class RTLocation;

@interface RTLearnedLocation : NSObject

@property (readonly, nonatomic) RTLocation *location;
@property (readonly, nonatomic) unsigned long long dataPointCount;
@property (readonly, nonatomic) double confidence;

+ (id)removeLearnedVisitsPinned:(id)a0;
+ (double)confidenceFromDataPointCount:(unsigned long long)a0 highConfidenceThreshold:(double)a1;
+ (id)removeOutlierLearnedLocationsWithLargeHorizontalUncertainty:(id)a0;
+ (id)removeLearnedVisitsWithShortestDwell:(id)a0;
+ (id)shiftLocation:(id)a0 shifter:(id)a1;
+ (id)removeLearnedVisitsInvalid:(id)a0;

- (id)init;
- (id)initWithLocationOfInterest:(id)a0;
- (void)calculateAltitude:(double *)a0 verticalUncertainty:(double *)a1 learnedLocations:(id)a2;
- (id)initWithLearnedVisits:(id)a0;
- (id)aggregateLearnedLocations:(id)a0 updateAltitude:(BOOL)a1;
- (id)initWithLocation:(id)a0 dataPointCount:(unsigned long long)a1 confidence:(double)a2;
- (unsigned long long)hash;
- (id)initWithMapItem:(id)a0 type:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithLocation:(id)a0 dataPointCount:(unsigned long long)a1 type:(unsigned long long)a2;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithChinaShiftedLearnedLocations:(id)a0 type:(unsigned long long)a1;
- (id)initWithLearnedLocations:(id)a0 type:(unsigned long long)a1;

@end
