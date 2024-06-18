@interface OITSUIntegerKeyDictionary : NSObject <NSCopying, NSMutableCopying> {
    struct __CFDictionary { } *mDictionary;
}

- (id)init;
- (void)setObject:(id)a0 forKey:(long long)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)objectForKey:(long long)a0;
- (id)allValues;
- (void)removeAllObjects;
- (void)removeObjectForKey:(long long)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)keyEnumerator;
- (void)dealloc;
- (unsigned long long)count;
- (id)valueEnumerator;
- (struct __CFDictionary { } *)p_cfDictionary;

@end
