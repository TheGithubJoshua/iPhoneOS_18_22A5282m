@class NSString, NSKeyValueNonmutatingSetMethodSet, NSObject;

@interface NSKeyValueSet : NSSet <NSKeyValueProxyCaching> {
    NSObject *_container;
    NSString *_key;
    NSKeyValueNonmutatingSetMethodSet *_methods;
}

+ (id)_proxyShare;

- (void)_proxyNonGCFinalize;
- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;
- (struct { id x0; id x1; })_proxyLocator;
- (id)objectEnumerator;
- (void)dealloc;
- (unsigned long long)count;
- (id)member:(id)a0;

@end
