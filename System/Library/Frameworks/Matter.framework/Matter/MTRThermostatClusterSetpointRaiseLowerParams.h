@class NSNumber;

@interface MTRThermostatClusterSetpointRaiseLowerParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *mode;
@property (copy, nonatomic) NSNumber *amount;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
