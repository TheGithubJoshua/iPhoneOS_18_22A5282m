@class UIColor, UIImageView, UIImage, CADisplayLink;

@interface _UICircleProgressIndicator : UIView {
    double _animatedValue;
    double _animationEndTime;
    double _animationStartTime;
    double _animationStartValue;
    CADisplayLink *_displayLink;
    UIImageView *_indeterminateView;
    BOOL _isAnimating;
    UIColor *_unhighlightedBackgroundColor;
}

@property (retain, nonatomic) UIImage *borderImage;
@property (retain, nonatomic) UIImage *fillImage;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } imageInsets;
@property (nonatomic, getter=isIndeterminate) BOOL indeterminate;
@property (nonatomic) double progress;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;

+ (id)_borderImage;
+ (id)_fillImage;
+ (id)_indeterminateImage;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)dealloc;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (void)_animateValueOnDisplayLink:(id)a0;
- (void)_setHidesBorderView:(BOOL)a0;
- (void)_startIndeterminateAnimation;
- (void)setProgress:(double)a0 animated:(BOOL)a1;

@end
