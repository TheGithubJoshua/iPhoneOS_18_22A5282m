@interface VUIBaseView : UIView

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)willMoveToWindow:(id)a0;
- (void)setVuiUserInteractionEnabled:(BOOL)a0;
- (BOOL)vuiIsUserInteractionEnabled;
- (void)vui_traitCollectionDidChange:(id)a0;

@end
