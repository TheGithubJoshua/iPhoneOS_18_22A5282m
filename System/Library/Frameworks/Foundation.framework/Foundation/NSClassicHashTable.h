@interface NSClassicHashTable : NSHashTable {
    struct { void /* function */ *hash; void /* function */ *isEqual; void /* function */ *retain; void /* function */ *release; void /* function */ *describe; } _callBacks;
    struct __CFBasicHash { } *_ht;
}

- (void)removeItem:(const void *)a0;
- (id)init;
- (void)getKeys:(const void **)a0 count:(unsigned long long *)a1;
- (void)removeAllItems;
- (id)copy;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)addObject:(id)a0;
- (void)insertKnownAbsentItem:(const void *)a0;
- (void)dealloc;
- (id)allObjects;
- (void *)getItem:(const void *)a0;
- (void)insertItem:(const void *)a0;
- (unsigned long long)count;

@end
