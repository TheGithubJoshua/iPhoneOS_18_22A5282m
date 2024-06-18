@class SBFFluidBehaviorSettings, SBAppLayout;

@interface SBCenterWindowPagePresentationSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_toAppLayout;
    BOOL _isInAppMorphAnimation;
    SBFFluidBehaviorSettings *_defaultCriticallyDampedSettings;
}

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (double)perspectiveAngleForAppLayout:(id)a0;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForLayoutRole:(long long)a0 inAppLayout:(id)a1 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)animationAttributesForLayoutElement:(id)a0;
- (BOOL)shouldAsyncRenderUntilDelay:(inout double *)a0;
- (double)scaleForIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)transitionWillBegin;
- (id)initWithTransitionID:(id)a0 toAppLayout:(id)a1 isMorph:(BOOL)a2;

@end
