@class NSDictionary, NSArray, FigMetalContext, SDOFRenderingDiagnostics, SDOFResources, ApplyBlurmap, FigSDOFRenderingTuningParameters;

@interface FigSDOFEffectRendering : NSObject {
    unsigned long long _inputImageWidth;
    unsigned long long _inputImageHeight;
    unsigned long long _inputShiftMapWidth;
    unsigned long long _inputShiftMapHeight;
    unsigned long long _upsampledShiftMapWidth;
    unsigned long long _upsampledShiftMapHeight;
    SDOFResources *_resources;
    ApplyBlurmap *_applyBlurmap;
    SDOFRenderingDiagnostics *_diagnostics;
    FigSDOFRenderingTuningParameters *_tuningParameters;
    NSDictionary *_options;
}

@property (readonly, nonatomic) FigMetalContext *metalContext;
@property (retain, nonatomic) NSArray *faceLandmarksArray;

- (int)prewarmWithTuningParameters:(id)a0;
- (void)releaseResources;
- (id)initWithCommandQueue:(id)a0;
- (id)init;
- (int)setOptionsInternal:(id)a0 isPrewarm:(BOOL)a1;
- (int)runSamplingWithImage:(struct opaqueCMSampleBuffer { } *)a0 inputPixelBuffer:(struct __CVBuffer { } *)a1 inputFaceAdjustedBlurMap:(struct __CVBuffer { } *)a2 inputAlphaMask:(struct __CVBuffer { } *)a3 inputGainMap:(struct __CVBuffer { } *)a4 resultImage:(struct __CVBuffer { } *)a5;
- (int)setOptions:(id)a0;
- (BOOL)sanityChecksSamplingWithImage:(struct __CVBuffer { } *)a0 inputFaceAdjustedBlurMap:(struct __CVBuffer { } *)a1 inputAlphaMask:(struct __CVBuffer { } *)a2 inputGainMap:(struct __CVBuffer { } *)a3 resultImage:(struct __CVBuffer { } *)a4;
- (void).cxx_destruct;
- (BOOL)allocateResourcesForInputImageWidth:(unsigned long long)a0 inputImageHeight:(unsigned long long)a1 shiftMapWidth:(unsigned long long)a2 shiftMapHeight:(unsigned long long)a3;
- (BOOL)allocateResources;
- (BOOL)allocateResourcesForInputImageWidth:(unsigned long long)a0 inputImageHeight:(unsigned long long)a1 shiftMapWidth:(unsigned long long)a2 shiftMapHeight:(unsigned long long)a3 enableForegroundBlur:(BOOL)a4;
- (void)dealloc;

@end
