@interface NSConstantArray : NSArray {
    unsigned long long _count;
    const id *_objects;
}

+ (id)new;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)init;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (BOOL)_tryRetain;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (oneway void)release;
- (id)mutableCopy;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)autorelease;
- (id)objectEnumerator;
- (unsigned long long)retainCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (void)dealloc;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (BOOL)_isDeallocating;
- (unsigned long long)count;

@end
