@class UISegment;

@interface UISegmentAccessibilityButton : UIButton

@property (retain, nonatomic) UISegment *segment;

+ (id)buttonWithSegment:(id)a0;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 forEvent:(struct __GSEvent { } *)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
