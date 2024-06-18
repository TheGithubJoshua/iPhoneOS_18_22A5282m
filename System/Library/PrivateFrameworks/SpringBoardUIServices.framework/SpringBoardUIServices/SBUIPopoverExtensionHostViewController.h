@protocol _SBUIPopoverExtensionHostDelegate;

@interface SBUIPopoverExtensionHostViewController : _UIRemoteViewController <_SBUIPopoverExtensionHostInterface>

@property (weak, nonatomic) id<_SBUIPopoverExtensionHostDelegate> delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (BOOL)__shouldRemoteViewControllerFenceOperations;
- (void)_extensionRequestsDismiss;

@end
