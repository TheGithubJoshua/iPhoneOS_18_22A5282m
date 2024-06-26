@class NSMutableDictionary, CAMThumbnailGenerator, PAImageConversionServiceClient, CAMLocationController, NSObject, CUCaptureController, CAMPersistenceController, CAMPowerController, CAMKeepAliveController, PAVideoConversionServiceClient, CAMViewfinderViewController, NSString, CAMBurstController, CAMProtectionController, CAMRemoteShutterController, CAMTimelapseController, CAMReviewButton, CAMNebulaDaemonProxyManager, CAMMotionController;
@protocol CAMCameraViewControllerPresentationDelegate, CAMCameraConfigurationDelegate, CAMCameraCaptureDelegate, CAMCameraViewControllerCameraSessionDelegate, OS_dispatch_queue, CAMCreativeCameraDelegate;

@interface CAMCameraViewController : UIViewController <CAMCaptureResultDelegate, CAMPersistenceResultDelegate, CAMCVCStillImageResultCoordinatorDelegate, CAMViewfinderReviewButtonSource, NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CUCaptureController *captureController;
@property (readonly, nonatomic) CAMTimelapseController *timelapseController;
@property (readonly, nonatomic) CAMMotionController *motionController;
@property (readonly, nonatomic) CAMLocationController *locationController;
@property (readonly, nonatomic) CAMPowerController *powerController;
@property (readonly, nonatomic) CAMBurstController *burstController;
@property (readonly, nonatomic) CAMKeepAliveController *keepAliveController;
@property (readonly, nonatomic) CAMProtectionController *protectionController;
@property (readonly, nonatomic) CAMRemoteShutterController *remoteShutterController;
@property (readonly, nonatomic) CAMNebulaDaemonProxyManager *nebulaDaemonProxyManager;
@property (readonly, nonatomic) CAMReviewButton *_reviewButton;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_resultProcessingQueue;
@property (readonly, nonatomic) NSMutableDictionary *_resultQueueStillImageResultCoordinators;
@property (readonly, nonatomic) CAMThumbnailGenerator *_resultQueueThumbnailGenerator;
@property (readonly, nonatomic) PAImageConversionServiceClient *_imageConversionClient;
@property (readonly, nonatomic) PAVideoConversionServiceClient *_videoConversionClient;
@property (readonly, nonatomic) CAMViewfinderViewController *viewfinderViewController;
@property (nonatomic, getter=isDisablingMultipleCaptureFeatures) BOOL disablingMultipleCaptureFeatures;
@property (nonatomic, getter=isDisablingAdditionalCaptures) BOOL disablingAdditionalCaptures;
@property (readonly, nonatomic, getter=isPreventingAdditionalCaptures) BOOL preventingAdditionalCaptures;
@property (nonatomic) unsigned long long persistenceBehavior;
@property (nonatomic) BOOL automaticallyAdjustsApplicationIdleTimer;
@property (weak, nonatomic) id<CAMCameraViewControllerPresentationDelegate> presentationDelegate;
@property (weak, nonatomic, getter=creativeCameraDelegate) id<CAMCreativeCameraDelegate> creativeCameraDelegate;
@property (nonatomic, getter=isPerformingTileTransition) BOOL performingTileTransition;
@property (nonatomic) BOOL automaticallyManagesCameraSession;
@property (weak, nonatomic) id<CAMCameraViewControllerCameraSessionDelegate> cameraSessionDelegate;
@property (readonly, nonatomic) long long messagesTransitionState;
@property (readonly, nonatomic) CAMPersistenceController *persistenceController;
@property (weak, nonatomic) id<CAMCameraConfigurationDelegate> configurationDelegate;
@property (readonly, nonatomic) long long captureMode;
@property (readonly, nonatomic) long long captureDevice;
@property (nonatomic) long long flashMode;
@property (nonatomic) long long torchMode;
@property (nonatomic, setter=setHDRMode:) long long hdrMode;
@property (nonatomic) long long timerDuration;
@property (nonatomic) long long livePhotoMode;
@property (nonatomic) long long photoModeAspectRatioCrop;
@property (weak, nonatomic) id<CAMCameraCaptureDelegate> captureDelegate;
@property (readonly, nonatomic, getter=isCapturingPhoto) BOOL capturingPhoto;
@property (readonly, nonatomic, getter=isCapturingLivePhoto) BOOL capturingLivePhoto;
@property (readonly, nonatomic, getter=isRecording) BOOL recording;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isEmulatingImagePicker;

