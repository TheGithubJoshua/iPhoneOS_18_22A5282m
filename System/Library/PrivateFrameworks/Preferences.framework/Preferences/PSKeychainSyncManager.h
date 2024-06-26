@class UIView, PSRootController, NSString, KeychainSyncDevicePINController, KeychainSyncAdvancedSecurityCodeController, PSKeychainSyncSecurityCodeController, KeychainSyncPhoneNumberController, KeychainSyncSMSVerificationController, NSTimer, UIViewController, PSSetupController;

@interface PSKeychainSyncManager : NSObject <KeychainSyncViewControllerDelegate> {
    BOOL _joiningCircle;
    BOOL _joiningCircleAfterRecovery;
    int _circleNotificationToken;
    int _flow;
    KeychainSyncDevicePINController *_devicePinController;
    PSKeychainSyncSecurityCodeController *_simpleSecurityCodeController;
    PSKeychainSyncSecurityCodeController *_complexSecurityCodeController;
    KeychainSyncAdvancedSecurityCodeController *_advancedSecurityCodeChoiceController;
    PSKeychainSyncSecurityCodeController *_securityCodeRecoveryController;
    KeychainSyncPhoneNumberController *_phoneNumberController;
    KeychainSyncSMSVerificationController *_smsValidationController;
    UIView *_spinningView;
    unsigned int _spinnerCount;
    NSTimer *_credentialExpirationTimer;
    NSTimer *_joinAfterRecoveryTimeoutTimer;
}

@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ passwordPromptCompletion;
@property (copy, nonatomic) id /* block */ changeSecurityCodeCompletion;
@property (copy, nonatomic) id /* block */ resetCompletion;
@property (copy, nonatomic) id /* block */ circleJoinCompletion;
@property (retain, nonatomic) UIViewController *resetPromptControllerHost;
@property (weak, nonatomic) UIViewController *hostViewController;
@property (retain, nonatomic) PSSetupController *settingsSetupController;
@property (retain, nonatomic) PSRootController *buddyNavigationController;
@property (retain, nonatomic) NSString *securityCodeRecoveryAttempt;
@property (readonly, nonatomic) NSString *stagedSecurityCode;
@property (readonly, nonatomic) int stagedSecurityCodeType;
@property (nonatomic) BOOL circleWasReset;
@property (readonly, nonatomic, getter=isRunningInBuddy) BOOL runningInBuddy;
@property (copy, nonatomic) NSString *appleIDUsername;
@property (copy, nonatomic) NSString *appleIDRawPassword;
@property (readonly, nonatomic) NSString *appleIDPasswordOrEquivalentToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;
+ (void)getStatusWithCompletion:(id /* block */)a0;

