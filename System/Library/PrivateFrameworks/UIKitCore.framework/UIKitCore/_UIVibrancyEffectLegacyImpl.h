@class UIVibrancyEffect;

@interface _UIVibrancyEffectLegacyImpl : _UIVibrancyEffectImpl {
    long long _style;
    BOOL _invertAutomaticStyle;
    BOOL _ignoreSimpleVibrancy;
}

@property (nonatomic) UIVibrancyEffect *effect;

- (id)implementationForUserInterfaceStyle:(long long)a0;
- (id)initWithStyle:(long long)a0 invertAutomaticStyle:(BOOL)a1;
- (BOOL)_needsUpdateForTransitionFromEnvironment:(id)a0 toEnvironment:(id)a1 usage:(long long)a2;
- (void)_updateEffectDescriptor:(id)a0 forEnvironment:(id)a1 usage:(long long)a2;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)appendDescriptionTo:(id)a0;
- (id)initWithStyle:(long long)a0 invertAutomaticStyle:(BOOL)a1 ignoreSimpleVibrancy:(BOOL)a2;
- (BOOL)invertAutomaticStyle;
- (long long)style;

@end
