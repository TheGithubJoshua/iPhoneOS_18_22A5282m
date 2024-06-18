@class CNUnfairLock, NSString, CNAuditToken, NSObject, NSNumber;
@protocol CNTCC, CNTCCSimulation, OS_tcc_identity;

@interface CNAuthorizationContext : NSObject <CNAuthorizationContext, CNTCCSimulation>

@property (class, readonly) CNAuthorizationContext *sharedInstance;

@property (retain, nonatomic) CNAuditToken *cnAuditToken;
@property (retain, nonatomic) NSObject<OS_tcc_identity> *assumedIdentity;
@property (retain, nonatomic) id<CNTCC, CNTCCSimulation> tccServices;
@property (retain, nonatomic) NSNumber *authorizationStatusCachedValue;
@property (retain, nonatomic) NSNumber *shouldAlwaysQueryAuthorizationStatusCachedValue;
@property (retain, nonatomic) NSNumber *isNotesAccessGrantedCachedValue;
@property (retain, nonatomic) NSNumber *isFirstPartyNotesEntitledCachedValue;
@property (retain, nonatomic) NSNumber *isThirdPartyNotesEntitledCachedValue;
@property (retain, nonatomic) NSNumber *isClientTCCWhitelistedCachedValue;
@property (retain, nonatomic) NSNumber *isClientFirstOrSecondPartyCachedValue;
@property (retain, nonatomic) CNUnfairLock *authorizationStatusLock;
@property (retain, nonatomic) CNUnfairLock *notesAccessStatusLock;
@property (readonly, nonatomic) long long authorizationStatus;
@property (readonly, nonatomic) BOOL isAccessGranted;
@property (readonly, nonatomic) BOOL isAccess1Granted;
@property (readonly, nonatomic) BOOL isAccess2Granted;
@property (readonly, nonatomic) BOOL isNotesAccessGranted;
@property (readonly, nonatomic) BOOL isAccessRestricted;
@property (readonly, nonatomic) BOOL isClientFirstOrSecondParty;
@property (readonly, nonatomic) BOOL isClientTCCWhitelisted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldIgnoreAssumedIdentity:(id)a0;
+ (id)bundleIdentifierForAssumedIdentity:(id)a0;
+ (BOOL)shouldIgnoreAssumedIdentityForBundleIdentifier:(id)a0;
+ (id)os_log;

- (BOOL)isClientTCCUncoupledProcess;
- (id)init;
- (BOOL)isClientFirstOrSecondPartyImpl;
- (id)requestAuthorizationFuture:(long long)a0;
- (BOOL)isUnitTesting;
- (BOOL)shouldAlwaysQueryAuthorizationStatusImpl;
- (id)initWithAuditToken:(id)a0 assumedIdentity:(id)a1;
- (void)simulateStatus:(long long)a0;
- (BOOL)isFirstPartyNotesEntitled;
- (void)requestAuthorization:(long long)a0 completionHandler:(id /* block */)a1;
- (id)errorForStatus:(long long)a0;
- (id)initWithAuditToken:(id)a0 assumedIdentity:(id)a1 tccServices:(id)a2;
- (BOOL)doesClientHaveEntitlement:(id)a0;
- (BOOL)requestAccessWithError:(id *)a0;
- (void).cxx_destruct;
- (BOOL)isAccessGrantedRequestingAccessIfNeeded;
- (BOOL)isGreenTeaDevice;
- (BOOL)shouldAlwaysQueryAuthorizationStatus;
- (BOOL)checkClientIsFirstOrSecondParty;
- (BOOL)isClientTCCKilledOnAuthorizationChange;
- (void)updateCachedAuthorizationStatusIfNeeded;
- (BOOL)isThirdPartyNotesEntitledImpl;
- (long long)resolveRequestAuthorizationFuture:(id)a0;
- (BOOL)isClientTCCCoupledProcess;
- (void)stopSimulation;
- (BOOL)checkTCCEntitlementNamesAllowContacts:(id)a0;
- (BOOL)isThirdPartyNotesEntitled;
- (BOOL)isClientTCCWhitelistedImpl;
- (BOOL)isFirstPartyNotesEntitledImpl;
- (void)updateCachedNotesAccessGrantedIfNeeded;
- (BOOL)isNotesAccessGrantedImpl;

@end
