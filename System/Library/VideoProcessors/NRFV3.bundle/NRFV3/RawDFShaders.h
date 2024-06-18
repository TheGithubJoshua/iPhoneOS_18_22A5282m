@protocol MTLComputePipelineState;

@interface RawDFShaders : NSObject {
    id<MTLComputePipelineState> _artifactNetworkPreprocess;
    id<MTLComputePipelineState> _artifactNetworkPostprocess;
}

- (void).cxx_destruct;
- (id)initWithMetal:(id)a0;

@end
