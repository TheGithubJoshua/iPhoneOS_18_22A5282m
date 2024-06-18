@class OADBlipRef;

@interface OADCustomPattern : OADPattern {
    OADBlipRef *mBlipRef;
    BOOL mIsBlipRefOverridden;
}

+ (id)defaultProperties;

- (unsigned long long)hash;
- (id)initWithDefaults;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)blipRef;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (BOOL)isBlipRefOverridden;
- (void)setBlipRef:(id)a0;

@end
