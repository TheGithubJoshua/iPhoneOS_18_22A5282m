@class NSNumber;

@interface MTRElectricalMeasurementClusterGetMeasurementProfileCommandParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *attributeId;
@property (copy, nonatomic) NSNumber *startTime;
@property (copy, nonatomic) NSNumber *numberOfIntervals;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
