@class SBAppLayout;

@interface SBPulseTransitionSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_appLayout;
    BOOL _shouldScaleIn;
}

- (BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)a0;
- (id)handleTimerEvent:(id)a0;
- (id)transitionWillUpdate;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (double)scaleForIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)topMostLayoutElements;
- (id)initWithTransitionID:(id)a0 appLayout:(id)a1;

@end
