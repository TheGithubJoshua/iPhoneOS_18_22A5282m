@class NSSet, NSMutableArray, NSMutableSet;
@protocol UITapRecognizerDelegate;

@interface UITapRecognizer : NSObject <NSSecureCoding> {
    NSMutableSet *_activeTouches;
    struct CGPoint { double x; double y; } _location;
    struct CGPoint { double x; double y; } _startPoint;
    struct CGPoint { double x; double y; } _digitizerLocation;
    double _allowableMovement;
    double _allowableSeparation;
    double _maximumSingleTapDuration;
    double _startTime;
    double _maximumIntervalBetweenSuccessiveTaps;
    long long _strongestDirectionalAxis;
    double _strongestDirectionalForce;
    int _currentNumberOfTouches;
    int _currentNumberOfTaps;
    int _numberOfTouchesForCurrentTap;
    unsigned char _timerOn : 1;
    unsigned char _multitouchTimerOn : 1;
    unsigned char _noNewTouches : 1;
    unsigned char _hasPointerTouch : 1;
    BOOL _continuousTapRecognition;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) id<UITapRecognizerDelegate> delegate;
@property (nonatomic) unsigned long long numberOfTapsRequired;
@property (nonatomic) BOOL continuousTapRecognition;
@property (nonatomic) unsigned long long numberOfTouchesRequired;
@property (nonatomic) long long buttonMaskRequired;
@property (nonatomic) double allowableMovement;
@property (nonatomic) double allowableSeparation;
@property (nonatomic) double allowableTouchTimeSeparation;
@property (nonatomic) double maximumSingleTapDuration;
@property (nonatomic) double maximumTapDuration;
@property (nonatomic) double minimumTapDuration;
@property (nonatomic) double maximumIntervalBetweenSuccessiveTaps;
@property (nonatomic) BOOL countsOnlyActiveTouches;
@property (nonatomic) long long exclusiveDirectionalAxis;
@property (readonly, nonatomic) NSMutableArray *touches;
@property (readonly, nonatomic) NSSet *activeTouches;

- (id)initWithCoder:(id)a0;
- (void)_reset;
- (id)init;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (double)_effectiveAllowableMovement;
- (void)startTapTimer:(double)a0;
- (struct CGPoint { double x0; double x1; })_locationInSceneReferenceSpace;
- (struct CGPoint { double x0; double x1; })_digitizerLocation;
- (void)_beginInteraction;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)tooSlow:(id)a0;
- (void)multitouchExpired:(id)a0;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)_interactionEndedTouch:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0 focusSystem:(id)a1;
- (void).cxx_destruct;
- (BOOL)activeTouchesExceedAllowableSeparation;
- (void)clearMultitouchTimer;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)clearTapTimer;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)_updateDigitizerLocationForEvent:(id)a0;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)startMultitouchTimer:(double)a0;
- (void)pressesChanged:(id)a0 withEvent:(id)a1;

@end
