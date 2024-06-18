@class NSMutableDictionary;

@interface STReferenceCountedCache : NSObject {
    NSMutableDictionary *_cache;
    NSMutableDictionary *_referenceCounts;
}

- (id)init;
- (void)clearObjectForKey:(id)a0;
- (void)cacheObject:(id)a0 forKey:(id)a1;
- (id)cachedObjectForKey:(id)a0;
- (void).cxx_destruct;
- (void)decrementReferenceCountForKey:(id)a0;
- (void)incrementReferenceCountForKey:(id)a0;

@end
