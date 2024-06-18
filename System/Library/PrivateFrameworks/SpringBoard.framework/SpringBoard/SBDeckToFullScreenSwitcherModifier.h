@class SBSwitcherModifier, SBAppLayout;

@interface SBDeckToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {
    long long _direction;
    SBAppLayout *_fullScreenAppLayout;
    SBSwitcherModifier *_deckModifier;
    BOOL _wantsMinificationFilter;
}

- (id)handleTransitionEvent:(id)a0;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (id)appLayoutsToCacheSnapshots;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)appLayoutToScrollToBeforeTransitioning;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (BOOL)shouldAsyncRenderUntilDelay:(inout double *)a0;
- (id)initWithTransitionID:(id)a0 direction:(long long)a1 fullScreenAppLayout:(id)a2 deckModifier:(id)a3;
- (void).cxx_destruct;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (long long)homeScreenBackdropBlurType;
- (id)visibleAppLayouts;
- (id)transitionWillBegin;
- (id)topMostLayoutElements;
- (id)_layoutSettings;
- (long long)wallpaperStyle;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (id)_appLayoutToScrollToDuringTransition;
- (BOOL)isWallpaperRequiredForSwitcher;

@end
