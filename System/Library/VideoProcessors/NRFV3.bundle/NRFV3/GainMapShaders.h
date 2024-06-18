@protocol MTLComputePipelineState;

@interface GainMapShaders : NSObject {
    id<MTLComputePipelineState> _gainMapFilter;
    id<MTLComputePipelineState> _gainMapDownsampledFilter;
}

- (void).cxx_destruct;
- (id)initWithMetal:(id)a0;

@end
