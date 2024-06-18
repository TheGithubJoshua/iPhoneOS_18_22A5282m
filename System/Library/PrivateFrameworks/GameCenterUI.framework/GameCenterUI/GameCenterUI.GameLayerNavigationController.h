@interface GameCenterUI.GameLayerNavigationController : UINavigationController <UIViewControllerTransitioningDelegate, UINavigationControllerDelegate> {
    void /* unknown type, empty encoding */ showsDoneButton;
    void /* unknown type, empty encoding */ doneHandler;
}

@property (nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;
@property (nonatomic, readonly) BOOL canBecomeFirstResponder;

- (id)initWithCoder:(id)a0;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithRootViewController:(id)a0;
- (void).cxx_destruct;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (BOOL)_requiresCustomPresentationController;
- (void)didTapDone;

@end
