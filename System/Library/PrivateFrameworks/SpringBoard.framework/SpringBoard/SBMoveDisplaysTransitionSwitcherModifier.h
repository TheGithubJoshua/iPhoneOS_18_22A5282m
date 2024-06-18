@class SBTransitionSwitcherModifierMoveDisplaysContext, SBAppLayout;

@interface SBMoveDisplaysTransitionSwitcherModifier : SBTransitionSwitcherModifier

@property (readonly, nonatomic) SBAppLayout *remainingAppLayout;
@property (readonly, nonatomic) BOOL remainingAppLayoutNeedsLayout;
@property (readonly, nonatomic) SBTransitionSwitcherModifierMoveDisplaysContext *moveDisplaysContext;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (double)scaleForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)transitionWillUpdate;
- (double)perspectiveAngleForAppLayout:(id)a0;
- (BOOL)isSwitcherWindowVisible;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForLayoutRole:(long long)a0 inAppLayout:(id)a1 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct CGPoint { double x0; double x1; })anchorPointForIndex:(unsigned long long)a0;
- (id)adjustedAppLayoutsForAppLayouts:(id)a0;
- (id)transitionDidEnd;
- (double)scaleForIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)visibleAppLayouts;
- (id)transitionWillBegin;
- (id)topMostLayoutElements;
- (BOOL)isLayoutRoleBlurred:(long long)a0 inAppLayout:(id)a1;
- (BOOL)isLayoutRoleMatchMovedToScene:(long long)a0 inAppLayout:(id)a1;
- (id)_appLayoutsContainingMovingDisplayItems;
- (id)handleSceneReadyEvent:(id)a0;
- (id)initWithTransitionEvent:(id)a0;

@end
