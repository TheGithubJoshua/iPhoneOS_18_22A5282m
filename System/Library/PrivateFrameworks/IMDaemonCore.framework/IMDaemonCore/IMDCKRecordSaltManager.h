@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface IMDCKRecordSaltManager : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *ckQueue;
@property (retain) NSString *cachedSalt;

+ (id)sharedInstance;

- (id)init;
- (void)fetchLatestRecordKeyFromCKAndCreateIfKeyDoesNotExistWithCompletion:(id /* block */)a0;
- (void)clearLocalSyncState;
- (void)_scheduleOperation:(id)a0;
- (void)_fetchLatestSaltFromCloudKitAndPersistWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)deleteDeDupeRecordZone;
- (void)fetchLatestRecordKeyFromCKAndCreateIfKeyDoesNotExistWithCompletion:(id /* block */)a0 forceFetch:(BOOL)a1;
- (id)_container;
- (id)_CKUtilitiesSharedInstance;

@end
