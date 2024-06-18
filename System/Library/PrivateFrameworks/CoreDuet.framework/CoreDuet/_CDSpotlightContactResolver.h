@class _PASLock, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _CDSpotlightContactResolver : NSObject {
    _PASLock *_cachedContactsForHandle;
    NSObject<OS_dispatch_queue> *_cacheInvalidationTimerQueue;
    NSObject<OS_dispatch_source> *_cacheInvalidationTimer;
}

+ (id)sharedInstance;
+ (id)resolveContactIfPossibleFromContactIdentifierString:(id)a0;

- (id)init;
- (void)_purge;
- (void).cxx_destruct;
- (void)_setContact:(id)a0 forHandle:(id)a1;
- (id)_getCachedContactForHandle:(id)a0;
- (void)_validateCache;

@end
