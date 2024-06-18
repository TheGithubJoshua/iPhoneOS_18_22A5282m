@class SBHomeScreenZoomSwitcherModifier, SBAppLayout;

@interface SBSlideOverToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_fromSlideOverAppLayout;
    SBAppLayout *_toFullScreenAppLayout;
    SBAppLayout *_removedMainAppLayout;
    SBHomeScreenZoomSwitcherModifier *_homeScreenZoomModifier;
}

- (id)preferredAppLayoutToReuseAccessoryForAppLayout:(id)a0 fromAppLayouts:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)visibleHomeAffordanceLayoutElements;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (BOOL)wantsSlideOverTongue;
- (id)animationAttributesForLayoutElement:(id)a0;
- (double)blurDelayForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (double)scaleForIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)visibleAppLayouts;
- (id)transitionWillBegin;
- (long long)wallpaperStyle;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (BOOL)isLayoutRoleBlurred:(long long)a0 inAppLayout:(id)a1;
- (BOOL)isLayoutRoleMatchMovedToScene:(long long)a0 inAppLayout:(id)a1;
- (id)handleSceneReadyEvent:(id)a0;
- (id)initWithTransitionID:(id)a0 slideOverAppLayout:(id)a1 fullScreenAppLayout:(id)a2 replacingMainAppLayout:(id)a3;

@end
