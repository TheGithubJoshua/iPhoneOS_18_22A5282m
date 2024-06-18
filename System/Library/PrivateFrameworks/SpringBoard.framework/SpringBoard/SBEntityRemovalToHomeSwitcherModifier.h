@class SBSwitcherModifier;

@interface SBEntityRemovalToHomeSwitcherModifier : SBTransitionSwitcherModifier {
    SBSwitcherModifier *_multitaskingModifier;
    double _homeAnimationDelay;
    BOOL _canAnimateHomeScreenStyle;
}

- (double)wallpaperScale;
- (id)handleTimerEvent:(id)a0;
- (id)transitionWillUpdate;
- (BOOL)isContainerStatusBarVisible;
- (BOOL)wantsDockBehaviorAssertion;
- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (BOOL)wantsDockWindowLevelAssertion;
- (double)dockProgress;
- (id)appLayoutsToCacheSnapshots;
- (double)homeScreenBackdropBlurProgress;
- (id)animationAttributesForLayoutElement:(id)a0;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (double)homeScreenDimmingAlpha;
- (double)homeScreenScale;
- (void).cxx_destruct;
- (long long)dockUpdateMode;
- (long long)homeScreenBackdropBlurType;
- (BOOL)shouldFireTransitionCompletionInDefaultRunLoopMode;
- (id)transitionWillBegin;
- (double)homeScreenAlpha;
- (long long)wallpaperStyle;
- (BOOL)isWallpaperRequiredForSwitcher;
- (id)_cornerRadiusSettings;
- (id)initWithTransitionID:(id)a0 homeAnimationDelay:(double)a1 multitaskingModifier:(id)a2;
- (BOOL)isContentStatusBarVisible;

@end
