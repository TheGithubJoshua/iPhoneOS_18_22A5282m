@class NSUUID, NSArray;

@interface SBTransitionSwitcherModifier : SBSwitcherModifier {
    BOOL _wantsResignActiveAndAsyncRenderingAssertions;
    BOOL _isTransitioningToSwitcher;
    NSArray *_appLayoutsToEnsureExist;
}

@property (readonly, nonatomic) unsigned long long transitionPhase;
@property (readonly, nonatomic) BOOL asyncRenderingDisabled;
@property (readonly, nonatomic) NSUUID *transitionID;

- (id)handleTransitionEvent:(id)a0;
- (unsigned long long)maskedCornersForIndex:(unsigned long long)a0;
- (id)handleTimerEvent:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)shouldPerformCrossfadeForReduceMotion;
- (id)keyboardSuppressionMode;
- (BOOL)wantsAsynchronousSurfaceRetentionAssertion;
- (id)appLayoutsToResignActive;
- (id)transitionWillUpdate;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (double)visibleMarginForItemContainerAtIndex:(unsigned long long)a0;
- (BOOL)clipsToUnobscuredMarginAtIndex:(unsigned long long)a0;
- (id)adjustedAppLayoutsForAppLayouts:(id)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)transitionDidEnd;
- (BOOL)shouldAsyncRenderUntilDelay:(inout double *)a0;
- (void).cxx_destruct;
- (id)handleScrollEvent:(id)a0;
- (id)transitionWillBegin;
- (id)handleRemovalEvent:(id)a0;
- (BOOL)requireStripContentsInViewHierarchy;
- (BOOL)shouldInterruptForRemovalEvent:(id)a0;
- (void)_setTransitionPhase:(unsigned long long)a0;
- (id)handleGestureEvent:(id)a0;
- (id)initWithTransitionID:(id)a0;
- (BOOL)isPreparingLayout;
- (BOOL)isUpdatingLayout;

@end
