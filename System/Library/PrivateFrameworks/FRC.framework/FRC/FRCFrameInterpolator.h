@class FRCScaler, NSDate, LiteSynthesis, OpticalFlow, FRCImageProcessor, NSDictionary, NSObject, Synthesis, FRCFrameDropDetector, OpticalFlowAnalyzer;
@protocol OS_dispatch_group, OS_os_log, FRCSynthesis, OS_dispatch_semaphore, OS_dispatch_queue;

@interface FRCFrameInterpolator : NSObject {
    OpticalFlow *_opticalFlow;
    Synthesis *_deepSynthesis;
    LiteSynthesis *_liteSynthesis;
    id<FRCSynthesis> _synthesis;
    FRCScaler *_scaler;
    OpticalFlowAnalyzer *_flowAnalyzer;
    struct __CVBuffer { } *_flowForward;
    struct __CVBuffer { } *_flowBackward;
    struct __CVBuffer { } *_flowForwardGating;
    struct __CVBuffer { } *_flowBackwardGating;
    struct __CVBuffer { } *_prevFlowBackwardGating;
    struct __CVPixelBufferPool { } *_outputPixelBufferPool;
    BOOL _enableCrossFlowAnalysis;
    unsigned long long _width;
    unsigned long long _height;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastFramePts;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastFrameDuration;
    unsigned long long _lastFramesToInterpolate;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _ptsForLiteDebugging;
    NSObject<OS_dispatch_semaphore> *_completion_semaphore;
    FRCFrameDropDetector *_frameDropDetector;
    struct __CFDictionary { } *_anchorFrameCMAttachment;
    long long _inputRotation;
    BOOL _concurrentOpticalFlow;
    NSObject<OS_dispatch_semaphore> *_postProcessingComletionSemaphore;
    NSObject<OS_dispatch_semaphore> *_initializationSemaphore;
    NSObject<OS_os_log> *_logger;
    NSObject<OS_dispatch_group> *_dispatchGroup;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
    NSDate *_startTime;
    unsigned long long _totalFramesInterpolated;
    unsigned long long _totalFramePairsProcessed;
    BOOL _onDemandSynthesisBufferAllocation;
    long long _sessionResult;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _maxTimeGap;
    BOOL _fullRange;
    BOOL _isYUV;
    unsigned long long _bitDepth;
    unsigned int _RGBAFormat;
    FRCImageProcessor *_imageProcessor;
    BOOL _removeCMAttachment;
    BOOL _gatingEnabled;
}

@property (nonatomic) BOOL tilingEnabled;
@property (nonatomic) BOOL secondLevelFlow;
@property (nonatomic) unsigned long long synthesisMode;
@property (nonatomic) BOOL inputScaling;
@property (nonatomic) unsigned long long opticalFlowDownsampling;
@property (nonatomic) BOOL singleFlow;
@property (nonatomic) BOOL twoStageFlow;
@property (nonatomic) BOOL forceFrameOutput;
@property (nonatomic) BOOL forceSingleStageFlow;
@property (nonatomic) BOOL synthesisTemporalSmoothing;
@property (nonatomic) BOOL linearSplatting;
@property (nonatomic) BOOL lowMemoryMode;
@property (nonatomic) long long usage;
@property (nonatomic) long long qualityMode;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } preferredTransform;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) BOOL gated;
@property (readonly, nonatomic) float sessionConfidence;
@property (readonly, nonatomic) NSDictionary *sessionStatistics;
@property (nonatomic) unsigned long long useCase;
@property (nonatomic) long long gatingLevel;

+ (long long)getUsageFromSizeWidth:(unsigned long long)a0 height:(unsigned long long)a1;
+ (void)getInputFrameSizeForUsage:(long long)a0 width:(unsigned long long *)a1 height:(unsigned long long *)a2;

- (long long)endSession;
- (id)initWithMode:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)errorWithErrorCode:(long long)a0;
- (id)interpolateBetweenFirstFrame:(id)a0 secondFrame:(id)a1 numberOfFrames:(unsigned long long)a2 withError:(id *)a3;
- (id)interpolateBetweenFirstFrame:(id)a0 secondFrame:(id)a1 timeScales:(id)a2 withError:(id *)a3;
- (id)selectFrameInsertionPointsFromTimingList:(id)a0 metadataList:(id)a1 withError:(id *)a2;
- (long long)startSessionWithUsage:(long long)a0;
- (void)configureGating;
- (id)interpolateRecursiveFirstFrame:(id)a0 secondFrame:(id)a1 timeScale:(id)a2 withError:(id *)a3;
- (void)restoreCMAttachmentToFirstFrame:(id)a0 secondFrame:(id)a1 interpolatedFrames:(id)a2;
- (id)selectFrameInsertionPointsFromTimingList:(id)a0 preModifiedTimingList:(id)a1;
- (long long)adjustUsage:(long long)a0;
- (void)allocateInternalBuffers;
- (int)closestNumIdxInArray:(id)a0 target:(double)a1;
- (void)configureSynthesis;
- (void)constructSessionStatisticsWithSessionDuration:(double)a0;
- (id)createOutputFramesWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 pixelFormat:(unsigned int)a2 numberOframes:(unsigned long long)a3;
- (long long)getFrameRotation:(long long)a0;
- (void)getPixelAttributesForBuffer:(struct __CVBuffer { } *)a0;
- (void)initSubModules;
- (id)interpolateBetweenFirstFrame:(id)a0 secondFrame:(id)a1 timeScales:(id)a2 outputSize:(struct CGSize { double x0; double x1; })a3 outputPixelFormat:(unsigned int)a4 withError:(id *)a5;
- (id)normalizeTimingFromTimeScales:(id)a0 newBeginIdx:(int)a1 newEndIdx:(int)a2;
- (void)preserveCMAttachmentFirstFrame:(id)a0 secondFrame:(id)a1;
- (void)releaseInternalBuffers;
- (void)setCrossFlowAnalysisFromDefaults;
- (void)setFlowAnalysisFromDefaults;
- (void)setLiteSynthesisDebugFromDefaults;
- (void)setNormalizationModeFromDefaults;
- (void)setPropertiesFromDefaults;
- (BOOL)shallDumpDebugInfoForCurrPts:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 prevPts:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (BOOL)shallReusePreviousFlowPts0:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 Pts1:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (struct __CVBuffer { } *)synthesisFrameForTimeScale:(float)a0 outputSize:(struct CGSize { double x0; double x1; })a1 outputPixelFormat:(unsigned int)a2 scalerEnabled:(BOOL)a3 frameIndex:(unsigned long long)a4 lastFrame:(BOOL)a5;
- (id)synthesizeInterpolatedFrames:(id)a0 second:(id)a1 normalizedFirst:(struct __CVBuffer { } *)a2 normalizedSecond:(struct __CVBuffer { } *)a3 timeScales:(id)a4 outputSize:(struct CGSize { double x0; double x1; })a5 outputPixelFormat:(unsigned int)a6 scalerEnabled:(BOOL)a7;
- (void)updateBackwardFlow;
- (void)updateLastFramePts:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 toInterpolate:(unsigned long long)a2;

@end