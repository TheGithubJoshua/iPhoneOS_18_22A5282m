@class _UIFloatingContentView;

@interface UITableViewCellFocusableEditControl : UITableViewCellEditControl {
    _UIFloatingContentView *_focusedFloatingContentView;
}

- (void)setHighlighted:(BOOL)a0;
- (void)setSelected:(BOOL)a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)wantsMaskingWhileAnimatingDisabled;
- (void)layoutSubviews;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (id)_currentImage;
- (void)_ensureFocusedFloatingContentView;
- (BOOL)_shouldHandlePressEvent:(id)a0;
- (void)_updateFloatingViewForCurrentTraits;
- (BOOL)wantsImageShadow;

@end
