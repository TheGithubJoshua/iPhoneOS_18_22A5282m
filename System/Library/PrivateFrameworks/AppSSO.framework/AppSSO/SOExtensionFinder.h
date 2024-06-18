@class NSObject;
@protocol OS_dispatch_queue;

@interface SOExtensionFinder : NSObject {
    NSObject<OS_dispatch_queue> *_extensionFinderQueue;
    id _matchingContext;
}

- (id)init;
- (void)findExtensionWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)_soExtensionsForExtensions:(id)a0;
- (void)findExtensionsWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)beginMatchingExtensionsWithCompletion:(id /* block */)a0;
- (void)endMatchingExtensions;

@end
