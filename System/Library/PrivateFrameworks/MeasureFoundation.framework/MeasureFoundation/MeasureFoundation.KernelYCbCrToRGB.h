@interface MeasureFoundation.KernelYCbCrToRGB : MPSKernel {
    void /* unknown type, empty encoding */ convertPipeline;
    void /* unknown type, empty encoding */ convertAndRotatePipeline;
    void /* unknown type, empty encoding */ roiBuffer;
    void /* unknown type, empty encoding */ transformBuffer;
}

- (id)initWithCoder:(id)a0;
- (id)initWithDevice:(id)a0;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (void).cxx_destruct;

@end
