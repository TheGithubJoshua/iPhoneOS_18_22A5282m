@class NSString, NCNotificationListView, UIPinchGestureRecognizer, UIPanGestureRecognizer, UIImpactFeedbackGenerator;
@protocol NCNotificationListInteractiveTransitionCoordinatorDelegate;

@interface NCNotificationListInteractiveTransitionCoordinator : NSObject <UIGestureRecognizerDelegate>

@property (weak, nonatomic) NCNotificationListView *parentListView;
@property (weak, nonatomic) NCNotificationListView *interactiveListView;
@property (weak, nonatomic) NCNotificationListView *revealListView;
@property (retain, nonatomic) UIPinchGestureRecognizer *interactiveTransitionPinchGestureRecognizer;
@property (retain, nonatomic) UIPanGestureRecognizer *interactiveTransitionPanGestureRecognizer;
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator;
@property (nonatomic, getter=isHapticPrepared) BOOL hapticPrepared;
@property (nonatomic) BOOL shouldPerformInteractiveExpandTransition;
@property (nonatomic) BOOL shouldPerformInteractiveCollapseTransition;
@property (weak, nonatomic) id<NCNotificationListInteractiveTransitionCoordinatorDelegate> delegate;
@property (nonatomic) unsigned long long currentListDisplayStyleSetting;
@property (readonly, nonatomic, getter=isPerformingExclusiveScrollInteractiveTranslation) BOOL performingExclusiveScrollInteractiveTranslation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_gestureRecognizerDidRecognize:(id)a0;
- (id)_stringForReason:(long long)a0;
- (BOOL)_isScrollingListContent;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithParentListView:(id)a0 interactiveListView:(id)a1 revealListView:(id)a2;
- (void)_prepareHapticForListDisplayStyleTransition;
- (void)_migrateProminentNotificationsForHiddenSetting;
- (void)_performHapticForListDisplayStyleTransition;
- (BOOL)_isCurrentDigestVisible;
- (double)_interactionTranslationPercentageForGestureRecognizer:(id)a0;
- (void)_releaseHapticForListDisplayStyleTransition;
- (double)_interactionTranslationVelocityForGestureRecognizer:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)_countForInteractiveListView;
- (double)_interactionTranslationFocalPointYForGestureRecognizer:(id)a0;
- (void)interactiveTranslationDidEnd;
- (unsigned long long)_indexForInteractiveListView;
- (BOOL)_shouldAllowExpandInteractiveTranslation;
- (void)_updateListDisplayStyleSetting:(unsigned long long)a0 isPersistentSetting:(BOOL)a1 hideRevealedList:(BOOL)a2;
- (void)interactiveTranslationWillBegin;
- (void)_updateNotificationListForInteractionTranslationPercentage:(double)a0 interactionTranslationVelocity:(double)a1 interactionTranslationFocalPointY:(double)a2 isPersistentSetting:(BOOL)a3 isIntentionalInteraction:(BOOL)a4 forReason:(long long)a5;
- (double)_bottomPositionForInteractiveListView;
- (long long)_interactionTranslationReasonForGestureRecognizer:(id)a0;
- (BOOL)_isPersistentSettingTransitionForGestureRecognizer:(id)a0;
- (void)updateScrollInteractiveTranslation;
- (BOOL)_isHiddenListRevealed;

@end
