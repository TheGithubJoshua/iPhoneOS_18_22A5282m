@class SBSwitcherModifier, SBAppLayout;

@interface SBForcePressToSwitcherSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_selectedAppLayout;
    long long _startingEnvironmentMode;
    SBSwitcherModifier *_multitaskingModifier;
}

- (BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)a0;
- (double)containerStatusBarAnimationDuration;
- (id)handleTimerEvent:(id)a0;
- (BOOL)isContainerStatusBarVisible;
- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (id)appLayoutsToCacheSnapshots;
- (id)animationAttributesForLayoutElement:(id)a0;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (void).cxx_destruct;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (long long)homeScreenBackdropBlurType;
- (id)visibleAppLayouts;
- (id)transitionWillBegin;
- (id)_layoutSettings;
- (long long)wallpaperStyle;
- (id)_appLayoutToScrollToDuringTransition;
- (BOOL)isWallpaperRequiredForSwitcher;
- (id)_dismissForEmptySwitcherResponseName;
- (unsigned long long)_indexOfSelectedAppLayout;
- (id)initWithTransitionID:(id)a0 selectedAppLayout:(id)a1 effectiveStartingEnvironmentMode:(long long)a2 multitaskingModifier:(id)a3;

@end
