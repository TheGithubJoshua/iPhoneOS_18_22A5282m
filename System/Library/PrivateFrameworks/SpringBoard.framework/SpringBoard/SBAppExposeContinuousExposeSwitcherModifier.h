@class NSString;

@interface SBAppExposeContinuousExposeSwitcherModifier : SBSwitcherModifier {
    struct CGPoint { double x; double y; } _previousContentOffset;
    BOOL _isScrollingForward;
    unsigned long long _numberOfHiddenAppLayouts;
    BOOL _isShowingReopenClosedWindowsButton;
}

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

- (long long)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
- (double)reopenClosedWindowsButtonAlpha;
- (id)handleTransitionEvent:(id)a0;
- (long long)plusButtonStyle;
- (id)handleTimerEvent:(id)a0;
- (id)appLayoutToScrollToBeforeReopeningClosedWindows;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (long long)shadowStyleForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (long long)headerStyleForIndex:(unsigned long long)a0;
- (BOOL)shouldAccessoryDrawShadowForAppLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForLayoutRole:(long long)a0 inAppLayout:(id)a1 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (double)reopenClosedWindowsButtonScale;
- (BOOL)isResizeGrabberVisibleForAppLayout:(id)a0;
- (BOOL)isHomeScreenContentRequired;
- (id)adjustedAppLayoutsForAppLayouts:(id)a0;
- (double)plusButtonAlpha;
- (id)appExposeAccessoryButtonsBundleIdentifier;
- (double)homeScreenBackdropBlurProgress;
- (double)homeScreenDimmingAlpha;
- (BOOL)isLayoutRoleDraggable:(long long)a0 inAppLayout:(id)a1;
- (id)initWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)_updateReopenClosedWindowsButtonPresence;
- (long long)homeScreenBackdropBlurType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)homeScreenAlpha;
- (id)handleRemovalEvent:(id)a0;
- (long long)wallpaperStyle;
- (BOOL)isWallpaperRequiredForSwitcher;
- (BOOL)_canShowReopenClosedWindowsButton;
- (id)handleInsertionEvent:(id)a0;
- (BOOL)isToggleWindowingModeButtonVisible;

@end
