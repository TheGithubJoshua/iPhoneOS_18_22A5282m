@class SBAppLayout;

@interface SBSwapFullScreenAppSidesSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
    long long _layoutRoleToKeepOnTop;
    long long _animationPhase;
}

- (id)handleTimerEvent:(id)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)topMostLayoutRolesForAppLayout:(id)a0;
- (double)shadowOpacityForLayoutRole:(long long)a0 atIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)transitionWillBegin;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 toAppLayout:(id)a2 layoutRoleToKeepOnTop:(long long)a3;

@end
