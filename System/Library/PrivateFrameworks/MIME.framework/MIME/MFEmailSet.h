@interface MFEmailSet : EAEmailAddressSet {
    struct __CFSet { } *_set;
}

+ (id)set;

- (void)intersectSet:(id)a0;
- (id)init;
- (void)minusSet:(id)a0;
- (void)setSet:(id)a0;
- (BOOL)isEqualToSet:(id)a0;
- (BOOL)intersectsSet:(id)a0;
- (id)serializedRepresentation;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)unionSet:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (BOOL)isSubsetOfSet:(id)a0;
- (id)initWithSet:(id)a0;
- (id)objectEnumerator;
- (void)removeAllObjects;
- (void)addObject:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_generateAllObjectsFromSelector:(SEL)a0;
- (void)removeObject:(id)a0;
- (void)dealloc;
- (id)allCommentedAddresses;
- (id)allObjects;
- (void)_setupSetWithCapacity:(unsigned long long)a0;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)member:(id)a0;

@end
