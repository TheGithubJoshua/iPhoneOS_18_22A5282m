@class PKAppletSubcredentialSharingRequest, PKRemoteSubcredentialMessageComposeViewController, _UIAsyncInvocation;
@protocol PKSubcredentialMessageComposeViewControllerDelegate;

@interface PKSubcredentialMessageComposeViewController : UIViewController {
    id<PKSubcredentialMessageComposeViewControllerDelegate> _delegate;
    _UIAsyncInvocation *_remoteVCRequest;
    PKAppletSubcredentialSharingRequest *_sharingRequest;
    PKRemoteSubcredentialMessageComposeViewController *_remoteVC;
}

@property (weak, nonatomic) id<PKSubcredentialMessageComposeViewControllerDelegate> delegate;

+ (BOOL)_shouldForwardViewWillTransitionToSize;

- (id)initWithCoder:(id)a0;
- (void)loadView;
- (void)viewWillLayoutSubviews;
- (long long)modalPresentationStyle;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (id)childViewControllerForStatusBarStyle;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (id)childViewControllerForStatusBarHidden;
- (void)dealloc;
- (long long)modalTransitionStyle;
- (void)_setRemoteVC:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithSharingRequest:(id)a0 delegate:(id)a1;

@end
