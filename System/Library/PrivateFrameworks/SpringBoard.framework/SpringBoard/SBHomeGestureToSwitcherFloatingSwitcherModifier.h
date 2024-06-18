@class SBAppLayout, SBFluidSwitcherAnimationSettings, SBSwitcherModifier;

@interface SBHomeGestureToSwitcherFloatingSwitcherModifier : SBTransitionSwitcherModifier

@property (retain, nonatomic) SBSwitcherModifier *multitaskingModifier;
@property (retain, nonatomic) SBAppLayout *selectedAppLayout;
@property (retain, nonatomic) SBFluidSwitcherAnimationSettings *animationSettings;

- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (void).cxx_destruct;
- (id)visibleAppLayouts;
- (id)transitionWillBegin;
- (id)_layoutSettings;
- (id)initWithTransitionID:(id)a0 multitaskingModifier:(id)a1 selectedAppLayout:(id)a2;

@end
