@interface OADMiterLineJoin : OADLineJoin {
    float mLimit;
    unsigned char mIsLimitOverridden : 1;
}

+ (id)defaultProperties;

- (unsigned long long)hash;
- (void)setLimit:(float)a0;
- (id)initWithDefaults;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (float)limit;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (BOOL)isLimitOverridden;
- (void)removeUnnecessaryOverrides;

@end
