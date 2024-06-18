@interface NewsUI2.EmailSignupViewController : UIViewController {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ obController;
    void /* unknown type, empty encoding */ micaView;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ contentViewHeightConstraint;
    void /* unknown type, empty encoding */ signupButton;
    void /* unknown type, empty encoding */ notNowButton;
}

- (id)initWithCoder:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)notNow;
- (void)signup;

@end
