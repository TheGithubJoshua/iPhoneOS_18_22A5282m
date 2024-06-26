@class PKRemotePaymentSetupViewController, _UIAsyncInvocation, PKPaymentSetupRequest, UIActivityIndicatorView, UILabel, UIButton;
@protocol PKPaymentSetupRequestViewControllerDelegate;

@interface PKPaymentSetupViewController : UIViewController {
    PKRemotePaymentSetupViewController *_remoteVC;
    PKPaymentSetupRequest *_paymentSetupRequest;
    _UIAsyncInvocation *_remoteVCRequest;
    UIActivityIndicatorView *_spinner;
    UILabel *_loadingLabel;
    UIButton *_cancelButton;
    BOOL _explicitPresentationStyle;
}

@property (weak, nonatomic) id<PKPaymentSetupRequestViewControllerDelegate> delegate;
@property (nonatomic) long long presentationStyle;

+ (BOOL)_shouldForwardViewWillTransitionToSize;
+ (void)paymentSetupFeaturesForConfiguration:(id)a0 completion:(id /* block */)a1;

- (id)initWithCoder:(id)a0;
- (void)loadView;
- (void)viewWillLayoutSubviews;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)childViewControllerForStatusBarStyle;
- (void).cxx_destruct;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)childViewControllerForStatusBarHidden;
- (void)dealloc;
- (long long)modalTransitionStyle;
- (id)initWithPaymentSetupRequest:(id)a0;
- (void)_setRemoteVC:(id)a0 completionHandler:(id /* block */)a1;
- (void)_cancelTapped;
- (void)_hideLoadingContent;
- (void)didFinishWithPasses:(id)a0 error:(id)a1;
- (void)updateModalPresentationStyle;

@end
