@class _UIBarBackgroundAppearanceData;

@interface _UIBarBackgroundLayoutModern : _UIBarBackgroundLayout {
    BOOL _backgroundsAreSame;
}

@property (retain, nonatomic) _UIBarBackgroundAppearanceData *backgroundData1;
@property (retain, nonatomic) _UIBarBackgroundAppearanceData *backgroundData2;

- (id)bg1Effects;
- (id)bg2Image;
- (id)bg1Color;
- (id)bg1ShadowEffect;
- (id)bg1ShadowColor;
- (BOOL)bg2HasShadow;
- (BOOL)shouldUseExplicitGeometry;
- (void)describeInto:(id)a0;
- (id)bg2Effects;
- (id)bg2ShadowColor;
- (id)bg1ShadowTint;
- (long long)bg1ImageMode;
- (id)bg2ShadowTint;
- (id)bg2ShadowImage;
- (id)bg1Image;
- (id)bg2Color;
- (double)bg2ShadowAlpha;
- (BOOL)bg1HasShadow;
- (long long)bg2ImageMode;
- (double)bg2Alpha;
- (id)bg1ShadowImage;
- (BOOL)bg2Enabled;
- (id)bg2ShadowEffect;
- (double)bg1Alpha;
- (double)bg1ShadowAlpha;
- (void).cxx_destruct;
- (id)initWithLayout:(id)a0;

@end
