@interface _PASLazyArrayBase : NSArray <NSFastEnumeration>

- (id)arrayByAddingObjectsFromArray:(id)a0;
- (id)subarrayWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)objectsAtIndexes:(id)a0;
- (BOOL)isEqualToArray:(id)a0;
- (id)sortedArrayFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 options:(unsigned long long)a1 usingComparator:(id /* block */)a2;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)arrayByAddingObject:(id)a0;

@end
