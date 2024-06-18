@class STReferenceCountedCache;

@interface STExecutableIdentityResolver : NSObject <STExecutableIdentityResolving> {
    STReferenceCountedCache *_cache;
}

- (id)init;
- (id)beginBatchResolutionSession;
- (void).cxx_destruct;
- (id)resolvedIdentityForIdentity:(id)a0;

@end
