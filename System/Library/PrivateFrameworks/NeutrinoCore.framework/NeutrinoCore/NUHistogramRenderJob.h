@class NUPurgeableStoragePool, NUImageHistogram, CIRenderTask;
@protocol NUScalePolicy, NUPurgeableStorage;

@interface NUHistogramRenderJob : NURenderJob {
    NUPurgeableStoragePool *_storagePool;
    id<NUPurgeableStorage> _renderDestination;
    NUImageHistogram *_histogram;
    CIRenderTask *_renderTask;
    id<NUScalePolicy> _scalePolicy;
}

- (id)initWithRequest:(id)a0;
- (id)cacheKey;
- (id)histogramRequest;
- (id)result;
- (void)cleanUp;
- (void).cxx_destruct;
- (BOOL)render:(out id *)a0;
- (BOOL)complete:(out id *)a0;
- (id)scalePolicy;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;
- (id)initWithHistogramRequest:(id)a0;

@end
