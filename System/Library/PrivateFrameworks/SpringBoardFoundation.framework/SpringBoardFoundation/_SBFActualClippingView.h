@interface _SBFActualClippingView : SBFTouchPassThroughView

@property (nonatomic) BOOL hitTestsSubviewsOutsideBounds;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end