@class UIWindow, _UIRevealGestureRecognizer, _UITouchesObservingGestureRecognizer, _UIDeepPressAnalyzer, UIViewController, UIPresentationController, UIView, _UIPreviewGestureRecognizer, UIPreviewInteraction, UIGestureRecognizer, _UIStatesFeedbackGenerator, NSString, UIInteractionProgress, NSArray, UIPanGestureRecognizer;
@protocol UIPreviewInteractionControllerDelegate, UIForceTransitioningDelegate, UIViewControllerPreviewing_Internal, UIForcePresentationController;

@interface UIPreviewInteractionController : NSObject <UIGestureRecognizerDelegate, UIInteractionProgressObserver, _UIForcePresentationControllerDelegate, UIPreviewInteractionDelegate> {
    BOOL _isCommitting;
    BOOL _generatorTurnedOn;
}

@property (nonatomic) struct CGPoint { double x; double y; } location;
@property (weak, nonatomic) UIView *sourceView;
@property (weak, nonatomic) UIViewController *presentingViewController;
@property (retain, nonatomic) UIPreviewInteraction *previewInteraction;
@property (retain, nonatomic) UIInteractionProgress *interactionProgressForCommit;
@property (retain, nonatomic) _UIRevealGestureRecognizer *revealGestureRecognizer;
@property (retain, nonatomic) _UIPreviewGestureRecognizer *previewGestureRecognizer;
@property (retain, nonatomic) UIPanGestureRecognizer *modalPanGestureRecognizer;
@property (retain, nonatomic) _UITouchesObservingGestureRecognizer *touchObservingGestureRecognizer;
@property (retain, nonatomic) _UIDeepPressAnalyzer *deepPressAnalyzer;
@property (retain, nonatomic) UIViewController *currentPreviewViewController;
@property (retain, nonatomic) UIPresentationController<UIForcePresentationController> *currentPresentationController;
@property (retain, nonatomic) id<UIForceTransitioningDelegate> currentTransitionDelegate;
@property (retain, nonatomic) UIWindow *windowForPreviewPresentation;
@property (nonatomic) BOOL statusBarWasHidden;
@property (retain, nonatomic) id currentCommitTransition;
@property (nonatomic) BOOL didSendDelegateWillDismissViewController;
@property (weak, nonatomic) id<UIViewControllerPreviewing_Internal> previewingContext;
@property (retain, nonatomic) _UIStatesFeedbackGenerator *feedbackGenerator;
@property (retain, nonatomic) UIInteractionProgress *interactionProgressForPresentation;
@property (readonly, nonatomic) UIGestureRecognizer *presentationGestureRecognizer;
@property (readonly, nonatomic) UIGestureRecognizer *beginPreviewGestureRecognizer;
@property (weak, nonatomic) id<UIPreviewInteractionControllerDelegate> delegate;
@property (readonly, nonatomic) NSArray *gestureRecognizers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)gestureRecognizers;
- (void)_setStatusBarHidden:(BOOL)a0;
- (id)initWithView:(id)a0;
- (void)interactionProgressDidUpdate:(id)a0;
- (void)interactionProgress:(id)a0 didEnd:(BOOL)a1;
- (void)_gestureRecognizerFailed:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)dealloc;
- (void)_activateFeedback;
- (void)_activateFeedbackIfNeeded;
- (void)_configureCommitInteractionProgressForView:(id)a0;
- (void)_deactivateFeedbackIfNeeded;
- (void)_finalizeInteractivePreview;
- (void)_handleRevealGesture:(id)a0;
- (void)_handleTouchObservingGesture:(id)a0;
- (void)_previewPresentationControllerDidScheduleDismiss;
- (BOOL)_previewingIsPossibleForView:(id)a0;
- (void)_resetCustomPresentationHooks;
- (void)_setCalloutBarHidden:(BOOL)a0;
- (id)_transitionDelegateForPreviewViewController:(id)a0 atPosition:(struct CGPoint { double x0; double x1; })a1 inView:(id)a2;
- (void)_turnOffFeedbackGenerator;
- (void)_turnOnFeedbackGenerator;
- (BOOL)_usesPreviewInteraction;
- (BOOL)_usesPreviewPresentationController;
- (BOOL)_viewControllerIsChildOfExpandedSplitViewController:(id)a0;
- (void)cancelInteractivePreview;
- (void)commitInteractivePreview;
- (BOOL)configureRevealTransformSourceViewSnapshotSuppressionFromLocation:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (void)configureRevealTransformWithInteractionProgress:(id)a0 forLocation:(struct CGPoint { double x0; double x1; })a1 inView:(id)a2 containerView:(id)a3;
- (void)forcePresentationController:(id)a0 didSelectMenuItem:(id)a1;
- (void)forcePresentationControllerDidDismiss:(id)a0;
- (void)forcePresentationControllerWantsToCommit:(id)a0;
- (void)forcePresentationControllerWillDismiss:(id)a0;
- (void)forcePresentationTransitionWillBegin:(id)a0;
- (void)initGestureRecognizers;
- (void)previewInteraction:(id)a0 didUpdateCommitTransition:(double)a1 ended:(BOOL)a2;
- (void)previewInteraction:(id)a0 didUpdatePreviewTransition:(double)a1 ended:(BOOL)a2;
- (void)previewInteractionDidCancel:(id)a0;
- (BOOL)previewInteractionShouldBegin:(id)a0;
- (BOOL)startInteractivePreviewAtLocation:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (BOOL)startInteractivePreviewWithGestureRecognizer:(id)a0;

@end
