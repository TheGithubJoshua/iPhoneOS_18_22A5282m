@class UIDelayedAction;

@interface _UITouchDownGestureRecognizer : UIGestureRecognizer {
    struct CGPoint { double x; double y; } _locationInView;
    struct CGPoint { double x; double y; } _initialLocationInScreenSpace;
    UIDelayedAction *_activationDelay;
}

@property (nonatomic) double allowableMovement;

- (BOOL)gestureIsStillValid;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (BOOL)locationIsMostlyInsideView:(struct CGPoint { double x0; double x1; })a0;
- (void)activationDelayHandler;
- (void).cxx_destruct;
- (void)cancelActivationDelay;
- (void)recognizeOrFailForCurrentLocation;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
