@class NSTimer, NSString;

@interface CAMIdleController : NSObject <CAMStillImageCaptureRequestDelegate, CAMVideoCaptureRequestDelegate, CAMPanoramaCaptureRequestDelegate, CAMStillImageCapturingVideoDelegate>

@property (nonatomic, getter=isUpdatingIdleTimer, setter=_setUpdatingIdleTimer:) BOOL updatingIdleTimer;
@property (readonly, nonatomic, getter=_isIdleTimerIndefinitelyDisabled) BOOL idleTimerIndefinitelyDisabled;
@property (retain, nonatomic, getter=_enableIdleTimer, setter=_setEnableIdleTimer:) NSTimer *enableIdleTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)videoRequestDidStartCapturing:(id)a0;
- (void)stillImageRequestDidStopCapturingStillImage:(id)a0;
- (void)stillImageRequestsDidStopCapturingCTMVideo;
- (void)panoramaRequestDidStopCapturing:(id)a0 interrupted:(BOOL)a1;
- (void)videoRequestDidStopCapturing:(id)a0;
- (void)panoramaRequestDidStartCapturing:(id)a0;
- (void)stillImageRequestWillStartCapturingCTMVideoWithCaptureInFlight:(BOOL)a0;
- (id)init;
- (void)startUpdatingIdleTimer;
- (void)_teardownEnableIdleTimer;
- (void).cxx_destruct;
- (void)stopUpdatingIdleTimer;
- (void)_delayIdleTimerByTimeIntervalUnlessIndefinitelyDisabled:(double)a0;
- (void)timelapseRequestDidStartCapturing;
- (void)_indefinitelyDisableApplicationIdleTimer;
- (void)_immediatelyEnableApplicationIdleTimer;
- (void)dealloc;
- (void)_delayIdleTimerByTimeInterval:(double)a0;
- (void)timelapseRequestDidStopCapturing;
- (void)timelapseRequestDidResumeCapturing;

@end
