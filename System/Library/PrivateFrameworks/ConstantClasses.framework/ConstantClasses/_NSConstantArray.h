@interface _NSConstantArray : NSArray

+ (id)alloc;

- (void)enumerateObjectsAtIndexes:(id)a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (oneway void)release;
- (void)enumerateObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)objectEnumerator;
- (unsigned long long)retainCount;
- (id)retain;
- (void)dealloc;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;

@end
