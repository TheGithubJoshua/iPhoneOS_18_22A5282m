@class NSArray, NSString, UITapRecognizer;

@interface UITextMultiTapRecognizer : UIGestureRecognizer <UITapRecognizerDelegate> {
    id _target;
    SEL _tapAction;
    UITapRecognizer *_tapRecognizer;
    unsigned long long _tapCount;
    unsigned long long _touchDownCount;
    BOOL _sendTapAction;
}

@property (readonly) unsigned long long tapCount;
@property unsigned long long numberOfTouchesRequired;
@property unsigned long long minimumNumberOfTapsRequired;
@property double maximumTouchDownDuration;
@property double maximumIntervalBetweenTaps;
@property double allowableMovement;
@property BOOL recognizesOnSubsequentTouchDowns;
@property long long requiredButtonMask;
@property (readonly) NSArray *touchesForTap;
@property (readonly) struct CGPoint { double x0; double x1; } location;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_shouldReceiveTouch:(id)a0 withEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (double)_touchSloppinessFactor;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)tapRecognizerRecognizedTap:(id)a0;
- (void)tapRecognizerFailedToRecognizeTap:(id)a0;
- (BOOL)canPreventGestureRecognizer:(id)a0;
- (BOOL)tapIsPossibleForTapRecognizer:(id)a0;
- (void).cxx_destruct;
- (void)resetTapCountForTapRecognizer:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)initWithTarget:(id)a0 tapAction:(SEL)a1;
- (void)onStateUpdate:(id)a0;
- (void)reset;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (BOOL)_allowsEventWithRequiredButtonMask:(id)a0;

@end
