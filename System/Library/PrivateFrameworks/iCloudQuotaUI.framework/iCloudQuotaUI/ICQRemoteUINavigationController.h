@interface ICQRemoteUINavigationController : UINavigationController

@property (nonatomic) BOOL shouldSignalDelegateOnDismiss;

- (void)viewDidDisappear:(BOOL)a0;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)initWithRootViewController:(id)a0;

@end
