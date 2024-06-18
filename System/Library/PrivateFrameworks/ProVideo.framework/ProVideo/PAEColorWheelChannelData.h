@interface PAEColorWheelChannelData : NSObject <NSSecureCoding, NSCopying, FxCustomParameterInterpolation_v2> {
    struct PAEColorWheelData { double r; double t; double sat; double e; } _value;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)channelDataWithRadius:(double)a0 theta:(double)a1 saturation:(double)a2 light:(double)a3;

- (id)initWithCoder:(id)a0;
- (double)radius;
- (void)encodeWithCoder:(id)a0;
- (void)setSaturation:(double)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setRadius:(double)a0;
- (void)reset;
- (double)saturation;
- (double)light;
- (double)theta;
- (id)initWithRadius:(double)a0 theta:(double)a1 saturation:(double)a2 light:(double)a3;
- (id)interpolateBetween:(id)a0 withWeight:(float)a1;
- (BOOL)isAtDefaults;
- (void)setLight:(double)a0;
- (void)setTheta:(double)a0;

@end
