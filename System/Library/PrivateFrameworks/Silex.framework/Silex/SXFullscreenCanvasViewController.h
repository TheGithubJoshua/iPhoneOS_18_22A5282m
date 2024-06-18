@protocol SXFullscreenCanvasViewControllerDelegate;

@interface SXFullscreenCanvasViewController : UIViewController

@property (nonatomic) long long statusBarStyle;
@property (nonatomic) BOOL isTransitioning;
@property (weak, nonatomic) id<SXFullscreenCanvasViewControllerDelegate> delegate;

- (long long)preferredStatusBarUpdateAnimation;
- (void)dismiss;
- (long long)preferredStatusBarStyle;
- (BOOL)prefersStatusBarHidden;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)canBecomeFirstResponder;
- (id)keyCommands;
- (void)scrollToNext;
- (void)scrollToPrevious;

@end
