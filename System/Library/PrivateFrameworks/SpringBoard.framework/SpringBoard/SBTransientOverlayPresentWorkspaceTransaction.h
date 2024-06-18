@class NSString, SBUIAnimationController;
@protocol BSInvalidatable;

@interface SBTransientOverlayPresentWorkspaceTransaction : SBMainWorkspaceTransaction <SBUIAnimationControllerObserver> {
    SBUIAnimationController *_animation;
    id<BSInvalidatable> _displayLayoutTransitionAssertion;
    id<BSInvalidatable> _eventBufferingAssertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_willInterruptWithReason:(id)a0;
- (id)initWithTransitionRequest:(id)a0;
- (BOOL)_canBeInterrupted;
- (void)_didComplete;
- (void)_willBegin;
- (void)_begin;
- (BOOL)canInterruptForTransitionRequest:(id)a0;
- (void)_logForInterruptAttemptReason:(id)a0;
- (void).cxx_destruct;
- (void)animationControllerDidFinishAnimation:(id)a0;
- (void)_performStandardPresentationAnimated:(BOOL)a0;

@end
