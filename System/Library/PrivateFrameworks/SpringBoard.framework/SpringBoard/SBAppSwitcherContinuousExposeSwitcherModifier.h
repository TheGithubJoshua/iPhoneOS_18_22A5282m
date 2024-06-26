@class NSString, SBSwitcherLayoutCalculationsCache, NSDictionary;

@interface SBAppSwitcherContinuousExposeSwitcherModifier : SBSwitcherModifier <SBSwitcherLayoutCalculationsCacheDelegate> {
    struct CGPoint { double x; double y; } _previousContentOffset;
    BOOL _isScrollingForward;
    unsigned long long _ongoingAppLayoutRemovals;
    SBSwitcherLayoutCalculationsCache *_appLayoutLayoutCalculationsCache;
    unsigned long long _modifierEventGenCount;
    NSDictionary *_cachedPileBoundingFrameByPileIdentifier;
    struct CGSize { double width; double height; } _cachedFittedContentSize;
    NSDictionary *_cached_compactedBoundingBoxSizesByAppLayout;
}

@property (nonatomic) BOOL handlesTapAppLayoutEvents;
@property (nonatomic) BOOL handlesTapAppLayoutHeaderEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
- (double)reopenClosedWindowsButtonAlpha;
- (BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)a0;
- (BOOL)switcherDimmingViewBlocksTouches;
- (BOOL)isItemResizingAllowedForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (BOOL)shouldConfigureInAppDockHiddenAssertion;
- (double)containerStatusBarAnimationDuration;
- (id)handleTransitionEvent:(id)a0;
- (double)lighteningAlphaForIndex:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })adjustedOffsetForOffset:(struct CGPoint { double x0; double x1; })a0 translation:(struct CGPoint { double x0; double x1; })a1 startPoint:(struct CGPoint { double x0; double x1; })a2 locationInView:(struct CGPoint { double x0; double x1; })a3 horizontalVelocity:(inout double *)a4 verticalVelocity:(inout double *)a5;
- (BOOL)isLayoutRoleSelectable:(long long)a0 inAppLayout:(id)a1;
- (id)init;
- (long long)plusButtonStyle;
- (long long)preferredSnapshotOrientationForAppLayout:(id)a0;
- (double)wallpaperScale;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (double)contentViewScale;
- (id)appLayoutToScrollToBeforeReopeningClosedWindows;
- (unsigned long long)slideOverTongueState;
- (BOOL)shouldPerformCrossfadeForReduceMotion;
- (BOOL)wantsSwitcherBackdropBlur;
- (id)keyboardSuppressionMode;
- (BOOL)wantsAsynchronousSurfaceRetentionAssertion;
- (id)appLayoutsToResignActive;
- (id)handleTapOutsideToDismissEvent:(id)a0;
- (id)neighboringAppLayoutsForFocusedAppLayout:(id)a0;
- (BOOL)canSelectLeafWithModifierKeysInAppLayout:(id)a0;
- (struct CGSize { double x0; double x1; })_contentSize;
- (BOOL)shouldPerformRotationAnimationForOrientationChange;
- (BOOL)shouldBringCardToFrontDuringInsertionOrRemoval;
- (BOOL)isContainerStatusBarVisible;
- (BOOL)shouldUseBrightMaterialForIndex:(unsigned long long)a0;
- (id)visibleShelves;
- (id)visibleHomeAffordanceLayoutElements;
- (BOOL)wantsDockBehaviorAssertion;
- (id)appLayoutsToCacheFullsizeSnapshots;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (BOOL)isIndexRubberbandableForSwipeToKill:(unsigned long long)a0;
- (BOOL)canPerformKeyboardShortcutAction:(long long)a0 forBundleIdentifier:(id)a1;
- (BOOL)isSwitcherWindowVisible;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clippingFrameForIndex:(unsigned long long)a0 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (long long)shadowStyleForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForShelf:(id)a0;
- (long long)headerStyleForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })shelfBackgroundBlurFrame;
- (id)appLayoutForReceivingHardwareButtonEvents;
- (unsigned long long)indexToScrollToAfterRemovingIndex:(unsigned long long)a0;
- (BOOL)shouldAllowContentViewTouchesForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (BOOL)shouldAccessoryDrawShadowForAppLayout:(id)a0;
- (double)dockWindowLevel;
- (BOOL)shouldAnimateInsertionOrRemovalOfAppLayout:(id)a0 atIndex:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForLayoutRole:(long long)a0 inAppLayout:(id)a1 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (unsigned long long)transactionCompletionOptions;
- (id)foregroundAppLayouts;
- (double)reopenClosedWindowsButtonScale;
- (BOOL)isFocusEnabledForAppLayout:(id)a0;
- (unsigned long long)slideOverTongueDirection;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clippingFrameForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (id)inactiveAppLayoutsReachableByKeyboardShortcut;
- (BOOL)isResizeGrabberVisibleForAppLayout:(id)a0;
- (BOOL)shouldRubberbandFullScreenHomeGrabberView;
- (double)shadowOffsetForIndex:(unsigned long long)a0;
- (BOOL)wantsHomeScreenPointerInteractions;
- (BOOL)isHomeScreenContentRequired;
- (BOOL)wantsDockWindowLevelAssertion;
- (unsigned long long)activeCornersForTouchResizeForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)adjustedContinuousExposeIdentifiersInStripFromPreviousIdentifiersInStrip:(id)a0;
- (double)visibleMarginForItemContainerAtIndex:(unsigned long long)a0;
- (double)dockProgress;
- (BOOL)clipsToUnobscuredMarginAtIndex:(unsigned long long)a0;
- (long long)tintStyleForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (double)contentPageViewScaleForAppLayout:(id)a0 withScale:(double)a1;
- (long long)switcherBackdropBlurType;
- (double)titleOpacityForIndex:(unsigned long long)a0;
- (id)adjustedAppLayoutsForAppLayouts:(id)a0;
- (double)plusButtonAlpha;
- (unsigned long long)indexToScrollToAfterInsertingAtIndex:(unsigned long long)a0;
- (BOOL)shouldAllowGroupOpacityForAppLayout:(id)a0;
- (id)appLayoutsToCacheSnapshots;
- (double)backgroundOpacityForIndex:(unsigned long long)a0;
- (BOOL)wantsSlideOverTongue;
- (id)appLayoutToAttachSlideOverTongue;
- (id)appExposeAccessoryButtonsBundleIdentifier;
- (double)homeScreenBackdropBlurProgress;
- (id)animationAttributesForLayoutElement:(id)a0;
- (BOOL)isItemContainerPointerInteractionEnabled;
- (id)appLayoutToScrollToBeforeTransitioning;
- (BOOL)wantsSwitcherDimmingView;
- (struct CGPoint { double x0; double x1; })contentOffsetForIndex:(unsigned long long)a0 alignment:(long long)a1;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (double)homeScreenDimmingAlpha;
- (BOOL)isLayoutRoleKillable:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (BOOL)shouldAcceleratedHomeButtonPressBegin;
- (BOOL)shouldScrollViewBlockTouches;
- (id)handleEvent:(id)a0;
- (BOOL)isHomeAffordanceSupportedForAppLayout:(id)a0;
- (BOOL)isScrollEnabled;
- (double)blurViewIconScaleForIndex:(unsigned long long)a0;
- (BOOL)isLayoutRoleDraggable:(long long)a0 inAppLayout:(id)a1;
- (double)rotationAngleForIndex:(unsigned long long)a0;
- (id)activeLeafAppLayoutsReachableByKeyboardShortcut;
- (double)switcherBackdropBlurProgress;
- (double)wallpaperOverlayAlphaForIndex:(unsigned long long)a0;
- (id)handleTapAppLayoutEvent:(id)a0;
- (double)switcherDimmingAlpha;
- (double)titleAndIconOpacityForIndex:(unsigned long long)a0;
- (char)activityModeForAppLayout:(id)a0;
- (id)scrollViewAttributes;
- (char)jetsamModeForAppLayout:(id)a0;
- (double)shadowOpacityForLayoutRole:(long long)a0 atIndex:(unsigned long long)a1;
- (double)homeScreenScale;
- (BOOL)isLayoutRoleEligibleForContentDragSpringLoading:(long long)a0 inAppLayout:(id)a1;
- (double)scaleForIndex:(unsigned long long)a0;
- (long long)touchBehaviorForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)adjustedContinuousExposeIdentifiersInSwitcherFromPreviousIdentifiersInSwitcher:(id)a0 identifiersInStrip:(id)a1;
- (double)shelfBackgroundBlurOpacity;
- (BOOL)shouldUseBackgroundWallpaperTreatmentForIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)handleScrollEvent:(id)a0;
- (long long)dockUpdateMode;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(unsigned long long)a0;
- (long long)homeScreenBackdropBlurType;
- (id)visibleAppLayouts;
- (BOOL)shouldFireTransitionCompletionInDefaultRunLoopMode;
- (struct CGPoint { double x0; double x1; })restingOffsetForScrollOffset:(struct CGPoint { double x0; double x1; })a0 velocity:(struct CGPoint { double x0; double x1; })a1;
- (id)topMostLayoutElements;
- (double)homeScreenAlpha;
- (id)handleRemovalEvent:(id)a0;
- (unsigned long long)dockWindowLevelPriority;
- (long long)wallpaperStyle;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (double)minimumTranslationToKillIndex:(unsigned long long)a0;
- (BOOL)wantsSpaceAccessoryViewPointerInteractionsForAppLayout:(id)a0;
- (double)snapshotScaleForAppLayout:(id)a0;
- (BOOL)shouldScaleOverlayToFillBoundsAtIndex:(unsigned long long)a0;
- (void)resetAdjustedScrollingState;
- (id)containerLeafAppLayoutForShelf:(id)a0;
- (BOOL)isWallpaperRequiredForSwitcher;
- (id)_appLayoutsToCacheSnapshotsWithVisiblePileRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 numberOfSnapshotsToCache:(unsigned long long)a1 biasForward:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundingFrameForPileAtIndex:(unsigned long long)a0 withScrollOffsetApplied:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundingFrameForPileWithIdentifier:(id)a0 withScrollOffsetApplied:(BOOL)a1;
- (id)_compactedBoundingBoxSizesByAppLayout;
- (id)_currentLayoutCalculationsValidityToken;
- (double)_defaultCardScale;
- (struct CGSize { double x0; double x1; })_fittedContentSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForIndex:(unsigned long long)a0 withScaleApplied:(BOOL)a1 scrollOffsetApplied:(BOOL)a2;
- (unsigned long long)_indexOfAppLayoutInItsPile:(id)a0;
- (unsigned long long)_indexOfLeadingAppLayout;
- (id)_visiblePileIdentifiers;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_visiblePileRange;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_visibleSwitcherBoundsIncludingShadow;
- (id)buildLayoutCalculationsForCache:(id)a0;
- (id)handleTapAppLayoutHeaderEvent:(id)a0;
- (BOOL)shouldConfigureInAppDockVisibleAssertion;

@end
