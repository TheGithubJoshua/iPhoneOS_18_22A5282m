@protocol MTLComputePipelineState;

@interface QuadraDFShaders : NSObject {
    id<MTLComputePipelineState> _tileAndConvertYUV420toYUV444;
    id<MTLComputePipelineState> _tileAndConvertSyntheticLongRGBtoYUV;
}

- (void).cxx_destruct;
- (id)initWithMetal:(id)a0;

@end
