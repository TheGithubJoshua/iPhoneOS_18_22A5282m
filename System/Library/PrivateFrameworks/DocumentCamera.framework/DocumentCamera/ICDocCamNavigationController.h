@interface ICDocCamNavigationController : UINavigationController

- (BOOL)shouldAutorotate;
- (BOOL)_canShowWhileLocked;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)_preferredModalPresentationStyle;
- (void)prepareForDismissal;
- (id)initWithImageCache:(id)a0 docCamDelegate:(id)a1 remoteDocCamDelegate:(id)a2;

@end
