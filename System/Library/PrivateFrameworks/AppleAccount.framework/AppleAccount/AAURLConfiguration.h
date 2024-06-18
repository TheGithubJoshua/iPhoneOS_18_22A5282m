@class NSArray, AARemoteServer, NSString, NSDictionary, NSNumber;

@interface AAURLConfiguration : NSObject {
    NSDictionary *_dictionary;
}

@property (class, readonly, nonatomic) long long beneficiaryStaleInviteDuration;
@property (class, readonly, nonatomic) long long beneficiaryDurationBeforeNotSetupCFU;
@property (class, retain, nonatomic) AARemoteServer *remoteServer;

@property (readonly, nonatomic) NSArray *urlsStoringCookies;
@property (readonly, nonatomic) NSString *apsEnvironment;
@property (readonly, nonatomic) NSString *accountCreationURL;
@property (readonly, nonatomic) NSString *updateAccountURL;
@property (readonly, nonatomic) NSString *registerURL;
@property (readonly, nonatomic) NSString *validateURL;
@property (readonly, nonatomic) NSString *accountCreationUIURL;
@property (readonly, nonatomic) NSString *updateAccountUIURL;
@property (readonly, nonatomic) NSString *signInURL;
@property (readonly, nonatomic) NSString *fetchAccountSettingsURL;
@property (readonly, nonatomic) NSString *authenticateURL;
@property (readonly, nonatomic) NSString *addEmailURL;
@property (readonly, nonatomic) NSString *initiateValidateEmailURL;
@property (readonly, nonatomic) NSString *completeValidateEmailURL;
@property (readonly, nonatomic) NSString *mobileMeOfferAlertURL;
@property (readonly, nonatomic) NSString *signingSessionCertURL;
@property (readonly, nonatomic) NSString *signingSessionURL;
@property (readonly, nonatomic) NSString *emailLookupURL;
@property (readonly, nonatomic) NSString *genericTermsURL;
@property (readonly, nonatomic) NSString *termsReportUserActionURL;
@property (readonly, nonatomic) NSString *fmipAuthenticate;
@property (readonly, nonatomic) NSString *iForgotUIURL;
@property (readonly, nonatomic) NSString *existingAppleIDTermsUIURL;
@property (readonly, nonatomic) NSString *finishProvisioningURL;
@property (readonly, nonatomic) NSString *syncMachineURL;
@property (readonly, nonatomic) NSString *loginAccountURL;
@property (readonly, nonatomic) NSString *loginDelegatesURL;
@property (readonly, nonatomic) NSString *createDelegatesURL;
@property (readonly, nonatomic) NSString *loginOrCreateDelegatesURL;
@property (readonly, nonatomic) NSString *deviceListURL;
@property (readonly, nonatomic) NSString *sendCodeURL;
@property (readonly, nonatomic) NSString *verifyCodeURL;
@property (readonly, nonatomic) NSString *accountManagementUIURL;
@property (readonly, nonatomic) NSString *familyUIURL;
@property (readonly, nonatomic) NSString *devicesUIURL;
@property (readonly, nonatomic) NSString *paymentSummaryURL;
@property (readonly, nonatomic) NSString *familySetupUIURL;
@property (readonly, nonatomic) NSString *personalInfoUIURL;
@property (readonly, nonatomic) NSString *paymentInfoUIURL;
@property (readonly, nonatomic) NSString *passwordSecurityUIURL;
@property (readonly, nonatomic) NSString *secondaryAuthenticationURL;
@property (readonly, nonatomic) NSString *getMyPhotoURL;
@property (readonly, nonatomic) NSString *updateMyPhotoURL;
@property (readonly, nonatomic) NSString *getFamilyMemberPhotoURL;
@property (readonly, nonatomic) NSString *familyEligibilityURL;
@property (readonly, nonatomic) NSString *checkiCloudMembershipURL;
@property (readonly, nonatomic) NSString *pendingFamilyInvitesUIURL;
@property (readonly, nonatomic) NSString *updateNameURL;
@property (readonly, nonatomic) NSString *familyMemberDetailsUIURL;
@property (readonly, nonatomic) NSString *addFamilyMemberUIURL;
@property (readonly, nonatomic) NSString *getFamilyDetailsURL;
@property (readonly, nonatomic) NSString *childAccountCreationUIURL;
@property (readonly, nonatomic) NSString *grandslamURL;
@property (readonly, nonatomic) NSString *acceptChildTransferURL;
@property (readonly, nonatomic) NSString *rejectChildTransferURL;
@property (readonly, nonatomic) NSString *familyLearnMoreURL;
@property (readonly, nonatomic) NSString *cloudKitMigrationStateURL;
@property (readonly, nonatomic) NSString *cloudKitStartMigrationURL;
@property (readonly, nonatomic) NSString *cloudKitDevicesListURL;
@property (readonly, nonatomic) NSString *familyPaymentInfoURL;
@property (readonly, nonatomic) NSString *familyPaymentCardUIURL;
@property (readonly, nonatomic) NSString *aboutURL;
@property (readonly, nonatomic) NSString *getDeviceListURL;
@property (readonly, nonatomic) NSString *repairCloudAccountUIURL;
@property (readonly, nonatomic) NSString *walrusWebAccessPCSAuthURL;
@property (readonly, nonatomic) NSString *initiateFamilyV2URL;
@property (readonly, nonatomic) NSString *startFamilyInviteV2URL;
@property (readonly, nonatomic) NSString *familyInviteSentV2URL;
@property (readonly, nonatomic) NSString *fetchFamilyInviteV2URL;
@property (readonly, nonatomic) NSString *acceptFamilyInviteV2URL;
@property (readonly, nonatomic) NSString *registerDeviceURL;
@property (readonly, nonatomic) NSString *unregisterDeviceURL;
@property (readonly, nonatomic) NSString *getFamilyPushDetailsURL;
@property (readonly, nonatomic) NSString *getAccountEventDetailsURL;
@property (readonly, nonatomic) NSString *acceptFamilyInviteURL;
@property (readonly, nonatomic) NSString *declineFamilyInviteURL;
@property (readonly, nonatomic) NSString *dismissAlertURL;
@property (readonly, copy, nonatomic) NSNumber *absintheEnable;
@property (readonly, copy, nonatomic) NSNumber *baaInterval;

+ (id)_urlConfigurationWithError:(id *)a0;
+ (id)urlConfiguration;
+ (id)itemForKey:(id)a0 error:(id *)a1;
+ (void)reset;

- (id)init;
- (id)_initWithDictionary:(id)a0;
- (id)_envStringForKey:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)urlForEndpoint:(id)a0;
- (id)_urlStringForKey:(id)a0;

@end