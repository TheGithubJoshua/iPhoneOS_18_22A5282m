@class SBBannerGestureRecognizerPriorityAssertion, NSString, NSMutableDictionary, SBBarSwipeAffordanceView, NSMutableArray, UIViewController;
@protocol BNPresentableContext, SBUIPresentableHomeGestureContext;

@interface SBBannerSourceListenerHostedPresentableViewController : BNBannerSourceListenerHostedPresentableViewController <SBBarSwipeAffordanceObserver, SBBannerManagerPresentable, SBUIPresentableLocalHomeGestureParticipant, SBButtonEventsHandler> {
    NSMutableArray *_wantsHomeAffordanceActionsAwaitingResponse;
    SBBannerGestureRecognizerPriorityAssertion *_gestureRecognizerPriorityAssertion;
    NSMutableDictionary *_buttonEventsToActions;
    SBBarSwipeAffordanceView *_barSwipeAffordanceView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long presentableBehavior;
@property (weak, nonatomic) id<BNPresentableContext> presentableContext;
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) long long presentableType;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (weak, nonatomic) id<SBUIPresentableHomeGestureContext> homeGestureContext;

- (void)scene:(id)a0 didReceiveActions:(id)a1;
- (BOOL)handleHeadsetButtonPress:(BOOL)a0;
- (BOOL)handleVoiceCommandButtonPress;
- (BOOL)handleHomeButtonLongPress;
- (BOOL)handleHomeButtonPress;
- (BOOL)handleHomeButtonDoublePress;
- (BOOL)handleLockButtonPress;
- (BOOL)shouldDismissForReason:(id)a0 outReason:(out id *)a1;
- (BOOL)handleVolumeUpButtonPress;
- (BOOL)handleVolumeDownButtonPress;
- (void)presentableWillDisappearAsBanner:(id)a0 withReason:(id)a1;
- (void)presentableWillAppearAsBanner:(id)a0;
- (void).cxx_destruct;
- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (void)dealloc;
- (void)homeGesturePerformedForBarSwipeAffordanceView:(id)a0;
- (void)homeGestureOwnershipDidChange:(BOOL)a0;
- (void)_invalidateAllButtonEventActions;

@end
