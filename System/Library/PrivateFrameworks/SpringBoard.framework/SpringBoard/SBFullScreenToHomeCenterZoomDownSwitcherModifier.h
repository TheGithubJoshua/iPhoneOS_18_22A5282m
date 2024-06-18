@class SBCoplanarSwitcherModifier, SBAppLayout;

@interface SBFullScreenToHomeCenterZoomDownSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_appLayout;
    struct CGPoint { double x; double y; } _liftOffVelocity;
    double _offsetYPercentOfScreenHeight;
    SBCoplanarSwitcherModifier *_coplanarModifier;
}

@property (nonatomic) BOOL shouldForceDefaultAnchorPointForTransition;

- (BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (void)didMoveToParentModifier:(id)a0;
- (double)perspectiveAngleForAppLayout:(id)a0;
- (BOOL)isSwitcherWindowVisible;
- (struct CGPoint { double x0; double x1; })anchorPointForIndex:(unsigned long long)a0;
- (BOOL)isHomeScreenContentRequired;
- (BOOL)shouldPinLayoutRolesToSpace:(unsigned long long)a0;
- (id)appLayoutsToCacheSnapshots;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustedSpaceAccessoryViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forAppLayout:(id)a1;
- (id)animationAttributesForLayoutElement:(id)a0;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (double)scaleForIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (long long)homeScreenBackdropBlurType;
- (id)visibleAppLayouts;
- (struct CGPoint { double x0; double x1; })adjustedSpaceAccessoryViewAnchorPoint:(struct CGPoint { double x0; double x1; })a0 forAppLayout:(id)a1;
- (BOOL)shouldFireTransitionCompletionInDefaultRunLoopMode;
- (id)transitionWillBegin;
- (id)topMostLayoutElements;
- (id)_layoutSettings;
- (BOOL)_isIndexCenterZoomAppLayout:(unsigned long long)a0;
- (id)_opacitySettings;
- (long long)wallpaperStyle;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (id)initWithTransitionID:(id)a0 appLayout:(id)a1 offsetYPercentOfScreenHeight:(double)a2;
- (BOOL)isWallpaperRequiredForSwitcher;

@end
