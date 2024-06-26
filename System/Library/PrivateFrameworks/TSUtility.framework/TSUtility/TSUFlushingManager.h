@class TSURetainedPointerKeyDictionary, NSThread, NSCondition, TSUPointerKeyDictionary, TSUMemoryWatcher;
@protocol TSUFlushable;

@interface TSUFlushingManager : NSObject {
    TSURetainedPointerKeyDictionary *_objects;
    void *_sortedObjects;
    void *_sortedNewObjects;
    TSUPointerKeyDictionary *_inactiveObjects;
    unsigned int _clock;
    BOOL _alwaysFlushing;
    BOOL _stopFlushing;
    BOOL _stopFlushingWhenQueueEmpty;
    BOOL _isFlushing;
    id<TSUFlushable> _flushingObject;
    NSCondition *_cond;
    NSCondition *_isFlushingCond;
    TSUMemoryWatcher *_memoryWatcher;
    NSThread *_bgThread;
    unsigned long long _backgroundTransitionTaskId;
    unsigned long long _activeBgThreadTask;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedManager;
+ (id)_singletonAlloc;

- (void)didEnterBackground;
- (id)init;
- (void)willEnterForeground;
- (oneway void)release;
- (void)didReceiveMemoryWarning;
- (id)autorelease;
- (unsigned long long)retainCount;
- (void)addObject:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeObject:(id)a0;
- (id)retain;
- (void)dealloc;
- (void)_bgThreadActive;
- (void)_bgTaskStarted;
- (void)_bgThreadInactive;
- (void)_bgTaskFinished;
- (void)doneWithObject:(id)a0;
- (void)_backgroundThread:(id)a0;
- (void)_didUseObject:(id)a0;
- (void)_flushAllEligible;
- (void)_startFlushingObjects;
- (void)_stopFlushingObjects;
- (void)advanceClock;
- (BOOL)controlsActiveObject:(id)a0;
- (BOOL)controlsInactiveObject:(id)a0;
- (struct TSUFlushableObjectInfo { id x0; int x1; int x2; int x3; unsigned int x4[2]; } *)eraseInfoForObject:(id)a0;
- (void)insertObjectInfo:(struct TSUFlushableObjectInfo { id x0; int x1; int x2; int x3; unsigned int x4[2]; } *)a0;
- (BOOL)isNewObject:(struct TSUFlushableObjectInfo { id x0; int x1; int x2; int x3; unsigned int x4[2]; } *)a0;
- (void)memoryLevelDecreased:(int)a0 was:(int)a1;
- (void)memoryLevelIncreased:(int)a0 was:(int)a1;
- (void)protectObject:(id)a0;
- (void)safeToFlush:(id)a0 wasAccessed:(BOOL)a1;
- (void)stopProtectingObject:(id)a0;
- (void)transferNewObjects;
- (void)unsafeToFlush:(id)a0;

@end
