@interface AKInkOverlayView_iOS : AKInkOverlayView

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)commonInit;
- (id)_viewsToHitTestForEvent:(id)a0;

@end
