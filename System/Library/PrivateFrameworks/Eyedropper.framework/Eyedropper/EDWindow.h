@protocol EDWindowTrackingDelegate;

@interface EDWindow : UIWindow

@property (weak, nonatomic) id<EDWindowTrackingDelegate> trackingDelegate;

+ (BOOL)_isSecure;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)initWithWindowScene:(id)a0;
- (void)handleStatusBarChangeFromHeight:(double)a0 toHeight:(double)a1;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (BOOL)_canBecomeKeyWindow;
- (BOOL)_shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (BOOL)_shouldControlAutorotation;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (BOOL)_preventsRootPresentationController;

@end
