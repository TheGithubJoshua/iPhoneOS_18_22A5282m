@interface __NSPlaceholderDictionary : NSMutableDictionary

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)initWithContentsOfFile:(id)a0;
- (id)initWithDictionary:(id)a0 copyItems:(BOOL)a1;
- (id)initWithContentsOfURL:(id)a0;
- (id)init;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (void)setObject:(id)a0 forKey:(id)a1;
- (oneway void)release;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (unsigned long long)retainCount;
- (id)retain;
- (id)keyEnumerator;
- (void)dealloc;
- (unsigned long long)count;

@end
