@class UIView;

@interface SFWebFormAccessoryViewWrapper : UIView {
    UIView *_webFormAccessoryView;
}

@property (nonatomic) double bottomBarHeight;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithWebFormAccessoryView:(id)a0 bottomBarHeight:(double)a1;

@end
