@class CAShapeLayer;

@interface WFCameraShutterButton : UIControl

@property (weak, nonatomic) CAShapeLayer *outlineLayer;
@property (weak, nonatomic) CAShapeLayer *buttonLayer;

- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (void)layoutSubviews;

@end
