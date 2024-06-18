@interface __NSPlaceholderOrderedSet : NSMutableOrderedSet

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)init;
- (unsigned long long)indexOfObject:(id)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (oneway void)release;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)retainCount;
- (id)retain;
- (void)dealloc;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (unsigned long long)count;

@end
