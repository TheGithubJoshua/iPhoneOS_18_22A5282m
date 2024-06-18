@class NSArray, STExecutableIdentityResolver, STReferenceCountedCache;

@interface STAttributedEntityResolver : NSObject <STAttributedEntityResolving> {
    STExecutableIdentityResolver *_identityResolver;
    STReferenceCountedCache *_cache;
}

@property (copy, nonatomic) NSArray *dynamicAttributions;

- (id)init;
- (id)beginBatchResolutionSession;
- (id)resolveEntity:(id)a0;
- (void).cxx_destruct;

@end
