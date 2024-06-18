@class NSLock, NSMutableDictionary;

@interface MFMessageStoreObjectCache : NSObject {
    NSLock *_lock;
    unsigned long long _capacity;
    NSMutableDictionary *_cache;
}

@property (copy, nonatomic) id /* block */ keyGenerator;
@property (copy, nonatomic) id /* block */ comparator;

- (void)setObject:(id)a0 forMessage:(id)a1 kind:(long long)a2;
- (void)removeAllObjectsForMessage:(id)a0;
- (void)flush;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)_nts_setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
- (void)_nts_evictObject;
- (id)addObject:(id)a0 forMessage:(id)a1 kind:(long long)a2;
- (id)objectForMessage:(id)a0 kind:(long long)a1;
- (void)removeObjectForMessage:(id)a0 kind:(long long)a1;

@end
