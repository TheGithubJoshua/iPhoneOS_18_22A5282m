@class SBAppSuggestionManager, NSString, SBSwitcherAppSuggestionViewController;

@interface SBDeckSwitcherViewController : SBFluidSwitcherViewController <SBSwitcherAppSuggestionViewControllerDelegate>

@property (retain, nonatomic) SBSwitcherAppSuggestionViewController *appSuggestionController;
@property (weak, nonatomic) SBAppSuggestionManager *appSuggestionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)bestAppSuggestion;
- (void)performTransitionWithContext:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)viewWillLayoutSubviews;
- (void)suggestionViewController:(id)a0 activatedSuggestion:(id)a1;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidEndWithTransitionContext:(id)a1;
- (id)_assertionReason;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidBeginWithTransitionContext:(id)a1;
- (long long)orientationForSuggestionViewController:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)setBestAppSuggestion:(id)a0;
- (void)_setBestAppSuggestion:(id)a0 animationCompletion:(id /* block */)a1;
- (void)handleFluidSwitcherGestureManager:(id)a0 didBeginGesture:(id)a1;
- (id)initWithSwitcherController:(id)a0 rootModifier:(id)a1 liveContentOverlayCoordinator:(id)a2 delegate:(id)a3 dataSource:(id)a4 shouldObserveChamoisWindowingChanges:(BOOL)a5 debugName:(id)a6;

@end
