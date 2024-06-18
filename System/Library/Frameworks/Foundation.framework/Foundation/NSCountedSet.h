@interface NSCountedSet : NSMutableSet {
    id _table;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithSet:(id)a0 copyItems:(BOOL)a1;
- (unsigned long long)countForObject:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)initWithArray:(id)a0;
- (id)descriptionWithLocale:(id)a0;
- (Class)classForCoder;
- (id)initWithSet:(id)a0;
- (id)objectEnumerator;
- (void)removeAllObjects;
- (void)encodeWithCoder:(id)a0;
- (void)addObject:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeObject:(id)a0;
- (void)dealloc;
- (void)getObjects:(id *)a0 count:(unsigned long long)a1;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)member:(id)a0;

@end
