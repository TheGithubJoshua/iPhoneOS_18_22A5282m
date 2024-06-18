@protocol PSEnrollmentNavigationControllerDismissalDelegate;

@interface PSEnrollmentNavigationController : UINavigationController

@property (weak, nonatomic) id<PSEnrollmentNavigationControllerDismissalDelegate> dismissalDelegate;

- (long long)preferredStatusBarStyle;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (id)_backgroundColorForModalFormSheet;
- (BOOL)canBeShownFromSuspendedState;

@end
