@class NSNumber;

@interface CNTCCVersion1 : NSObject <CNTCC, CNTCCSettings, CNTCCSimulation>

@property (retain, nonatomic) NSNumber *simulateStatus;
@property (retain, nonatomic) NSNumber *isUnitTestingCachedValue;

+ (id)createAppAuthorizationRecordFromTCCAppInfo:(id)a0 bundleIdentifier:(id)a1;

- (long long)checkAuthorizationStatusOfCurrentProcessUsingAssumedIdentity:(id)a0;
- (BOOL)isUnitTesting;
- (void)simulateStatus:(long long)a0;
- (long long)checkAuthorizationStatusOfAuditToken:(id)a0 assumedIdentity:(id)a1;
- (void).cxx_destruct;
- (id)isUnitTestingImpl;
- (long long)checkAuthorizationStatusOfCurrentProcess;
- (BOOL)isAuthorizationRestricted;
- (id)authorizationRecordForBundleIdentifier:(id)a0;
- (void)saveAuthorizationRecord:(id)a0;
- (void)stopSimulation;
- (id)authorizationRecords;
- (void)requestAuthorization:(long long)a0 auditToken:(id)a1 assumedIdentity:(id)a2 completionHandler:(id /* block */)a3;
- (long long)checkAuthorizationStatusOfAuditToken:(struct { unsigned int x0[8]; })a0;

@end
