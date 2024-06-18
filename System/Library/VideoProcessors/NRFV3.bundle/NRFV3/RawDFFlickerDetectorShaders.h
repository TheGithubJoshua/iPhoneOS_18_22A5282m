@protocol MTLComputePipelineState;

@interface RawDFFlickerDetectorShaders : NSObject {
    id<MTLComputePipelineState> _detectFlicker;
}

- (void).cxx_destruct;
- (id)initWithMetal:(id)a0;

@end
