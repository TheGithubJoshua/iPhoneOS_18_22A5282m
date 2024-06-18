@class SBHomeScreenSwitcherModifier, SBAppLayout;

@interface SBCrossfadeDosidoSwitcherModifier : SBTransitionSwitcherModifier {
    SBHomeScreenSwitcherModifier *_homeScreenModifier;
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
}

@property (nonatomic, getter=isFullScreenTransition) BOOL fullScreenTransition;

- (double)wallpaperScale;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (BOOL)isSwitcherWindowVisible;
- (unsigned long long)transactionCompletionOptions;
- (BOOL)isHomeScreenContentRequired;
- (id)appLayoutsToCacheSnapshots;
- (double)homeScreenBackdropBlurProgress;
- (id)animationAttributesForLayoutElement:(id)a0;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (double)homeScreenDimmingAlpha;
- (double)homeScreenScale;
- (double)scaleForIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (long long)homeScreenBackdropBlurType;
- (id)visibleAppLayouts;
- (id)transitionWillBegin;
- (id)topMostLayoutElements;
- (double)homeScreenAlpha;
- (id)_opacitySettings;
- (long long)wallpaperStyle;
- (BOOL)isWallpaperRequiredForSwitcher;
- (BOOL)_isFromAppLayoutAtIndex:(unsigned long long)a0;
- (BOOL)_isToAppLayoutAtIndex:(unsigned long long)a0;
- (BOOL)_isToOrFromAppLayoutAtIndex:(unsigned long long)a0;
- (BOOL)_shouldEnsureHomeScreenVisible;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 toAppLayout:(id)a2;

@end
