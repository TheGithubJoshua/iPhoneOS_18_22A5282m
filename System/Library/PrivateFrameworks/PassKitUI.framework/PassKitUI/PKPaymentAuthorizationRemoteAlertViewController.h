@class PKPaymentAuthorizationPresentersCoordinator;

@interface PKPaymentAuthorizationRemoteAlertViewController : SBUIRemoteAlertServiceViewController

@property (readonly, nonatomic) PKPaymentAuthorizationPresentersCoordinator *presentersCoordinator;

+ (BOOL)_shouldForwardViewWillTransitionToSize;

- (void)viewWillDisappear:(BOOL)a0;
- (int)_preferredStatusBarVisibility;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)_shouldRemoveViewFromHierarchyOnDisappear;
- (void)askForDismissalWithReason:(unsigned long long)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)configureAppearance;
- (void)configureWithContext:(id)a0 completion:(id /* block */)a1;
- (void)configureWithUserInfo:(id)a0 dismissalHandler:(id /* block */)a1 completion:(id /* block */)a2;
- (void)didInvalidateForRemoteAlert;
- (void)handleButtonActions:(id)a0;
- (id)initializePresentersCoordinatorWithUserInfo:(id)a0;
- (void)noteActivatedWithPresentationMode:(long long)a0;
- (void)presentersCoordinatorDidInvalidate;
- (void)updateStatusBarVisibility;

@end
