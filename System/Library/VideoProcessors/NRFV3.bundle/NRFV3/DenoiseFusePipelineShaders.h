@protocol MTLComputePipelineState;

@interface DenoiseFusePipelineShaders : NSObject {
    id<MTLComputePipelineState> _downsampleInference;
}

- (void).cxx_destruct;
- (id)initWithMetal:(id)a0;

@end
