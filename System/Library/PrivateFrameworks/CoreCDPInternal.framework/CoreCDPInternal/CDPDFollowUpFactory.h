@interface CDPDFollowUpFactory : NSObject

+ (id)contextToIdentifierMap;

- (void)_configureConfirmExistingSecretFollowUpItem:(id)a0;
- (BOOL)_isManateeAvailableForAltDSID:(id)a0;
- (id)_confirmExistingSecretFollowUpAction;
- (id)_baseFollowUpNotificationWithContext:(id)a0;
- (id)_createPasscodeFollowUpAction;
- (BOOL)_isWalrusEnabled;
- (id)_offlineSecretChangeFollowUpAction;
- (id)_followUpForOfflineSecretChangeWithContext:(id)a0;
- (BOOL)_isBiometricAuthEnrolled;
- (id)_createPasscodeNoteFollowUpAction;
- (BOOL)_supportsFaceID;
- (id)_followUpForConfirmExistingSecretWithContext:(id)a0;
- (void)_configureRepairFollowUpItem:(id)a0;
- (id)_createPasscodeDismissNoteFollowUpAction;
- (void)_configureWalrusRepairFollowUpItem:(id)a0;
- (id)_followUpForRepairWithContext:(id)a0;
- (id)_followUpItemForWalrusCreatePasscodeWithContext:(id)a0;
- (unsigned long long)secretType;
- (id)_followUpActionForRecoveryKeyRepair;
- (id)_followUpActionForRepair;
- (id)_deviceCapabilityProvider;
- (void)_configureWalrusConfirmExistingSecretFollowUpItem:(id)a0;
- (id)_followUpForSettingUpBiometricsWithContext:(id)a0;
- (BOOL)_isManateeAvailable;
- (id)followUpItemWithContext:(id)a0;
- (id)_secureTermsFollowUpAction;
- (id)identifierForContext:(id)a0;
- (id)_followUpForSecureTermsWithContext:(id)a0;
- (id)_localizedStringForKey:(id)a0;
- (id)_baseFollowUpItemWithContext:(id)a0;
- (id)_followUpForRecoveryKeyRepairWithContext:(id)a0;
- (BOOL)_isBiometricCapable;

@end
