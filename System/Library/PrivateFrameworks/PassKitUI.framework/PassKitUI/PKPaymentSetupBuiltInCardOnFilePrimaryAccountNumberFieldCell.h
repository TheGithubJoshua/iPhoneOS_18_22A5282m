@class UIImageView;

@interface PKPaymentSetupBuiltInCardOnFilePrimaryAccountNumberFieldCell : PKPaymentSetupFieldCell {
    UIImageView *_accessoryImageView;
}

@property (nonatomic) long long paymentCredentialType;
@property (nonatomic) BOOL hasDarkAppearance;

- (id)init;
- (BOOL)textFieldShouldClear:(id)a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (BOOL)isEnabled;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (void)dealloc;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (id)_networkImage;
- (void)_updateNetworkImage;
- (void)pk_applyAppearance:(id)a0;
- (void)setPaymentSetupField:(id)a0;

@end
