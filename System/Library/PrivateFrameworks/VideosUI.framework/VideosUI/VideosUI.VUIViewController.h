@interface VideosUI.VUIViewController : UIViewController

@property (nonatomic, readonly) BOOL shouldAutomaticallyForwardAppearanceMethods;

- (id)initWithCoder:(id)a0;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)didMoveToParentViewController:(id)a0;
- (void)updateViewConstraints;
- (void)viewWillAppear:(BOOL)a0;
- (void)willMoveToParentViewController:(id)a0;

@end
