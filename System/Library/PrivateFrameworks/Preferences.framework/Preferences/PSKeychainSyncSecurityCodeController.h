@class NSString, UIButton, UILabel;

@interface PSKeychainSyncSecurityCodeController : PSKeychainSyncTextEntryController {
    UIButton *_footerButton;
    UILabel *_footerLabel;
    NSString *_generatedCode;
    double _keyboardHeight;
}

@property (retain, nonatomic) NSString *firstPasscodeEntry;
@property (nonatomic) int mode;
@property (nonatomic) int securityCodeType;
@property (nonatomic) BOOL showsAdvancedSettings;

- (id)specifiers;
- (id)init;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)keyboardWillShow:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (id)placeholderText;
- (id)_configureTextEntryCell;
- (void)animatePasscodeFieldLeft:(BOOL)a0;
- (void)didFinishEnteringText:(id)a0;
- (void)dismissAlerts;
- (void)forgotSecurityCode;
- (void)generateRandomCode;
- (void)showAdvancedOptions;
- (id)textEntryCell;
- (Class)textEntryCellClass;
- (void)textEntryViewDidChange:(id)a0;
- (void)updateNextButton;

@end
