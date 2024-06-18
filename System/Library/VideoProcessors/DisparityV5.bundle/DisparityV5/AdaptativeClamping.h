@class FigMetalContext;
@protocol MTLComputePipelineState;

@interface AdaptativeClamping : NSObject {
    FigMetalContext *_metalContext;
    id<MTLComputePipelineState> _pipelineStates[3];
}

- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;
- (int)_initShaders;
- (int)clampFromPixelBuffer:(SEL)a0 Mask:(struct __CVBuffer { } *)a1 MaxDisparity:(struct __CVBuffer { } *)a2 Percentiles:(float)a3 CommandBuffer:(id)a4;

@end
