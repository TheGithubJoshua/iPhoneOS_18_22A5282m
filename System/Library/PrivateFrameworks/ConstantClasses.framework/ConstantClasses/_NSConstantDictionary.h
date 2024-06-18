@interface _NSConstantDictionary : NSDictionary <NSFastEnumeration>

+ (id)alloc;

- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (unsigned long long)capacity;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (id)allKeys;
- (oneway void)release;
- (id)objectForKey:(id)a0;
- (id)allValues;
- (id)descriptionWithLocale:(id)a0 indent:(unsigned long long)a1;
- (id)objectEnumerator;
- (unsigned long long)retainCount;
- (void)getObjects:(id *)a0 andKeys:(id *)a1;
- (id)retain;
- (id)keyEnumerator;
- (void)dealloc;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;

@end
