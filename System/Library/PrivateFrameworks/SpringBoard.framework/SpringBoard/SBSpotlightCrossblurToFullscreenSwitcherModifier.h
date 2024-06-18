@class SBAppLayout;

@interface SBSpotlightCrossblurToFullscreenSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_toAppLayout;
}

@property (nonatomic) BOOL shouldForceDefaultAnchorPointForTransition;

- (BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (double)perspectiveAngleForAppLayout:(id)a0;
- (BOOL)isSwitcherWindowVisible;
- (struct CGPoint { double x0; double x1; })anchorPointForIndex:(unsigned long long)a0;
- (BOOL)isHomeScreenContentRequired;
- (BOOL)shouldPinLayoutRolesToSpace:(unsigned long long)a0;
- (id)appLayoutsToCacheSnapshots;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustedSpaceAccessoryViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forAppLayout:(id)a1;
- (double)homeScreenBackdropBlurProgress;
- (id)animationAttributesForLayoutElement:(id)a0;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (BOOL)shouldAsyncRenderUntilDelay:(inout double *)a0;
- (double)homeScreenScale;
- (double)scaleForIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (long long)homeScreenBackdropBlurType;
- (id)visibleAppLayouts;
- (struct CGPoint { double x0; double x1; })adjustedSpaceAccessoryViewAnchorPoint:(struct CGPoint { double x0; double x1; })a0 forAppLayout:(id)a1;
- (id)transitionWillBegin;
- (id)topMostLayoutElements;
- (id)_layoutSettings;
- (double)homeScreenAlpha;
- (id)_opacitySettings;
- (long long)wallpaperStyle;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (BOOL)isWallpaperRequiredForSwitcher;
- (BOOL)_isToAppLayoutAtIndex:(unsigned long long)a0;
- (id)initWithTransitionID:(id)a0 toAppLayout:(id)a1;

@end
