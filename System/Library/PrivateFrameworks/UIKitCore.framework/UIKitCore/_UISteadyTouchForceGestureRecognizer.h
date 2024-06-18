@class NSDate, _UIVelocityIntegrator, CADisplayLink;

@interface _UISteadyTouchForceGestureRecognizer : UIGestureRecognizer {
    CADisplayLink *_continuousEvaluationDisplayLink;
    _UIVelocityIntegrator *_velocityIntegrator;
    double _currentTouchForce;
    NSDate *_steadyTimestamp;
    BOOL _useOverridingMinimumDuration;
    double _overrideMinimumSteadyTouchForceDuration;
}

@property (nonatomic) double minimumSteadyTouchForceDuration;

- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)_beginForContinuousEvaluationForTouches:(id)a0;
- (void)cancel;
- (void)_updateForContinuousEvaluation:(id)a0;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)setView:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)_endContinuousEvaluation;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)_adjustSteadyForceDurationIfNeeded:(id)a0 event:(id)a1;
- (void)_evaluateTouches:(id)a0;
- (void)_evaluateWithTouchForce:(double)a0;
- (void)recognize;

@end
