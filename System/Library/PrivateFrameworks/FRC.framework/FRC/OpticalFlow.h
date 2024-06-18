@class Backwarp, Correlation, FeatureExtractor, NSObject, FlowEstimate;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_semaphore, MTLCommandQueue, MTLDeviceSPI;

@interface OpticalFlow : NSObject {
    FeatureExtractor *_featureExtractor;
    FlowEstimate *_flowEstimator[6];
    FeatureExtractor *_baseFeatureExtractor;
    FlowEstimate *_baseFlowEstimator[6];
    Correlation *_correlation;
    Backwarp *_backwarp;
    id<MTLDeviceSPI> _device;
    id<MTLCommandQueue> _commandQueue;
    NSObject<OS_dispatch_semaphore> *_flowEstimateSemaphore;
    NSObject<OS_dispatch_group> *_dispatchGroup;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
    long long _usage;
    long long _baseStageUsage;
    BOOL _baseStageCreated;
    struct { struct { int numLevels; struct __CVBuffer *feature[6]; struct { unsigned long long width; unsigned long long height; unsigned long long channels; } tensorSize[6]; } imageFeature; struct { int numLevels; struct __CVBuffer *feature[6]; struct { unsigned long long width; unsigned long long height; unsigned long long channels; } tensorSize[6]; } baseImageFeature; struct __CVBuffer *subsampledInput; struct __CVBuffer *baseStageInput; } _features[2];
    struct { struct { struct __CVBuffer *correlations[6]; struct __CVBuffer *flows[6]; struct __CVBuffer *upscaledFlows[6]; struct __CVBuffer *warpedImages[6]; unsigned int numLevels; } storage; struct { struct __CVBuffer *correlations[6]; struct __CVBuffer *flows[6]; struct __CVBuffer *upscaledFlows[6]; struct __CVBuffer *warpedImages[6]; unsigned int numLevels; } baseStorage; } _opticalFlowStroages[2];
    BOOL _resourcePreAllocated;
    BOOL _upscaleFinalFlow;
    BOOL _4xUpscale;
}

@property (readonly, nonatomic) unsigned long long flowWidth;
@property (readonly, nonatomic) unsigned long long flowHeight;
@property (readonly, nonatomic) int numLevels;
@property (nonatomic) unsigned long long downsampling;
@property (nonatomic) BOOL skipLastLevel;
@property (nonatomic) BOOL twoStageFlow;
@property (nonatomic) BOOL concurrentDualFlowProcessing;
@property (readonly) struct { struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } x0; struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } x1; struct __CVBuffer *x2; struct __CVBuffer *x3; } *imageFeatures;
@property (readonly) struct { struct { struct __CVBuffer *x0[6]; struct __CVBuffer *x1[6]; struct __CVBuffer *x2[6]; struct __CVBuffer *x3[6]; unsigned int x4; } x0; struct { struct __CVBuffer *x0[6]; struct __CVBuffer *x1[6]; struct __CVBuffer *x2[6]; struct __CVBuffer *x3[6]; unsigned int x4; } x1; } *storages;

