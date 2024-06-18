@class SBFullScreenContinuousExposeSwitcherModifier, SBAppSwitcherContinuousExposeSwitcherModifier, SBAppLayout;

@interface _SBContinuousExposePeekContentSwitcherModifier : SBSwitcherModifier {
    SBFullScreenContinuousExposeSwitcherModifier *_fullScreenContinuousExposeAppLayoutModifier;
    SBAppSwitcherContinuousExposeSwitcherModifier *_appSwitcherModifier;
}

@property (readonly, nonatomic) SBAppLayout *appLayout;
@property (readonly, nonatomic) long long configuration;

- (BOOL)isLayoutRoleSelectable:(long long)a0 inAppLayout:(id)a1;
- (double)scaleForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)keyboardSuppressionMode;
- (BOOL)switcherHitTestsAsOpaque;
- (BOOL)shouldAllowContentViewTouchesForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForLayoutRole:(long long)a0 inAppLayout:(id)a1 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)adjustedAppLayoutsForAppLayouts:(id)a0;
- (id)handleTapAppLayoutEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithAppLayout:(id)a0 configuration:(long long)a1;
- (id)responseForProposedChildResponse:(id)a0 childModifier:(id)a1 event:(id)a2;

@end
