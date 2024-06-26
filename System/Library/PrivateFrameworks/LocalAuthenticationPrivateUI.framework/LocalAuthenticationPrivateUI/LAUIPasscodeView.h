@class LAContext, UIViewController;
@protocol LAUIPasscodeService, LAUIDelegate;

@interface LAUIPasscodeView : UIViewController <LAUIDelegate> {
    LAContext *_context;
    id<LAUIDelegate> _originalDelegate;
    UIViewController<LAUIPasscodeService> *_remoteVC;
    BOOL _shouldPresentUI;
    BOOL _shouldBecomeFirstResponder;
}

- (id)initWithContext:(id)a0;
- (void)loadView;
- (BOOL)becomeFirstResponder;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (void)dealloc;
- (void)_appDidBecomeActive:(id)a0;
- (void)event:(long long)a0 params:(id)a1 reply:(id /* block */)a2;
- (void)_appDidBecomeInactive:(id)a0;
- (void)_prepareRemoteView;
- (void)_presentRemoteView;
- (id)initWithContext:(id)a0 shouldPresentUI:(BOOL)a1;

@end
