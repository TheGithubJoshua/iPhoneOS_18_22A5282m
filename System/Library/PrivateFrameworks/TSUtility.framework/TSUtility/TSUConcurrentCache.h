@class TSUReadWriteQueue;

@interface TSUConcurrentCache : TSUCache

@property (readonly, nonatomic) TSUReadWriteQueue *readWriteQueue;

- (void)unload;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0;
- (void)addEntriesFromDictionary:(id)a0;
- (void)removeAllObjects;
- (id)objectsForKeys:(id)a0 notFoundMarker:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (void)dealloc;
- (id)initWithName:(id)a0;
- (unsigned long long)count;
- (BOOL)hasFlushableContent;
- (void)removeObjectForKey:(id)a0 andWait:(BOOL)a1;

@end
