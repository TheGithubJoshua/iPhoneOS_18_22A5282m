@class UIScrollViewPinchGestureRecognizer;

@interface _UIScrollViewMockPinchGestureRecognizer : NSObject {
    double _scale;
    double _velocity;
    long long _state;
}

@property (retain, nonatomic) UIScrollViewPinchGestureRecognizer *gestureRecognizer;
@property (nonatomic) long long state;

- (struct CGPoint { double x0; double x1; })anchorPoint;
- (double)velocity;
- (id)_activeTouchesForEvent:(id)a0;
- (void).cxx_destruct;
- (double)scale;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)simulateScale:(double)a0 velocity:(double)a1;

@end
