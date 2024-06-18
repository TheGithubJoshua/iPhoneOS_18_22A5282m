@protocol HUCCRemoteDashboardDelegate;

@interface HUCCRemoteDashboardViewController : _UIRemoteViewController <HUHomeControlInterface>

@property (weak, nonatomic) id<HUCCRemoteDashboardDelegate> delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (id)requestViewControllerWithConnectionHandler:(id /* block */)a0;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)requestDismissal;
- (void)authorizeIfLocked;
- (void)quickControlsPresentationDidUpdate:(BOOL)a0;

@end
