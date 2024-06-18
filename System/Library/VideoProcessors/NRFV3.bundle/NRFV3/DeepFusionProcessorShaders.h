@protocol MTLComputePipelineState;

@interface DeepFusionProcessorShaders : NSObject {
    id<MTLComputePipelineState> _copyTextureKernel;
    id<MTLComputePipelineState> _computeAMBNRBoostMapKernel;
}

- (void).cxx_destruct;
- (id)initWithMetal:(id)a0;

@end
