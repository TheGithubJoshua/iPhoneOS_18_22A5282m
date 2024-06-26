@class NSMutableIndexSet;

@interface TSTConcurrentMutableIndexSet : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwLock;
}

@property (readonly, nonatomic) NSMutableIndexSet *mutableIndexSet;

- (id)init;
- (void)enumerateIndexesUsingBlock:(id /* block */)a0;
- (void)removeAllIndexes;
- (void)addIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
