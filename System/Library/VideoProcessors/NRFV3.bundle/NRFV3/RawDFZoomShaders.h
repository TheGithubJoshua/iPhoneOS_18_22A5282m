@protocol MTLComputePipelineState;

@interface RawDFZoomShaders : NSObject {
    id<MTLComputePipelineState> _applyMirrorKernel;
    id<MTLComputePipelineState> _applyZoomKernel;
}

- (void).cxx_destruct;
- (id)initWithMetal:(id)a0;

@end
