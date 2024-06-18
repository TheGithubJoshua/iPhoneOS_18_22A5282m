@class UIBezierPath, UIColor;

@interface DBWidgetFocusRingView : UIView

@property (retain, nonatomic) UIBezierPath *focusPath;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIColor *ringColor;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateFocusRect;

@end
