@class NSTimeZone;

@interface EKTimeZone : NSObject <NSCopying>

@property (retain, nonatomic) NSTimeZone *nsTimeZone;

+ (id)timeZoneWithNSTimeZone:(id)a0;
+ (id)timeZoneWithName:(id)a0;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)NSTimeZone;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)nextDaylightSavingTimeTransitionAfterAbsoluteTime:(double)a0;
- (id)initWithNSTimeZone:(id)a0;
- (double)secondsFromGMTForAbsoluteTime:(double)a0;

@end
