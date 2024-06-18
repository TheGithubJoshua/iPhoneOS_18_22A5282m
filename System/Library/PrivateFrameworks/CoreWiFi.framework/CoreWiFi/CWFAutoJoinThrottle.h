@class NSDictionary;

@interface CWFAutoJoinThrottle : NSObject <NSCopying>

@property (nonatomic) long long trigger;
@property (retain, nonatomic) NSDictionary *intervals;
@property (retain, nonatomic) NSDictionary *intervalsBasedOnTriggerTimestamp;

+ (id)autoJoinThrottleWithTrigger:(long long)a0 intervals:(id)a1;

- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
