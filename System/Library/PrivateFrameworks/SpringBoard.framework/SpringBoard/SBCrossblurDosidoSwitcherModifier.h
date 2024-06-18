@class SBAppLayout;

@interface SBCrossblurDosidoSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
    unsigned long long _direction;
}

- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 toAppLayout:(id)a2 direction:(unsigned long long)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (double)scaleForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)transitionWillUpdate;
- (double)perspectiveAngleForAppLayout:(id)a0;
- (id)appLayoutsToCacheSnapshots;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)transitionDidEnd;
- (BOOL)shouldAsyncRenderUntilDelay:(inout double *)a0;
- (double)scaleForIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)visibleAppLayouts;
- (id)transitionWillBegin;
- (id)topMostLayoutElements;
- (id)_layoutSettings;
- (id)_opacitySettings;
- (long long)wallpaperStyle;
- (BOOL)isWallpaperRequiredForSwitcher;

@end
