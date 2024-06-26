@class NSString;

@interface DAKeyManagementSession : DASession <KmlSessionCallbacks, NSSecureCoding, DAKeyTrackingUpdate, DAKeyPreTrackDataUpdate, DAKeyImmobilizerTokenUpdate>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void)listKeysWithSession:(id)a0 seid:(id)a1 callback:(id /* block */)a2;
- (void)encodeWithCoder:(id)a0;
- (void)cancelInvitationsWithIdentifiers:(id)a0 sentByOwnerKeyWithIdentifier:(id)a1 callback:(id /* block */)a2;
- (void)countImmobilizerTokensForKeyWithIdentifier:(id)a0 callback:(id /* block */)a1;
- (void)deleteKey:(id)a0 completionHandler:(id /* block */)a1;
- (void)getPreTrackRequestForKeyWithIdentifier:(id)a0 callback:(id /* block */)a1;
- (void)listKeysWithHandler:(id /* block */)a0;
- (void)listReceivedSharingInvitationsWithCallback:(id /* block */)a0;
- (void)listSharingInvitationsForKeyIdentifier:(id)a0 callback:(id /* block */)a1;
- (void)removeSharedKeysWithIdentifiers:(id)a0 ownerKeyWithIdentifier:(id)a1 callback:(id /* block */)a2;
- (void)requestBindingAttestationDataForKeyWithIdentifier:(id)a0 callback:(id /* block */)a1;
- (void)revokeKeysWithIdentifiers:(id)a0 sharedByOwnerKeyWithIdentifier:(id)a1 callback:(id /* block */)a2;
- (void)setBindingAttestation:(id)a0 forKeyWithIdentifier:(id)a1 callback:(id /* block */)a2;
- (id)setTrackingReceipt:(id)a0 slotIdentifier:(id)a1 confidentialMailboxData:(id)a2 ephemeralPublicKey:(id)a3 forKeyWithIdentifier:(id)a4;
- (void)signAppData:(id)a0 appBundleIdentifier:(id)a1 nonce:(id)a2 auth:(id)a3 keyIdentifier:(id)a4 callback:(id /* block */)a5;
- (void)didEnd:(id)a0;
- (void)cancelAllFriendInvitationsWithCompletionHandler:(id /* block */)a0;
- (void)didStart:(BOOL)a0;
- (void)endPointPrivacyDecryption:(id)a0 encryptedData:(id)a1 publicKey:(id)a2 callback:(id /* block */)a3;
- (void)localDeleteKey:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeSharingInvitationWithId:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestImmobilizerTokenRefillForKeyWithIdentifier:(id)a0 callback:(id /* block */)a1;
- (void)setImmobilizerTokens:(id)a0 publicKey:(id)a1 forKeyWithIdentifier:(id)a2 callback:(id /* block */)a3;
- (id)setTrackingReceipt:(id)a0 forKeyWithIdentifier:(id)a1;

@end
