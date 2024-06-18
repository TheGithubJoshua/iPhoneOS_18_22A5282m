@class SBAppExposeGridSwitcherModifier;

@interface SBRouteToAppExposeSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppExposeGridSwitcherModifier *_appExposeModifier;
    BOOL _isTransitioningOutOfAppExpose;
}

@property (nonatomic) BOOL reversesFloatingCardDirection;

- (long long)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
- (id)handleTransitionEvent:(id)a0;
- (long long)plusButtonStyle;
- (double)contentPageViewScaleForAppLayout:(id)a0 withScale:(double)a1;
- (id)adjustedAppLayoutsForAppLayouts:(id)a0;
- (id)appExposeAccessoryButtonsBundleIdentifier;
- (struct CGPoint { double x0; double x1; })contentOffsetForIndex:(unsigned long long)a0 alignment:(long long)a1;
- (id)scrollViewAttributes;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })restingOffsetForScrollOffset:(struct CGPoint { double x0; double x1; })a0 velocity:(struct CGPoint { double x0; double x1; })a1;
- (double)snapshotScaleForAppLayout:(id)a0;
- (id)initWithTransitionID:(id)a0 appExposeModifier:(id)a1;

@end