- (void)releaseResources;
- (id)initWithMode:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)allocateResources;
- (void)dealloc;
- (void)allocateImageFeature:(struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } *)a0 extractor:(id)a1;
- (void)estimateFlowFromFirstFeatures:(struct { struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } x0; struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } x1; struct __CVBuffer *x2; struct __CVBuffer *x3; } *)a0 secondFeature:(struct { struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } x0; struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } x1; struct __CVBuffer *x2; struct __CVBuffer *x3; } *)a1 storage:(struct { struct { struct __CVBuffer *x0[6]; struct __CVBuffer *x1[6]; struct __CVBuffer *x2[6]; struct __CVBuffer *x3[6]; unsigned int x4; } x0; struct { struct __CVBuffer *x0[6]; struct __CVBuffer *x1[6]; struct __CVBuffer *x2[6]; struct __CVBuffer *x3[6]; unsigned int x4; } x1; } *)a2 outputFlow:(struct __CVBuffer { } *)a3;
- (BOOL)createBaseLayer;
- (BOOL)use4xDownScale:(long long)a0;
- (void)allocateCorreleationBuffer:(struct __CVBuffer **)a0 forLevel:(unsigned int)a1 extractor:(id)a2;
- (void)allocateFeatureBuffers:(struct { struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } x0; struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } x1; struct __CVBuffer *x2; struct __CVBuffer *x3; } *)a0;
- (void)allocateIntermediateStageStorage:(struct { struct __CVBuffer *x0[6]; struct __CVBuffer *x1[6]; struct __CVBuffer *x2[6]; struct __CVBuffer *x3[6]; unsigned int x4; } *)a0 baseStage:(BOOL)a1;
- (void)allocateIntermediateStorage:(struct { struct { struct __CVBuffer *x0[6]; struct __CVBuffer *x1[6]; struct __CVBuffer *x2[6]; struct __CVBuffer *x3[6]; unsigned int x4; } x0; struct { struct __CVBuffer *x0[6]; struct __CVBuffer *x1[6]; struct __CVBuffer *x2[6]; struct __CVBuffer *x3[6]; unsigned int x4; } x1; } *)a0;
- (BOOL)createModules;
- (void)estimateFlowLevel:(unsigned int)a0 withEstimator:(id *)a1 firstFeatures:(struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } *)a2 secondFeatures:(struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } *)a3 correlation:(struct __CVBuffer { } *)a4 upscaledFlow:(struct __CVBuffer { } *)a5 warpedImage:(struct __CVBuffer { } *)a6 prevFlow:(struct __CVBuffer { } *)a7 outputFlow:(struct __CVBuffer { } *)a8 waitForComplete:(BOOL)a9;
- (void)estimateStageFlowFromFirstFeatures:(struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } *)a0 secondFeature:(struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } *)a1 storage:(struct { struct __CVBuffer *x0[6]; struct __CVBuffer *x1[6]; struct __CVBuffer *x2[6]; struct __CVBuffer *x3[6]; unsigned int x4; } *)a2 baseStage:(BOOL)a3 startLevel:(int)a4 lastLevel:(int)a5 startFlow:(struct __CVBuffer { } *)a6 outputFlow:(struct __CVBuffer { } *)a7;
- (void)estimateTwoWayFlowFromFirstFeatures:(struct { struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } x0; struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } x1; struct __CVBuffer *x2; struct __CVBuffer *x3; } *)a0 secondFeature:(struct { struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } x0; struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } x1; struct __CVBuffer *x2; struct __CVBuffer *x3; } *)a1 storage:(struct { struct { struct __CVBuffer *x0[6]; struct __CVBuffer *x1[6]; struct __CVBuffer *x2[6]; struct __CVBuffer *x3[6]; unsigned int x4; } x0; struct { struct __CVBuffer *x0[6]; struct __CVBuffer *x1[6]; struct __CVBuffer *x2[6]; struct __CVBuffer *x3[6]; unsigned int x4; } x1; } *)a2 outputForwardFlow:(struct __CVBuffer { } *)a3 outputBackwardFlow:(struct __CVBuffer { } *)a4;
- (void)extractFeaturesFromFirst:(struct __CVBuffer { } *)a0 second:(struct __CVBuffer { } *)a1 outputFeatures:(struct { struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } x0; struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } x1; struct __CVBuffer *x2; struct __CVBuffer *x3; } *)a2;
- (void)extractFeaturesFromImage:(struct __CVBuffer { } *)a0 outputFeatures:(struct { struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } x0; struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } x1; struct __CVBuffer *x2; struct __CVBuffer *x3; } *)a1;
- (void)opticalFlowFirstFrame:(struct __CVBuffer { } *)a0 secondFrame:(struct __CVBuffer { } *)a1 flow:(struct __CVBuffer { } *)a2;
- (void)opticalFlowFirstFrame:(struct __CVBuffer { } *)a0 secondFrame:(struct __CVBuffer { } *)a1 flowForward:(struct __CVBuffer { } *)a2 flowBackward:(struct __CVBuffer { } *)a3;
- (void)opticalFlowFirstFrame:(struct __CVBuffer { } *)a0 secondFrame:(struct __CVBuffer { } *)a1 flowForward:(struct __CVBuffer { } *)a2 flowBackward:(struct __CVBuffer { } *)a3 reUseFlow:(BOOL)a4;
- (void)predictFowardFlow:(struct __CVBuffer { } *)a0 fromBackwardFlow:(struct __CVBuffer { } *)a1;
- (void)releaseFeatureBuffers:(struct { struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } x0; struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } x1; struct __CVBuffer *x2; struct __CVBuffer *x3; } *)a0;
- (void)releaseImageFeature:(struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } *)a0;
- (void)releaseIntermediateStageStorage:(struct { struct __CVBuffer *x0[6]; struct __CVBuffer *x1[6]; struct __CVBuffer *x2[6]; struct __CVBuffer *x3[6]; unsigned int x4; } *)a0;
- (void)releaseIntermediateStorage:(struct { struct { struct __CVBuffer *x0[6]; struct __CVBuffer *x1[6]; struct __CVBuffer *x2[6]; struct __CVBuffer *x3[6]; unsigned int x4; } x0; struct { struct __CVBuffer *x0[6]; struct __CVBuffer *x1[6]; struct __CVBuffer *x2[6]; struct __CVBuffer *x3[6]; unsigned int x4; } x1; } *)a0;
- (void)releaseUnusedFeatures:(struct { struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } x0; struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } x1; struct __CVBuffer *x2; struct __CVBuffer *x3; } *)a0;
- (void)subsmapleInput:(struct __CVBuffer { } *)a0 to:(struct __CVBuffer { } *)a1 forUsage:(long long)a2;
- (void)switchUsageTo:(long long)a0;
- (void)updateFlowSize;
- (void)upscaleInputFlow:(struct __CVBuffer { } *)a0 outFlow:(struct __CVBuffer { } *)a1;

@end