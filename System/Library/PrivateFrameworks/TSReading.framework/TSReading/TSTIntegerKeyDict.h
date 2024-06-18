@interface TSTIntegerKeyDict : NSObject {
    void *mMap;
}

- (id)init;
- (void)setObject:(id)a0 forKey:(unsigned int)a1;
- (id)objectForKey:(unsigned int)a0;
- (id)allValues;
- (void)removeAllObjects;
- (void)removeObjectForKey:(unsigned int)a0;
- (void)dealloc;
- (void)makeObjectsPerformSelector:(SEL)a0;
- (long long)count;
- (void)removeFirstObject;
- (void)applyFunction:(void /* function */ *)a0 withState:(void *)a1;
- (void)applyFunction:(void /* function */ *)a0 withState:(void *)a1 andState:(void *)a2;
- (void)transformWithFunction:(void /* function */ *)a0 withState:(void *)a1;

@end
