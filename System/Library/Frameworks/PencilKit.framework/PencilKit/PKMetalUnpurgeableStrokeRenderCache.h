@class NSMutableSet;

@interface PKMetalUnpurgeableStrokeRenderCache : PKMetalStrokeRenderCache {
    NSMutableSet *_lockedResourceSet;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)addBuffer:(id)a0;
- (void)addSecondaryBuffer:(id)a0;
- (id)initWithInk:(id)a0;

@end
