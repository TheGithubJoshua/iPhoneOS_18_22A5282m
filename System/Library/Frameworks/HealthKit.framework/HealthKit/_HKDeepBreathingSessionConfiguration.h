@class NSDate;

@interface _HKDeepBreathingSessionConfiguration : HKTaskConfiguration

@property (copy, nonatomic) NSDate *startDate;
@property (nonatomic) double sessionDuration;
@property (nonatomic) double inhaleExhaleRatio;
@property (nonatomic) double respirationsPerMinute;

+ (BOOL)supportsSecureCoding;
+ (id)sessionConfigurationWithStartDate:(id)a0 sessionDuration:(double)a1 inhaleExhaleRatio:(double)a2 respirationsPerMinute:(double)a3;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithStartDate:(id)a0 sessionDuration:(double)a1 inhaleExhaleRatio:(double)a2 respirationsPerMinute:(double)a3;

@end
