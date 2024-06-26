@class NSString, NSMutableSet, SBSwitcherLayoutCalculationsCache;

@interface SBStripContinuousExposeSwitcherModifier : SBSwitcherModifier <SBSwitcherLayoutCalculationsCacheDelegate> {
    BOOL _requireStripContentsInViewHierarchy;
    SBSwitcherLayoutCalculationsCache *_stripLayoutCache;
    unsigned long long _modifierEventGenCount;
    double _cached_appStripOriginX;
    double _cached_appStripUnocclusionProgress;
}

@property (retain, nonatomic) NSMutableSet *highlightedByTouchAppLayouts;
@property (retain, nonatomic) NSMutableSet *highlightedByHoverAppLayouts;
@property (nonatomic, getter=isContinuousExposeConfigurationChangeTransition) BOOL continuousExposeConfigurationChangeTransition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)appLayoutsForContinuousExposeIdentifier:(id)a0;
- (id)init;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (unsigned long long)maskedCornersForIndex:(unsigned long long)a0;
- (double)perspectiveAngleForAppLayout:(id)a0;
- (long long)shadowStyleForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (long long)headerStyleForIndex:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })anchorPointForIndex:(unsigned long long)a0;
- (id)inactiveAppLayoutsReachableByKeyboardShortcut;
- (double)dimmingAlphaForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (double)contentPageViewScaleForAppLayout:(id)a0 withScale:(double)a1;
- (double)titleOpacityForIndex:(unsigned long long)a0;
- (double)backgroundOpacityForIndex:(unsigned long long)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)handleEvent:(id)a0;
- (BOOL)isHomeAffordanceSupportedForAppLayout:(id)a0;
- (double)titleAndIconOpacityForIndex:(unsigned long long)a0;
- (double)shadowOpacityForLayoutRole:(long long)a0 atIndex:(unsigned long long)a1;
- (double)scaleForIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)visibleAppLayouts;
- (struct CGPoint { double x0; double x1; })adjustedSpaceAccessoryViewAnchorPoint:(struct CGPoint { double x0; double x1; })a0 forAppLayout:(id)a1;
- (id)topMostLayoutElements;
- (struct SBSwitcherGradientWallpaperAttributes { double x0; double x1; })wallpaperGradientAttributesForIndex:(unsigned long long)a0;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (double)adjustedSpaceAccessoryViewScale:(double)a0 forAppLayout:(id)a1;
- (BOOL)_isAppLayoutEffectivelyOnStage:(id)a0;
- (double)_appStripOriginX;
- (id)_currentLayoutCalculationsValidityToken;
- (double)_highlightScaleForAppLayout:(id)a0;
- (unsigned long long)_indexInContinuousExposeIdentifierPileForAppLayout:(id)a0;
- (void)_invalidateAppStripOriginX;
- (BOOL)_isGroupForAppLayoutHighlightedFromHover:(id)a0;
- (BOOL)_isGroupForAppLayoutHighlightedFromTouch:(id)a0;
- (id)_orderedVisibleAppLayoutsIgnoringProgress:(BOOL)a0;
- (struct CGPoint { double x0; double x1; })_positionForPositionIn3DContainerSpace:(struct CGPoint { double x0; double x1; })a0 layerPosition:(struct CGPoint { double x0; double x1; })a1 layerSize:(struct CGSize { double x0; double x1; })a2 layerAnchorPoint:(struct CGPoint { double x0; double x1; })a3 layerTransform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a4 containerPerspective:(double)a5;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_stripFrame;
- (double)_wallpaperDimmingForIndex:(unsigned long long)a0;
- (id)buildLayoutCalculationsForCache:(id)a0;
- (id)handleHighlightEvent:(id)a0;

@end
