@class NSHashTable, AVCaptureDeviceInput, CAMCaptureMovieFileOutput, CAMMemoizationCache, NSMutableArray, NSString, AVCaptureMetadataOutput, AVCaptureDevice, NSMutableSet, CAMPanoramaProcessor, AVCaptureSession, NSMutableDictionary, AVCaptureVideoThumbnailOutput, NSObject, AVSpatialOverCaptureVideoPreviewLayer, CAMPanoramaOutput, CIContext, CAMPowerController, NSURL, AVCaptureVideoDataOutput, AVCapturePhotoOutput, AVCaptureVideoPreviewLayer;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface CAMCaptureEngine : NSObject <CAMPanoramaProcessorDelegate, AVCaptureVideoThumbnailContentsDelegate> {
    AVCaptureDevice *_audioCameraDevice;
    AVCaptureDeviceInput *_audioCaptureDeviceInput;
    AVCapturePhotoOutput *_stillImageOutput;
    CAMCaptureMovieFileOutput *_movieFileOutput;
    CAMPanoramaOutput *_panoramaVideoDataOutput;
    AVCaptureMetadataOutput *_metadataOutput;
    AVCaptureVideoDataOutput *_effectsPreviewVideoDataOutput;
    AVCaptureVideoThumbnailOutput *_videoThumbnailOutput;
}

@property (readonly, nonatomic) CAMMemoizationCache *_captureEngineDeviceCache;
@property (readonly, nonatomic) long long _engineOptions;
@property (readonly, nonatomic) AVCaptureSession *_captureSession;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_captureSessionQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_captureResultsQueue;
@property (readonly, nonatomic) AVCaptureVideoPreviewLayer *_videoPreviewLayer;
@property (readonly, nonatomic) AVSpatialOverCaptureVideoPreviewLayer *_overCaptureVideoPreviewLayer;
@property (nonatomic, getter=isInterrupted, setter=_setInterrupted:) BOOL interrupted;
@property (readonly, nonatomic) CAMPowerController *_powerController;
@property (nonatomic, setter=_setPanoramaAssertionIdentifier:) unsigned int _panoramaAssertionIdentifier;
@property (retain, nonatomic) AVCaptureDevice *currentCameraDevice;
@property (retain, nonatomic) AVCapturePhotoOutput *currentStillImageOutput;
@property (nonatomic, getter=areManagedDevicesLockedForConfiguration) BOOL managedDevicesLockedForConfiguration;
@property (readonly, nonatomic) NSMutableDictionary *_resultsQueueRegisteredStillImageRequests;
@property (readonly, nonatomic) NSMutableSet *_resultsQueueRegisteredStillImageRequestsDispatchedToFilteringQueue;
@property (readonly, nonatomic) NSMutableDictionary *_sessionQueueCachedPhotoInitiationSettings;
@property (readonly, nonatomic) NSMutableDictionary *_resultsQueueRequestsBeingRecorded;
@property (retain, nonatomic, setter=_setResultsQueueLastCompletedVideoURL:) NSURL *_resultsQueueLastCompletedVideoURL;
@property (nonatomic, setter=_setResultsQueueLastCompletedVideoZoomFactor:) double _resultsQueueLastCompletedVideoZoomFactor;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_captureServicesQueue;
@property (readonly, nonatomic) NSMutableArray *_servicesQueueCaptureServices;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_metadataObjectsQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_panoramaSampleBufferQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_panoramaSubgraphQueue;
@property (nonatomic, setter=_setPanoramaImageQueue:) struct _CAImageQueue { } *_panoramaImageQueue;
@property (retain, nonatomic, setter=_setPanoramaProcessor:) CAMPanoramaProcessor *_panoramaProcessor;
@property (retain, nonatomic, setter=_setPanoramaFirstImageQueueUpdateSemaphore:) NSObject<OS_dispatch_semaphore> *_panoramaFirstImageQueueUpdateSemaphore;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_panoramaFirstImageQueueUpdateSemaphoreQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_effectsPreviewSurfaceFilteringQueue;
@property (readonly, nonatomic) CIContext *_effectsPreviewSurfaceFilteringContext;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_effectsPreviewSampleBufferQueue;
@property (readonly, nonatomic) NSHashTable *_effectsPreviewSampleBufferDelegates;
@property (readonly, nonatomic) NSHashTable *_videoThumbnailContentsDelegates;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_recoveryMutexQueue;
@property (nonatomic, getter=_isPerformingRecovery, setter=_setPerformingRecovery:) BOOL _performingRecovery;
@property (nonatomic, setter=_setNumberOfRecoveryAttempts:) unsigned long long _numberOfRecoveryAttempts;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_signpostMutexQueue;
@property (readonly, nonatomic) NSMutableSet *_didEmitCaptureIntervalStartedSignpostsForUniqueID;
@property (readonly, nonatomic) AVCaptureVideoPreviewLayer *videoPreviewLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_cacheKeyForDeviceType:(id)a0 position:(long long)a1;
+ (void)preheatCaptureResources;

