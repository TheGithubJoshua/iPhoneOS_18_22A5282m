@class VCPMotionFlowRequest;

@interface VNOpticalFlowGeneratorRevision2 : VNOpticalFlowGenerator {
    VCPMotionFlowRequest *_motionFlowRequest;
    struct BufferSizeFormat { unsigned long long width; unsigned long long height; unsigned int format; } _preferredBufferSizeFormat;
}

+ (id)configurationOptionKeysForDetectorKey;

- (id)processRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 croppedPixelBuffer:(const struct __CVBuffer { } *)a1 options:(id)a2 qosClass:(unsigned int)a3 warningRecorder:(id)a4 error:(id *)a5 progressHandler:(id /* block */)a6;
- (BOOL)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(id)a1 warningRecorder:(id)a2 pixelBuffer:(struct __CVBuffer **)a3 error:(id *)a4 progressHandler:(id /* block */)a5;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;

@end
