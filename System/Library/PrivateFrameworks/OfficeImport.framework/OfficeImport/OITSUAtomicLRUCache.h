@interface OITSUAtomicLRUCache : OITSULRUCache

- (void)setObject:(id)a0 forKey:(id)a1;
- (id)allKeys;
- (id)objectForKey:(id)a0;
- (id)allValues;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (void)clearEvictionCallbackTarget;
- (void)setEvictionCallbackTarget:(id)a0 selector:(SEL)a1;

@end
