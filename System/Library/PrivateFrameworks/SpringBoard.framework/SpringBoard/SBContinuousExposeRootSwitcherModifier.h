@class SBSwitcherModifier, SBAppLayout;

@interface SBContinuousExposeRootSwitcherModifier : SBFullScreenFluidSwitcherRootSwitcherModifier {
    SBAppLayout *_currentAppLayout;
    SBAppLayout *_effectiveAppLayoutOnStage;
    BOOL _isStripTonguePresented;
    SBSwitcherModifier *_initialFloorModifierForWindowDrag;
}

- (BOOL)shouldUseWallpaperGradientTreatment;
- (BOOL)shouldUseNonuniformSnapshotScalingForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)swipeToKillModifierForSwipeToKillEvent:(id)a0;
- (id)appLayoutOnStage;
- (struct SBSwitcherContinuousExposeStripTongueAttributes { unsigned long long x0; unsigned long long x1; })continuousExposeStripTongueAttributes;
- (id)reduceMotionModifierForReduceMotionChangedEvent:(id)a0;
- (id)gestureModifierForGestureEvent:(id)a0;
- (id)handleTransitionEvent:(id)a0;
- (long long)_effectiveEnvironmentMode;
- (id)handleContinuousExposeIdentifiersChangedEvent:(id)a0;
- (id)focusedAppModifierForUpdateFocusedAppLayoutEvent:(id)a0;
- (id)handleContinuousExposeStripEdgeProtectTongueEvent:(id)a0;
- (id)removalModifierForRemovalEvent:(id)a0;
- (id)handleEvent:(id)a0;
- (id)transitionModifierForMainTransitionEvent:(id)a0;
- (id)lowEndHardwareModifier;
- (void).cxx_destruct;
- (id)multitaskingModifierForEvent:(id)a0;
- (id)floorModifierForTransitionEvent:(id)a0;
- (id)highlightModifierForHighlightEvent:(id)a0;
- (id)insertionModifierForInsertionEvent:(id)a0;
- (id)floorModifierForGestureEvent:(id)a0;
- (id)userScrollingModifierForScrollEvent:(id)a0;
- (BOOL)shouldScaleContentToFillBoundsAtIndex:(unsigned long long)a0;

@end
