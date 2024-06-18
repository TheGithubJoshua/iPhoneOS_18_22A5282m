@interface TSUIntegerKeyDictionary : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    struct __CFDictionary { } *mDictionary;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)setObject:(id)a0 forKey:(long long)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)objectForKey:(long long)a0;
- (id)allValues;
- (void)removeAllObjects;
- (void)encodeWithCoder:(id)a0;
- (void)removeObjectForKey:(long long)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)keyEnumerator;
- (void)dealloc;
- (unsigned long long)count;
- (id)valueEnumerator;
- (struct __CFDictionary { } *)p_cfDictionary;

@end
