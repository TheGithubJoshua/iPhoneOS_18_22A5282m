@class UITouch, UIDelayedAction;

@interface UIDragRecognizer : UIGestureRecognizer {
    UIDelayedAction *_tooSlow;
}

@property (nonatomic) struct CGPoint { double x; double y; } startPosition;
@property (nonatomic) double startAngle;
@property (retain, nonatomic) UITouch *touch;
@property (retain, nonatomic) UIDelayedAction *ignoreTouch;
@property (nonatomic) BOOL restrictsToAngle;
@property (nonatomic) double angle;
@property (nonatomic) double maximumDeviation;
@property (nonatomic) double minimumDistance;
@property (nonatomic) double quietPeriod;
@property (nonatomic) BOOL canBeginDrag;

+ (BOOL)_shouldDefaultToTouches;

- (void)clearTimer;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)tooSlow:(id)a0;
- (void)_resetGestureRecognizer;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)clearIgnoreTouch;

@end
