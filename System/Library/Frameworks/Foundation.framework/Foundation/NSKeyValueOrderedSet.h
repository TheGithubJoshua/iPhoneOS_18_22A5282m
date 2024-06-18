@class NSString, NSKeyValueNonmutatingOrderedSetMethodSet, NSObject;

@interface NSKeyValueOrderedSet : NSOrderedSet <NSKeyValueProxyCaching> {
    NSObject *_container;
    NSString *_key;
    NSKeyValueNonmutatingOrderedSetMethodSet *_methods;
}

+ (id)_proxyShare;

- (void)_proxyNonGCFinalize;
- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;
- (unsigned long long)indexOfObject:(id)a0;
- (id)objectsAtIndexes:(id)a0;
- (struct { id x0; id x1; })_proxyLocator;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)dealloc;
- (unsigned long long)count;

@end
