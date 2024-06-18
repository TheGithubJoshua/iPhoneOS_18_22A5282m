@class UIKBBackdropView, UIView;
@protocol UIKBKeyViewContentView;

@interface UIKBViewBackedKeyView : UIKBKeyView

@property (retain, nonatomic) UIKBBackdropView *backdropView;
@property (retain, nonatomic) UIView<UIKBKeyViewContentView> *contentView;
@property (weak, nonatomic) UIView *touchForwardingView;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setRenderConfig:(id)a0;
- (void).cxx_destruct;
- (void)retestForTouchUpSelectedVariantIndexForKey:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)layoutSubviews;
- (void)retestSelectedVariantIndexForKey:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)renderFlagsForTraits:(id)a0;
- (void)setDrawFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateForKeyplane:(id)a0 key:(id)a1;

@end
