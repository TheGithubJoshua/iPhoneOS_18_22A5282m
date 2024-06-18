@class WFRemotePINEntryViewController, NSArray, NSString, _UIFallbackPresentationViewController, NSURL, UIViewController;

@interface WFPINEntryViewController : UIViewController <WFPINEntryViewControllerProtocol> {
    _UIFallbackPresentationViewController *_fallbackPresentationVC;
    NSArray *_windowsWithDisabledRotation;
    UIViewController *_rootViewControllerToUse;
    WFRemotePINEntryViewController *_remoteViewController;
    NSURL *_URL;
    NSString *_pageTitle;
    id /* block */ _completion;
}

@property (copy, nonatomic) id /* block */ dismissCompletionHandler;

+ (Class)remoteViewControllerClass;
+ (id)serviceViewControllerClassName;

- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)shouldAutorotate;
- (void).cxx_destruct;
- (id)delegate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dealloc;
- (unsigned long long)_supportedInterfaceOrientationsForRootViewController;
- (void)userDidCancel;
- (BOOL)hasUIWebViewSubView:(id)a0;
- (id)initWithURL:(id)a0 pageTitle:(id)a1 completion:(id /* block */)a2;
- (void)insertRemoteViewController:(id)a0;
- (void)presentViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)userEnteredCorrectPIN;

@end
