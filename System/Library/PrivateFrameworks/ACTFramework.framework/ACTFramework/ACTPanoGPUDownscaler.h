@protocol MTLCommandQueue, MTLDevice, MTLComputePipelineState;

@interface ACTPanoGPUDownscaler : NSObject {
    id<MTLDevice> _device;
    id<MTLCommandQueue> _queue;
    id<MTLComputePipelineState> _downsampleState;
}

- (id)init;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (int)downsample:(struct __CVBuffer { } *)a0 to:(struct __CVBuffer { } *)a1;

@end
