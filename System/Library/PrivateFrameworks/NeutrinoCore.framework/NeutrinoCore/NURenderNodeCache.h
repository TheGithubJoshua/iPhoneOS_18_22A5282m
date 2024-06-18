@class NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface NURenderNodeCache : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_cache;
}

+ (id)sharedInstance;

- (void)_mediaServicesWereReset:(id)a0;
- (id)init;
- (id)retrieveAndCacheNode:(id)a0;
- (id)cachedNodeForNode:(id)a0;
- (void)addNode:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
- (void)_addNode:(id)a0;
- (void)dealloc;
- (unsigned long long)unhitCacheEntriesCount;

@end
