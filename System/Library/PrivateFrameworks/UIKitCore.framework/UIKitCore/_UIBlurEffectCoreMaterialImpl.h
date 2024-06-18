@class NSString, NSBundle;

@interface _UIBlurEffectCoreMaterialImpl : _UIBlurEffectImpl {
    long long _style;
    NSString *_lightMaterial;
    NSString *_darkMaterial;
    NSBundle *_bundle;
}

- (id)initWithStyle:(long long)a0;
- (id)implementationForUserInterfaceStyle:(long long)a0;
- (BOOL)_needsUpdateForTransitionFromEnvironment:(id)a0 toEnvironment:(id)a1 usage:(long long)a2;
- (id)initWithLightMaterial:(id)a0 darkMaterial:(id)a1 bundle:(id)a2;
- (id)tintColor;
- (void)_updateEffectDescriptor:(id)a0 forEnvironment:(id)a1 usage:(long long)a2;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)canProvideCoreMaterialVibrancyEffect;
- (void)appendDescriptionTo:(id)a0;
- (BOOL)canProvideVibrancyEffect;
- (BOOL)invertAutomaticStyle;
- (long long)style;

@end
