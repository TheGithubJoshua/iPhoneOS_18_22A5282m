@class ATXGenericFileBasedCache;

@interface ATXSleepShortcutsCache : NSObject {
    ATXGenericFileBasedCache *_cache;
}

- (id)_cache;
- (void)fetchSleepShortcutsWithCompletion:(id /* block */)a0;
- (void)cacheSleepShortcutsIfNecessary;
- (void)_fetchAndCacheSleepShortcutsWithTransaction:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
