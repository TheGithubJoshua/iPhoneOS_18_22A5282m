@class SBSwitcherModifier, SBAppLayout;

@interface SBForcePressToFullScreenAppLayoutSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
    SBSwitcherModifier *_multitaskingModifier;
    long long _startingEnvironmentMode;
}

- (BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)a0;
- (BOOL)isContainerStatusBarVisible;
- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (id)appLayoutsToCacheSnapshots;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (BOOL)shouldAsyncRenderUntilDelay:(inout double *)a0;
- (void).cxx_destruct;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (long long)homeScreenBackdropBlurType;
- (id)visibleAppLayouts;
- (long long)wallpaperStyle;
- (BOOL)isWallpaperRequiredForSwitcher;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 toAppLayout:(id)a2 effectiveStartingEnvironmentMode:(long long)a3;

@end
