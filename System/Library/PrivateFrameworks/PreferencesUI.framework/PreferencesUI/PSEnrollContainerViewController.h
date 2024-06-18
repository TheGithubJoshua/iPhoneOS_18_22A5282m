@class BiometricKitUIEnrollViewController;

@interface PSEnrollContainerViewController : UIViewController

@property (retain, nonatomic) BiometricKitUIEnrollViewController *enrollController;

+ (BOOL)_shouldForwardViewWillTransitionToSize;

- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewDidLoad;
- (void)teardown;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)isModalInPresentation;

@end
