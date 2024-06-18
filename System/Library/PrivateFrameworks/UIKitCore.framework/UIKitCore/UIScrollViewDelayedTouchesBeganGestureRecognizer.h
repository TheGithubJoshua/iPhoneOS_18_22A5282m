@class UIDelayedAction, UIView;
@protocol UIScrollViewDelayedTouchesBeganGestureRecognizerClient;

@interface UIScrollViewDelayedTouchesBeganGestureRecognizer : UIGestureRecognizer {
    UIDelayedAction *_touchDelay;
    struct CGPoint { double x; double y; } _startSceneReferenceLocation;
    UIView<UIScrollViewDelayedTouchesBeganGestureRecognizerClient> *_client;
}

+ (BOOL)_shouldDefaultToTouches;

- (void)clearTimer;
- (BOOL)_shouldMakeTimerForDelayedContentTouches:(id)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)_clientView;
- (void)sendTouchesShouldBeginForDelayedTouches:(id)a0;
- (void)_resetGestureRecognizer;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)sendTouchesShouldBeginForTouches:(id)a0 withEvent:(id)a1;
- (void)sendDelayedTouches;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
