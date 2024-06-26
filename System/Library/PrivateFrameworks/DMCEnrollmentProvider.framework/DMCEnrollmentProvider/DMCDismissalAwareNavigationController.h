@interface DMCDismissalAwareNavigationController : UINavigationController

@property (nonatomic) BOOL isPresentingAlert;
@property (copy, nonatomic) id /* block */ transitionCompletionBlock;

- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)rootViewController;
- (void)didShowViewController:(id)a0 animated:(BOOL)a1;
- (void)presentAlert:(id)a0 animated:(BOOL)a1;

@end
