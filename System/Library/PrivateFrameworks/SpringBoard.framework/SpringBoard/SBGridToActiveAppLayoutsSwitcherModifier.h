@class NSArray, SBSwitcherModifier;

@interface SBGridToActiveAppLayoutsSwitcherModifier : SBTransitionSwitcherModifier {
    long long _direction;
    NSArray *_activeAppLayouts;
    SBSwitcherModifier *_gridModifier;
    BOOL _wantsMinificationFilter;
}

- (id)handleTransitionEvent:(id)a0;
- (double)wallpaperScale;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (double)dimmingAlphaForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (double)titleOpacityForIndex:(unsigned long long)a0;
- (id)appLayoutsToCacheSnapshots;
- (double)homeScreenBackdropBlurProgress;
- (id)animationAttributesForLayoutElement:(id)a0;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (BOOL)shouldAsyncRenderUntilDelay:(inout double *)a0;
- (double)homeScreenScale;
- (double)scaleForIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (long long)homeScreenBackdropBlurType;
- (id)visibleAppLayouts;
- (id)transitionWillBegin;
- (id)topMostLayoutElements;
- (id)_layoutSettings;
- (double)homeScreenAlpha;
- (long long)wallpaperStyle;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (BOOL)isWallpaperRequiredForSwitcher;
- (BOOL)_isIndexActive:(unsigned long long)a0;
- (BOOL)_isEffectivelyFullScreen;
- (double)_unselectedCardScale;
- (id)initWithTransitionID:(id)a0 direction:(long long)a1 activeAppLayouts:(id)a2 gridModifier:(id)a3;

@end
