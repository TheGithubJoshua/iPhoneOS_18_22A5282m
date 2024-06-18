@class NSNumber, NSArray;

@interface MTRElectricalMeasurementClusterGetProfileInfoResponseCommandParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *profileCount;
@property (copy, nonatomic) NSNumber *profileIntervalPeriod;
@property (copy, nonatomic) NSNumber *maxNumberOfIntervals;
@property (copy, nonatomic) NSArray *listOfAttributes;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
