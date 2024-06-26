@class GKGame, GKRemoteViewServiceController;

@interface GKHostedViewController : UIViewController

@property (retain, nonatomic) GKRemoteViewServiceController *remoteViewController;
@property (nonatomic) BOOL isRequestingRemoteViewController;
@property (nonatomic) BOOL gkIsDisappearing;
@property (retain, nonatomic) GKGame *game;
@property (nonatomic) BOOL shouldPresentRemoteViewController;
@property (nonatomic) BOOL presentingRemoteViewController;
@property (copy, nonatomic) id /* block */ remoteViewReadyHandler;

- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (id)init;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (id)_presentingViewController;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)didReceiveMemoryWarning;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)dismissModalViewControllerAnimated:(BOOL)a0;
- (id)hostSideViewControllerClassName;
- (void)didGetRemoteViewController;
- (void)donePressed:(id)a0;
- (void)presentRemoteViewControllerIfNeeded;
- (void)requestRemoteViewControllerIfNeeded;
- (void)resetRemoteViewController;
- (id)serviceSideViewControllerClassName;

@end
