@class NSString, NSMapTable, NSTimer, _UIKeyboardTextSelectionGestureController, _UITouchesObservingGestureRecognizer, _UIPanOrFlickGestureRecognizer;

@interface _UIKeyboardTextSelectionInteraction : UITextInteraction <_UIPanOrFlickGestureRecognizerDelegate> {
    _UIKeyboardTextSelectionGestureController *_owner;
    NSMapTable *_weakMap;
    id _deallocToken;
    _UITouchesObservingGestureRecognizer *_addedTouchRecognizer;
    NSTimer *_touchPadTimer;
    id /* block */ _touchPadTimerCompletion;
    _UIPanOrFlickGestureRecognizer *_activePress;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)attachToExistingRecogniser:(id)a0 owner:(id)a1 forType:(long long)a2;

- (void)handleRemoteIndirectGestureWithState:(id)a0;
- (void)beginCursorManipulationFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isPlacedCarefully;
- (void)_configureTwoFingerPanGestureRecognizer:(id)a0;
- (void)hideInsideRecogniser:(id)a0;
- (void)_configureOneFingerForcePressRecognizer:(id)a0;
- (void)indirectBlockPanGestureWithState:(long long)a0 withTranslation:(struct CGPoint { double x0; double x1; })a1;
- (double)additionalPressDurationForTypingCadence:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)owner;
- (void)_willBeginIndirectSelectionGesture:(id)a0;
- (void)_logTapCounts:(id)a0;
- (void)updateLongPressWithTranslation:(struct CGPoint { double x0; double x1; })a0 executionContext:(id)a1;
- (void)clearKeyboardTouchesForGesture:(id)a0;
- (void)panningGesture:(id)a0;
- (void)detach;
- (void)cancelTwoFingerPanWithExecutionContext:(id)a0;
- (void)_beginLongForcePressTimerForGesture:(id)a0;
- (void)registerOwner:(id)a0;
- (id)initWithView:(id)a0 owner:(id)a1 forTypes:(long long)a2;
- (void)_prepareForGesture;
- (void)_startTouchPadTimerWithCompletion:(id /* block */)a0;
- (void)_didEndIndirectSelectionGesture:(id)a0;
- (void)_gestureRecognizerFailed:(id)a0;
- (void)_configureTwoFingerTapGestureRecognizer:(id)a0;
- (void)forwardIndirectGestureWithType:(long long)a0 state:(long long)a1 translation:(struct CGPoint { double x0; double x1; })a2 flickDirection:(unsigned long long)a3 touchCount:(unsigned long long)a4;
- (void)beginLongPressWithTranslation:(struct CGPoint { double x0; double x1; })a0 touchCount:(unsigned long long)a1 executionContext:(id)a2;
- (void)_configureLongPressRecognizer:(id)a0;
- (void)indirectCursorPanGestureWithState:(long long)a0 withTranslation:(struct CGPoint { double x0; double x1; })a1 withFlickDirection:(unsigned long long)a2;
- (void)_cancelTouchPadTimer;
- (struct CGPoint { double x0; double x1; })cursorLocationForTranslation:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)_longForcePressDetected:(id)a0;
- (void)_cancelLongForcePressTimer;
- (id)gestures;
- (void).cxx_destruct;
- (id)selectionController;
- (void)panningGestureAddedTouch:(id)a0;
- (void)cancelLongPressWithExecutionContext:(id)a0;
- (struct CGPoint { double x0; double x1; })acceleratedTranslation:(struct CGPoint { double x0; double x1; })a0 velocity:(struct CGPoint { double x0; double x1; })a1 isActive:(BOOL)a2;
- (void)gestureRecognizerShouldBeginResponse:(id)a0;
- (void)indirectPanGestureWithState:(long long)a0 withTranslation:(struct CGPoint { double x0; double x1; })a1 withFlickDirection:(unsigned long long)a2 isShiftKeyBeingHeld:(BOOL)a3;
- (void)beginTwoFingerPanWithTranslation:(struct CGPoint { double x0; double x1; })a0 isShiftKeyBeingHeld:(BOOL)a1 executionContext:(id)a2;
- (void)longPressGestureWithState:(long long)a0 withTranslation:(struct CGPoint { double x0; double x1; })a1 touchCount:(unsigned long long)a2;
- (struct CGPoint { double x0; double x1; })boundedTranslation:(struct CGPoint { double x0; double x1; })a0;
- (void)finishLongPressWithExecutionContext:(id)a0;
- (long long)layoutDirectionFromFlickDirection:(unsigned long long)a0;
- (void)_clearTouchPadCallback;
- (void)disableEnclosingScrollViewScrolling;
- (void)_tidyUpGesture;
- (void)endLongPressWithExecutionContext:(id)a0;
- (void)oneFingerForcePan:(id)a0;
- (void)beginIndirectBlockPanWithTranslation:(struct CGPoint { double x0; double x1; })a0 executionContext:(id)a1;
- (void)_configureLongPressAddedTouchRecognizer:(id)a0;
- (void)endIndirectBlockPanWithExecutionContext:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)_granularityExpandingGestureWithTimeInterval:(double)a0 timeGranularity:(double)a1 isMidPan:(BOOL)a2;
- (void)endTwoFingerPanWithExecutionContext:(id)a0;
- (void)beginTwoFingerCursorPanWithTranslation:(struct CGPoint { double x0; double x1; })a0 executionContext:(id)a1;
- (void)dealloc;
- (void)removeTemporaryGesture;
- (void)handleTwoFingerFlickInDirection:(long long)a0 executionContext:(id)a1;
- (void)updateTwoFingerPanWithTranslation:(struct CGPoint { double x0; double x1; })a0 executionContext:(id)a1;
- (void)oneFingerForcePress:(id)a0;
- (void)_clearHiding;
- (void)hideRecogniser:(id)a0 forKey:(id)a1;
- (void)updateIndirectBlockPanWithTranslation:(struct CGPoint { double x0; double x1; })a0 executionContext:(id)a1;
- (void)twoFingerTap:(id)a0;
- (BOOL)forceTouchGestureRecognizerShouldBegin:(id)a0;

@end
