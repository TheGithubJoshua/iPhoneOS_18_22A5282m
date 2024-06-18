@class NSURL, NSArray, NSInvocation;

@interface FPFrameworkOverridesIterator : NSProxy {
    NSArray *_overrides;
    id /* block */ _noSuitableModuleFoundHandler;
    unsigned long long _currentIndex;
    NSInvocation *_invocation;
}

@property (class, readonly, copy) NSURL *overrideDirectoryURL;

+ (void)addOverride:(id)a0;
+ (id)newIteratorWithNotFoundHandler:(id /* block */)a0;
+ (void)removeOverride:(id)a0;
+ (id)allOverrides;

- (void)finish;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;
- (void)callNextOverrides;
- (id)initWithOverrides:(id)a0 noSuitableModuleFoundHandler:(id /* block */)a1;

@end
