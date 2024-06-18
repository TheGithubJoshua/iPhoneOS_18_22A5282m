@class PKPartialShareInvitation, NSArray, _UIAsyncInvocation, PKAddShareablePassConfiguration, PKRemoteShareableCredentialsMessageComposeViewController;
@protocol PKShareableCredentialsMessageComposeViewControllerDelegate;

@interface PKShareableCredentialsMessageComposeViewController : UIViewController {
    id<PKShareableCredentialsMessageComposeViewControllerDelegate> _delegate;
    PKAddShareablePassConfiguration *_configuration;
    PKPartialShareInvitation *_partialShareInvite;
    _UIAsyncInvocation *_remoteVCRequest;
    PKRemoteShareableCredentialsMessageComposeViewController *_remoteVC;
}

@property (retain, nonatomic) NSArray *recipientAddresses;
@property (weak, nonatomic) id<PKShareableCredentialsMessageComposeViewControllerDelegate> delegate;

+ (BOOL)_shouldForwardViewWillTransitionToSize;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)loadView;
- (void)viewWillLayoutSubviews;
- (id)_init;
- (long long)modalPresentationStyle;
- (id)initWithConfiguration:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (id)childViewControllerForStatusBarStyle;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (id)childViewControllerForStatusBarHidden;
- (void)dealloc;
- (long long)modalTransitionStyle;
- (void)_setRemoteVC:(id)a0 completionHandler:(id /* block */)a1;
- (id)_initWithPartialShareInvite:(id)a0 configuration:(id)a1;
- (void)_setupRemoteView;
- (id)initWithPartialShareInvite:(id)a0;

@end
