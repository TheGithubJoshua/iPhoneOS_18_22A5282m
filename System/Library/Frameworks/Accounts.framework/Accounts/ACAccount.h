@class NSURL, ACMutableTrackedSet, NSMutableDictionary, NSDate, NSDictionary, NSString, ACAccountCredential, NSSet, NSMutableSet, NSArray, ACAccountType, ACAccountStore;
@protocol NSObject;

@interface ACAccount : NSObject <ACProtobufCoding, NSCoding, NSCopying, NSSecureCoding> {
    ACAccountStore *_accountStore;
    NSString *_identifier;
    NSString *_accountDescription;
    NSString *_owningBundleID;
    NSString *_username;
    NSString *_authenticationType;
    NSString *_credentialType;
    NSString *_clientToken;
    ACAccountType *_accountType;
    ACAccountCredential *_credential;
    NSMutableDictionary *_properties;
    NSMutableDictionary *_dataclassProperties;
    NSURL *_objectID;
    NSDate *_date;
    NSDate *_lastCredentialRenewalRejectionDate;
    NSString *_modificationID;
    ACAccount *_parentAccount;
    NSArray *_childAccounts;
    NSMutableSet *_dirtyProperties;
    NSMutableSet *_dirtyAccountProperties;
    NSMutableSet *_dirtyDataclassProperties;
    id<NSObject> _credentialsDidChangeObserver;
    BOOL _haveCheckedForClientToken;
    BOOL _accountAccessAvailable;
    BOOL _authenticated;
    BOOL _active;
    BOOL _warmingUp;
    BOOL _supportsAuthentication;
    BOOL _visible;
    BOOL _haveCheckedForChildAccounts;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) ACMutableTrackedSet *trackedProvisionedDataclasses;
@property (readonly, nonatomic) BOOL wasProvisionedDataclassesReset;
@property (copy, nonatomic) ACMutableTrackedSet *trackedEnabledDataclasses;
@property (readonly, nonatomic) BOOL wasEnabledDataclassesReset;
@property (readonly, nonatomic) ACAccountCredential *internalCredential;
@property (readonly, nonatomic) NSString *modificationID;
@property (readonly, nonatomic) NSURL *objectID;
@property (readonly, nonatomic) ACAccountStore *accountStore;
@property (retain, nonatomic) ACAccount *parentAccount;
@property (readonly, nonatomic) NSString *parentAccountIdentifier;
@property (readonly, nonatomic) NSArray *childAccounts;
@property (retain, nonatomic) NSMutableSet *enabledDataclasses;
@property (retain, nonatomic) NSMutableSet *provisionedDataclasses;
@property (readonly, weak, nonatomic) NSDictionary *dataclassProperties;
@property (nonatomic, getter=isAuthenticated) BOOL authenticated;
@property (readonly, weak, nonatomic) NSDictionary *accountProperties;
@property (readonly, weak, nonatomic) ACAccount *displayAccount;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic) BOOL supportsAuthentication;
@property (nonatomic, getter=isWarmingUp) BOOL warmingUp;
@property (readonly, nonatomic, getter=isDirty) BOOL dirty;
@property (readonly, nonatomic) NSSet *dirtyProperties;
@property (readonly, nonatomic) NSSet *dirtyAccountProperties;
@property (readonly, nonatomic) NSSet *dirtyDataclassProperties;
@property (readonly, nonatomic) NSString *authenticationType;
@property (readonly, nonatomic) NSString *credentialType;
@property (readonly, nonatomic) BOOL supportsPush;
@property (retain, nonatomic) NSDate *creationDate;
@property (nonatomic, getter=isVisible) BOOL visible;
@property (retain, nonatomic) NSDate *lastCredentialRenewalRejectionDate;
@property (readonly, nonatomic) NSString *shortDebugName;
@property (readonly, nonatomic) NSString *clientToken;
@property (copy) id /* block */ accountPropertiesTransformer;
@property (retain) NSString *managingOwnerIdentifier;
@property (retain) NSString *managingSourceName;
@property (readonly, weak, nonatomic) NSString *identifier;
@property (retain, nonatomic) ACAccountType *accountType;
@property (copy, nonatomic) NSString *accountDescription;
@property (copy, nonatomic) NSString *username;
@property (readonly, nonatomic) NSString *userFullName;
@property (retain, nonatomic) ACAccountCredential *credential;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keypathsRequiredForInitialization;

