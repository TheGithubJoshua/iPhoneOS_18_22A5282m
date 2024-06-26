@class UITextView, UIStackView, NSString, UILabel, CDPUIAccessCodeEntryTextField;
@protocol CDPUIManualAccessCodeEntryViewControllerDelegate;

@interface CDPUIManualAccessCodeEntryViewController : OBWelcomeController <CDPUIAccessCodeEntryTextFieldDelegate>

@property (retain, nonatomic) UITextView *prefixView;
@property (retain, nonatomic) CDPUIAccessCodeEntryTextField *entryTextView;
@property (retain, nonatomic) UILabel *errorLabelView;
@property (retain, nonatomic) UIStackView *contentStackView;
@property (retain, nonatomic) UIStackView *codeEntryStackView;
@property (weak, nonatomic) id<CDPUIManualAccessCodeEntryViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (id)_contentStackView;
- (id)_labelView;
- (void)_setupView;
- (id)_errorLabelView;
- (id)_accessCodeEntryStackView;
- (id)_manualAccessCodeTextView;
- (id)_wrappingKeySubstringFromAccessKey:(id)a0;
- (void)accessCodeEntryTextFieldDidReturn:(id)a0;
- (void)accessCodeEntryTextFieldDidUpdate:(id)a0;

@end
