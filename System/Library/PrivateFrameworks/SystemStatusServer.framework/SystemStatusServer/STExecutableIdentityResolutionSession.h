@class NSArray, STReferenceCountedCache;
@protocol STExecutableIdentityResolving;

@interface STExecutableIdentityResolutionSession : NSObject <STExecutableIdentityBatchResolving> {
    BOOL _invalidated;
    id<STExecutableIdentityResolving> _resolver;
    STReferenceCountedCache *_cache;
    NSArray *_cachedIdentities;
}

- (id)initWithResolver:(id)a0 cache:(id)a1;
- (void)resolveIdentities:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (id)resolvedIdentityForIdentity:(id)a0;
- (void)dealloc;

@end
