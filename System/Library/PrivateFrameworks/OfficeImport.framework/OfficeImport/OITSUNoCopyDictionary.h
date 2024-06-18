@interface OITSUNoCopyDictionary : NSMutableDictionary {
    struct __CFDictionary { } *mDictionary;
}

- (void)getObjects:(id *)a0 andKeys:(id *)a1 count:(unsigned long long)a2;
- (id)init;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)allKeys;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)objectForKey:(id)a0;
- (id)allValues;
- (id)objectEnumerator;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (void)getObjects:(id *)a0 andKeys:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)keyEnumerator;
- (void)dealloc;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)setObject:(id)a0 forUncopiedKey:(id)a1;
- (id)initWithCFDictionary:(struct __CFDictionary { } *)a0;

@end
