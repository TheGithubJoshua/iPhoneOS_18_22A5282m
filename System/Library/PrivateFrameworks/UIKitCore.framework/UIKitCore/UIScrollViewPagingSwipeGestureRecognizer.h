@class UIScrollView, UIDelayedAction;

@interface UIScrollViewPagingSwipeGestureRecognizer : UIGestureRecognizer {
    UIDelayedAction *_swipeFailureDelay;
    struct CGPoint { double x; double y; } _startLocation;
    struct CGPoint { double x; double y; } _lastLocation;
    double _lastTime;
    int _directionalFailureCount;
}

@property (weak, nonatomic) UIScrollView *scrollView;

+ (BOOL)_shouldDefaultToTouches;

- (void)clearTimer;
- (void)enoughTimeElapsed:(id)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)_resetGestureRecognizer;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)_processNewLocation:(struct CGPoint { double x0; double x1; })a0;

@end
