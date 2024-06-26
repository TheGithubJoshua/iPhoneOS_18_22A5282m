@class UIColor, UIView;

@interface _TVSpinnerView : UIView {
    BOOL _shouldResumeAnimation;
    UIView *_spinnerContainer;
    UIView *_spinnerOverlayContainer;
}

@property (readonly, nonatomic, getter=isAnimating) BOOL animating;
@property (readonly, nonatomic) UIColor *color;

- (void)startAnimating;
- (void)stopAnimating;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_applicationDidBecomeActiveNotification:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)dealloc;
- (void)willMoveToWindow:(id)a0;
- (void)_applicationWillResignActiveNotification:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 color:(id)a1;
- (void)_removeAnimations;
- (void)_addAnimations;
- (id)_spinnerImageForTraitCollection:(id)a0 size:(struct CGSize { double x0; double x1; })a1 alpha:(double)a2;
- (void)_updateImagesForTraitCollection:(id)a0;

@end
