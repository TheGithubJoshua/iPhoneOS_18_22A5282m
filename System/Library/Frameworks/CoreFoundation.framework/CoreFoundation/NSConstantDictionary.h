@interface NSConstantDictionary : NSDictionary <NSFastEnumeration> {
    unsigned long long _options;
    unsigned long long _count;
    const id *_keys;
    const id *_objects;
}

+ (id)new;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)keyOfEntryWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (id)keysOfEntriesWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (void)getObjects:(id *)a0 andKeys:(id *)a1 count:(unsigned long long)a2;
- (id)init;
- (void)__apply:(void /* function */ *)a0 context:(void *)a1;
- (BOOL)_tryRetain;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (id)allKeys;
- (oneway void)release;
- (id)objectForKey:(id)a0;
- (id)mutableCopy;
- (id)allValues;
- (id)autorelease;
- (id)objectEnumerator;
- (unsigned long long)retainCount;
- (id)objectForKeyedSubscript:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (id)keyEnumerator;
- (void)dealloc;
- (BOOL)_isDeallocating;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;

@end
