@class SBHomeGestureInteraction, NSString, SBSystemGestureManager, SBKeyboardHomeAffordanceAssertion, NSHashTable, SBHomeGrabberView, SBFBarSwipeBehavior;
@protocol SBHomeGrabberPointerClickDelegate, SBBarSwipeAffordanceDelegate;

@interface SBBarSwipeAffordanceView : UIView <UIGestureRecognizerDelegate, SBHomeGrabberDelegate, SBSystemGestureRecognizerDelegate, SBHomeGestureInteractionDelegate, SBHomeGesturePanGestureRecognizerInterfaceDelegate, SBFBarSwipeBehaviorDelegate> {
    NSHashTable *_observers;
    SBFBarSwipeBehavior *_barSwipeBehavior;
    SBHomeGestureInteraction *_homeGestureInteraction;
    SBSystemGestureManager *_gestureManager;
}

@property (readonly, nonatomic) SBHomeGrabberView *grabberView;
@property (nonatomic) long long feedbackType;
@property (weak, nonatomic) id<SBBarSwipeAffordanceDelegate> delegate;
@property (weak, nonatomic) id<SBHomeGrabberPointerClickDelegate> pointerClickDelegate;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic) long long colorBias;
@property (nonatomic) BOOL ignoresLuminance;
@property (nonatomic, getter=isHomeAffordanceHidden) BOOL homeAffordanceHidden;
@property (retain, nonatomic) SBKeyboardHomeAffordanceAssertion *keyboardHomeAffordanceAssertion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)homeGestureInteractionChanged:(id)a0;
- (void)homeGestureInteractionEnded:(id)a0;
- (long long)touchInterfaceOrientationForGestureRecognizer:(id)a0;
- (id)viewForSystemGestureRecognizer:(id)a0;
- (void)homeGestureInteractionCancelled:(id)a0;
- (unsigned long long)homeGestureInteraction:(id)a0 systemGestureTypeForType:(long long)a1;
- (void)_deactivate;
- (long long)_effectiveOrientationAccountingForTransforms;
- (void)removeObserver:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 systemGestureManager:(id)a1 enableGestures:(BOOL)a2;
- (long long)colorBias;
- (void)barSwipeBehavior:(id)a0 didUpdateAdditionalEdgeSpacing:(double)a1;
- (id)_hideHomeAffordanceAnimationSettings;
- (BOOL)shouldAllowThinStyleForHomeGrabberView:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (BOOL)isTrackingHomeGestureOfType:(long long)a0;
- (id)customScreenEdgePanGestureRecognizerForHomeGestureInteraction:(id)a0;
- (void)didAddSubview:(id)a0;
- (id)_unhideHomeAffordanceAnimationSettings;
- (void)_updateHomeAffordanceVisibility;
- (BOOL)shouldAllowAutoHideForHomeGrabberView:(id)a0;
- (void)homeGestureInteractionBegan:(id)a0;
- (double)additionalEdgeSpacingForHomeGrabberView:(id)a0;
- (void)_runBlockOnObservers:(id /* block */)a0;
- (void)layoutSubviews;
- (void)addObserver:(id)a0;
- (void)setColorBias:(long long)a0;
- (void)barSwipeBehaviorActionPerformed:(id)a0;
- (void)_activate;

@end
