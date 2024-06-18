@class NSMutableDictionary, NSMutableArray;

@interface LiveFSLRUCache : NSObject {
    int _countLimit;
}

@property (retain) NSMutableDictionary *mapping;
@property (retain) NSMutableArray *usageOrder;
@property int countLimit;

- (id)init;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (id)objectForKeyLocked:(id)a0;
- (void)removeLastItem;

@end
