@class SBAppLayout;

@interface SBRotationSwitcherModifier : SBTransitionSwitcherModifier

@property (readonly, nonatomic) SBAppLayout *appLayout;
@property (readonly, nonatomic) long long fromInterfaceOrientation;
@property (readonly, nonatomic) long long toInterfaceOrientation;
@property (nonatomic) BOOL shouldNotUseAnchorPointToPinLayoutRolesToSpace;

- (BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)a0;
- (id)keyboardSuppressionMode;
- (id)appLayoutsToResignActive;
- (BOOL)shouldPerformRotationAnimationForOrientationChange;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (double)rotationAngleForIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)transitionWillBegin;
- (id)initWithTransitionID:(id)a0 appLayout:(id)a1 fromInterfaceOrientation:(long long)a2 toInterfaceOrientation:(long long)a3;

@end
