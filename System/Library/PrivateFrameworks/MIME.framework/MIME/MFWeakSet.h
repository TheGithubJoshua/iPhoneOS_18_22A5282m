@class NSLock;

@interface MFWeakSet : NSMutableSet {
    NSLock *_lock;
    unsigned long long _gen;
    struct __CFDictionary { } *_objects;
}

+ (id)set;
+ (id)setWithSet:(id)a0;
+ (id)setWithArray:(id)a0;
+ (id)setWithObjects:(id)a0;
+ (id)setWithCapacity:(unsigned long long)a0;
+ (id)setWithObject:(id)a0;
+ (id)setWithObjects:(const id *)a0 count:(unsigned long long)a1;

- (id)initWithCoder:(id)a0;
- (void)intersectSet:(id)a0;
- (id)init;
- (void)minusSet:(id)a0;
- (void)setSet:(id)a0;
- (id)initWithSet:(id)a0 copyItems:(BOOL)a1;
- (BOOL)isEqualToSet:(id)a0;
- (void)addObjectsFromArray:(id)a0;
- (BOOL)intersectsSet:(id)a0;
- (id)setByAddingObject:(id)a0;
- (id)setByAddingObjectsFromSet:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)unionSet:(id)a0;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)enumerateObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (BOOL)isSubsetOfSet:(id)a0;
- (id)initWithArray:(id)a0;
- (id)descriptionWithLocale:(id)a0;
- (BOOL)containsObject:(id)a0;
- (id)initWithObjects:(id)a0;
- (id)initWithSet:(id)a0;
- (id)objectEnumerator;
- (void)removeAllObjects;
- (void)encodeWithCoder:(id)a0;
- (void)makeObjectsPerformSelector:(SEL)a0 withObject:(id)a1;
- (id)_copyAllItems;
- (id)description;
- (void)addObject:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)setByAddingObjectsFromArray:(id)a0;
- (void)removeObject:(id)a0;
- (void)dealloc;
- (id)objectsPassingTest:(id /* block */)a0;
- (id)allObjects;
- (id)objectsWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (id)anyObject;
- (void)makeObjectsPerformSelector:(SEL)a0;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)member:(id)a0;

@end
