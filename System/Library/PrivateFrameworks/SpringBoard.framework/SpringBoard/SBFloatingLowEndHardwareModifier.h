@interface SBFloatingLowEndHardwareModifier : SBSwitcherModifier {
    unsigned long long _options;
    BOOL _floatingSwitcherVisible;
    BOOL _floatingAppVisibleOverSplitView;
    BOOL _floatingAppVisibleOverExclusiveForegroundApp;
    BOOL _shouldDimAndBlockTouches;
    long long _floatingConfiguration;
}

- (BOOL)switcherDimmingViewBlocksTouches;
- (id)handleTransitionEvent:(id)a0;
- (id)handleTapOutsideToDismissEvent:(id)a0;
- (BOOL)wantsSwitcherDimmingView;
- (double)switcherDimmingAlpha;
- (id)initWithOptions:(unsigned long long)a0;
- (BOOL)_shouldDimAndBlockTouchesToAppsUnderFloating;
- (long long)_stashedFloatingConfigurationForFloatingConfiguration:(long long)a0;

@end