- (void)_cleanup;
- (id)init;
- (id)navigationController;
- (void).cxx_destruct;
- (void)dealloc;
- (void)showController:(id)a0;
- (void)_autoVetSMSValidationWithToken:(id)a0;
- (void)handleCircleChangedNotification;
- (void)_callCompletionWithStatus:(int)a0 error:(id)a1;
- (BOOL)_changeSecurityCode:(id)a0 type:(int)a1 smsTarget:(id)a2 smsTargetCountryInfo:(id)a3 username:(id)a4 passwordOrEquivalentToken:(id)a5 error:(id *)a6;
- (void)_changeToNewSecurityCode:(id)a0 type:(int)a1 smsTarget:(id)a2 smsTargetCountryInfo:(id)a3;
- (void)_circleJoinAfterRecoveryTimerFired:(id)a0;
- (void)_cleanupAppleIDCredentials;
- (id)_defaultKeychainViewSet;
- (void)_deleteSafariAutoFillPasswords;
- (void)_disableCDPKeychainSyncOverController:(id)a0 deletingSafariPasswords:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)_disableKeychainSyncOverController:(id)a0 deletingSafariPasswords:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)_enableSecureBackupWithPhoneNumber:(id)a0 countryInfo:(id)a1;
- (BOOL)_errorRequiresPasswordPrompt:(id)a0;
- (void)_finishedWithStatus:(int)a0 error:(id)a1;
- (void)_peerApprovalFromRecoveryFlow;
- (void)_preSetupCancelledWithCurrentStatus;
- (void)_promptUserToDeleteSafariSavedContentWithCompletion:(id /* block */)a0;
- (void)_recoverWithSecurityCode:(id)a0 verificationCode:(id)a1;
- (void)_registerForCircleChangeNotifications;
- (void)_registerForCircleChangeNotificationsWithCompletion:(id /* block */)a0;
- (BOOL)_registerUserCredentialsName:(id)a0 rawPassword:(id)a1 error:(id *)a2;
- (BOOL)_resetCircleAndDisableBackupWithError:(id *)a0;
- (void)_resetFromRecoveryFlow;
- (void)_showGenericFlowErrorAlert;
- (void)_showGenericFlowErrorAlertWithDismissalHandler:(id /* block */)a0;
- (void)_showInvalidPhoneNumberAlertWithDigits:(id)a0 countryInfo:(id)a1;
- (void)_showResetFlowOverController:(id)a0 withEnableBackupText:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)_startCircleJoinAfterRecoveryTimer;
- (void)_stopCircleJoinAfterRecoveryTimer;
- (void)disableKeychainSyncOverController:(id)a0 withCompletion:(id /* block */)a1;
- (void)dismissAppleSupportPane:(id)a0;
- (void)joinCircleAfterRecovery:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)joinCircleAndEnableSecureBackupWithPhoneNumber:(id)a0 countryInfo:(id)a1;
- (void)joinCircleWithCompletion:(id /* block */)a0;
- (void)keychainSyncController:(id)a0 didFinishWithResult:(id)a1 error:(id)a2;
- (void)keychainSyncControllerCancel:(id)a0;
- (void)keychainSyncPhoneNumberController:(id)a0 didCompleteWithPhoneNumber:(id)a1 countryInfo:(id)a2;
- (void)makeSettingsSetupControllerWithSpecifier:(id)a0 parent:(id)a1 initialController:(id)a2;
- (void)pinChoiceAlertDidChooseToUseDevicePasscode:(BOOL)a0;
- (id)preferencesApp;
- (void)promptForDevicePasscodeChangeToPasscode:(id)a0 overController:(id)a1 completion:(id /* block */)a2;
- (void)promptForPasswordIfCredentialsNotCachedOverController:(id)a0 withCompletion:(id /* block */)a1;
- (void)promptForPasswordIfNeededForWritingOverController:(id)a0 withCompletion:(id /* block */)a1;
- (void)promptForPasswordIfNeededOverController:(id)a0 withCompletion:(id /* block */)a1;
- (void)promptForPasswordIfNeededWithCompletion:(id /* block */)a0;
- (void)promptForPasswordOverController:(id)a0 withCompletion:(id /* block */)a1;
- (void)setAppleIDRawPassword:(id)a0 equivalentToken:(id)a1;
- (void)setStagedSecurityCode:(id)a0 type:(int)a1;
- (void)showAlert:(id)a0;
- (void)showChangeSecurityCodeFlowWithSpecifier:(id)a0 overController:(id)a1 completion:(id /* block */)a2;
- (void)showContactAppleSupportPane;
- (void)showEnableEscrowFlowWithSpecifier:(id)a0 overController:(id)a1 completion:(id /* block */)a2;
- (void)showEnableFlowWithNavigationController:(id)a0 completion:(id /* block */)a1;
- (void)showEnableSyncFlowWithSpecifier:(id)a0 overController:(id)a1 completion:(id /* block */)a2;
- (void)showNetworkReachabilityError;
- (void)showPinChoiceAlert;
- (void)showRecoveryFlowWithNavigationController:(id)a0 completion:(id /* block */)a1;
- (void)showRecoveryFlowWithSpecifier:(id)a0 overController:(id)a1 completion:(id /* block */)a2;
- (void)showResetAcknowledgementIfNeededWithCompletion:(id /* block */)a0;
- (void)showResetAndJoinFlowOverController:(id)a0 withCompletion:(id /* block */)a1;
- (void)startNavigationSpinnerInViewController:(id)a0;
- (void)stopNavigationSpinner;
- (id)viewControllerForPresentingAlerts;

@end
