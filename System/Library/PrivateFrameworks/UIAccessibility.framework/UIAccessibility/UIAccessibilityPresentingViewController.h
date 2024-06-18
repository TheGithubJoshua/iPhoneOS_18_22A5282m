@class UIWindow;

@interface UIAccessibilityPresentingViewController : UIViewController {
    UIWindow *_presentationWindow;
}

- (id)init;
- (void)dismissViewControllerWithTransition:(int)a0 completion:(id /* block */)a1;
- (void)loadView;
- (void).cxx_destruct;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)dealloc;
- (void)_cleanUpPresentationWindow;
- (void)_voiceOverStatusChanged;

@end