- (void)reload;
- (void)refresh;
- (id)_encodeProtobufData;
- (BOOL)authenticated;
- (void)_clearDirtyProperties;
- (id)initWithCoder:(id)a0;
- (id)_encodeProtobuf;
- (id)init;
- (id)personaIdentifier;
- (void)setIdentifier:(id)a0;
- (void)_markPropertyDirty:(id)a0;
- (id)_initWithProtobufData:(id)a0;
- (id)_initWithProtobuf:(id)a0;
- (id)fullDescription;
- (void)setProperty:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (BOOL)isProvisionedForDataclass:(id)a0;
- (void)setCredentialType:(id)a0;
- (void)markAllPropertiesDirty;
- (void)setOwningBundleID:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isPropertyDirty:(id)a0;
- (void)dealloc;
- (id)owningBundleID;
- (id)propertiesForDataclass:(id)a0;
- (void)setEnabled:(BOOL)a0 forDataclass:(id)a1;
- (id)initWithAccountType:(id)a0;
- (BOOL)isEnabledForDataclass:(id)a0;
- (id)accountPropertyForKey:(id)a0;
- (id)propertyForKey:(id)a0;
- (void)setAccountProperty:(id)a0 forKey:(id)a1;
- (void)setAuthenticationType:(id)a0;
- (id)childCardDAVAccountIdentifier;
- (void)setProperties:(id)a0 forDataclass:(id)a1;
- (BOOL)isDataSeparatedAccount;
- (id)qualifiedUsername;
- (id)childAccountsWithAccountTypeIdentifier:(id)a0;
- (id)credentialWithError:(id *)a0;
- (void)setDataclassProperties:(id)a0;
- (void)setProvisioned:(BOOL)a0 forDataclass:(id)a1;
- (void)_setObjectID:(id)a0;
- (id)secCertificates;
- (void)setSecIdentity:(struct __SecIdentity { } *)a0;
- (BOOL)addClientToken:(id)a0;
- (struct __SecIdentity { } *)copySecIdentity;
- (void)_applyDirtyStateFromAccount:(id)a0;
- (void)_clearCachedChildAccounts;
- (void)_clearCachedCredentials;
- (void)_installCredentialsChangedObserver;
- (BOOL)_isDifferentFrom:(id)a0;
- (void)_loadAllCachedProperties;
- (void)_markAccountPropertyDirty:(id)a0;
- (void)_markCredentialDirty;
- (void)_markDataclassPropertyDirty:(id)a0;
- (void)_resetParentAccount:(id)a0;
- (void)_setAccountStore:(id)a0;
- (void)_unsafe_markAccountPropertyDirty:(id)a0;
- (void)_unsafe_markDataclassPropertyDirty:(id)a0;
- (void)_unsafe_markPropertyDirty:(id)a0;
- (BOOL)_useParentForCredentials;
- (id)accountByCleaningThirdPartyTransformations;
- (BOOL)correctPersonaScopedForAccount;
- (void)credentialsChanged:(id)a0;
- (id)defaultAutodiscoverDomainForChildType:(id)a0;
- (id)initWithManagedAccount:(id)a0;
- (id)initWithManagedAccount:(id)a0 accountStore:(id)a1;
- (BOOL)isEnabledToSyncDataclass:(id)a0;
- (id)portableCopy;
- (void)setAccountProperties:(id)a0;
- (void)setChildCardDAVAccountIdentifier:(id)a0;
- (void)setDirty:(BOOL)a0 forProperty:(id)a1;
- (void)setSecCertificates:(id)a0;
- (void)takeValuesFromModifiedAccount:(id)a0;

@end