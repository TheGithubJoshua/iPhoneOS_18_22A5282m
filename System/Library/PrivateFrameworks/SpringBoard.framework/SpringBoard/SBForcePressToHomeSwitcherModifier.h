@class SBSwitcherModifier, SBAppLayout;

@interface SBForcePressToHomeSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_selectedAppLayout;
    long long _startingEnvironmentMode;
    double _initalPanThreshold;
    SBSwitcherModifier *_multitaskingModifier;
}

- (BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)a0;
- (BOOL)isContainerStatusBarVisible;
- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (id)appLayoutsToCacheSnapshots;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (double)scaleForIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (long long)homeScreenBackdropBlurType;
- (id)visibleAppLayouts;
- (double)_switcherCardScale;
- (long long)wallpaperStyle;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (BOOL)isWallpaperRequiredForSwitcher;
- (id)initWithTransitionID:(id)a0 selectedAppLayout:(id)a1 effectiveStartingEnvironmentMode:(long long)a2 initialPanThreshold:(double)a3 multitaskingModifier:(id)a4;

@end
