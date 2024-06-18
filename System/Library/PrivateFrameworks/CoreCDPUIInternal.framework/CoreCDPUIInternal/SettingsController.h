@class CDPRecoveryController, NSString, DummyWebAccessStateController, CDPRecoveryTestController, CDPUIController, DummyWalrusStateController;

@interface SettingsController : PSListController <CDPAuthProvider> {
    BOOL _didUseSMS;
    CDPUIController *_uiController;
    CDPRecoveryTestController *_recoveryTestController;
    CDPRecoveryController *_recoveryController;
    DummyWalrusStateController *_walrusStateController;
    DummyWebAccessStateController *_webAccessStatusController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (id)_recoveryKeySpecifierRegen;
- (BOOL)shouldAllowCDPEnrollment;
- (id)getUserDefaultEnabled:(id)a0;
- (id)_walrusSpecifiers;
- (void)beginIDMSRecoveryWithRKSkip:(id)a0;
- (void)showEnableWebAccessUI:(id)a0;
- (void)startBeneficiaryFlow:(id)a0;
- (void)promptForCustomNumericRemoteSecret:(id)a0;
- (void)setWalrusStatus:(BOOL)a0;
- (void)promptFor6DigitRemoteSecret:(id)a0;
- (void)promptForLocalSecret:(id)a0;
- (void)startSpinnerForSpecifier:(id)a0;
- (void)setUserDefaultEnabled:(id)a0 specifier:(id)a1;
- (void)deviceToDeviceAccountUpgradeCardUI:(id)a0;
- (void)showEnableWalrusUI:(id)a0;
- (void)beginIDMSRecoveryWithFailure:(id)a0;
- (void)_recoverAndSyncrhonizeStingrayData:(id)a0;
- (id)_enableWalrusSwitchCellSpecifier;
- (void)beginIDMSRecoveryPrimary:(id)a0;
- (void)viewDidLoad;
- (void)_showStatusChangeUIFor:(id)a0;
- (void)promptFor4DigitRemoteSecret:(id)a0;
- (void)beginIDMSRecoveryRK:(id)a0;
- (id)_recoverAndSyncrhonizeDataSpecifier;
- (BOOL)_forceInlineUI;
- (id)webAccessEnabled;
- (id)_fakeDevicesWithExpectedSecret:(id)a0 isNumber:(BOOL)a1 numericLength:(id)a2;
- (void).cxx_destruct;
- (void)_recoverStingrayData:(id)a0;
- (void)showDisableWebAccessUI:(id)a0;
- (void)_showWebAccessChangeUI:(unsigned long long)a0;
- (void)_showWalrusChangeUI:(unsigned long long)a0;
- (void)_loadSpecifiers;
- (void)beginFMIPRecovery:(id)a0;
- (id)_recoveryKeySpecifier;
- (BOOL)_rkMandate;
- (BOOL)_didUseSMSVerification;
- (void)showDisableWalrusUI:(id)a0;
- (id)_recoverStingrayDataSpecifier;
- (void)removeSpinnerFromSpecifier:(id)a0;
- (void)beginIDMSRecovery:(id)a0;
- (BOOL)_offerRemoteApproval;
- (void)generateNewRecoveryKey:(id)a0;
- (id)walrusEnabled;
- (void)setWebAccessStatus:(BOOL)a0;
- (id)_contextForPrimaryAccount;
- (BOOL)_enableWalrus;
- (void)promptForComplexICSC:(id)a0;
- (void)cdpContext:(id)a0 verifyMasterKey:(id)a1 completion:(id /* block */)a2;
- (void)promptForCustomAlphanumericRemoteSecret:(id)a0;
- (void)promptFor4DigitICSC:(id)a0;
- (void)promptForRandomICSC:(id)a0;
- (void)promptFor6DigitICSC:(id)a0;
- (id)_webAccessSpecifiers;
- (void)enableCDP:(id)a0;

@end
