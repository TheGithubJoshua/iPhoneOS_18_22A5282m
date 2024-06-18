@protocol MTLComputePipelineState;

@interface RawDFCommonShaders : NSObject {
    id<MTLComputePipelineState> _yuvCopyAndBias;
}

- (void).cxx_destruct;
- (id)initWithMetal:(id)a0;

@end
