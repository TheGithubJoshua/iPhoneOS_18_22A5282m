@interface DBStatusBarScreenResizeButton : DBStatusBarButton

@property (nonatomic) unsigned long long transitionControlType;

- (void)_updateBackgroundColor;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateImage;

@end
