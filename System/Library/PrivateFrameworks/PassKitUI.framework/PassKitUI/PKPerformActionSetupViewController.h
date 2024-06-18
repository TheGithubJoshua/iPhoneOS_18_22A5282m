@class _UIAsyncInvocation, NSString, PKRemotePerformActionSetupViewController;
@protocol PKPerformActionSetupViewControllerDelegate;

@interface PKPerformActionSetupViewController : UIViewController {
    PKRemotePerformActionSetupViewController *_remoteVC;
    _UIAsyncInvocation *_remoteVCRequest;
    NSString *_passIdentifier;
    BOOL _explicitPresentationStyle;
}

@property (weak, nonatomic) id<PKPerformActionSetupViewControllerDelegate> delegate;
@property (nonatomic) long long presentationStyle;

+ (BOOL)_shouldForwardViewWillTransitionToSize;

- (id)init;
- (void)loadView;
- (void)viewWillLayoutSubviews;
- (void)didCancel;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)childViewControllerForStatusBarStyle;
- (void).cxx_destruct;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)childViewControllerForStatusBarHidden;
- (void)dealloc;
- (long long)modalTransitionStyle;
- (void)didFinish;
- (void)_setRemoteVC:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithPassIdentifier:(id)a0;
- (void)updateModalPresentationStyle;

@end
