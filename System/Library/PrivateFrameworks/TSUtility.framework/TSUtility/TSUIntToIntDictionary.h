@interface TSUIntToIntDictionary : NSObject <NSCopying, NSMutableCopying> {
    struct __CFDictionary { } *mDictionary;
}

- (BOOL)containsKey:(long long)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setInt:(long long)a0 forKey:(long long)a1;
- (id)allKeys;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)allValues;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)keyEnumerator;
- (void)dealloc;
- (unsigned long long)count;
- (long long)intForKey:(long long)a0;
- (void)applyFromIntToIntDictionary:(id)a0;
- (id)arrayOfBoxedKeys;
- (BOOL)intIsPresentForKey:(long long)a0 outValue:(long long *)a1;
- (struct __CFDictionary { } *)p_cfDictionary;
- (void)removeAllInts;
- (void)removeIntForKey:(long long)a0;

@end
