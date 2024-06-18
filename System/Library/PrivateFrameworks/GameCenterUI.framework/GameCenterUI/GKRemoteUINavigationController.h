@class GKRemoteUIController;

@interface GKRemoteUINavigationController : UINavigationController

@property (readonly, nonatomic) GKRemoteUIController *remoteUIController;

- (void)loadView;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithRemoteUIController:(id)a0;

@end
