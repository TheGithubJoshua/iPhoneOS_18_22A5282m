@class NSNumber, NSArray;

@interface MTRThermostatClusterSetWeeklyScheduleParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *numberOfTransitionsForSequence;
@property (copy, nonatomic) NSNumber *dayOfWeekForSequence;
@property (copy, nonatomic) NSNumber *modeForSequence;
@property (copy, nonatomic) NSArray *transitions;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end