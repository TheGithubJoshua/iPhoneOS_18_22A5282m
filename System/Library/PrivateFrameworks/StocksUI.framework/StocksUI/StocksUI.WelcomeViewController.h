@interface StocksUI.WelcomeViewController : UIViewController <UITextViewDelegate> {
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ viewProvider;
    void /* unknown type, empty encoding */ viewAnimator;
    void /* unknown type, empty encoding */ allowRendering;
    void /* unknown type, empty encoding */ statusBarView;
    void /* unknown type, empty encoding */ toolbarManager;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;

- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)showPrivacyText;
- (void)didTapContinueButton;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;

@end
