@class NSArray, NSMapTable, NSMutableArray;
@protocol DCLRUCacheDelegate;

@interface DCLRUCache : NSObject {
    NSMapTable *mData;
    NSMutableArray *mOrderedKeys;
}

@property (readonly, nonatomic) unsigned long long maxSize;
@property (readonly, nonatomic) NSArray *allKeys;
@property (weak, nonatomic) id<DCLRUCacheDelegate> delegate;

+ (void)purgeAllCaches;
+ (id)cacheCollection;

- (void)setObject:(id)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithMaxSize:(unsigned long long)a0;
- (void)p_removeOldestObject;

@end
