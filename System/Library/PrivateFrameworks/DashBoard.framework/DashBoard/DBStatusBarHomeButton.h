@class UIImage, UIImageView;

@interface DBStatusBarHomeButton : DBStatusBarButton

@property (retain, nonatomic) UIImage *iconsImage;
@property (retain, nonatomic) UIImage *dashboardImage;
@property (retain, nonatomic) UIImageView *focusRingImageView;
@property (nonatomic) unsigned long long displayState;

- (void)_installSelectGestureRecognizer;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFocusHighlightColor:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)_setupImagesIfNecessary;
- (void)_updateDisplayState:(BOOL)a0;

@end
