@class DevicePINKeypad, UIVisualEffectView;

@interface DevicePINKeypadContainerView : UIView

@property (retain) DevicePINKeypad *keypad;
@property (retain) UIVisualEffectView *backdropView;
@property double iPadKeypadHeight;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithKeypad:(id)a0;

@end
