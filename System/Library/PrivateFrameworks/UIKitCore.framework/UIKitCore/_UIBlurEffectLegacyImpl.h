@class UIColor, UIBlurEffect;

@interface _UIBlurEffectLegacyImpl : _UIBlurEffectImpl {
    long long _style;
    UIColor *_tintColor;
    BOOL _invertAutomaticStyle;
}

@property (nonatomic) UIBlurEffect *effect;

- (id)implementationForUserInterfaceStyle:(long long)a0;
- (id)initWithStyle:(long long)a0 tintColor:(id)a1 invertAutomaticStyle:(BOOL)a2;
- (BOOL)_needsUpdateForTransitionFromEnvironment:(id)a0 toEnvironment:(id)a1 usage:(long long)a2;
- (id)tintColor;
- (void)_updateEffectDescriptor:(id)a0 forEnvironment:(id)a1 usage:(long long)a2;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)appendDescriptionTo:(id)a0;
- (BOOL)canProvideVibrancyEffect;
- (BOOL)invertAutomaticStyle;
- (long long)style;

@end
