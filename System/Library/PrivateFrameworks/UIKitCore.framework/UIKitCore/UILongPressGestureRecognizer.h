@class NSString, NSArray, UIHeldAction, UITapRecognizer, NSMutableSet, UIDelayedAction, UILongPressGestureVelocitySample, NSObservation;

@interface UILongPressGestureRecognizer : UIGestureRecognizer <UITapRecognizerDelegate> {
    NSMutableSet *_activeTouches;
    struct CGPoint { double x; double y; } _startPointScreen;
    struct CGPoint { double x; double y; } _lastCentroidScreen;
    UIHeldAction *_enoughTimeElapsed;
    UIDelayedAction *_tooMuchTimeElapsed;
    UIDelayedAction *_multitouchTimer;
    UITapRecognizer *_imp;
    UILongPressGestureVelocitySample *_velocitySample;
    UILongPressGestureVelocitySample *_previousVelocitySample;
    NSObservation *_touchForceObservation;
    long long _impulseObservations;
    double _currentImpulse;
    double _lastForce;
    double _lastForceTimestamp;
    unsigned char _gotTouchEnd : 1;
    unsigned char _gotTooMany : 1;
    unsigned char _gotEnoughTaps : 1;
    unsigned char _cancelPastAllowableMovement : 1;
    unsigned char _allowsDynamicTouchesList : 1;
    BOOL _requiresQuietImpulseForCurrentTouchSequence;
}

@property (nonatomic) double delay;
@property (retain, nonatomic) NSArray *touches;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } startPoint;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } centroid;
@property (nonatomic) BOOL cancelPastAllowableMovement;
@property (nonatomic, setter=_setButtonType:) long long _buttonType;
@property (nonatomic, setter=_setRequiresQuietImpulse:) BOOL _requiresQuietImpulse;
@property (nonatomic) struct CGPoint { double x; double y; } lastSceneReferenceLocation;
@property (nonatomic) struct CGPoint { double x; double y; } lastUnadjustedSceneReferenceLocation;
@property (nonatomic) double lastTouchTime;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } _centroidScreen;
@property (nonatomic) BOOL _prefersToBeExclusiveWithCompetingLongPressGestureRecognizers;
@property (nonatomic) BOOL _prefersNotToBePreventedByCompetingLongPressGestureRecognizers;
@property (nonatomic, setter=_setShouldAlwaysEnableMultitouchTimerAtTouchesBegin:) BOOL _shouldAlwaysEnableMultitouchTimerAtTouchesBegin;
@property (nonatomic, setter=_setAllowableElapsedTimeForAllRequiredTouches:) double _allowableElapsedTimeForAllRequiredTouches;
@property (nonatomic) unsigned long long numberOfTapsRequired;
@property (nonatomic) unsigned long long numberOfTouchesRequired;
@property (nonatomic) double minimumPressDuration;
@property (nonatomic) double allowableMovement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (struct CGPoint { double x0; double x1; })_convertVelocitySample:(id)a0 fromSceneReferenceCoordinatesToView:(id)a1;
- (struct CGPoint { double x0; double x1; })velocityInView:(id)a0;
- (struct CGPoint { double x0; double x1; })_convertPoint:(struct CGPoint { double x0; double x1; })a0 fromSceneReferenceCoordinatesToView:(id)a1;
- (void)clearTimer;
- (id)initWithCoder:(id)a0;
- (struct CGPoint { double x0; double x1; })_shiftPanLocationToNewSceneReferenceLocation:(struct CGPoint { double x0; double x1; })a0;
- (struct UIOffset { double x0; double x1; })_offsetInViewFromSceneReferenceLocation:(struct CGPoint { double x0; double x1; })a0 toSceneReferenceLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)_centroidMovedTo:(struct CGPoint { double x0; double x1; })a0 atTime:(double)a1 physicalTouch:(id)a2;
- (struct CGPoint { double x0; double x1; })_locationOfTouches:(id)a0;
- (BOOL)_isGestureType:(long long)a0;
- (BOOL)_shouldReceivePress:(id)a0;
- (void)enoughTimeElapsed:(id)a0;
- (struct CGPoint { double x0; double x1; })_centroidInView:(id)a0;
- (struct CGPoint { double x0; double x1; })_adjustSceneReferenceLocation:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })_convertPoint:(struct CGPoint { double x0; double x1; })a0 toSceneReferenceCoordinatesFromView:(id)a1;
- (void)_resetVelocitySamples;
- (void)startTimer;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (double)_touchSloppinessFactor;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (long long)buttonMaskRequired;
- (void)tapRecognizerRecognizedTap:(id)a0;
- (void)tapRecognizerFailedToRecognizeTap:(id)a0;
- (BOOL)canPreventGestureRecognizer:(id)a0;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (unsigned long long)numberOfTouches;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (BOOL)tapIsPossibleForTapRecognizer:(id)a0;
- (void)_appendSubclassDescription:(id)a0;
- (void)_resetGestureRecognizer;
- (void)encodeWithCoder:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)activeTouchesExceedAllowableSeparation;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)setButtonMaskRequired:(long long)a0;
- (struct CGPoint { double x0; double x1; })locationOfTouch:(unsigned long long)a0 inView:(id)a1;
- (void)setView:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)pressesChanged:(id)a0 withEvent:(id)a1;
- (void)tooMuchElapsed:(id)a0;
- (double)_allowableSeparation;
- (double)_allowableTouchTimeSeparation;
- (BOOL)_allowsDynamicTouchesList;
- (void)_changeTouchesListTo:(id)a0;
- (long long)_finalStateForRecognition;
- (BOOL)_impulseQuietEnough;
- (void)_incorporateTouchForceMessageIntoImpulseQuietness:(id)a0;
- (void)_interactionsEndedWithValidTouches:(BOOL)a0;
- (void)_resetImpulseQuietness;
- (void)_setAllowableSeparation:(double)a0;
- (void)_setAllowableTouchTimeSeparation:(double)a0;
- (void)_setAllowsDynamicTouchesList:(BOOL)a0;
- (void)_setTranslation:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (BOOL)_shouldFailInResponseToPresses:(id)a0 withEvent:(id)a1;
- (void)_startMultitouchTimer;
- (struct CGPoint { double x0; double x1; })_startPointInView:(id)a0;
- (void)_startTapFinishedTimer;
- (BOOL)_touchesMayBeRecognizedByForcePreviewingRevealGestureRecognizerWhichShouldDelayTimer:(id)a0;
- (struct CGPoint { double x0; double x1; })_translationInView:(id)a0;

@end
