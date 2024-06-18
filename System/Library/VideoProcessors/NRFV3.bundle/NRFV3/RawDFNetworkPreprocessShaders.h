@protocol MTLComputePipelineState;

@interface RawDFNetworkPreprocessShaders : NSObject {
    id<MTLComputePipelineState> _estimateNoiseAndTileSL;
    id<MTLComputePipelineState> _estimateNoiseAndTileSR;
    id<MTLComputePipelineState> _estimateNoiseAndTileQSR;
}

- (void).cxx_destruct;
- (id)initWithMetal:(id)a0;

@end
