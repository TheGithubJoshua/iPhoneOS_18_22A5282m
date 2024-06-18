@interface OADLinearShade : OADShade {
    float mAngle;
    BOOL mIsAngleOverridden;
    BOOL mScaled;
    BOOL mIsScaledOverridden;
}

+ (id)defaultProperties;

- (unsigned long long)hash;
- (id)initWithDefaults;
- (BOOL)isEqual:(id)a0;
- (BOOL)scaled;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setScaled:(BOOL)a0;
- (float)angle;
- (void)setAngle:(float)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAngleOverridden;
- (BOOL)isAnythingOverridden;
- (BOOL)isScaledOverridden;
- (void)removeUnnecessaryOverrides;

@end
