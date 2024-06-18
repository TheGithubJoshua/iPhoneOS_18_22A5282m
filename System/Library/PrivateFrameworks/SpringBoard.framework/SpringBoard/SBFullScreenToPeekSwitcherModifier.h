@class SBAppLayout;

@interface SBFullScreenToPeekSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
    SBAppLayout *_fromFloatingAppLayout;
    SBAppLayout *_toFloatingAppLayout;
    long long _peekConfiguration;
    long long _animationPhase;
    BOOL _resizedEnoughToUnblur;
}

- (double)wallpaperScale;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)handleTimerEvent:(id)a0;
- (double)scaleForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)keyboardSuppressionMode;
- (void)didMoveToParentModifier:(id)a0;
- (id)transitionWillUpdate;
- (BOOL)isContainerStatusBarVisible;
- (BOOL)wantsDockBehaviorAssertion;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (double)dockWindowLevel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForLayoutRole:(long long)a0 inAppLayout:(id)a1 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (BOOL)wantsDockWindowLevelAssertion;
- (double)dockProgress;
- (double)homeScreenBackdropBlurProgress;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)transitionDidEnd;
- (double)homeScreenDimmingAlpha;
- (double)homeScreenScale;
- (double)blurDelayForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (void).cxx_destruct;
- (long long)homeScreenBackdropBlurType;
- (id)transitionWillBegin;
- (double)homeScreenAlpha;
- (unsigned long long)dockWindowLevelPriority;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (BOOL)isLayoutRoleBlurred:(long long)a0 inAppLayout:(id)a1;
- (id)resizeProgressNotificationsForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (BOOL)isLayoutRoleMatchMovedToScene:(long long)a0 inAppLayout:(id)a1;
- (double)_firstPhaseScale;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_firstStageFrameForPeekingAppLayoutWithInitialFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_isPeekingAppLayout:(id)a0;
- (id)handleResizeProgressEvent:(id)a0;
- (id)handleSceneReadyEvent:(id)a0;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 toAppLayout:(id)a2 fromFloatingAppLayout:(id)a3 toFloatingAppLayout:(id)a4 peekConfiguration:(long long)a5;

@end
