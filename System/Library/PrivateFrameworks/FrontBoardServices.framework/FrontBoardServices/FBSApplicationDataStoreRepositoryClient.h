@class NSCountedSet, NSString, NSMutableDictionary, NSHashTable;

@interface FBSApplicationDataStoreRepositoryClient : FBSServiceFacilityClient <FBSApplicationDataStoreRepositoryClient> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _prefetchedDataLock;
    NSCountedSet *_prefetchedKeys;
    NSMutableDictionary *_prefetchedKeyValues;
    NSMutableDictionary *_pendingChangesToPrefetchedKeys;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
    NSHashTable *_observers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectForKey:(id)a0 forApplication:(id)a1;
- (void)fireCompletion:(id /* block */)a0 error:(id)a1;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)removeObjectForKey:(id)a0 forApplication:(id)a1 withCompletion:(id /* block */)a2;
- (id)_observers;
- (void)handleMessage:(id)a0 withType:(long long)a1;
- (void)_setPrefetchedObjectIfNecessary:(id)a0 forKey:(id)a1 application:(id)a2;
- (BOOL)prefetchedObjectIfAvailableForKey:(id)a0 application:(id)a1 outObject:(id *)a2;
- (void)_setChangeInFlight:(BOOL)a0 forPrefetchedKey:(id)a1 application:(id)a2;
- (void)removePrefetchedKeys:(id)a0 withCompletion:(id /* block */)a1;
- (void)_sendMessageType:(int)a0 withMessage:(id /* block */)a1 withReplyHandler:(id /* block */)a2 waitForReply:(BOOL)a3;
- (void)invalidate;
- (void).cxx_destruct;
- (id)_allPrefetchedChangesInFlightForApplication:(id)a0;
- (void)removeAllObjectsForApplication:(id)a0 withCompletion:(id /* block */)a1;
- (void)_sendPrefetchedKeys:(id)a0 withCompletion:(id /* block */)a1;
- (void)_calloutQueue_handleStoreInvalidated:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1 forApplication:(id)a2 withCompletion:(id /* block */)a3;
- (void)addPrefetchedKeys:(id)a0;
- (BOOL)_isChangeInFlightForPrefetchedKey:(id)a0 application:(id)a1;
- (void)synchronizeWithCompletion:(id /* block */)a0;
- (void)addObserver:(id)a0;
- (void)_calloutQueue_handleValueChanged:(id)a0;
- (id)availableDataStores;

@end
