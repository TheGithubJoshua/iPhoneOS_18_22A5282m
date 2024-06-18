@interface OITSUMutablePointerSet : NSMutableSet {
    struct __CFSet { } *mSet;
}

+ (Class)privateMutableClass;
+ (Class)privateNonMutableClass;

- (void)getObjects:(id *)a0;
- (id)init;
- (id)setByAddingObject:(id)a0;
- (id)setByAddingObjectsFromSet:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)objectEnumerator;
- (void)removeAllObjects;
- (void)addObject:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)setByAddingObjectsFromArray:(id)a0;
- (void)removeObject:(id)a0;
- (void)dealloc;
- (id)allObjects;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (unsigned long long)count;
- (id)member:(id)a0;
- (id)initWithCFSet:(struct __CFSet { } *)a0;

@end
