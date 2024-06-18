@class NSNumber;

@interface MTROnOffClusterOnWithTimedOffParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *onOffControl;
@property (copy, nonatomic) NSNumber *onTime;
@property (copy, nonatomic) NSNumber *offWaitTime;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
