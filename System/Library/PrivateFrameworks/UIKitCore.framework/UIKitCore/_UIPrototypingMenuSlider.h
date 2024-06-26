@class _UIPortalView, UIImageView, UIView, UILabel;

@interface _UIPrototypingMenuSlider : UISlider {
    BOOL _didBringKnobToFront;
}

@property (retain, nonatomic) UIView *knobView;
@property (retain, nonatomic) UIImageView *knobBGView;
@property (retain, nonatomic) _UIPortalView *knobPortal;
@property (retain, nonatomic) UILabel *currentValueLabel;
@property (nonatomic) double stepSize;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } knobCenter;

- (void)decrement;
- (void)setValue:(float)a0 animated:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })thumbRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 trackRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 value:(float)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)increment;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)_setKnobViewProminent:(BOOL)a0 animated:(BOOL)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_thumbHitEdgeInsets;

@end
