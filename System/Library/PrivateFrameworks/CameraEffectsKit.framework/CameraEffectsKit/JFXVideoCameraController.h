@class VCPCaptureAnalysisSession, JFXFaceAnchor, AVCaptureDataOutputSynchronizer, PVFrameSet, NSObject, JFXARKitCameraSessionController, AVCaptureMetadataOutput, AVCaptureDeviceInput, AVCaptureAudioDataOutput, NSString, AVCaptureVideoDataOutput, JFXARMetadata, NSMutableSet, AVCaptureSession, NSNumber, NSArray, JFXCaptureCallObserver, AVCaptureDepthDataOutput, AVCapturePhotoOutput;
@protocol OS_dispatch_queue, JFXVideoCameraThermalDelegate;

@interface JFXVideoCameraController : NSObject <AVCaptureDataOutputSynchronizerDelegate, AVCaptureAudioDataOutputSampleBufferDelegate, AVCapturePhotoCaptureDelegate, AVCaptureMetadataOutputObjectsDelegate, JFXARKitFrameDelegate> {
    AVCaptureSession *_captureSession;
    AVCaptureSession *_audioSession;
    AVCaptureDeviceInput *_cameraDeviceInput;
    AVCaptureDeviceInput *_audioInput;
    AVCaptureVideoDataOutput *_videoOutput;
    AVCaptureAudioDataOutput *_audioOutput;
    AVCaptureDepthDataOutput *_depthOutput;
    AVCaptureMetadataOutput *_metadataOutput;
    AVCapturePhotoOutput *_photoOutput;
    AVCaptureDataOutputSynchronizer *_dataOutputSynchronizer;
    NSObject<OS_dispatch_queue> *_captureSessionQueue;
    NSObject<OS_dispatch_queue> *_audioOutQueue;
    NSObject<OS_dispatch_queue> *_dataOutSynchQueue;
    NSObject<OS_dispatch_queue> *_queryDataQueue;
    NSString *_photoOutCodec;
    id /* block */ _capturePhotoCompletionBlock;
    NSMutableSet *_videoDelegates;
    NSObject<OS_dispatch_queue> *_videoDelegateQueue;
    NSMutableSet *_audioDelegates;
    NSObject<OS_dispatch_queue> *_audioDelegateQueue;
    NSMutableSet *_livePlayerSources;
    NSObject<OS_dispatch_queue> *_livePlayerSourceQueue;
    BOOL _observingAudioRouteChanges;
    BOOL _runningARKit_dataOutSynchQueue;
}

@property (nonatomic) long long cameraMode_captureSessionQueue;
@property (nonatomic) long long cameraMode_dataOutSynchQueue;
@property (nonatomic) long long cameraMode_queryDataQueue;
@property (nonatomic) BOOL captureSessionRunning_queryDataQueue;
@property (retain, nonatomic) NSString *cameraType_queryDataQueue;
@property (nonatomic) long long currentCameraPosition_captureSessionQueue;
@property (nonatomic) long long currentCameraPosition_dataOutSynchQueue;
@property (nonatomic) long long currentCameraPosition_queryDataQueue;
@property (nonatomic) long long cameraColorSpace_queryDataQueue;
@property (nonatomic) double cameraVideoZoomFactor_queryDataQueue;
@property (nonatomic) double cameraVideoMaxZoomFactor_captureSessionQueue;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } cameraDeviceIntrinsics_dataOutSynchQueue;
@property (nonatomic) struct CGSize { double width; double height; } cameraFrameResolution_dataOutSynchQueue;
@property (nonatomic) long long cachedMovieRecordingTorchMode;
@property (retain, nonatomic) NSArray *pvDetectedFacesArray_dataOutSynchQueue;
@property (retain, nonatomic) NSArray *metadataFaceObjectsArray_dataOutSynchQueue;
@property (retain, nonatomic) NSArray *metadataTrackedFacesArray_dataOutSynchQueue;
@property (nonatomic) long long captureVideoOrientation_dataOutSynchQueue;
@property (nonatomic) long long captureVideoOrientation_queryDataQueue;
@property (nonatomic) BOOL allowARMetadata_queryDataQueue;
@property (nonatomic) BOOL hasValidFaceData_queryDataQueue;
@property (nonatomic) BOOL sessionRequiresFaceTracking_queryDataQueue;
@property (nonatomic) BOOL isFlashScene_queryDataQueue;
@property (retain, nonatomic) JFXARKitCameraSessionController *arCameraSessionController;
@property (retain, nonatomic) PVFrameSet *capturedPhotoFrameSet_dataOutSynchQueue;
@property (retain, nonatomic) PVFrameSet *currentFrameSet_dataOutSynchQueue;
@property (retain, nonatomic) JFXARMetadata *mostRecentARMetadata_queryDataQueue;
@property (retain, nonatomic) JFXFaceAnchor *stillImageFaceAnchor_queryDataQueue;
@property (nonatomic) BOOL isRecordingMovie_captureSessionQueue;
@property (readonly, nonatomic) VCPCaptureAnalysisSession *vcpAnalyzer;
@property (retain, nonatomic) NSNumber *currentlyTrackedFaceID;
@property (readonly, nonatomic) JFXCaptureCallObserver *callObserver;
@property (readonly, nonatomic) long long cameraMode;
@property (readonly, nonatomic) BOOL cameraSessionRunning;
@property (readonly, nonatomic) long long cameraColorSpace;
@property (readonly, nonatomic) BOOL audioEnabled;
@property (readonly, nonatomic) BOOL depthEnabled;
@property (readonly, nonatomic) BOOL hasFFCZoomEnabled;
@property (readonly, nonatomic) BOOL isFlashScene;
@property (readonly, nonatomic) struct { int x0; int x1; } depthDimensions;
@property (retain, nonatomic) NSNumber *largestDepthDimension;
@property (nonatomic) double zoomFactor;
@property (retain, nonatomic) NSString *ownerName;
@property (retain, nonatomic) id<JFXVideoCameraThermalDelegate> thermalDelegate;
@property (readonly, nonatomic) BOOL ARKitEnabled;
@property (retain, nonatomic) JFXARMetadata *mostRecentARMetadata;
@property (readonly, nonatomic) JFXFaceAnchor *stillImageFaceAnchor;
@property (nonatomic) BOOL allowARMetadata;
@property (nonatomic) BOOL hasValidFaceData;
@property (nonatomic) BOOL sessionRequiresFaceTracking;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)initialize;
+ (BOOL)allowsDepthFromDualBackCamera;
+ (double)cameraZoomFactorForUIZoomFactor:(double)a0 captureDeviceType:(id)a1;

- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)clear;
- (BOOL)faceTrackingEnabled;
- (id)cameraType;
- (void)captureOutput:(id)a0 didFinishProcessingPhoto:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (long long)cameraPosition;
- (void)dealloc;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)dataOutputSynchronizer:(id)a0 didOutputSynchronizedDataCollection:(id)a1;
- (long long)captureVideoOrientation;
- (void)JFX_audioSessionRouteChangeNotification:(id)a0;
- (BOOL)JFX_buildCaptureSessionGraphError:(id *)a0;
- (void)JFX_captureSessionDidStopRunningNotification:(id)a0;
- (void)JFX_captureSessionRuntimeErrorNotification:(id)a0;
- (void)JFX_configureCaptureSessionEnableCameraIntrinsicMatrixDelivery;
- (void)JFX_configureCaptureSessionMetadataForCaptureDevice:(id)a0;
- (void)JFX_configureCaptureSessionMicrophoneForPosition:(long long)a0;
- (void)JFX_configureCaptureSessionPreset;
- (BOOL)JFX_configureCaptureSesstionForPosition:(long long)a0 applyFFCZoom:(BOOL)a1 configureLockedCamera:(id /* block */)a2 error:(id *)a3;
- (void)JFX_configureLockedCaptureDevice:(id)a0;
- (BOOL)JFX_configureLockedCaptureDeviceCustomFormat:(id)a0 applyFFCZoom:(BOOL)a1;
- (void)JFX_configureLockedCaptureDeviceFocus:(id)a0 focusPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)JFX_configureLockedCaptureDeviceFrameRate:(id)a0;
- (id)JFX_getFormatForCaptureDevice:(id)a0 previewDimensions:(struct { int x0; int x1; })a1 colorSpace:(long long)a2;
- (BOOL)JFX_isARKitEnabledCaptureSessionQueue;
- (BOOL)JFX_isUsingInternalMicCaptureSessionQueue;
- (void)JFX_notifyVideoDelegatesOfDroppedFrameWithTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)JFX_observeCaptureSessionNotifications:(id)a0;
- (void)JFX_processMetadataObjectsDataOutSynchQueue:(id)a0;
- (void)JFX_rampToZoom:(double)a0 rate:(double)a1 durationCaptureSessionQueue:(double)a2;
- (void)JFX_resetSessionCaptureSessionQueue;
- (void)JFX_setCaptureDeviceType:(id)a0 captureDevicePositionCaptureSessionQueue:(long long)a1;
- (void)JFX_setupARCameraSessionController;
- (BOOL)JFX_setupCaptureSessionDepthError:(id *)a0;
- (BOOL)JFX_setupCaptureSessionVideoDataOutputError:(id *)a0;
- (void)JFX_thermalPolicyOrLevelChangedNotification:(id)a0;
- (id)JFX_updateCurrentlyTrackedFaceID:(id)a0;
- (void)stopRampToZoom:(id /* block */)a0;
- (void)JFX_captureSessionDidStartRunningNotification:(id)a0;
- (void)JFX_captureSessionInterruptionEndedNotification:(id)a0;
- (void)JFX_captureSessionWasInterruptedNotification:(id)a0;
- (void)JFX_configureCaptureSessionDataOutputSynchronizer;
- (BOOL)JFX_configureCaptureSessionForCaptureDevice:(id)a0 error:(id *)a1;
- (void)JFX_configureCaptureSessionMicrophoneForOmnidirectionalPattern;
- (void)JFX_configureCaptureSessionPhotoOrientationFromInterfaceOrientation:(long long)a0;
- (void)JFX_configureCaptureSessionVideoDataOutput;
- (void)JFX_configureLockedCaptureDevice:(id)a0 minFrameRate:(int)a1 maxFrameRate:(int)a2;
- (void)JFX_configureLockedCaptureDeviceExposure:(id)a0 exposurePoint:(struct CGPoint { double x0; double x1; })a1;
- (void)JFX_configureLockedCaptureDeviceForDepth:(id)a0;
- (id)JFX_createPVFrameSetFromPixelBuffer:(struct __CVBuffer { } *)a0 withMetadata:(id)a1 timeInterval:(double)a2 error:(out id *)a3;
- (id)JFX_currentAVMetadataFaceObject:(id)a0;
- (void)didUpdateFrame:(id)a0;
- (BOOL)JFX_isAudioEnabledCaptureSessionQueue;
- (BOOL)JFX_isDepthEnabledCaptureSessionQueue;
- (void)JFX_notifyVideoDelegatesOfFrameSetDataOutSynchQueue:(id)a0;
- (void)JFX_orientationMonitorDeviceInterfaceOrientationNotification:(id)a0;
- (id)JFX_processPixelBufferForFaceTransform:(struct __CVBuffer { } *)a0 cameraIntrinsics:(struct { void /* unknown type, empty encoding */ x0[3]; })a1 forNormalizedFaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 withRollAngle:(float)a3 withTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a4 andDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a5 detectionOrientation:(long long)a6 interfaceOrientation:(long long)a7 needsMirroring:(BOOL)a8;
- (void)JFX_setIsFlashScene:(BOOL)a0;
- (void)JFX_setZoomFactor_captureSessionQueue:(double)a0;
- (BOOL)JFX_setupCaptureSessionAudioError:(id *)a0;
- (BOOL)JFX_setupCaptureSessionPhotoError:(id *)a0;
- (void)JFX_startARCameraSessionController;
- (void)setCaptureTorchMode:(long long)a0 completion:(id /* block */)a1;
- (void)addAudioRenderDelegate:(id)a0;
- (void)addVideoRenderDelegate:(id)a0;
- (void)capturePhotoWithFlash:(long long)a0 completion:(id /* block */)a1;
- (id)createLivePlayerCameraSource;
- (id)debugFrameRateLabel;
- (void)enableRecordingMovieMode:(BOOL)a0 completion:(id /* block */)a1;
- (void)minFrameRate:(int *)a0 maxFrameRate:(int *)a1;
- (void)notifyExternalARKitFaceTrackedImageData:(id)a0 completion:(id /* block */)a1;
- (void)notifyExternalImageData:(id)a0 completion:(id /* block */)a1;
- (void)preProcessFrameWithPixelBuffer:(struct __CVBuffer { } *)a0 metadata:(id)a1 timestamp:(double)a2 completion:(id /* block */)a3;
- (void)prepareCameraForMode:(long long)a0 position:(long long)a1 completion:(id /* block */)a2;
- (void)rampToZoom:(double)a0 duration:(double)a1;
- (void)rampToZoom:(double)a0 rate:(double)a1;
- (void)removeAudioRenderDelegate:(id)a0 async:(BOOL)a1;
- (void)removeLivePlayerCameraSource:(id)a0;
- (void)removeVideoRenderDelegate:(id)a0 async:(BOOL)a1;
- (void)saveToPhotoLibrary:(id)a0;
- (void)scaleCurrentZoomFactor:(double)a0;
- (void)setCameraZoomFactorForUIZoomFactor:(double)a0;
- (void)setFFCZoom:(BOOL)a0 completion:(id /* block */)a1;
- (void)setFocusAndExposurePoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setMinFrameRate:(int)a0 maxFrameRate:(int)a1;
- (void)startCameraSession:(id /* block */)a0;
- (void)stopCameraSession:(id /* block */)a0;
- (void)supportedFlashModes:(id /* block */)a0;
- (void)switchCamera:(id /* block */)a0;
- (void)switchCameraToPosition:(long long)a0 applyFFCZoom:(BOOL)a1 configureLockedCamera:(id /* block */)a2 completion:(id /* block */)a3;
- (void)switchCameraToPosition:(long long)a0 completion:(id /* block */)a1;
- (void)turnOffMicrophone;
- (void)turnOnMicrophone;
- (id)updateCurrentlyTrackedFaceID:(id)a0;
- (void)videoAndAudioOutputSettings:(id /* block */)a0;

@end