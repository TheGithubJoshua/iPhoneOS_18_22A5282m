@class NSSet, ACAccount;

@interface AMSAcknowledgePrivacyTask : AMSTask

@property (copy, nonatomic) NSSet *privacyIdentifiers;
@property (retain, nonatomic) ACAccount *account;

+ (BOOL)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)a0 minimumVersion:(id)a1;
+ (BOOL)hasRejectedPrivacyIdentifier:(id)a0 account:(id)a1;
+ (id)_appleTVAppPrivacyIdentifier;
+ (id)_storePrivacyIdentifiers;
+ (BOOL)acknowledgementNeededForPrivacyIdentifier:(id)a0 account:(id)a1;
+ (id)_appleArcadePrivacyIdentifier;
+ (BOOL)hasRejectedPrivacyIdentifier:(id)a0;
+ (id)_appleIDPrivacyIdentifier;
+ (id)_valueForPreviouslyAcknowledgedPrivacyIdentifier:(id)a0 account:(id)a1;
+ (BOOL)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)a0 account:(id)a1;
+ (BOOL)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)a0;
+ (BOOL)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)a0 account:(id)a1 minimumVersion:(id)a2;
+ (id)_accountStoreForPrivacyIdentifier:(id)a0;
+ (id)_appleMusicAppPrivacyIdentifier;
+ (id)_multiplexPrivacyIdentifier:(id)a0 contentVersion:(unsigned long long)a1;
+ (unsigned long long)_contentVersionForPrivacyIdentifier:(id)a0;
+ (BOOL)acknowledgementNeededForPrivacyIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)_updatePrivacyWithAcknowledgementVersions:(id)a0;
- (id)acknowledgePrivacy;
- (id)initWithPrivacyIdentifier:(id)a0;
- (id)initWithPrivacyIdentifier:(id)a0 account:(id)a1;
- (id)initWithPrivacyIdentifiers:(id)a0;
- (id)initWithPrivacyIdentifiers:(id)a0 account:(id)a1;
- (id)rejectPrivacy;

@end
