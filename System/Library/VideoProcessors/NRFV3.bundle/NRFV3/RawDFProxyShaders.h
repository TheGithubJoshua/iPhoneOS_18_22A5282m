@protocol MTLComputePipelineState;

@interface RawDFProxyShaders : NSObject {
    id<MTLComputePipelineState> _kernel[2];
}

- (void).cxx_destruct;
- (id)getKernel:(int)a0;
- (id)initWithMetal:(id)a0;

@end
