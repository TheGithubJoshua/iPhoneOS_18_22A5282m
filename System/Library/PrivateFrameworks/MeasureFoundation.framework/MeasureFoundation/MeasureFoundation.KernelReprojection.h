@interface MeasureFoundation.KernelReprojection : MPSKernel {
    void /* unknown type, empty encoding */ preprojectionPipeline;
    void /* unknown type, empty encoding */ reprojectionPipeline;
    void /* unknown type, empty encoding */ uniformsBuffer;
}

- (id)initWithCoder:(id)a0;
- (id)initWithDevice:(id)a0;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (void).cxx_destruct;

@end
