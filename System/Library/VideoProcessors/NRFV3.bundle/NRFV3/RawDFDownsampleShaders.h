@protocol MTLComputePipelineState;

@interface RawDFDownsampleShaders : NSObject {
    id<MTLComputePipelineState> _kernelRawDFDownsample;
}

- (void).cxx_destruct;
- (id)initWithMetal:(id)a0;

@end
