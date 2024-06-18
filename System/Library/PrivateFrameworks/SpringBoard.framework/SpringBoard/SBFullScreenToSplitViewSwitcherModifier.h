@class SBAppLayout;

@interface SBFullScreenToSplitViewSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_existingAppLayout;
    SBAppLayout *_incomingAppLayout;
    BOOL _blurExistingDisplayItem;
}

- (double)scaleForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (double)backgroundOpacityForIndex:(unsigned long long)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (double)homeScreenDimmingAlpha;
- (double)shadowOpacityForLayoutRole:(long long)a0 atIndex:(unsigned long long)a1;
- (double)blurDelayForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (void).cxx_destruct;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)visibleAppLayouts;
- (id)transitionWillBegin;
- (id)topMostLayoutElements;
- (long long)wallpaperStyle;
- (BOOL)isLayoutRoleBlurred:(long long)a0 inAppLayout:(id)a1;
- (BOOL)isLayoutRoleMatchMovedToScene:(long long)a0 inAppLayout:(id)a1;
- (BOOL)isWallpaperRequiredForSwitcher;
- (id)handleSceneReadyEvent:(id)a0;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 toAppLayout:(id)a2;

@end
