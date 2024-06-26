@class NSArray, TUVideoEffect, CALayer, AVCaptureDevice, NSObject;
@protocol TUFeatureFlags, TUVideoDeviceControllerProvider, TUVideoEffectsProvider, OS_dispatch_queue;

@interface TUVideoDeviceController : NSObject <TUVideoDeviceControllerProviderDelegate>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) id<TUVideoDeviceControllerProvider, TUVideoEffectsProvider> provider;
@property (readonly, nonatomic) id<TUFeatureFlags> featureFlags;
@property (nonatomic) BOOL wantsPreview;
@property (nonatomic) BOOL hasRefreshedPreviewAfterError;
@property (retain, nonatomic) AVCaptureDevice *currentInputDevice;
@property (nonatomic) int currentVideoOrientation;
@property (readonly, copy, nonatomic) NSArray *inputDevices;
@property (readonly, nonatomic, getter=isPreviewRunning) BOOL previewRunning;
@property (readonly, nonatomic, getter=isCinematicFramingEnabled) BOOL cinematicFramingEnabled;
@property (readonly, nonatomic) BOOL currentInputSupportsCinematicFraming;
@property (readonly, nonatomic) BOOL supportsCameraBlur;
@property (nonatomic) BOOL cameraBlurEnabled;
@property (nonatomic) int currentBackgroundBlurControlMode;
@property (readonly, nonatomic) BOOL hasAvailableDeskViewCameras;
@property (retain, nonatomic) CALayer *localFrontLayer;
@property (retain, nonatomic) CALayer *localBackLayer;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } localScreenContentsRect;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } localVideoPortraitAspectRatio;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } localScreenPortraitAspectRatio;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } localVideoLandscapeAspectRatio;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } localScreenLandscapeAspectRatio;
@property (retain, nonatomic) TUVideoEffect *currentVideoEffect;
@property (readonly, copy, nonatomic) NSArray *availableVideoEffects;
@property (nonatomic, getter=isFollowSystemCameraEnabled) BOOL followSystemCameraEnabled;
@property (nonatomic, getter=shouldIgnoreStartPreview) BOOL ignoreStartPreview;

+ (void)prewarm;
+ (int)_tuOrientationForVideoOrientation:(int)a0;
+ (int)_videoOrientationForTUOrientation:(int)a0;

- (void)setCinematicFramingEnabled:(BOOL)a0;
- (id)init;
- (void)setCameraZoomFactor:(double)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithSerialQueue:(id)a0;
- (void)startPreview;
- (void)stopPreview;
- (void)captureDevicesChangedForProvider:(id)a0;
- (void)didPausePreviewForProvider:(id)a0;
- (void)didStartPreviewForProvider:(id)a0;
- (void)didStopPreviewForProvider:(id)a0;
- (void)flipCamera;
- (void)getSnapshot;
- (id)initWithProvider:(id)a0 serialQueue:(id)a1 featureFlags:(id)a2;
- (id)landscapeScreenAttributes;
- (void)noteBeginAnimationToPIP;
- (void)noteBeginAnimationToPreview;
- (void)noteEndAnimationToPIP;
- (void)noteEndAnimationToPreview;
- (void)pausePreview;
- (id)portraitScreenAttributes;
- (void)provider:(id)a0 cameraBlurEnabledDidChange:(BOOL)a1;
- (void)provider:(id)a0 cameraCinematicFramingAvailabilityDidChange:(BOOL)a1;
- (void)provider:(id)a0 cameraCinematicFramingEnabledDidChange:(BOOL)a1;
- (void)provider:(id)a0 cameraDidBecomeAvailableForUniqueID:(id)a1;
- (void)provider:(id)a0 cameraZoomAvailabilityDidChange:(BOOL)a1;
- (void)provider:(id)a0 didChangeLocalCameraUID:(id)a1;
- (void)provider:(id)a0 didChangeLocalVideoAttributes:(id)a1;
- (void)provider:(id)a0 didGetSnapshot:(id)a1;
- (void)provider:(id)a0 didReceiveErrorFromCameraUniqueID:(id)a1 error:(id)a2;
- (void)provider:(id)a0 didReceiveFirstPreviewFrameFromCameraUniqueID:(id)a1;
- (void)provider:(id)a0 userPreferredCameraUIDDidChange:(id)a1;
- (void)rampCameraZoomFactor:(double)a0 withRate:(double)a1;
- (void)setCurrentInputDevice:(id)a0 isUserPreferred:(BOOL)a1;
- (void)setLocalPortraitAspectRatio:(struct CGSize { double x0; double x1; })a0 localLandscapeAspectRatio:(struct CGSize { double x0; double x1; })a1;

@end
