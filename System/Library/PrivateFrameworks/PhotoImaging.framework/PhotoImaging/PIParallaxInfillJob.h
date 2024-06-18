@class NUStorageImageBuffer, PIParallaxInfillRequest, CIRenderTask, CIImage;

@interface PIParallaxInfillJob : NURenderJob {
    NUStorageImageBuffer *_infilledImageBuffer;
    CIRenderTask *_renderTask;
}

@property (readonly, nonatomic) PIParallaxInfillRequest *infillRequest;
@property (retain, nonatomic) CIImage *matteImage;

- (id)initWithRequest:(id)a0;
- (id)result;
- (void)cleanUp;
- (void).cxx_destruct;
- (BOOL)render:(out id *)a0;
- (BOOL)complete:(out id *)a0;
- (id)initWithParallaxInfillRequest:(id)a0;
- (BOOL)prepare:(out id *)a0;
- (id)scalePolicy;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;
- (BOOL)wantsRenderStage;

@end
