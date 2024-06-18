@interface AXIndexMap : NSObject <NSCopying, NSCoding> {
    struct __CFDictionary { } *_map;
}

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)setObject:(id)a0 forIndex:(unsigned long long)a1;
- (void)removeAllObjects;
- (void)encodeWithCoder:(id)a0;
- (id)indexes;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)objectForIndex:(unsigned long long)a0;
- (unsigned long long)count;
- (unsigned long long *)_createIndexesWithSize:(unsigned long long *)a0;
- (id)_initAndDeepCopyIndexMap:(id)a0;
- (id)_initWithIndexMap:(id)a0;
- (void)addObjectsFromIndexMap:(id)a0;
- (id)deepCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithObjects:(id *)a0 andIndexes:(unsigned long long *)a1 count:(unsigned long long)a2;
- (void)removeObjectForIndex:(unsigned long long)a0;

@end