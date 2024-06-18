@class _UIStatusBarRoundedCornerView;

@interface UIStatusBarCarPlayRecordingTimeItemView : UIStatusBarCarPlayTimeItemView {
    _UIStatusBarRoundedCornerView *_pillView;
}

- (void)removeFromSuperview;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (long long)textStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)buttonType;
- (void).cxx_destruct;
- (BOOL)canBecomeFocused;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_pillFrame;
- (void)_updatePillFrame;
- (BOOL)allowsUserInteraction;
- (double)extraRightPadding;
- (void)movedToSuperview:(id)a0;
- (BOOL)showsTouchWhenHighlighted;
- (BOOL)usesAdvancedActions;

@end
