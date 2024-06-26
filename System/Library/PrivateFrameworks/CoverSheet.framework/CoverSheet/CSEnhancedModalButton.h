@class UIVisualEffectView, UIView;

@interface CSEnhancedModalButton : UIButton {
    UIVisualEffectView *_effectView;
    UIView *_highlightedView;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_setContinuousCornerRadius:(double)a0;
- (void)_buttonPressed:(id)a0;
- (void)_addBackgroundHighlightView;
- (void)_addVisualEffect;
- (void)_buttonReleased:(id)a0;

@end
