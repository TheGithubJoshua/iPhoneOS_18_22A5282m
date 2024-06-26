@interface PAEColorCurveChannelData : NSObject <NSSecureCoding, NSCopying, FxCustomParameterInterpolation_v2> {
    void *_curve_private;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)channelDataWithRed:(double)a0 green:(double)a1 blue:(double)a2;
+ (id)channelDataWithRed:(double)a0 green:(double)a1 blue:(double)a2 curve:(const void *)a3;

- (id)initWithCoder:(id)a0;
- (id)init;
- (double)blue;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)evaluate:(double)a0;
- (double)red;
- (void)dealloc;
- (void)reset;
- (double)green;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2;
- (void *)curveRef;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 curve:(const void *)a3;
- (id)interpolateBetween:(id)a0 withWeight:(float)a1;
- (BOOL)isAtDefaults;

@end
