@interface DCAtomicLRUCache : DCLRUCache

- (void)setObject:(id)a0 forKey:(id)a1;
- (id)allKeys;
- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;

@end
