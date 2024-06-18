@protocol MTLComputePipelineState;

@interface CMIImagePyramidShaders : NSObject {
    id<MTLComputePipelineState> _downscale2x;
}

- (void).cxx_destruct;
- (id)initWithMetal:(id)a0;

@end
