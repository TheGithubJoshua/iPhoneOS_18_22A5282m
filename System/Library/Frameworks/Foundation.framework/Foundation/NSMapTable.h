@class NSPointerFunctions;

@interface NSMapTable : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSPointerFunctions *keyPointerFunctions;
@property (readonly, copy) NSPointerFunctions *valuePointerFunctions;
@property (readonly) unsigned long long count;

+ (id)alloc;
+ (id)strongToStrongObjectsMapTable;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)mapTableWithKeyOptions:(unsigned long long)a0 valueOptions:(unsigned long long)a1;
+ (BOOL)_subclassesMustBeExplicitlyMentionedWhenDecoded;
+ (id)weakToStrongObjectsMapTable;
+ (id)weakToWeakObjectsMapTable;
+ (id)strongToWeakObjectsMapTable;
+ (id)mapTableWithStrongToWeakObjects;
+ (id)mapTableWithWeakToStrongObjects;
+ (id)mapTableWithStrongToStrongObjects;
+ (id)mapTableWithWeakToWeakObjects;

- (id)initWithCoder:(id)a0;
- (id)initWithKeyPointerFunctions:(id)a0 valuePointerFunctions:(id)a1 capacity:(unsigned long long)a2;
- (id)init;
- (void)replaceItem:(const void *)a0 forExistingKey:(const void *)a1;
- (id)initWithKeyOptions:(unsigned long long)a0 valueOptions:(unsigned long long)a1 capacity:(unsigned long long)a2;
- (BOOL)mapMember:(const void *)a0 originalKey:(const void **)a1 value:(const void **)a2;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeAllItems;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (id)allKeys;
- (id)dictionaryRepresentation;
- (void *)existingItemForSetItem:(const void *)a0 forAbsentKey:(const void *)a1;
- (Class)classForCoder;
- (id)enumerator;
- (id)objectForKey:(id)a0;
- (id)allValues;
- (id)objectEnumerator;
- (void)removeAllObjects;
- (void)encodeWithCoder:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (unsigned long long)__capacity;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setItem:(const void *)a0 forAbsentKey:(const void *)a1;
- (unsigned long long)getKeys:(const void **)a0 values:(const void **)a1;
- (id)keyEnumerator;
- (void)setItem:(const void *)a0 forKnownAbsentKey:(const void *)a1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)setItem:(const void *)a0 forKey:(const void *)a1;
- (id)mutableDictionary;

@end
