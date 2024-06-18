@class VNObservation, NUClassifyPipelineImageCorrectionRequest;

@interface NUClassifyPipelineImageCorrectionJob : NURenderJob {
    VNObservation *_observation;
    struct { long long width; long long height; } _imageSize;
}

@property (readonly) NUClassifyPipelineImageCorrectionRequest *classifyPipelineImageCorrectionRequest;

- (id)initWithRequest:(id)a0;
- (id)cacheKey;
- (id)result;
- (void)cleanUp;
- (void).cxx_destruct;
- (BOOL)render:(out id *)a0;
- (id)scalePolicy;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;
- (id)detectClassifyPipelineImageCorrectionInBuffer:(struct __CVBuffer { } *)a0 error:(out id *)a1;
- (id)initWithClassifyPipelineImageCorrectionRequest:(id)a0;

@end
