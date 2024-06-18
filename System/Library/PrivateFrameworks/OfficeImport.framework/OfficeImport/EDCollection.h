@class NSMutableArray;

@interface EDCollection : NSObject <NSCopying> {
    NSMutableArray *mObjects;
}

+ (id)collection;
+ (id)collectionWithObject:(id)a0;

- (id)initWithObject:(id)a0;
- (id)init;
- (unsigned long long)indexOfObject:(id)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)removeAllObjects;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (unsigned long long)addObject:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (BOOL)isEqualToCollection:(id)a0;
- (unsigned long long)addOrEquivalentObject:(id)a0;

@end
