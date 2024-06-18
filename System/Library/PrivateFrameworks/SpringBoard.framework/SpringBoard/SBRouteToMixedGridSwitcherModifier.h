@class SBMixedGridSwitcherModifier;

@interface SBRouteToMixedGridSwitcherModifier : SBTransitionSwitcherModifier {
    SBMixedGridSwitcherModifier *_mixedGridModifier;
    BOOL _isTransitioningOutOfAppSwitcher;
}

@property (nonatomic) BOOL reversesFloatingCardDirection;

- (id)handleTransitionEvent:(id)a0;
- (double)contentPageViewScaleForAppLayout:(id)a0 withScale:(double)a1;
- (id)adjustedAppLayoutsForAppLayouts:(id)a0;
- (id)appLayoutsToCacheSnapshots;
- (id)scrollViewAttributes;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })restingOffsetForScrollOffset:(struct CGPoint { double x0; double x1; })a0 velocity:(struct CGPoint { double x0; double x1; })a1;
- (double)snapshotScaleForAppLayout:(id)a0;
- (id)initWithTransitionID:(id)a0 mixedGridModifier:(id)a1;

@end
