@class NSDictionary, NSArray, FigMetalContext, MakeBlurMap, SDOFResources, SDOFRenderingDiagnostics, FigSDOFRenderingTuningParameters;

@interface FigSDOFBlurMapRendering : NSObject {
    unsigned long long _inputImageWidth;
    unsigned long long _inputImageHeight;
    unsigned long long _inputShiftMapWidth;
    unsigned long long _inputShiftMapHeight;
    unsigned long long _upsampledShiftMapWidth;
    unsigned long long _upsampledShiftMapHeight;
    MakeBlurMap *_makeBlurMap;
    SDOFResources *_resources;
    SDOFRenderingDiagnostics *_diagnostics;
    FigSDOFRenderingTuningParameters *_tuningParameters;
    NSDictionary *_options;
    BOOL _isShaderHarvesting;
}

@property (readonly, nonatomic) FigMetalContext *metalContext;
@property (retain, nonatomic) NSArray *faceLandmarksArray;

- (int)prewarmWithTuningParameters:(id)a0;
- (void)releaseResources;
- (void)isShaderHarvesting:(id)a0;
- (id)initWithCommandQueue:(id)a0;
- (id)init;
- (int)setOptionsInternal:(id)a0 isPrewarm:(BOOL)a1;
- (int)setOptions:(id)a0;
- (void).cxx_destruct;
- (BOOL)sanityChecksBlurMapWithImage:(struct __CVBuffer { } *)a0 shiftMap:(struct __CVBuffer { } *)a1 segmentationMask:(struct __CVBuffer { } *)a2 semanticSegmentationHairMask:(struct __CVBuffer { } *)a3 semanticSegmentationGlassesMask:(struct __CVBuffer { } *)a4 resultFaceAdjBlurMap:(struct __CVBuffer { } *)a5;
- (BOOL)allocateResourcesForInputImageWidth:(unsigned long long)a0 inputImageHeight:(unsigned long long)a1 shiftMapWidth:(unsigned long long)a2 shiftMapHeight:(unsigned long long)a3;
- (BOOL)allocateResources;
- (BOOL)detectFacesOnTele:(struct __CVBuffer { } *)a0 meta:(id)a1 to:(struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; } *)a2 maxFacesCount:(int)a3 facesCount:(int *)a4;
- (BOOL)allocateResourcesForInputImageWidth:(unsigned long long)a0 inputImageHeight:(unsigned long long)a1 shiftMapWidth:(unsigned long long)a2 shiftMapHeight:(unsigned long long)a3 enableForegroundBlur:(BOOL)a4;
- (void)dealloc;
- (int)computeBlurMapWithImage:(struct opaqueCMSampleBuffer { } *)a0 shiftMap:(struct __CVBuffer { } *)a1 personSegmentationMask:(struct __CVBuffer { } *)a2 hairSemanticSegmentationMask:(struct __CVBuffer { } *)a3 glassesSemanticSegmentationMask:(struct __CVBuffer { } *)a4 resultFaceAdjustedBlurMap:(struct __CVBuffer { } *)a5;

@end
