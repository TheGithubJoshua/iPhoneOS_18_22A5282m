@class UIColor, UIImageView, UIView;

@interface _UIParallaxDimmingView : UIView {
    UIImageView *leftEdgeFade;
}

@property (retain, nonatomic) UIColor *dimmingColor;
@property (nonatomic) BOOL backgroundIsDimmed;
@property (retain, nonatomic) UIView *addingSubview;

- (void)_updateLeftEdgeFade:(BOOL)a0;
- (id)defaultBorderColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)initViewWrappingView:(id)a0 withLeftBorder:(double)a1 shouldReverseLayoutDirection:(BOOL)a2;
- (void)crossFade;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 overrideDimmingColor:(id)a1;
- (id)_basicAnimationWithKeyPath:(id)a0;

@end
