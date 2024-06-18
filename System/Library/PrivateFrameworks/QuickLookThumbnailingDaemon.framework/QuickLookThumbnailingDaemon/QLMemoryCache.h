@class NSObject, NSMutableDictionary, _QLCacheThread, NSMutableArray, NSLock;
@protocol OS_os_transaction;

@interface QLMemoryCache : NSObject {
    BOOL _cacheEnabled;
    NSMutableDictionary *_thumbnailData;
    NSMutableArray *_thumbnailDataToSave;
    NSLock *_memoryLock;
    NSObject<OS_os_transaction> *_pendingSavesTransaction;
}

@property unsigned long long memoryUsed;
@property (weak) _QLCacheThread *cacheThread;

- (void)_releaseReadLock;
- (void)_releaseWriteLock;
- (unsigned long long)thumbnailToSaveCount;
- (void).cxx_destruct;
- (void)removeCachedThumbnailsFromUninstalledFileProvidersWithIdentifiers:(id)a0;
- (id)thumbnailDataToSaveWithBatch:(unsigned long long)a0;
- (void)_getWriteLock;
- (BOOL)addThumbnailData:(id)a0;
- (void)_invalidateThumbnailData:(id)a0;
- (void)removeCachedThumbnailsFromUninstalledFileProvidersWithRemainingFileProviderIdentifiers:(id)a0;
- (id)initWithCacheThread:(id)a0;
- (BOOL)sendThumbnailDataForThumbnailRequest:(id)a0 withCacheThread:(id)a1;
- (void)reset;
- (void)thumbnailDataBatchSaved:(id)a0;
- (BOOL)hasThumbnailDataToSave;
- (void)_getReadLock;

@end
