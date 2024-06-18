@class CKDDirectoryContext, NSString, NSDate, CKDAssetHandleTable, CKDClonedFileCache, CKDAssetVolumeTable, CKDMMCS, CKSAssetCacheTableGroup;

@interface CKDAssetCache : NSObject {
    CKDClonedFileCache *_clonedFileCache;
}

@property (readonly, nonatomic) CKSAssetCacheTableGroup *assetCacheTableGroup;
@property (readonly, nonatomic) CKDAssetHandleTable *assetHandleTable;
@property (readonly, nonatomic) CKDAssetVolumeTable *assetVolumeTable;
@property (readonly, nonatomic) NSString *applicationBundleID;
@property (retain, nonatomic) CKDDirectoryContext *directoryContext;
@property BOOL isEvictionScheduled;
@property BOOL didDrop;
@property (nonatomic) long long checkoutCount;
@property (retain, nonatomic) NSDate *oldestLastUsedTime;
@property (weak, nonatomic) CKDMMCS *MMCS;
@property (readonly, nonatomic) BOOL isNewEmptyCache;
@property (readonly, nonatomic) NSString *fileDownloadPath;

+ (id)assetCacheWithApplicationBundleID:(id)a0 directoryContext:(id)a1 database:(id)a2 didInit:(BOOL *)a3 error:(id *)a4;
+ (int)openFdForDownloadPath:(id)a0 error:(id *)a1;
+ (id)_sharedCachesQueue;
+ (id)_sharedCachesByDirectory;

- (void)drop;
- (void)clearAssetCache;
- (void)expireAssetHandlesIfNecessary;
- (unsigned long long)_evictAllFilesForced:(BOOL)a0;
- (unsigned long long)evictAllFilesForced:(BOOL)a0;
- (void)showAssetCache;
- (void)_expireAssetHandlesWithExpiryDate:(id)a0;
- (BOOL)updateAssetHandlesForPutMMCSItems:(id)a0 cloneItems:(BOOL)a1 error:(id *)a2;
- (id)updateAssetHandlesForRegisteredMMCSItems:(id)a0 error:(id *)a1;
- (id)trackDownloadedData:(id)a0 signature:(id)a1 error:(id *)a2;
- (id)trackCachedButNotRegisteredMMCSItems:(id)a0 error:(id *)a1;
- (id)clonedFileCache;
- (unsigned long long)clearForced:(BOOL)a0;
- (void)enumerateAssetHandlesSegregatedByVolume:(id)a0 block:(id /* block */)a1;
- (void)checkAssetHandlesForRegisteredMMCSItems:(id)a0;
- (id)assetHandleWithCachedPath:(id)a0;
- (unsigned long long)_evictDownloadedFilesWithEvictionInfo:(id)a0;
- (void)_resetAssetInflight;
- (id)findAssetHandleForItemID:(unsigned long long)a0 error:(id *)a1;
- (void)unregisterItemIDsAndDeleteAssetHandlesWithEvictionInfo:(id)a0;
- (unsigned long long)_evictWithEvictionInfo:(id)a0;
- (id)volumeIndexForDeviceID:(id)a0;
- (id)_getAssetHandlesForCachedButNotRegisteredMMCSItems:(id)a0 error:(id *)a1;
- (id)updateAssetHandlesForChunkedMMCSItems:(id)a0 error:(id *)a1;
- (void)stopTrackingAssetHandlesByItemIDs:(id)a0;
- (BOOL)updateAssetHandlesForGetMMCSItems:(id)a0 cloneItems:(BOOL)a1 error:(id *)a2;
- (void).cxx_destruct;
- (void)_deleteAssetHandlesAndUnregisterItemsForUnmountedAssetVolumes;
- (BOOL)startTrackingRegisterOrPutAssetHandles:(id)a0 operationType:(long long)a1 error:(id *)a2;
- (id)_saveData:(id)a0 error:(id *)a1;
- (void)setupPersistentStateAtStartup;
- (id)deviceIDForVolumeIndex:(id)a0;
- (BOOL)parseCachedPath:(id)a0 assetHandleUUIDString:(id *)a1 assetSignatureString:(id *)a2;
- (id)_initWithApplicationBundleID:(id)a0 directoryContext:(id)a1 database:(id)a2 error:(id *)a3;
- (void)dealloc;
- (void)unregisterItemsAndDeleteUnregisteredAssetHandlesWithIDs:(id)a0 deleteUnregisteredAssetHandlesWithIDs:(id)a1;
- (id)mmcsEngineContext;
- (void)updateLastAccessTimeForUUID:(id)a0;
- (unsigned long long)countAssetCacheItems;
- (void)_scheduleEvictionForDownloadedFiles;
- (BOOL)startTrackingGetAssetHandles:(id)a0 operationType:(long long)a1 error:(id *)a2;
- (id)existingEntriesForRegisterOrPutHandles:(id)a0 volumeIndex:(id)a1;
- (unsigned long long)predictedEvictedSizeForAllFilesForced:(BOOL)a0;
- (BOOL)parseCachedPath:(id)a0 assetHandleUUID:(id *)a1 assetSignature:(id *)a2;

@end
