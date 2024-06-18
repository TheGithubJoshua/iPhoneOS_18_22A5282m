@class NSNumber;

@interface MTRDoorLockClusterGetYearDayScheduleParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *yearDayIndex;
@property (copy, nonatomic) NSNumber *userIndex;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
