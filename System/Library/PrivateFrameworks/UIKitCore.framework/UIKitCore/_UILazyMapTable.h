@class NSMapTable;

@interface _UILazyMapTable : NSObject {
    id /* block */ _mappingBlock;
    NSMapTable *_keysToClientTables;
    NSMapTable *_keysToValues;
    NSMapTable *_valuesToKeys;
}

- (void)unregisterClient:(id)a0 ofObjectForKey:(id)a1;
- (id)keys;
- (id)objectForKey:(id)a0;
- (id)cachedObjects;
- (id)initWithMappingBlock:(id /* block */)a0;
- (id)cachedObjectEnumerable;
- (void).cxx_destruct;
- (id)description;
- (id)keyEnumerable;
- (void)registerClient:(id)a0 ofObjectForKey:(id)a1;
- (BOOL)hasCachedObjectForKey:(id)a0;
- (unsigned long long)count;

@end
