@class AVConferencePreview;

@interface IMAVLocalPreviewClient : NSObject <AVConferencePreviewClientDelegate, IMSystemMonitorListener> {
    BOOL _shouldAlterPreviewState;
    BOOL _wantsPreview;
    BOOL _wantsPausedPreview;
    BOOL _wantsUnpausedPreview;
}

@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } localPortraitAspectRatio;

@property (retain, nonatomic) AVConferencePreview *conferencePreview;
@property (readonly, nonatomic) BOOL isPreviewRunning;
@property (nonatomic) unsigned int cameraType;
@property (nonatomic) unsigned int cameraOrientation;
@property (nonatomic) void *localVideoLayer;
@property (nonatomic) void *localVideoBackLayer;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)systemApplicationDidEnterBackground;
- (void)dealloc;
- (void)systemApplicationWillEnterForeground;
- (void)didStartPreview;
- (void)systemScreenDidPowerDown;
- (void)systemScreenDidPowerUp;
- (void)startPreview;
- (void)stopPreview;
- (void)didPausePreview;
- (void)didChangeLocalScreenAttributes:(id)a0;
- (void)cameraDidBecomeAvailableForUniqueID:(id)a0;
- (void)didChangeLocalVideoAttributes:(id)a0;
- (void)didReceiveErrorFromCameraUniqueID:(id)a0 error:(id)a1;
- (void)didReceiveFirstPreviewFrameFromCameraUniqueID:(id)a0;
- (void)didStopPreview;
- (id)localScreenAttributesForVideoAttributes:(id)a0;
- (void)pausePreview;
- (void)setLocalScreenAttributes:(id)a0;
- (void)_avDaemonConnected;
- (BOOL)_shouldPreviewBeRunning;
- (void)_updatePreviewState;
- (void)avChat:(id)a0 setLocalPortraitRatio:(struct CGSize { double x0; double x1; })a1 localLandscapeRatio:(struct CGSize { double x0; double x1; })a2;
- (void)beginAnimationToPIP;
- (void)beginAnimationToPreview;
- (void)endAnimationToPIP;
- (void)endAnimationToPreview;
- (void)unpausePreview;
- (void)updateLocalScreenAtrributes;

@end
