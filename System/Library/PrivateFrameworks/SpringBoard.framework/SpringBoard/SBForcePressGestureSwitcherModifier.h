@class SBSwitcherModifier, SBAppLayout, SBCoplanarSwitcherModifier, SBForcePressGestureStateTrackingSwitcherModifier, UIViewFloatAnimatableProperty;

@interface SBForcePressGestureSwitcherModifier : SBGestureSwitcherModifier {
    SBAppLayout *_selectedAppLayout;
    long long _startingEnvironmentMode;
    SBSwitcherModifier *_multitaskingModifier;
    SBCoplanarSwitcherModifier *_coplanarModifier;
    SBForcePressGestureStateTrackingSwitcherModifier *_stateTrackingModifier;
    double _additionalScaleForBreathing;
    UIViewFloatAnimatableProperty *_inMultitaskingChangedProperty;
}

- (BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)a0;
- (id)handleTransitionEvent:(id)a0;
- (double)wallpaperScale;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)keyboardSuppressionMode;
- (void)didMoveToParentModifier:(id)a0;
- (id)appLayoutsToResignActive;
- (BOOL)isContainerStatusBarVisible;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (double)dimmingAlphaForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)appLayoutsToCacheSnapshots;
- (double)homeScreenBackdropBlurProgress;
- (id)animationAttributesForLayoutElement:(id)a0;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (double)homeScreenDimmingAlpha;
- (double)homeScreenScale;
- (void).cxx_destruct;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (long long)homeScreenBackdropBlurType;
- (id)visibleAppLayouts;
- (double)_switcherCardScale;
- (id)_layoutSettings;
- (double)homeScreenAlpha;
- (long long)wallpaperStyle;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (BOOL)isWallpaperRequiredForSwitcher;
- (id)_scaleSettings;
- (void)_beginAnimatingMultitaskingPropertyWithMode:(long long)a0 settings:(id)a1;
- (double)_effectivePanProgress;
- (BOOL)_forcePressGestureCanBreathe;
- (unsigned long long)_indexOfSelectedAppLayout;
- (double)_scaleForCoplanarModifier;
- (id)handleGestureEvent:(id)a0;
- (id)initWithGestureID:(id)a0 selectedAppLayout:(id)a1 effectiveStartingEnvironmentMode:(long long)a2 multitaskingModifier:(id)a3;
- (double)initialPanThreshold;

@end
