@class NSArray;

@interface TeaUI.ModalHostViewController : UIViewController <UIViewControllerTransitioningDelegate, UIAdaptivePresentationControllerDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ viewController;
    void /* unknown type, empty encoding */ closeButton;
    void /* unknown type, empty encoding */ transitionEffectView;
    void /* unknown type, empty encoding */ effect;
    void /* unknown type, empty encoding */ session;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;
@property (nonatomic, readonly) NSArray *keyCommands;

- (void)presentationControllerDidDismiss:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)animationControllerForDismissedController:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (void)dismissKeyCommand;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)closeButtonPressedWithSender:(id)a0;

@end
