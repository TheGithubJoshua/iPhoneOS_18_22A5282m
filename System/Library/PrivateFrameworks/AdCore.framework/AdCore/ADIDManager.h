@class NSArray, DSIDRecord;

@interface ADIDManager : ADSingleton <ADIDManager_XPC>

@property (retain) NSArray *monthlyResetArray;
@property (retain) DSIDRecord *activeDSIDRecord;
@property (readonly, nonatomic) long long PersonalizedAdsMonthResetCount;

+ (id)sharedInstance;

- (id)init;
- (id)deviceIdentifiers;
- (void)forceReconcile:(id /* block */)a0;
- (void).cxx_destruct;
- (id)idForClientType:(long long)a0;
- (id)loadFakeRecord:(id)a0;
- (void)logIDs:(id)a0;
- (BOOL)loadIDs;
- (id)dsidRecord:(id)a0 fromDict:(id)a1;
- (id)encryptedIDForClientType:(long long)a0;
- (id)reloadRecords:(id)a0;
- (void)reloadRecords:(id)a0 completionHandler:(id /* block */)a1;
- (id)retrieveDeviceIDs;

@end
