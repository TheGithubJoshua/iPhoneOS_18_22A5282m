@class CKActionMenuGestureVelocitySample;

@interface CKActionMenuGestureRecognizer : UILongPressGestureRecognizer {
    CKActionMenuGestureVelocitySample *_velocitySample;
    CKActionMenuGestureVelocitySample *_previousVelocitySample;
    double _lastTouchTime;
    struct CGPoint { double x; double y; } _lastScreenLocation;
}

+ (id)actionMenuGestureRecognizer;

- (struct CGPoint { double x0; double x1; })velocityInView:(id)a0;
- (void)setAllowableMovement:(double)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)setNumberOfTouchesRequired:(unsigned long long)a0;
- (void)reset;
- (struct CGPoint { double x0; double x1; })_convertVelocitySample:(id)a0 fromScreenCoordinatesToView:(id)a1;

@end
