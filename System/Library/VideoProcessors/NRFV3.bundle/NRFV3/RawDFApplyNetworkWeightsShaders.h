@protocol MTLComputePipelineState;

@interface RawDFApplyNetworkWeightsShaders : NSObject {
    id<MTLComputePipelineState> _filterDenoise;
    id<MTLComputePipelineState> _filterDenoiseLumaOnly;
    id<MTLComputePipelineState> _applyNetworkDeghosting;
    id<MTLComputePipelineState> _addPreviousPyramidLevel;
    id<MTLComputePipelineState> _untileAndConvert444To420;
}

- (void).cxx_destruct;
- (id)initWithMetal:(id)a0;

@end
