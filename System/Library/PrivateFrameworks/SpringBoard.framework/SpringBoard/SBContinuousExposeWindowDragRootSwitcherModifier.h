@class SBAppLayout;

@interface SBContinuousExposeWindowDragRootSwitcherModifier : SBGestureRootSwitcherModifier

@property (readonly, nonatomic) SBAppLayout *initialAppLayout;

- (id)appLayoutsToEnsureExistForMainTransitionEvent:(id)a0;
- (id)handleTransitionEvent:(id)a0;
- (id)keyboardSuppressionMode;
- (id)appLayoutsToResignActive;
- (void).cxx_destruct;
- (long long)gestureType;
- (id)debugPotentialChildModifiers;
- (id)gestureChildModifierForGestureEvent:(id)a0 activeTransitionModifier:(id)a1;
- (id)handleGestureEvent:(id)a0;
- (id)handleSceneReadyEvent:(id)a0;
- (id)initWithStartingEnvironmentMode:(long long)a0 initialAppLayout:(id)a1;
- (id)transitionChildModifierForMainTransitionEvent:(id)a0 activeGestureModifier:(id)a1;

@end