@class CALayer, ICDocCamImageQuadEditOverlay;

@interface ICDocCamImageQuadEditKnobAccessibilityElement : UIAccessibilityElement

@property (weak, nonatomic) CALayer *knobLayer;
@property (weak, nonatomic) ICDocCamImageQuadEditOverlay *overlayView;

- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (BOOL)accessibilityViewIsModal;
- (id)initWithKnobLayer:(id)a0 overlayView:(id)a1;

@end
