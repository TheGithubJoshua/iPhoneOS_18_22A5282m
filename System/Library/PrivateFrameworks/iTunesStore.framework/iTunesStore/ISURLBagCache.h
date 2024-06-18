@class NSObject, SSLRUCache;
@protocol OS_dispatch_queue;

@interface ISURLBagCache : NSObject {
    SSLRUCache *_cachedBags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (id)URLWithBagContext:(id)a0;
+ (id)sharedCache;

- (id)init;
- (id)URLBagForContext:(id)a0 withOptions:(long long)a1;
- (void)invalidateAllURLBags;
- (void).cxx_destruct;
- (id)_newRequestWithURLBagContext:(id)a0;
- (void)_storeFrontChangedNotification:(id)a0;
- (id)URLBagForContext:(id)a0;
- (void)dealloc;
- (void)addURLBag:(id)a0;
- (void)invalidateURLBagForContext:(id)a0;

@end
