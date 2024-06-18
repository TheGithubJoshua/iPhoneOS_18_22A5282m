@protocol SSDittoHostViewControllerDelegate;

@interface SSDittoHostViewController : _UIRemoteViewController <SSRemoteViewControllerServiceToHostInterface>

@property (weak, nonatomic) id<SSDittoHostViewControllerDelegate> delegate;

+ (id)exportedInterface;
+ (BOOL)__shouldHostRemoteTextEffectsWindow;
+ (id)serviceViewControllerInterface;

- (void)dismiss;
- (BOOL)becomeFirstResponder;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (id)_serviceProxy;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dismissScreenshotExperience;
- (void)screenshotExperienceHasDismissed;

@end