- (BOOL)capturePhoto;
- (void)setMessagesTransitionState:(long long)a0 animated:(BOOL)a1;
- (void)handleVolumeButtonPressed;
- (id)initWithCoder:(id)a0;
- (long long)preferredStatusBarUpdateAnimation;
- (BOOL)startRecording;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)stopRecording;
- (id)reviewButton;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (void)handleVolumeButtonReleased;
- (id)childViewControllerForStatusBarHidden;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })viewSystemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 forCaptureMode:(long long)a1;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (void)persistenceController:(id)a0 didCompleteAllLocalPersistenceForRequest:(id)a1;
- (id)_behaviorDefinedDestinationURLForRequest:(id)a0 withLocalDestinationURL:(id)a1 linkedDestinationURL:(id)a2;
- (unsigned long long)_capturePersistenceBehaviorForViewfinderPersistenceBehavior:(unsigned long long)a0;
- (id)_clientPropertiesForLivePhotoVideoURL:(id)a0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 error:(id)a2;
- (id)_clientPropertiesForPhotoProperties:(id)a0 withFilteredImageURL:(id)a1 conversionOutputInfo:(id)a2 error:(id)a3;
- (id)_clientPropertiesForStillImageWithURL:(id)a0 captureMode:(long long)a1 captureOrientation:(long long)a2 previewSurface:(void *)a3 previewOrientation:(long long)a4 uniqueIdentifier:(id)a5 savedToPhotoLibrary:(BOOL)a6 captureResult:(id)a7;
- (id)_clientPropertiesForVideoURL:(id)a0 renderedURL:(id)a1 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 size:(struct CGSize { double x0; double x1; })a3 creationDate:(id)a4 captureOrientation:(long long)a5 previewOrientation:(long long)a6 adjustments:(id)a7 uniqueIdentifier:(id)a8 savedToPhotoLibrary:(BOOL)a9;
- (void)_commonCAMCameraViewControllerInitializationWithOverrides:(id)a0 usingEmulationMode:(long long)a1 initialLayoutStyle:(long long)a2 privateOptions:(long long)a3;
- (id)_exportPropertiesForClientProperties:(id)a0;
- (void)_handleCTMVideoLocalPersistenceResult:(id)a0 forCaptureResult:(id)a1 fromRequest:(id)a2;
- (void)_handleCTMVideoLocalPersistenceResult:(id)a0 forCaptureResult:(id)a1 fromRequest:(id)a2 size:(struct CGSize { double x0; double x1; })a3 videoURL:(id)a4 renderedToURL:(id)a5 renderedAdjustments:(id)a6;
- (void)_handleLivePhotoVideoLocalPersistenceResult:(id)a0 forCaptureResult:(id)a1 fromRequest:(id)a2;
- (void)_handlePhotoProperties:(id)a0 videoProperties:(id)a1 unfilteredPhotoProperties:(id)a2 unfilteredVideoProperties:(id)a3 assetAdjustments:(id)a4 attemptPairingVideo:(BOOL)a5 error:(id)a6;
- (void)_handleVideoLocalPersistenceResult:(id)a0 forCaptureResult:(id)a1 fromRequest:(id)a2;
- (id)_mediaConversionOptionsForAdjustments:(id)a0 mediaType:(long long)a1 description:(id)a2;
- (void)_notifyCaptureDelegateOfCompletedCaptureOfLivePhoto:(id)a0 withProperties:(id)a1 error:(id)a2;
- (void)_notifyCaptureDelegateOfCompletedCaptureOfPhoto:(id)a0 withProperties:(id)a1 error:(id)a2;
- (void)_notifyCaptureDelegateOfCompletedCaptureOfVideo:(id)a0 withProperties:(id)a1 error:(id)a2;
- (id)_previewImageFromVideoURL:(id)a0;
- (void)_renderLivePhotoWithCoordinator:(id)a0 specifiers:(unsigned long long)a1 photoProperties:(id)a2 videoProperties:(id)a3 adjustments:(id)a4;
- (id)_resultQueueSafeImageFromSurface:(void *)a0 imageOrientation:(long long)a1;
- (void)_resultQueue_forceCompletionIfPossibleForRequest:(id)a0;
- (id)_resultQueue_getOrCreateStillImageResultCoordinatorForRequest:(id)a0 captureTimeExpectedResultSpecifiers:(id)a1 isExpectingPairedVideo:(BOOL)a2 isDisablingMultipleCaptures:(BOOL)a3 isGeneratingFilteredMedia:(BOOL)a4;
- (id)_resultQueue_getStillImageResultCoordinatorForRequest:(id)a0;
- (void)_resultQueue_removeStillImageResultCoordinatorForIdentifier:(id)a0;
- (unsigned long long)_viewfinderPersistenceBehaviorForCapturePersistenceBehavior:(unsigned long long)a0;
- (void)captureController:(id)a0 didGenerateStillImageCaptureResult:(id)a1 fromRequest:(id)a2;
- (void)configureForCaptureMode:(long long)a0 captureDevice:(long long)a1;
- (void)handleReviewButtonReleased:(id)a0;
- (id)initWithOverrides:(id)a0 initialLayoutStyle:(long long)a1 privateOptions:(long long)a2;
- (id)initWithOverrides:(id)a0 usingEmulationMode:(long long)a1;
- (void)persistenceController:(id)a0 didGenerateStillImageLocalPersistenceResult:(id)a1 forCaptureResult:(id)a2 fromRequest:(id)a3;
- (void)persistenceController:(id)a0 didGenerateVideoLocalPersistenceResult:(id)a1 forCaptureResult:(id)a2 fromRequest:(id)a3;
- (void)resumeCameraSession;
- (void)stillImagePersistenceCoordinator:(id)a0 requestsDispatchForResultSpecifiers:(unsigned long long)a1 photoProperties:(id)a2 videoProperties:(id)a3 unfilteredPhotoProperties:(id)a4 unfilteredVideoProperties:(id)a5 assetAdjustments:(id)a6 error:(id)a7;
- (void)stillImagePersistenceCoordinatorDidCompleteAllDispatches:(id)a0;
- (void)suspendCameraSession;

@end
