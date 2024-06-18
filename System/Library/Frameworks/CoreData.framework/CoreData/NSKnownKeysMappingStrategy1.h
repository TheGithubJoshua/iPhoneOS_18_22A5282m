@interface NSKnownKeysMappingStrategy1 : NSKnownKeysMappingStrategy {
    int _cd_rc;
    int _reserved64;
    void *_table;
    unsigned long long _length;
    id _reserved1;
    id *_keys;
}

+ (id)alloc;
+ (BOOL)supportsSecureCoding;
+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)accessInstanceVariablesDirectly;
+ (Class)classForKeyedUnarchiver;

- (id)initWithCoder:(id)a0;
- (unsigned long long)indexForKey:(id)a0;
- (id)initForKeys:(id)a0;
- (id *)keys;
- (BOOL)_tryRetain;
- (id)allKeys;
- (oneway void)release;
- (unsigned long long)fastIndexForKnownKey:(id)a0;
- (Class)classForCoder;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initForKeys:(id *)a0 count:(unsigned long long)a1;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (unsigned long long)retainCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (void)dealloc;
- (BOOL)_isDeallocating;
- (unsigned long long)length;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;

@end
