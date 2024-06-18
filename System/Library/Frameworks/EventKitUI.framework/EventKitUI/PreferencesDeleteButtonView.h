@class UIButton;

@interface PreferencesDeleteButtonView : UIView {
    UIButton *_button;
}

@property (readonly, retain, nonatomic) UIButton *button;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithTitle:(id)a0 target:(id)a1 action:(SEL)a2;

@end
