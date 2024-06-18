@class SBMixedGridSwitcherModifier, SBAppLayout;

@interface SBRelocateFloatingAppLayoutSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_floatingAppLayout;
    long long _floatingConfiguration;
    long long _direction;
    SBMixedGridSwitcherModifier *_mixedGridModifier;
    BOOL _moveFloatingAppToLeadingSide;
}

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)handleTimerEvent:(id)a0;
- (id)transitionWillUpdate;
- (id)transitionDidEnd;
- (double)scaleForIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)transitionWillBegin;
- (BOOL)_comingFromSwitcherWithLeadingFloatingApp;
- (BOOL)_goingToSwitcherWithLeadingFloatingApp;
- (id)initWithTransitionID:(id)a0 floatingAppLayout:(id)a1 floatingConfiguration:(long long)a2 direction:(long long)a3 mixedGridModifier:(id)a4;

@end
