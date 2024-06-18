@class NSString, NSMutableDictionary;

@interface TSUCache : TSUFlushableObject {
    NSString *mCacheName;
    NSMutableDictionary *mCache;
}

- (void)unload;
- (id)init;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initWithName:(id)a0;
- (unsigned long long)count;
- (id)p_objectForKey:(id)a0;
- (BOOL)hasFlushableContent;
- (void)p_addEntriesFromDictionary:(id)a0;
- (id)p_objectsForKeys:(id)a0 notFoundMarker:(id)a1;

@end