- (void)_handleApplicationWillEnterForeground:(id)a0;
- (void)_handleApplicationDidEnterBackground:(id)a0;
- (void)_updateVideoThumbnailSubgraph;
- (void)_unlockAllEngineManagedDevices;
- (void)enqueueCommands:(id)a0;
- (id)backSuperWideCameraDevice;
- (void)cacheMomentCaptureSettings:(id)a0 forIdentifier:(id)a1;
- (id)frontCameraDevice;
- (id)initWithPowerController:(id)a0 options:(long long)a1;
- (void)_performSessionNonstartRecoveryIfNeeded;
- (void)registerVideoThumbnailContentsDelegate:(id)a0;
- (id)_coordinationInfoForRequest:(id)a0 photo:(id)a1;
- (void)_scheduleDelayedRecoveryCheckIfNecessary;
- (void)startPanoramaCaptureWithRequest:(id)a0;
- (void)_commitSessionConfigurationIfNecessaryWithLogReason:(id)a0;
- (id)_photoOutputFromSession:(id)a0;
- (void)_handleSessionInterruptionEnded:(id)a0;
- (void)captureOutput:(id)a0 didFinishRecordingMovie:(id)a1;
- (struct { long long x0; long long x1; struct CGSize { double x0; double x1; } x2; long long x3; })_previewFilterSetForRequest:(id)a0 previewSize:(struct CGSize { double x0; double x1; })a1;
- (id)prewarmedVideoDeviceInput:(id)a0 position:(long long)a1 device:(id)a2;
- (void)_subgraphQueueHandlePanoramaStatusNotification:(struct __CFString { } *)a0;
- (void)_cancelDelayedSessionNonstartRecovery;
- (void)changePanoramaEncodingBehaviorIfNeeded:(long long)a0;
- (void)_subgraphQueueCreatePanoramaImageQueueIfNecessary;
- (void)stopRecording;
- (void)captureOutput:(id)a0 willCapturePhotoForResolvedSettings:(id)a1;
- (id)backTelephotoCameraDevice;
- (void)captureOutput:(id)a0 didBeginMovieCaptureForResolvedSettings:(id)a1;
- (void)unregisterEffectsPreviewSampleBufferDelegate:(id)a0;
- (id)frontSuperWideCameraDevice;
- (BOOL)_updatePanoramaSubgraphForEnteringBackground:(BOOL)a0;
- (void)_subgraphQueueCreatePanoramaProcessorIfNecessaryWithEncodingBehavior:(long long)a0;
- (void)registerVideoCaptureRequest:(id)a0;
- (void)_performSessionRuntimeRecovery:(id)a0;
- (void)clearCachedMomentCaptureSettingsForIdentifier:(id)a0;
- (void)_resetPerformingRecoveryState;
- (void)currentInflightCapturesStringWithCompletionHandler:(id /* block */)a0;
- (void)enqueueCommand:(id)a0;
- (void)captureOutput:(id)a0 didCapturePhotoForResolvedSettings:(id)a1;
- (void)stopPanoramaCaptureInterrupted:(BOOL)a0;
- (BOOL)_isSessionModificationRequiredByCommand:(id)a0 logReason:(out id *)a1 minimumExecutionTime:(out double *)a2;
- (id)overCaptureVideoPreviewLayer;
- (void)_captureOutput:(id)a0 didFinishRecordingToOutputFileAtURL:(id)a1 fromConnections:(id)a2 forVideoCaptureRequest:(id)a3 videoZoomFactor:(double)a4 error:(id)a5;
- (void)unregisterVideoThumbnailContentsDelegate:(id)a0;
- (id)movieFileOutput;
- (id)backWideDualCameraDevice;
- (void)videoThumbnailOutputWillEndRenderingThumbnails:(id)a0;
- (void)_updateContext:(id)a0;
- (void)changeToPanoramaDirection:(long long)a0;
- (id)_accumulatedUserInfoFromCommand:(id)a0;
- (void)captureOutput:(id)a0 didFinishProcessingPhoto:(id)a1 error:(id)a2;
- (id)audioCaptureDeviceInput;
- (void)_handleSessionDidStopRunning:(id)a0;
- (void)captureOutput:(id)a0 willBeginCaptureForResolvedSettings:(id)a1;
- (void)captureOutput:(id)a0 didOutputMetadataObjects:(id)a1 forMetadataObjectTypes:(id)a2 fromConnection:(id)a3;
- (void)_resultsQueue_logReceivedCallbacksForID:(long long)a0 withIntroString:(id)a1;
- (void)startWithRetryCount:(unsigned long long)a0 retryInterval:(double)a1 logReason:(id)a2 completion:(id /* block */)a3;
- (long long)_notificationForError:(struct __CFString { } *)a0;
- (void)_checkCallbacksForUniqueID:(long long)a0 afterDelay:(double)a1 startTime:(double)a2;
- (void)captureOutput:(id)a0 didDropSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)registerCaptureService:(id)a0;
- (void)_notifyServicesOfPanoramaConfigurationChangeWithImageQueue:(struct _CAImageQueue { } *)a0 direction:(long long)a1;
- (void)_didFinishStillImageCaptureForUniqueID:(long long)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)_coordinationInfoForCTMVideoRequest:(id)a0 videoOutputURL:(id)a1 resolvedMomentCaptureMovieSettings:(id)a2;
- (void)registerEffectsPreviewSampleBufferDelegate:(id)a0;
- (id)stillImageOutput;
- (void)_unlockManagedCaptureDevice:(id)a0;
- (void)stopWithCompletion:(id /* block */)a0;
- (id)metadataOutput;
- (struct { long long x0; long long x1; struct CGSize { double x0; double x1; } x2; long long x3; })_previewFilterSetForRequest:(id)a0 photo:(id)a1;
- (id)_validateVideoAtURL:(id)a0 forCaptureRequest:(id)a1 captureID:(long long)a2 captureError:(id)a3 isVideoComplement:(BOOL)a4 stillImageDisplayTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a5 reportedDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a6 outActualDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a7 outVideoRecordingStoppedReason:(long long *)a8;
- (double)_delayForRecoveryAttempt:(unsigned long long)a0;
- (void)_sessionQueue_startWithRetryCount:(unsigned long long)a0 retryInterval:(double)a1 logReason:(id)a2 completion:(id /* block */)a3;
- (struct __CVBuffer { } *)_createOutputPixelBufferWithSize:(struct CGSize { double x0; double x1; })a0 matchingInputPixelBuffer:(struct __CVBuffer { } *)a1;
- (BOOL)_shouldStartSessionOnConfigurationChanges;
- (BOOL)_lockAllEngineManagedDevices;
- (id)frontPearlCameraDevice;
- (void)_handleCaptureOutputDidFinishCapturingPhoto:(id)a0 deferredPhotoProxy:(id)a1 error:(id)a2;
- (struct __CVBuffer { } *)_newFilteredPixelBufferFromPixelBuffer:(struct __CVBuffer { } *)a0 metadata:(id)a1 filters:(id)a2;
- (id)backTripleCameraDevice;
- (void)_scheduleDelayedSessionNonstartRecovery;
- (void)captureOutput:(id)a0 didFinishCaptureForResolvedSettings:(id)a1 error:(id)a2;
- (id)prewarmedAudioDeviceInput:(id)a0 device:(id)a1;
- (void)cancelAutoResumeAfterDate:(id)a0;
- (void)captureOutput:(id)a0 readyForResponsiveRequestAfterResolvedSettings:(id)a1;
- (void)registerStillImageCaptureRequest:(id)a0 withSettings:(id)a1;
- (void)_sessionQueuePanoramaTeardown;
- (id)backDualCameraDevice;
- (void)_resultsQueue_performPostprocessingForPreviewBuffer:(struct __CVBuffer { } *)a0 metadata:(id)a1 filters:(struct { long long x0; long long x1; struct CGSize { double x0; double x1; } x2; long long x3; })a2 stillImageCaptureRequestKey:(id)a3 completionHandler:(id /* block */)a4;
- (void)dealloc;
- (void)captureOutput:(id)a0 didFinishProcessingLivePhotoToMovieFileAtURL:(id)a1 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 photoDisplayTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 resolvedSettings:(id)a4 error:(id)a5;
- (void)_handleFailedSessionRecoveryAttemptAfterDelay:(BOOL)a0;
- (void)captureOutput:(id)a0 didFinishWritingMovie:(id)a1 error:(id)a2;
- (void)_recoverFromSessionRuntimeError;
- (void)captureOutput:(id)a0 didStartRecordingToOutputFileAtURL:(id)a1 fromConnections:(id)a2;
- (void)_updateEffectsSubgraph;
- (void)panoramaProcessor:(id)a0 didProcessSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 withStatus:(int)a2 forRequest:(id)a3;
- (void)registerVideoEndZoomFactor:(double)a0;
- (id)_captureEngineDeviceForDeviceType:(id)a0 position:(long long)a1;
- (void)_sessionQueuePanoramaSetup;
- (void)videoThumbnailOutput:(id)a0 willBeginRenderingThumbnailsWithContents:(id)a1;
- (id)effectsPreviewVideoDataOutput;
- (void)_subgraphQueueHandlePanoramaWarningNotification:(struct __CFString { } *)a0;
- (void)_executeCommand:(id)a0 withContext:(id)a1;
- (id)audioCaptureDevice;
- (void)_subgraphQueueHandlePanoramaErrorNotification:(struct __CFString { } *)a0;
- (void)_beginSessionConfigurationIfRequiredByCommand:(id)a0 withContext:(id)a1 logReason:(out id *)a2 minimumExecutionTime:(out double *)a3;
- (void)_updateCurrentlyConfiguredObjects;
- (void)captureOutput:(id)a0 didFinishRecordingLivePhotoMovieForEventualFileAtURL:(id)a1 resolvedSettings:(id)a2;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)_handleSessionRuntimeError:(id)a0;
- (id)_expectedResultSpecifiersForResolvedPhotoSettings:(id)a0;
- (id)_expectedResultSpecifiersForResolvedMomentCaptureMovieSettings:(id)a0;
- (void)captureOutput:(id)a0 didFinishMovieCaptureForResolvedSettings:(id)a1 error:(id)a2;
- (BOOL)_lockManagedCapturedDevice:(id)a0;
- (id)panoramaVideoDataOutput;
- (void)captureOutput:(id)a0 willBeginCaptureBeforeResolvingSettingsForUniqueID:(long long)a1;
- (void)captureOutput:(id)a0 didFinishRecordingToOutputFileAtURL:(id)a1 fromConnections:(id)a2 error:(id)a3;
- (id)_videoDeviceInputFromSession:(id)a0;
- (void)captureOutput:(id)a0 didFinishCapturingDeferredPhotoProxy:(id)a1 error:(id)a2;
- (void)_panoramaSampleBufferQueue_stopPanoramaCaptureIfNecessaryInterrupted:(BOOL)a0;
- (id)_TTRKeywordIDsFromCaptureRequest:(id)a0;
- (id)backCameraDevice;
- (void)_enumerateCaptureServicesUsingBlock:(id /* block */)a0;
- (id)videoThumbnailOutput;
- (void)_handleSessionInterruption:(id)a0;
- (id)_previewFiltersForFilterSet:(struct { long long x0; long long x1; struct CGSize { double x0; double x1; } x2; long long x3; })a0;
- (void)unregisterCaptureService:(id)a0;
- (id)cachedMomentCaptureSettingsForIdentifier:(id)a0;
- (void)_validateSessionRecovery;
- (id)_coordinationInfoForRequest:(id)a0 resolvedSettings:(id)a1 videoComplementURL:(id)a2 isFiltered:(BOOL)a3;
- (void)_handleSessionDidStartRunning:(id)a0;
- (id)prewarmedCaptureSession;
- (void)_enumerateCaptureServicesUsingBlock:(id /* block */)a0 completion:(id /* block */)a1;

@end