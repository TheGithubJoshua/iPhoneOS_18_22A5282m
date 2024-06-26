@class BWFigVideoCaptureDevice, BWStats, CAContext, NSObject, NSMutableArray;
@protocol OS_os_transaction, BWImageQueueSinkNodePreviewTapDelegate, OS_dispatch_queue;

@interface BWImageQueueSinkNode : BWSinkNode {
    unsigned int _imageQueueCapacity;
    unsigned int _imageQueueWidth;
    unsigned int _imageQueueHeight;
    unsigned int _imageQueueRequiredFreeSlots;
    struct _CAImageQueue { } *_imageQueue;
    unsigned int _imageQueueSlot;
    unsigned long long _imageQueueCurrentFreeSlots;
    int _syncStrategy;
    BOOL _resetPreviewSynchronizerOnNextFrame;
    struct OpaqueBWPreviewSynchronizer { } *_previewSynchronizer;
    double _lastDisplaySamplingTime;
    double _lastDisplayVSyncInterval;
    double _lastHarmonicFractionalVSyncInterval;
    double _lastFramePTS;
    double _lastDisplayTime;
    double _lateFrameIntervalStartPTS;
    double _previousFrameDuration;
    unsigned long long _framesSinceLastHarmonicCompensation;
    BOOL _CAVSyncIntervalWorkaroundEnabled;
    BOOL _highLatencyJitterHandlingEnabled;
    BOOL _fasterLatencyRecoveryEnabled;
    BOOL _driftCompensationTimestampFilteringEnabled;
    unsigned long long _numFramesReceived;
    unsigned long long _numFramesReceivedBeforeFirstDisplayTimeout;
    NSObject<OS_os_transaction> *_holdingBuffersForClientAssertion;
    NSMutableArray *_sharedSurfaces;
    unsigned long long *_sharedBufferIDs;
    unsigned long long _sharedSurfaceCount;
    struct OpaqueFigSimpleMutex { } *_surfaceRegistrationMutex;
    NSMutableArray *_bufferIDsInQueue;
    struct _EnqueuedBufferContext **_enqueuedBufferContexts;
    unsigned long long _enqueuedBufferContextCount;
    NSMutableArray *_previewPTSHistory;
    struct OpaqueFigSimpleMutex { } *_previewPTSHistoryMutex;
    NSObject<OS_dispatch_queue> *_previewPTSHistoryQueue;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _firstFramePTS;
    long long _firstFrameHostTime;
    BOOL _didCallFirstFrameAtHostTimeCallback;
    BOOL _didCallFirstFrameCallback;
    long long _firstOverCaptureFrameHostTime;
    BOOL _didLogFirstOverCaptureFrame;
    BOOL _fenceSupportEnabled;
    BOOL _fencePortGenerationIDWillChange;
    int _framesSinceLastFenceIDWillChange;
    int _framesSinceLastFence;
    long long _lastFencedGenerationID;
    int _savedSyncStrategy;
    CAContext *_imageQueueContext;
    int _maxLossyCompressionLevel;
    struct FigCaptureVideoTransform { BOOL mirrored; int rotationDegrees; struct { int width; int height; } dimensions; } _transform;
    BWStats *_frameDisplayLatencyStats;
    BOOL _videoHDRImageStatisticsEnabled;
}

@property (readonly, nonatomic) struct _CAImageQueue { } *imageQueue;
@property (readonly, nonatomic) unsigned int imageQueueSlot;
@property (nonatomic) id<BWImageQueueSinkNodePreviewTapDelegate> previewTapDelegate;
@property (retain, nonatomic) BWFigVideoCaptureDevice *captureDevice;

+ (void)initialize;

- (void)setTransform:(struct FigCaptureVideoTransform { BOOL x0; int x1; struct { int x0; int x1; } x2; })a0;
- (int)maxLossyCompressionLevel;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)setMaxLossyCompressionLevel:(int)a0;
- (BOOL)videoHDRImageStatisticsEnabled;
- (void)registerSurfacesFromSourcePool:(id)a0;
- (void)setSyncStrategy:(int)a0;
- (struct FigCaptureVideoTransform { BOOL x0; int x1; struct { int x0; int x1; } x2; })transform;
- (void)setVideoHDRImageStatisticsEnabled:(BOOL)a0;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (BOOL)hasNonLiveConfigurationChanges;
- (id)nodeSubType;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })previewPTSDisplayedAtHostTime:(unsigned long long)a0 allowingExtrapolation:(BOOL)a1;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)initWithHFRSupport:(BOOL)a0 ispJitterCompensationEnabled:(BOOL)a1 clientAuditToken:(struct { unsigned int x0[8]; })a2 sinkID:(id)a3;
- (void)makeCurrentConfigurationLive;
- (void)fencePortGenerationIDWillChange;
- (void)setFenceSupportEnabled:(BOOL)a0;
- (int)syncStrategy;
- (void)inputConnectionWillBeEnabled;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })previewPTSAtHostTime:(unsigned long long)a0;
- (void)dealloc;
- (BOOL)fenceSupportEnabled;

@end
