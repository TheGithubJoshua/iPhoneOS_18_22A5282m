@class NSMutableArray, NSMutableDictionary;

@interface SCNOrderedDictionary : NSObject {
    NSMutableArray *_keys;
    NSMutableDictionary *_keyValues;
}

- (id)keys;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)copy;
- (id)allKeys;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0;
- (id)valueForKey:(id)a0;
- (id)allValues;
- (id)objectAtIndex:(long long)a0;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (id)description;
- (void)dealloc;
- (id)dictionary;
- (unsigned long long)count;
- (void)_setupFrom:(id)a0;
- (void)applyBlock:(id /* block */)a0;
- (void)applyFunction:(void /* function */ *)a0 withContext:(void *)a1;

@end
