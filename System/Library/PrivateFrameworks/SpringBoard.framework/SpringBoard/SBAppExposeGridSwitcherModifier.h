@class NSString, SBMixedGridSwitcherModifier;

@interface SBAppExposeGridSwitcherModifier : SBSwitcherModifier {
    struct CGPoint { double x; double y; } _previousContentOffset;
    BOOL _isScrollingForward;
    SBMixedGridSwitcherModifier *_mixedGridModifier;
    unsigned long long _numberOfHiddenAppLayouts;
    BOOL _isShowingReopenClosedWindowsButton;
}

@property (nonatomic) BOOL disableFullScreenCardScaleRounding;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) struct CGSize { double width; double height; } fullScreenCardSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } floatingCardSize;
@property (nonatomic) BOOL reversesFloatingCardDirection;

- (long long)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
- (double)reopenClosedWindowsButtonAlpha;
- (id)handleTransitionEvent:(id)a0;
- (long long)plusButtonStyle;
- (id)handleTimerEvent:(id)a0;
- (id)appLayoutToScrollToBeforeReopeningClosedWindows;
- (void)didMoveToParentModifier:(id)a0;
- (double)reopenClosedWindowsButtonScale;
- (id)adjustedAppLayoutsForAppLayouts:(id)a0;
- (double)plusButtonAlpha;
- (id)appExposeAccessoryButtonsBundleIdentifier;
- (BOOL)isLayoutRoleDraggable:(long long)a0 inAppLayout:(id)a1;
- (BOOL)isLayoutRoleEligibleForContentDragSpringLoading:(long long)a0 inAppLayout:(id)a1;
- (void).cxx_destruct;
- (id)_updateReopenClosedWindowsButtonPresence;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)handleRemovalEvent:(id)a0;
- (BOOL)_canShowReopenClosedWindowsButton;
- (id)handleInsertionEvent:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 fullScreenCardSize:(struct CGSize { double x0; double x1; })a1 floatingCardSize:(struct CGSize { double x0; double x1; })a2;

@end
