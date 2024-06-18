@interface CoreIDVUI.IdentityProofingPasscodeEntryViewController : UIViewController <UITextFieldDelegate> {
    void /* unknown type, empty encoding */ proofingFlowManager;
    void /* unknown type, empty encoding */ titleText;
    void /* unknown type, empty encoding */ subtitleText;
    void /* unknown type, empty encoding */ displayName;
    void /* unknown type, empty encoding */ placeHolder;
    void /* unknown type, empty encoding */ minLength;
    void /* unknown type, empty encoding */ maxLength;
    void /* unknown type, empty encoding */ identityProofingCardArtResolutionHelper;
    void /* unknown type, empty encoding */ assetProvider;
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ activityIndicator;
    void /* unknown type, empty encoding */ secondaryStackView;
    void /* unknown type, empty encoding */ primaryStackView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ primaryLabel;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ imageViewContainer;
    void /* unknown type, empty encoding */ textField;
    void /* unknown type, empty encoding */ $__lazy_storage_$_textFieldView;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ addButton;
}

- (id)initWithCoder:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)dismissKeyboard;
- (BOOL)textFieldShouldReturn:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)willMoveToParentViewController:(id)a0;
- (void)textFieldDidChange:(id)a0;
- (void)keyboardDidHideWithNotification:(id)a0;
- (void)cancelButtonClicked;
- (void)addButtonClicked;
- (void)keyboardDidShowWithNotification:(id)a0;

@end
