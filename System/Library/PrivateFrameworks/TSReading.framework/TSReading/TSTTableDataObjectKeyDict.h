@interface TSTTableDataObjectKeyDict : NSObject {
    void *mMap;
}

- (id)init;
- (void)setKey:(unsigned int)a0 forObject:(id)a1;
- (unsigned int)keyForObject:(id)a0;
- (void)dealloc;
- (void)removeKeyForObject:(id)a0;
- (unsigned long long)count;
- (void)removeAllKeys;

@end
