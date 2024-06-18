@class UIButton, UIVisualEffectView;

@interface VKKeyboardCameraInsertButton : UIView {
    UIButton *_button;
    UIVisualEffectView *_effectView;
}

@property (readonly, nonatomic) UIButton *uiButton;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)isEnabled;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (id)viewForFirstBaselineLayout;
- (id)initWithPrimaryAction:(id)a0;

@end
