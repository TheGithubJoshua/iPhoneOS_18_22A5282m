@interface __NSPlaceholderArray : NSMutableArray

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)initWithContentsOfFile:(id)a0;
- (id)initWithContentsOfURL:(id)a0;
- (id)init;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (oneway void)release;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)initWithArray:(id)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)initWithArray:(id)a0 copyItems:(BOOL)a1;
- (unsigned long long)retainCount;
- (id)retain;
- (void)dealloc;
- (id)_initByAdoptingBuffer:(id *)a0 count:(unsigned long long)a1 size:(unsigned long long)a2;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (unsigned long long)count;

@end
