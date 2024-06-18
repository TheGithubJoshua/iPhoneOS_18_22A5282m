@class NSString, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface PKPaymentWebServiceLocalProxyTargetDevice : NSObject <PKPaymentWebServiceTargetDeviceProtocol, PKPaymentWebServiceArchiver> {
    NSObject<OS_dispatch_queue> *_handlerQueue;
}

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encryptedServiceProviderDataForSecureElementPass:(id)a0 completion:(id /* block */)a1;
- (void)familyMembersWithCompletion:(id /* block */)a0;
- (void)renewAppleAccountWithCompletionHandler:(id /* block */)a0;
- (id)bridgedClientInfo;
- (void)paymentWebService:(id)a0 storePassOwnershipToken:(id)a1 withIdentifier:(id)a2;
- (void)paymentWebService:(id)a0 passOwnershipTokenWithIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)createApplePayTrustKeyWithRequest:(id)a0 completion:(id /* block */)a1;
- (BOOL)paymentWebService:(id)a0 hasPassesOfType:(unsigned long long)a1;
- (id)appleAccountInformation;
- (void)generateISOEncryptionCertificateForSubCredentialId:(id)a0 completion:(id /* block */)a1;
- (void)signWithFidoKeyForRelyingParty:(id)a0 relyingPartyAccountHash:(id)a1 fidoKeyHash:(id)a2 challenge:(id)a3 publicKeyIdentifier:(id)a4 externalizedAuth:(id)a5 completion:(id /* block */)a6;
- (void)longTermPrivacyKeyForCredentialGroupIdentifier:(id)a0 reuseExisting:(BOOL)a1 completion:(id /* block */)a2;
- (void)paymentWebService:(id)a0 deleteApplicationWithAID:(id)a1;
- (void)paymentWebService:(id)a0 signData:(id)a1 signatureEntanglementMode:(unsigned long long)a2 withCompletionHandler:(id /* block */)a3;
- (void)generateSEEncryptionCertificateForSubCredentialId:(id)a0 completion:(id /* block */)a1;
- (void)notePasscodeUpgradeFlowDidEnd;
- (void)featureApplicationsForProvisioningWithCompletion:(id /* block */)a0;
- (BOOL)claimSecureElementForCurrentUser;
- (id)paymentWebService:(id)a0 passesOfType:(unsigned long long)a1;
- (id)supportedFeatureIdentifiersForAccountProvisioningWithPaymentWebService:(id)a0;
- (id)secureElementIdentifiers;
- (void)endRequiringUpgradedPasscodeIfNecessary;
- (void)updatedAccountsForProvisioningWithCompletion:(id /* block */)a0;
- (id)deviceDescriptionForPaymentWebService:(id)a0;
- (void)performDeviceCheckInWithCompletion:(id /* block */)a0;
- (BOOL)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(id)a0;
- (id)osVersion;
- (id)deviceRegion;
- (void)availableHomeKeyPassesWithCompletionHandler:(id /* block */)a0;
- (BOOL)areUnifiedAccessPassesSupported;
- (void)enforceUpgradedPasscodePolicyWithCompletion:(id /* block */)a0;
- (void)noteProvisioningUserInterfaceDidAppear;
- (BOOL)supportsAutomaticPassPresentation;
- (void)paymentWebService:(id)a0 addPaymentPass:(id)a1 withCompletionHandlerV2:(id /* block */)a2;
- (void)noteProvisioningDidBegin;
- (BOOL)paymentWebService:(id)a0 canProvisionPaymentPassWithPrimaryAccountIdentifier:(id)a1;
- (void)performDeviceRegistrationReturningContextForReason:(id)a0 brokerURL:(id)a1 completion:(id /* block */)a2;
- (void)paymentWebService:(id)a0 validateAddPreconditionsWithCompletion:(id /* block */)a1;
- (void)noteProvisioningDidEnd;
- (id)paymentWebService:(id)a0 filterVerificationChannels:(id)a1;
- (void)paymentWebService:(id)a0 validateTransferPreconditionsWithCompletion:(id /* block */)a1;
- (unsigned long long)secureElementOwnershipStateForCurrentUser;
- (void)prepareProvisioningTarget:(id)a0 checkFamilyCircle:(BOOL)a1 completion:(id /* block */)a2;
- (void)checkFidoKeyPresenceForRelyingParty:(id)a0 relyingPartyAccountHash:(id)a1 fidoKeyHash:(id)a2 completion:(id /* block */)a3;
- (void)notePasscodeUpgradeFlowWillBeginWithCompletion:(id /* block */)a0;
- (void)paymentWebService:(id)a0 setNewAuthRandom:(id /* block */)a1;
- (id)deviceVersion;
- (void)statusForShareableCredentials:(id)a0 completion:(id /* block */)a1;
- (BOOL)paymentWebServiceSupportsAccounts:(id)a0;
- (void)paymentWebService:(id)a0 addPaymentPass:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)addISO18013Blobs:(id)a0 cardType:(long long)a1 completion:(id /* block */)a2;
- (void)deleteKeyMaterialForSubCredentialId:(id)a0;
- (void)paymentWebService:(id)a0 didRegisterWithRegionMap:(id)a1 primaryRegionTopic:(id)a2;
- (void)paymentWebService:(id)a0 configurationDataWithCompletionHandler:(id /* block */)a1;
- (void)triggerCloudStoreZoneCreationForAccount:(id)a0 withCompletion:(id /* block */)a1;
- (void)applePayTrustKeyForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)noteProvisioningUserInterfaceDidDisappear;
- (id)deviceName;
- (id)_synchronousProxyWithErrorHandler:(id /* block */)a0;
- (id)deviceClass;
- (id)supportedFeatureIdentifiersWithPaymentWebService:(id)a0;
- (void)_invalidateConnection;
- (void)paymentWebService:(id)a0 requestPassUpgrade:(id)a1 pass:(id)a2 completion:(id /* block */)a3;
- (void)paymentWebService:(id)a0 setNewAuthRandomIfNecessaryReturningPairingState:(id /* block */)a1;
- (void)archiveContext:(id)a0;
- (id)initWithConnection:(id)a0;
- (void)paymentWebService:(id)a0 generateTransactionKeyWithParameters:(id)a1 withCompletion:(id /* block */)a2;
- (void)paymentWebServiceDidUpdateConfiguration:(id)a0;
- (id)_proxy;
- (void)paymentWebService:(id)a0 setDefaultPaymentPassUniqueIdentifier:(id)a1;
- (BOOL)paymentWebServiceSupportsPeerPaymentRegistration:(id)a0;
- (void)paymentWebService:(id)a0 removePass:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)archiveBackgroundContext:(id)a0;
- (unsigned long long)paymentSupportedInCurrentRegionForWebService:(id)a0;
- (id)context;
- (void).cxx_destruct;
- (void)claimSecureElementForCurrentUserWithCompletion:(id /* block */)a0;
- (void)paymentWebService:(id)a0 updateAccountWithIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)createFidoKeyForRelyingParty:(id)a0 relyingPartyAccountHash:(id)a1 challenge:(id)a2 externalizedAuth:(id)a3 completion:(id /* block */)a4;
- (unsigned long long)registrationSupportedInCurrentRegionForWebService:(id)a0;
- (void)provisionHomeKeyPassForSerialNumbers:(id)a0 completionHandler:(id /* block */)a1;
- (void)cachedFeatureApplicationsForProvisioningWithCompletion:(id /* block */)a0;
- (id)_proxyWithErrorHandler:(id /* block */)a0;
- (void)downloadAllPaymentPassesForPaymentWebService:(id)a0;
- (void)paymentWebService:(id)a0 provisioningDataIncludingDeviceMetadata:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (void)dealloc;
- (void)paymentWebService:(id)a0 registrationDataWithCompletionHandler:(id /* block */)a1;
- (void)deleteApplePayTrustKeyWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)paymentWebService:(id)a0 deviceMetadataWithFields:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)startRequiringUpgradedPasscodeWithPasscodeMeetsPolicy:(BOOL)a0;
- (void)paymentWebService:(id)a0 handlePotentialExpressPass:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)paymentWebService:(id)a0 queueConnectionToTrustedServiceManagerForPushTopic:(id)a1 withCompletion:(id /* block */)a2;
- (id)_synchronousProxy;
- (void)contextWithCompletion:(id /* block */)a0;

@end