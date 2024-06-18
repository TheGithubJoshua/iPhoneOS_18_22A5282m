@class NSString, GEONavdCachePersistenceManager;

@interface GEORouteHypothesisCache : NSObject <GEOKeyBagProtectedDataDidBecomeAvailableObserver> {
    GEONavdCachePersistenceManager *_persistenceManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)tearDown;
- (double)nextRefreshTimeStamp;
- (long long)numberOfEntriesOnDisk;
- (id)loadValueForKey:(id)a0;
- (void)_removeAllEntries;
- (void).cxx_destruct;
- (void)protectedDataDidBecomeAvailable:(id)a0;
- (id)loadEntryForRowId:(long long)a0;
- (id)descriptionOfAllEntries;
- (void)enumerateAllForCacheEntriesWithHandler:(id /* block */)a0;
- (void)dealloc;
- (void)saveValue:(id)a0 forKey:(id)a1;
- (void)removeKey:(id)a0 value:(id)a1;

@end
