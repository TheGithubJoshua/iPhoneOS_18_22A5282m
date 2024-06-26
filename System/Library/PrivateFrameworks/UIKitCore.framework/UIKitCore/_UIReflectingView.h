@class UIView;

@interface _UIReflectingView : UIView {
    UIView *_gradientView;
    double _reflectionAlpha;
}

@property (readonly, retain, nonatomic) UIView *containerView;
@property (nonatomic) double reflectionFraction;
@property (nonatomic) double reflectionAlpha;

- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_gradientLayer;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (void)_updateGradientColors;

@end
