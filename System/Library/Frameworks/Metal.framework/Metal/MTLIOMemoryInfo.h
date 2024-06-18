@class MTLIOAccelResource;

@interface MTLIOMemoryInfo : NSObject {
    void *memlist_key;
    MTLIOAccelResource *fResourceListHead;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _memoryInfoLock;
}

+ (id)initialize;

- (void *)addDataSource:(id /* block */)a0;
- (void)removeDataSource:(void *)a0;
- (struct __CFArray { } *)annotationList;
- (void)shutdown;
- (id)init;
- (void)removeResourceFromList:(id)a0;
- (void)unlock;
- (void)addResourceToList:(id)a0;
- (void)lock;
- (void)dealloc;

@end
