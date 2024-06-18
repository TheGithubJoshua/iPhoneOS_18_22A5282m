@class UIColor, NSArray, UIVibrancyEffect, UIImage;

@interface _UIBarBackgroundLayoutLegacy : _UIBarBackgroundLayout {
    long long _translucence;
    UIImage *_backgroundImage;
    UIColor *_backgroundTintColor;
    NSArray *_backgroundEffects;
    UIImage *_shadowImage;
    UIColor *_shadowColor;
    UIVibrancyEffect *_shadowEffect;
    BOOL _hasShadow;
}

@property (readonly, nonatomic) UIImage *shadowImage;
@property (nonatomic) BOOL disableTinting;
@property (nonatomic) double topInset;
@property (readonly, nonatomic) BOOL hasBackgroundEffect;

- (id)bg1Effects;
- (double)bgInset;
- (id)bg1Color;
- (id)bg1ShadowEffect;
- (id)bg1ShadowColor;
- (void)configureEffectForStyle:(long long)a0 backgroundTintColor:(id)a1 forceOpaque:(BOOL)a2;
- (BOOL)shouldUseExplicitGeometry;
- (void)describeInto:(id)a0;
- (void)configureImage:(id)a0 forceOpaque:(BOOL)a1 backgroundTintColor:(id)a2;
- (id)bg1Image;
- (double)bg1ImageAlpha;
- (void)configureWithoutShadow;
- (BOOL)bg1HasShadow;
- (void)setUseExplicitGeometry:(BOOL)a0;
- (id)bg1ShadowImage;
- (void)configureWithEffects:(id)a0;
- (double)bg1Alpha;
- (double)bg1ShadowAlpha;
- (void)configureShadowImage:(id)a0;
- (void).cxx_destruct;
- (void)configureShadowForBarStyle:(long long)a0;
- (void)configureImage:(id)a0 forceTranslucent:(BOOL)a1;
- (void)configureImage:(id)a0 forceOpaque:(BOOL)a1 barStyle:(long long)a2;
- (id)_colorForStyle:(long long)a0;
- (id)_blurWithStyle:(long long)a0 tint:(id)a1;
- (id)initWithLayout:(id)a0;
- (void)configureAsTransparent;
- (void)configureBackgroundColor:(id)a0 barStyle:(long long)a1 translucent:(BOOL)a2;

@end
