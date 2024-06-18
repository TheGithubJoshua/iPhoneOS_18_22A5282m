@class NSKnownKeysMappingStrategy;

@interface NSKnownKeysDictionary1 : NSKnownKeysDictionary {
    int _cd_rc;
    int _count;
    NSKnownKeysMappingStrategy *_keySearch;
    id _values[0];
}

+ (id)alloc;
+ (id)initWithCoder:(id)a0;
+ (BOOL)supportsSecureCoding;
+ (id)initWithSearchStrategy:(id)a0;
+ (id)initWithDictionary:(id)a0 copyItems:(BOOL)a1;
+ (id)initWithDictionary:(id)a0;
+ (id)initForKeys:(id)a0;
+ (id)initWithObjects:(id *)a0 forKeys:(id *)a1 count:(unsigned long long)a2;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)_subclassesMustBeExplicitlyMentionedWhenDecoded;
+ (Class)classForKeyedUnarchiver;

- (void)setValue:(id)a0 atIndex:(unsigned long long)a1;
- (void)getKeys:(id *)a0;
- (const id *)knownKeyValuesPointer;
- (void)getObjects:(id *)a0;
- (BOOL)_tryRetain;
- (void)setObject:(id)a0 forKey:(id)a1;
- (BOOL)isEqualToDictionary:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)valueAtIndex:(unsigned long long)a0;
- (id)allKeys;
- (oneway void)release;
- (Class)classForCoder;
- (id)objectForKey:(id)a0;
- (void)addEntriesFromDictionary:(id)a0;
- (const id *)values;
- (id)allValues;
- (void)setValues:(id *)a0;
- (id)objectEnumerator;
- (void)removeAllObjects;
- (void)encodeWithCoder:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (unsigned long long)retainCount;
- (void)_setValues:(id *)a0 retain:(BOOL)a1;
- (unsigned long long)_valueCountByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)mapping;
- (void)getObjects:(id *)a0 andKeys:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (id)keyEnumerator;
- (void)dealloc;
- (BOOL)_isDeallocating;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;

@end
