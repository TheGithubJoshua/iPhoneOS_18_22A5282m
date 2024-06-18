@class AVAssetWriterInput, PXStoryModel, AVAssetReaderAudioMixOutput, PXMediaProvider, NSObject, PXGEngine, PXStoryExportVideoOptions, AVAssetWriter, PXStoryPacingController, PXStoryRelatedController, NSURL, NSProgress, PXGPixelBufferMetalRenderDestination, NSString, AVAssetWriterInputPixelBufferAdaptor, PXStorySongController, PXStoryExportConfiguration, PXObservable, NSError, AVAssetReader;
@protocol PXStoryStyle, OS_os_log, OS_dispatch_semaphore, OS_dispatch_queue, PXAudioCueSource;

@interface _PXStoryExportOperation : NSOperation <PXGEngineDelegate, PXStoryDiagnosticHUDDataSource, PXStoryPacingCueSource, PXStoryExportRequest_Internal> {
    NSObject<OS_dispatch_queue> *_stateQueue;
    long long _stateQueue_status;
    NSError *_stateQueue_error;
    BOOL _stateQueue_hasAudioForExport;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _stateQueue_exportDuration;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _stateQueue_outroDuration;
    id<PXStoryStyle> _stateQueue_exportedStyle;
    NSObject<OS_os_log> *_signpostLog;
    unsigned long long _signpostID;
    NSObject<OS_os_log> *_frequentSignpostLog;
    unsigned long long _frequentSignpostID;
    BOOL _storyQueue_hasEncounteredDriftError;
}

@property (readonly, nonatomic) PXStoryExportVideoOptions *videoOptions;
@property (readonly, nonatomic) id /* block */ progressHandler;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *layoutCompleteSemaphore;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *completedWritingVideoFrameSemaphore;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue;
@property (readonly, nonatomic) BOOL storyQueue_isWaitingForResources;
@property (retain, nonatomic) PXGEngine *storyQueue_engine;
@property (retain, nonatomic) PXStoryModel *storyQueue_storyModel;
@property (retain, nonatomic) PXMediaProvider *storyQueue_mediaProvider;
@property (retain, nonatomic) PXStoryPacingController *storyQueue_pacingController;
@property (retain, nonatomic) PXStorySongController *storyQueue_songController;
@property (retain, nonatomic) PXGPixelBufferMetalRenderDestination *storyQueue_pixelBufferRenderDestination;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *audioQueue;
@property (retain, nonatomic) AVAssetReader *audioQueue_assetReader;
@property (retain, nonatomic) AVAssetWriterInput *audioQueue_audioWriter;
@property (retain, nonatomic) AVAssetReaderAudioMixOutput *audioQueue_audioMixOutput;
@property (retain) AVAssetWriter *assetWriter;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *videoWriterQueue;
@property (retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *videoWriterQueue_pixelBufferWriter;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } videoQueue_firstWrittenStoryTime;
@property (nonatomic, setter=_setStatus:) long long status;
@property (retain, nonatomic, setter=_setError:) NSError *error;
@property (nonatomic, setter=_setHasAudioForExport:) BOOL hasAudioForExport;
@property (nonatomic, setter=_setExportDuration:) struct { long long x0; int x1; unsigned int x2; long long x3; } exportDuration;
@property (nonatomic, setter=_setOutroDuration:) struct { long long x0; int x1; unsigned int x2; long long x3; } outroDuration;
@property (retain, nonatomic, setter=_setExportedStyle:) id<PXStoryStyle> exportedStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PXObservable *HUDObservable;
@property (readonly, nonatomic) unsigned long long HUDVisibiltyChangeDescriptor;
@property (readonly, nonatomic) unsigned long long HUDContentChangeDescriptor;
@property (readonly, nonatomic) unsigned long long HUDStoryModelChangeDescriptor;
@property (readonly, nonatomic) PXStoryModel *HUDStoryModel;
@property (readonly, nonatomic) BOOL isHUDVisible;
@property (readonly, nonatomic) long long diagnosticHUDType;
@property (readonly, nonatomic) PXStoryRelatedController *HUDRelatedController;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } currentTime;
@property (readonly, nonatomic) id<PXAudioCueSource> audioCueSource;
@property (readonly, nonatomic) long long cuesVersion;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) NSURL *destinationURL;
@property (readonly, nonatomic) PXStoryExportConfiguration *configuration;
@property (readonly, nonatomic) NSProgress *progress;
@property (readonly, nonatomic) BOOL isCancelled;

- (void)main;
- (BOOL)engine:(id)a0 shouldRenderLayout:(id)a1 sprites:(id)a2;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)cancel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)engineSetNeedsUpdate:(id)a0;
- (id)pixelBufferAttributes;
- (void)_addAudioAssetsForVideoHilightsToAudioCompositionBuilder:(id)a0;
- (void)_addAudioInputToAssetWriter:(id)a0;
- (void)_addMetadataToAssetWriter:(id)a0;
- (void)_addSongAssetToAudioCompositionBuilder:(id)a0;
- (void)_addVideoInputToAssetWriter:(id)a0;
- (void)_advanceLayoutToStoryTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)_audibleVideoHilightsInStory;
- (void)_audioWriteQueue_cancelAudioExport;
- (void)_audioWriteQueue_exportAudioWithCompletionHandler:(id /* block */)a0;
- (void)_audioWriteQueue_setupAudioReaderWithAudioExportComposition:(id)a0 audioMix:(id)a1;
- (void)_checkForDriftFromCurrentTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_exportAudioWithCompletionHandler:(id /* block */)a0;
- (void)_exportVideo;
- (void)_finishWriting;
- (void)_handleMediaRequestCompletedForSongAsset:(id)a0 avAsset:(id)a1 audioMix:(id)a2 info:(id)a3 audioCompositionBuilder:(id)a4;
- (void)_initializeProgress;
- (void)_preloadStoryResourcesAndWaitForBuffering;
- (void)_setupAudioExporting;
- (void)_setupStoryLayout;
- (void)_setupStoryModel;
- (void)_setupWriter;
- (void)_signalSemaphoresForFailedExport;
- (void)_storyQueue_advanceLayoutToStoryTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_storyQueue_checkForDriftFromCurrentTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)_storyQueue_createStoryModel;
- (void)_storyQueue_processRenderedLayoutPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)_videoOutputSettings;
- (void)_videoWriterQueue_writeVideoWithPixelBuffer:(struct __CVBuffer { } *)a0 forStoryTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (BOOL)_waitForStoryStateWhileExportingCanContinueByWatchingChanges:(unsigned long long)a0 timeout:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 verificationBlock:(id /* block */)a2;
- (BOOL)_waitWhileExportingCanContinueForSemaphore:(id)a0 timeout:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)_writeVideoWithPixelBuffer:(struct __CVBuffer { } *)a0 forStoryTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)collectAnalyticsForExportBegin;
- (void)collectAnalyticsForExportEnd:(id)a0;
- (id)diagnosticCueStringForSize:(struct CGSize { double x0; double x1; })a0 withIndicatorTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 rangeIndicatorTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2;
- (id)diagnosticHUDContentProviderForType:(long long)a0;
- (id)initWithURL:(id)a0 configuration:(id)a1 qualityOfService:(long long)a2 progressHandler:(id /* block */)a3;
- (BOOL)shouldContinueExporting;

@end