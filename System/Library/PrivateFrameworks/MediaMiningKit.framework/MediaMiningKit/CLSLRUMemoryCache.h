@class NSMapTable, NSRecursiveLock;

@interface CLSLRUMemoryCache : NSObject {
    NSMapTable *_cacheDictionary;
    NSRecursiveLock *_recursiveLock;
    struct _CLSLRUMemoryCacheList { unsigned long long x0; struct _CLSLRUMemoryCacheListElement *x1; struct _CLSLRUMemoryCacheListElement *x2; } *_leastRecentUsedList;
    NSMapTable *_leastRecentUsedDictionary;
}

@property (nonatomic) unsigned long long numberOfSlots;
@property (readonly, nonatomic) unsigned long long currentUsedSlots;

- (id)init;
- (void)_promoteListElement:(struct _CLSLRUMemoryCacheListElement { id x0; struct _CLSLRUMemoryCacheListElement *x1; struct _CLSLRUMemoryCacheListElement *x2; } *)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (BOOL)writeToURL:(id)a0;
- (id)allKeys;
- (void)_removeListElement:(struct _CLSLRUMemoryCacheListElement { id x0; struct _CLSLRUMemoryCacheListElement *x1; struct _CLSLRUMemoryCacheListElement *x2; } *)a0;
- (id)objectForKey:(id)a0;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (BOOL)loadFromURL:(id)a0;
- (void)dealloc;
- (void)evictSlots:(unsigned long long)a0;

@end
