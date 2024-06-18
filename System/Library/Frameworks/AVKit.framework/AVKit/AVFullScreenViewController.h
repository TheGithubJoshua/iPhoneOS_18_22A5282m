@class UIViewController, UIView;
@protocol AVFullScreenViewControllerDelegate;

@interface AVFullScreenViewController : UIViewController

@property (weak, nonatomic) UIView *contentView;
@property (weak, nonatomic) UIViewController<AVFullScreenViewControllerDelegate> *delegate;
@property (weak, nonatomic) AVFullScreenViewController *associatedFullScreenViewController;
@property (weak, nonatomic) AVFullScreenViewController *sourceFullScreenViewController;

- (void)viewWillMoveToWindow:(id)a0;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (void)loadView;
- (long long)preferredStatusBarStyle;
- (long long)preferredWhitePointAdaptivityStyle;
- (BOOL)prefersStatusBarHidden;
- (BOOL)modalPresentationCapturesStatusBarAppearance;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)shouldAutorotate;
- (id)targetForAction:(SEL)a0 withSender:(id)a1;
- (long long)preferredInterfaceOrientationForPresentation;
- (void).cxx_destruct;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (BOOL)avkit_isEffectivelyFullScreen;
- (BOOL)_canShowWhileLocked;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)canBecomeFirstResponder;
- (id)keyCommands;
- (void)attachContentView;

@end
