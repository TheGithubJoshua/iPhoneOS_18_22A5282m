@class KeychainSyncCountryInfo, NSString, NSArray, KeychainSyncDevicePINController, PSKeychainSyncManager, PSSpecifier, KeychainSyncPhoneSettingsFragment, PSSetupController;

@interface PSAccountSecurityController : PSListController <KeychainSyncViewControllerDelegate, KeychainSyncPhoneSettingsFragmentDelegate, UIAlertViewDelegate> {
    PSSpecifier *_recoverySwitch;
    NSArray *_passcodeSpecifiers;
    PSSetupController *_devicePasscodeChangeSetupController;
    KeychainSyncDevicePINController *_devicePINController;
    KeychainSyncPhoneSettingsFragment *_phoneSettingsFragment;
    NSString *_SMSTarget;
    KeychainSyncCountryInfo *_SMSTargetCountryInfo;
    BOOL _secureBackupEnabled;
    PSKeychainSyncManager *_manager;
}

@property (nonatomic) int securityCodeType;
@property (retain, nonatomic) NSString *securityCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (id)init;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)reloadSpecifiers;
- (void)cancelPressed;
- (void)disableRecovery;
- (void)_setShowsDoneButton:(BOOL)a0;
- (void)_showSecurityCodeChangeSheetOnSpecifier:(id)a0;
- (void)changeSecurityCode:(id)a0;
- (void)handleBurnedRecord;
- (void)keychainSyncController:(id)a0 didFinishWithResult:(id)a1 error:(id)a2;
- (void)navCancelPressed;
- (void)navDonePressed;
- (id)passcodeSpecifiers;
- (void)phoneSettingsFragment:(id)a0 didChangePhoneNumber:(id)a1 countryInfo:(id)a2;
- (void)saveSMSTargetChanges;
- (void)setUseRecovery:(id)a0 specifier:(id)a1;
- (id)useRecoveryForSepecifier:(id)a0;

@end
