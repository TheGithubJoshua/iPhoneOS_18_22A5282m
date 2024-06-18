@class NSMutableArray, NSManagedObject, NSPropertyDescription;

@interface _NSFaultingMutableArray : NSMutableArray {
    int _cd_rc;
    NSMutableArray *_realArray;
    NSManagedObject *_source;
    NSPropertyDescription *_relationship;
    struct _NSFaultingMutableArrayFlags { unsigned char _isFault : 1; unsigned int _reserved : 31; } _flags;
}

@property (readonly, nonatomic) NSManagedObject *source;
@property (readonly, nonatomic) NSPropertyDescription *relationship;
@property (readonly, nonatomic, getter=isFault) BOOL fault;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)accessInstanceVariablesDirectly;
+ (Class)classForKeyedUnarchiver;

- (id)valueForKeyPath:(id)a0;
- (void)removeLastObject;
- (void)getObjects:(id *)a0;
- (BOOL)_tryRetain;
- (unsigned long long)indexOfObjectAtIndexes:(id)a0 options:(unsigned long long)a1 passingTest:(id /* block */)a2;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)enumerateObjectsAtIndexes:(id)a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)indexOfObjectWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (oneway void)release;
- (id)indexesOfObjectsAtIndexes:(id)a0 options:(unsigned long long)a1 passingTest:(id /* block */)a2;
- (void)enumerateObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)initWithSource:(id)a0 forRelationship:(id)a1 asFault:(BOOL)a2;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)descriptionWithLocale:(id)a0;
- (Class)classForCoder;
- (id)indexesOfObjectsWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (id)valueForKey:(id)a0;
- (void)turnIntoFault;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (id)descriptionWithLocale:(id)a0 indent:(unsigned long long)a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)objectEnumerator;
- (void)willRead;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)description;
- (unsigned long long)retainCount;
- (void)addObject:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (void)dealloc;
- (BOOL)_isDeallocating;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;

@end
