@class NSMutableDictionary, NSSharedKeySet;

@interface NSSharedKeyDictionary : NSMutableDictionary {
    NSSharedKeySet *_keyMap;
    unsigned long long _count;
    id *_values;
    void /* function */ *_ifkIMP;
    NSMutableDictionary *_sideDic;
    unsigned long long _mutations;
    BOOL _doKVO;
}

+ (BOOL)supportsSecureCoding;
+ (id)sharedKeyDictionaryWithKeySet:(id)a0;
+ (BOOL)_subclassesMustBeExplicitlyMentionedWhenDecoded;

- (id)initWithCoder:(id)a0;
- (void)getObjects:(id *)a0 andKeys:(id *)a1 count:(unsigned long long)a2;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)initWithKeySet:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setObservationInfo:(void *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)keySet;
- (Class)classForCoder;
- (id)objectForKey:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)keyEnumerator;
- (void)dealloc;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;

@end
