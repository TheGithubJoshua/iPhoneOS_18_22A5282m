@class NSArray, NSMutableDictionary, NSMutableArray;
@protocol CNScheduler;

@interface CNCache : NSObject

@property (class, readonly, copy) id<CNScheduler> atomicCacheScheduler;
@property (class, readonly, copy) id<CNScheduler> nonatomicCacheScheduler;

@property (readonly, copy, nonatomic) NSArray *boundingStrategies;
@property (readonly, nonatomic) id<CNScheduler> resourceScheduler;
@property (readonly, nonatomic) NSMutableDictionary *storage;
@property (readonly, nonatomic) NSMutableArray *didEvictHandlers;
@property (copy, nonatomic) NSArray *evictedKeysAndValues;
@property (readonly) unsigned long long overestimatedCount;
@property (readonly, copy) NSArray *allKeys;
@property (readonly, copy) NSArray *allObjects;

+ (id)boundingStrategyWithTTL:(double)a0 renewalOptions:(unsigned long long)a1 timeProvider:(id)a2;
+ (id)cache;
+ (id)atomicCache;
+ (id)boundingStrategyWithCapacity:(unsigned long long)a0;
+ (id)boundingStrategyWithTTL:(double)a0;

- (id)init;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)resultWithResourceLock:(id /* block */)a0;
- (void)resourceLock_willAccessKey:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)objectForKey:(id)a0;
- (void)resourceLock_validateKey:(id)a0;
- (void)removeAllObjects;
- (void)addDidEvictHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithResourceScheduler:(id)a0;
- (id)objectForKey:(id)a0 onCacheMiss:(id /* block */)a1;
- (id)objectForKeyedSubscript:(id)a0;
- (void)resourceLock_validateAllKeys;
- (void)performWithResourceLock:(id /* block */)a0;
- (void)resourceLock_willSetObject:(id)a0 forKey:(id)a1;
- (id)initWithBoundingStrategies:(id)a0 resourceScheduler:(id)a1;
- (void)resourceLock_evictObjectsForKeys:(id)a0;
- (void)callDidEvictHandlersIfNecessary;
- (void)resourceLock_setObject:(id)a0 forKey:(id)a1;
- (void)resourceLock_validateKeys:(id)a0;

@end
