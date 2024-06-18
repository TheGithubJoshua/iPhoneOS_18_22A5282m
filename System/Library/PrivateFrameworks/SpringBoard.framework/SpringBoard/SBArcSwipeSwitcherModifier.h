@class NSUUID, SBAppLayout;

@interface SBArcSwipeSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_toAppLayout;
    SBAppLayout *_fromAppLayout;
    BOOL _pinSpaceCornerRadiiToDisplayCornerRadii;
    NSUUID *_systemApertureSuppressionIdentifier;
}

- (BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)a0;
- (BOOL)shouldPerformCrossfadeForReduceMotion;
- (id)keyboardSuppressionMode;
- (id)appLayoutsToResignActive;
- (id)appLayoutsToCacheFullsizeSnapshots;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (id)appLayoutsToCacheSnapshots;
- (id)animationAttributesForLayoutElement:(id)a0;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (id)transitionDidEnd;
- (BOOL)shouldAsyncRenderUntilDelay:(inout double *)a0;
- (void).cxx_destruct;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (long long)homeScreenBackdropBlurType;
- (id)visibleAppLayouts;
- (id)transitionWillBegin;
- (id)_layoutSettings;
- (long long)wallpaperStyle;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (BOOL)isWallpaperRequiredForSwitcher;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 toAppLayout:(id)a2 pinSpaceCornerRadiiToDisplayCornerRadii:(BOOL)a3;

@end
