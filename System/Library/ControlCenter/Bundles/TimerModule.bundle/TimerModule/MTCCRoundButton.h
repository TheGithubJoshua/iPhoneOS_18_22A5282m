@class NSString, UIVisualEffectView, UILabel, UIView;

@interface MTCCRoundButton : UIControl

@property (retain, nonatomic) UIVisualEffectView *backgroundView;
@property (retain, nonatomic) UIView *normalStateBackgroundView;
@property (retain, nonatomic) UIView *selectedStateBackgroundView;
@property (retain, nonatomic) UIView *highlightView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIView *containerView;

- (id)init;
- (void)_updateCornerRadius;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_updateForStateChange;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)handleContentSizeChange:(id)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)_touchDown:(id)a0;
- (void)_touchUpInside:(id)a0;
- (void)_dragEnter:(id)a0;
- (void)_dragExit:(id)a0;
- (void)_touchUpOutside:(id)a0;

@end
