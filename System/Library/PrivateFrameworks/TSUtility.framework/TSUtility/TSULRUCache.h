@class TSUNoCopyDictionary, NSMutableArray;

@interface TSULRUCache : NSObject {
    TSUNoCopyDictionary *mData;
    NSMutableArray *mOrderedKeys;
    id mCallbackTarget;
    SEL mCallback;
}

@property (readonly, nonatomic) unsigned long long maxSize;

- (void)setObject:(id)a0 forKey:(id)a1;
- (id)allKeys;
- (id)objectForKey:(id)a0;
- (id)allValues;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (id)initWithMaxSize:(unsigned long long)a0;
- (void)dealloc;
- (void)p_removeOldestObject;
- (void)clearEvictionCallbackTarget;
- (void)setEvictionCallbackTarget:(id)a0 selector:(SEL)a1;

@end
