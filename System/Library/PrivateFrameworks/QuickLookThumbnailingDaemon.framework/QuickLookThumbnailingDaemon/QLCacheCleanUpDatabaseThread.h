@class NSMutableDictionary, NSConditionLock, NSThread, _QLCacheThread;

@interface QLCacheCleanUpDatabaseThread : NSObject {
    NSConditionLock *_threadLock;
    struct __CFRunLoop { } *_threadRunLoop;
    NSThread *_thread;
}

@property BOOL diskCacheCleanupDone;
@property (retain) _QLCacheThread *cacheThread;
@property (retain) NSMutableDictionary *thumbnailsHit;
@property (readonly, nonatomic) unsigned long long hitToSaveCount;
@property (readonly, nonatomic) int currentMode;
@property (nonatomic) BOOL shouldRemoveThumbnailsForDeletedFiles;

- (void)pause;
- (void)stop;
- (void)_threadMain;
- (void)cleanUpForReset;
- (void)_writeAndCleanUp;
- (void).cxx_destruct;
- (void)dealloc;
- (void)startCleanUp;
- (id)initWithCacheThread:(id)a0;
- (void)_stopWriteAndCleanUpThreadRunLoop;
- (void)addHitWithThumbnailData:(id)a0;
- (BOOL)_updateHitCount;

@end
