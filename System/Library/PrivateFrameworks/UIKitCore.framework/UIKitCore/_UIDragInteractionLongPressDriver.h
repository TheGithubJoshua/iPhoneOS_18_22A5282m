@class _UIDragLiftGestureRecognizer, NSString, UIDelayedAction, _UIRelationshipGestureRecognizer;

@interface _UIDragInteractionLongPressDriver : _UIDragInteractionDriver <UIGestureRecognizerDelegate> {
    UIDelayedAction *_gateTimer;
    UIDelayedAction *_cancellationTimer;
}

@property (readonly, nonatomic) _UIDragLiftGestureRecognizer *gestureRecognizerForDragInitiation;
@property (readonly, nonatomic) _UIRelationshipGestureRecognizer *gestureRecognizerForFailureRelationship;
@property (readonly, nonatomic) _UIRelationshipGestureRecognizer *gestureRecognizerForExclusionRelationship;
@property (readonly, nonatomic) unsigned long long behavior;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didTransitionToInactiveState;
- (BOOL)isGestureRecognizerForDragInitiation:(id)a0;
- (void)setLiftDelay:(double)a0;
- (double)translationInWindow;
- (void)setAutomaticallyAddsFailureRelationships:(BOOL)a0;
- (void)didTransitionToDeferred;
- (void)didTransitionToCancelState;
- (void)didTransitionToBeginState;
- (void)setLiftMoveHysteresis:(double)a0;
- (void)didTransitionToPreparing;
- (void)didTransitionToInflightState;
- (void)setAllowedTouchTypes:(id)a0;
- (void)detachFromView:(id)a0;
- (void)attachToView:(id)a0;
- (id)init;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)hasExceededAllowableMovement;
- (void)_gateCompetingGestureRecognizers;
- (void)_gestureRecognizerFailed:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)openCompetingGestureRecognizerGateCancelingGestures:(id)a0;
- (void)invalidateCancellationTimer;
- (void).cxx_destruct;
- (void)_updateLiftMoveHysteresisInDragInitiationGesture;
- (id)initWithBehavior:(unsigned long long)a0;
- (BOOL)canExcludeCompetingGestureRecognizer:(id)a0;
- (BOOL)_wantsTimeDelayedFailureRequirementGate;
- (BOOL)hasMoveHysteresisBeenReached;
- (BOOL)shouldDelayCompetingGestureRecognizer:(id)a0;
- (void)_dragInitiationGestureStateChanged:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)invalidateCompetingGestureRecognizerGateTimer;
- (void)openGateCancelingAddItemsGestures;
- (void)reset;

@end
