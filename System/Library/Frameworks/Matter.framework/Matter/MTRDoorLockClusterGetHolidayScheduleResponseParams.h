@class NSNumber;

@interface MTRDoorLockClusterGetHolidayScheduleResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *holidayIndex;
@property (copy, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSNumber *localStartTime;
@property (copy, nonatomic) NSNumber *localEndTime;
@property (copy, nonatomic) NSNumber *operatingMode;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
