@class CKDPCSSQLCacheTable, CKContainerID, NSString, CKDPCSSQLCacheTableGroup, NSObject;
@protocol OS_dispatch_queue;

@interface CKDPCSSQLCache : NSObject {
    CKContainerID *_containerID;
    NSString *_accountID;
    NSString *_encryptionServiceName;
    CKDPCSSQLCacheTableGroup *_cacheGroup;
    CKDPCSSQLCacheTable *_table;
    NSObject<OS_dispatch_queue> *_asyncQueue;
}

@property unsigned long long cacheRequestCount;
@property unsigned long long cacheHitCount;

+ (void)evictPCSSQLCachesForKnownContainers;

- (BOOL)hasStatusToReport;
- (id)CKStatusReportArray;
- (id)_lockedFetchPCSDataForID:(id)a0 databaseScope:(long long)a1 itemType:(unsigned long long)a2;
- (void)clearCache;
- (void)_setPCSData:(id)a0 forItemWithID:(id)a1 databaseScope:(long long)a2 itemType:(unsigned long long)a3 withCompletionHandler:(id /* block */)a4;
- (id)initWithDeviceContext:(id)a0 containerID:(id)a1 accountOverrideInfo:(id)a2 accountID:(id)a3 encryptionServiceName:(id)a4;
- (void)fetchPCSDataForRecordWithID:(id)a0 databaseScope:(long long)a1 withCompletionHandler:(id /* block */)a2;
- (void)removePCSDataForItemsInShareWithID:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)fetchPCSDataForZoneWithID:(id)a0 databaseScope:(long long)a1 withCompletionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)clearInvalidatedCacheEntriesWithSkipZonePCS:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)_lockedSetPCSData:(id)a0 databaseScope:(long long)a1 itemType:(unsigned long long)a2 forID:(id)a3;
- (void)removePCSDataForItemsInZoneWithID:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)setZonePCSData:(id)a0 forZoneWithID:(id)a1 databaseScope:(long long)a2 withCompletionHandler:(id /* block */)a3;
- (void)setRecordPCSData:(id)a0 forRecordWithID:(id)a1 databaseScope:(long long)a2 withCompletionHandler:(id /* block */)a3;
- (void)setSharePCSData:(id)a0 forShareWithID:(id)a1 databaseScope:(long long)a2 withCompletionHandler:(id /* block */)a3;
- (void)fetchPCSDataForShareWithID:(id)a0 databaseScope:(long long)a1 withCompletionHandler:(id /* block */)a2;

@end
