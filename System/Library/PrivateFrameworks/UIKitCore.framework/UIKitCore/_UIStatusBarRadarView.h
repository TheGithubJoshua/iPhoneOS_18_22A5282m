@interface _UIStatusBarRadarView : _UIStatusBarImageView

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)applyStyleAttributes:(id)a0;
- (id)_tintColor;
- (BOOL)isUserInteractionEnabled;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)canBecomeFocused;

@end
