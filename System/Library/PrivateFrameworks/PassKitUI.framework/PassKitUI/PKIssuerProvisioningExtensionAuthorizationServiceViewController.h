@interface PKIssuerProvisioningExtensionAuthorizationServiceViewController : UIViewController {
    BOOL _finished;
}

+ (id)_remoteViewControllerInterface;

- (void)loadView;
- (void)viewWillLayoutSubviews;
- (void)beginRequestWithExtensionContext:(id)a0;

@end
