@protocol MTLComputePipelineState;

@interface RawDFColorMatchShaders : NSObject {
    id<MTLComputePipelineState> _kernelRawDFPickRandomSamples;
    id<MTLComputePipelineState> _kernelRawDFColorAdjustmentInplace;
}

- (void).cxx_destruct;
- (id)initWithMetal:(id)a0;

@end
