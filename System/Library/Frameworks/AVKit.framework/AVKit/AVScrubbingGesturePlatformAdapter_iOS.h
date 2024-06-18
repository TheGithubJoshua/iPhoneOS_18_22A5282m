@class AVScrubbingPanGestureRecognizer, NSString, AVTouchGestureRecognizer, AVScrubbingGesturePlatformConfiguration, UIView;

@interface AVScrubbingGesturePlatformAdapter_iOS : AVScrubbingGesturePlatformAdapter <UIGestureRecognizerDelegate> {
    UIView *_view;
    AVScrubbingPanGestureRecognizer *_panGestureRecognizer;
    AVTouchGestureRecognizer *_touchGestureRecognizer;
    float _timelineVelocity;
    long long _gestureActiveCount;
    AVScrubbingGesturePlatformConfiguration *_gestureConfiguration;
    float _coordinateVelocityConstant;
    float _coordinateVelocityScale;
    float _deviceCoordinateVelocityScaleFactor;
    BOOL _gestureEnabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_touchGestureAction:(id)a0;
- (id)initWithView:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureActive;
- (void)setGestureEnabled:(BOOL)a0;
- (BOOL)gestureEnabled;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (float)timelineVelocity;
- (void)_panGestureAction:(id)a0;

@end
