@class UIVisualEffectView;

@interface SBSUIWallpaperButton : UIButton {
    UIVisualEffectView *_effectView;
}

- (void)setHighlighted:(BOOL)a0;
- (id)init;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end