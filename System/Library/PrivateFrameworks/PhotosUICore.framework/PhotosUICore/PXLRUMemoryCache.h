@class NSMapTable, NSRecursiveLock;

@interface PXLRUMemoryCache : NSObject {
    NSMapTable *_cacheDictionary;
    NSRecursiveLock *_recursiveLock;
    struct _PXLRUMemoryCacheList { unsigned long long x0; struct _PXLRUMemoryCacheListElement *x1; struct _PXLRUMemoryCacheListElement *x2; } *_leastRecentUsedList;
    NSMapTable *_leastRecentUsedDictionary;
}

@property (nonatomic) unsigned long long numberOfSlots;
@property (readonly, nonatomic) unsigned long long currentUsedSlots;

- (id)init;
- (void)_promoteListElement:(struct _PXLRUMemoryCacheListElement { id x0; struct _PXLRUMemoryCacheListElement *x1; struct _PXLRUMemoryCacheListElement *x2; } *)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)allKeys;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)_removeListElement:(struct _PXLRUMemoryCacheListElement { id x0; struct _PXLRUMemoryCacheListElement *x1; struct _PXLRUMemoryCacheListElement *x2; } *)a0;
- (id)objectForKey:(id)a0;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (id)description;
- (id)objectForKeyedSubscript:(id)a0;
- (void)dealloc;
- (void)evictSlots:(unsigned long long)a0;

@end
