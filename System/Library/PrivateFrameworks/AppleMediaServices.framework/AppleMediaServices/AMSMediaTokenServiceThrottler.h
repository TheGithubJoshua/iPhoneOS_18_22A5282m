@class NSDate;

@interface AMSMediaTokenServiceThrottler : NSObject

@property (nonatomic) unsigned long long attemptNumber;
@property (retain, nonatomic) NSDate *throttleDate;
@property (nonatomic) double baseSleepInterval;
@property (nonatomic) double maxSleepInterval;

- (BOOL)shouldThrottle;
- (void)throttle;
- (double)_calculateThrottleInterval;
- (void).cxx_destruct;
- (id)initWithBaseSleepInterval:(double)a0 maxSleepInterval:(double)a1;
- (void)reset;

@end
