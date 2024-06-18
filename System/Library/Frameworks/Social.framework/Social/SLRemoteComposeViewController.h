@protocol SLRemoteComposeViewControllerDelegateProtocol;

@interface SLRemoteComposeViewController : _UIRemoteViewController

@property (weak, nonatomic) id<SLRemoteComposeViewControllerDelegateProtocol> delegate;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;

@end
