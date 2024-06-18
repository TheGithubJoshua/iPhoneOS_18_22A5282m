@interface SBHomeScreenZoomSwitcherModifier : SBTransitionSwitcherModifier {
    long long _direction;
}

- (double)wallpaperScale;
- (BOOL)isHomeScreenContentRequired;
- (double)homeScreenBackdropBlurProgress;
- (id)animationAttributesForLayoutElement:(id)a0;
- (double)homeScreenDimmingAlpha;
- (double)homeScreenScale;
- (BOOL)_isEffectivelyHome;
- (long long)homeScreenBackdropBlurType;
- (double)homeScreenAlpha;
- (long long)wallpaperStyle;
- (BOOL)isWallpaperRequiredForSwitcher;
- (id)initWithTransitionID:(id)a0 direction:(long long)a1;

@end
