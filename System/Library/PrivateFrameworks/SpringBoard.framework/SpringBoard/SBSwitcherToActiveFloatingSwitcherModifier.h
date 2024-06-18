@class SBSwitcherModifier, SBAppLayout;

@interface SBSwitcherToActiveFloatingSwitcherModifier : SBTransitionSwitcherModifier {
    long long _direction;
    SBAppLayout *_fullScreenAppLayout;
    SBSwitcherModifier *_floatingDeckModifier;
}

- (BOOL)wantsSwitcherBackdropBlur;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (long long)switcherBackdropBlurType;
- (id)appLayoutsToCacheSnapshots;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)appLayoutToScrollToBeforeTransitioning;
- (BOOL)wantsSwitcherDimmingView;
- (void).cxx_destruct;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)visibleAppLayouts;
- (id)transitionWillBegin;
- (id)_layoutSettings;
- (id)initWithTransitionID:(id)a0 direction:(long long)a1 fullScreenAppLayout:(id)a2 floatingDeckModifier:(id)a3;

@end
