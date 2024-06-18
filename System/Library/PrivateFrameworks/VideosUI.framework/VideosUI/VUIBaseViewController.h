@interface VUIBaseViewController : UIViewController

- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)didMoveToParentViewController:(id)a0;
- (void)updateViewConstraints;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewWillAppear:(BOOL)a0;
- (void)willMoveToParentViewController:(id)a0;

@end
