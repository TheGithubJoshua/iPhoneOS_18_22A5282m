@class NSDate;

@interface WFNextHourPrecipitationMinute : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double intensity;
@property (readonly, nonatomic) double chance;
@property (readonly, nonatomic) double perceivedIntensity;
@property (readonly, nonatomic) NSDate *date;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIntensity:(double)a0 chance:(double)a1 perceivedIntensity:(double)a2 date:(id)a3;

@end
