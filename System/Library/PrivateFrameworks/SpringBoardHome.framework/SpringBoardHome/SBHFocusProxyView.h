@class UIView;
@protocol SBHFocusProxyable;

@interface SBHFocusProxyView : UIView

@property (readonly, weak, nonatomic) UIView<SBHFocusProxyable> *proxyableView;
@property (readonly, nonatomic) double padding;

- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void).cxx_destruct;
- (BOOL)canBecomeFocused;
- (id)initWithProxyableView:(id)a0;

@end
