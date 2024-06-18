@interface __NSPlaceholderSet : NSMutableSet

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)init;
- (id)initWithSet:(id)a0 copyItems:(BOOL)a1;
- (oneway void)release;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)objectEnumerator;
- (unsigned long long)retainCount;
- (void)addObject:(id)a0;
- (void)removeObject:(id)a0;
- (id)retain;
- (void)dealloc;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (unsigned long long)count;
- (id)member:(id)a0;

@end
