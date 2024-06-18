@class SBSwitcherModifier;

@interface SBHomeToSwitcherSwitcherModifier : SBTransitionSwitcherModifier

@property (readonly, nonatomic) long long direction;
@property (readonly, nonatomic) SBSwitcherModifier *multitaskingModifier;

- (double)containerStatusBarAnimationDuration;
- (id)handleTimerEvent:(id)a0;
- (id)transitionWillUpdate;
- (void).cxx_destruct;
- (id)transitionWillBegin;
- (id)_dismissForEmptySwitcherResponseName;
- (id)appLayoutToScrollToDuringTransition;
- (id)initWithTransitionID:(id)a0 direction:(long long)a1 multitaskingModifier:(id)a2;
- (BOOL)isEffectivelyHome;

@end
