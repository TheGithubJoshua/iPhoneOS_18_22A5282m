@class OADColor;

@interface OADSolidFill : OADFill {
    OADColor *mColor;
    BOOL mIsColorOverridden;
}

+ (id)defaultProperties;
+ (id)blackFill;
+ (id)whiteFill;

- (unsigned long long)hash;
- (id)initWithDefaults;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)setColor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)color;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (BOOL)isColorOverridden;
- (void)removeUnnecessaryOverrides;
- (void)setStyleColor:(id)a0;
- (BOOL)usesPlaceholderColor;

@end
