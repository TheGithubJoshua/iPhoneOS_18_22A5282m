@interface SBLowEndHardwareSwitcherModifier : SBSwitcherModifier {
    unsigned long long _options;
    BOOL _floatingAppVisibleOverSplitView;
    BOOL _floatingAppVisibleOverExclusiveForegroundApp;
}

- (id)handleTransitionEvent:(id)a0;
- (double)wallpaperScale;
- (id)keyboardSuppressionMode;
- (id)appLayoutsToResignActive;
- (id)initWithSimplificationOptions:(unsigned long long)a0;
- (BOOL)_shouldSimplifyForOpenFolder;
- (double)homeScreenScale;
- (BOOL)_shouldResignActiveAppsUnderFloatingApp;
- (double)homeScreenAlpha;
- (BOOL)_shouldSimplifyForWidgetCenterAndLibrary;

@end
