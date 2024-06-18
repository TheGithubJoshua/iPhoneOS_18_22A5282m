@class NSString;
@protocol FBSApplicationDataStoreRepositoryClient;

@interface FBSApplicationDataStore : NSObject {
    id<FBSApplicationDataStoreRepositoryClient> _client;
    BOOL _clientNeedsCheckin;
}

@property (readonly, nonatomic) NSString *bundleID;

+ (BOOL)isServerProcess;
+ (void)synchronize;
+ (void)setPrefetchedKeys:(id)a0;
+ (id)storeForApplication:(id)a0;
+ (id)applicationsWithAvailableStores;
+ (void)_doWithClassClient:(id /* block */)a0;
+ (void)synchronizeWithCompletion:(id /* block */)a0;
+ (void)_setClassClient:(id)a0;

- (id)init;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0;
- (void)removeAllObjects;
- (id)initWithBundleIdentifier:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (void)setArchivedObject:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (id)safeObjectForKey:(id)a0 ofType:(Class)a1;
- (id)deserializeObjectForKey:(id)a0 ofType:(Class)a1;
- (id)_initWithBundleId:(id)a0 client:(id)a1;
- (id)archivedObjectForKey:(id)a0;
- (void)archivedObjectForKey:(id)a0 withResult:(id /* block */)a1;
- (void)deserializeObjectForKey:(id)a0 ofType:(Class)a1 withResult:(id /* block */)a2;
- (void)objectForKey:(id)a0 withResult:(id /* block */)a1;
- (id)safeArchivedObjectForKey:(id)a0 ofType:(Class)a1;
- (void)safeArchivedObjectForKey:(id)a0 ofType:(Class)a1 withResult:(id /* block */)a2;
- (void)safeObjectForKey:(id)a0 ofType:(Class)a1 withResult:(id /* block */)a2;
- (void)serializeObject:(id)a0 forKey:(id)a1;

@end
