@protocol MTLComputePipelineState;

@interface GrayGhostDetectionShaders : NSObject {
    id<MTLComputePipelineState> _computeGrayGhostCount;
    id<MTLComputePipelineState> _computeGrayGhostCountRGB;
}

- (void).cxx_destruct;
- (id)initWithMetal:(id)a0;

@end
